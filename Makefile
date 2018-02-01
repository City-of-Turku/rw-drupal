DB:=rwdrupal
DBUSER:=rwdrupal
DBPASS:=rwdrupal123
DBHOST:=localhost
DBURL:=$(DBUSER):$(DBPASS)@localhost/$(DB)

SITE_EMAIL?=""
SITE_PASS?=DummyPassword123
SITE_NAME?="ResurssiviisasKaupunki"
SITE_ARGS:=--site-name=$(SITE_NAME) --account-mail=$(SITE_EMAIL) --account-name=root --account-pass=$(SITE_PASS)

all: rw rw-profile rw/sites/default/files

rw: rw.info rw.make
	drush make rw.make rw

rw-profile: rw/profiles/rw/rw.info

rw/profiles/rw/rw.info: rw.info rw.install rw.profile
	mkdir -p rw/profiles/rw
	cp rw.info rw/profiles/rw/
	cp rw.install rw/profiles/rw/
	cp rw.profile rw/profiles/rw/

rw/sites/default/files:
	mkdir -p rw/sites/default/files
	chmod a+rw rw/sites/default/files

default-files: rw/sites/default/files

pgsql-site: rw-profile default-files
	cd rw && drush si rw --db-url=pgsql://$(DBURL) $(SITE_ARGS)

mysql-site: rw-profile default-files
	cd rw && drush si rw --db-url=mysql://$(DBURL) $(SITE_ARGS)

sqlite-site: rw-profile default-files
	cd rw && drush si rw --db-url=sqlite://sites/default/test.ht.sqlite

mrproper:
	@echo "*** This will destroy your site! Remorse timer is 5 seconds..."
	@sleep 5
	chmod -R a+rw rw
	rm -r rw

