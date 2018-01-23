DB=rwdrupal
DBUSER=rwdrupal
DBPASS=rwdrupal123
DBHOST=localhost
SITE_EMAIL="example@example"

all: rw rw-profile

rw: rw.info rw.make
	drush make rw.make rw

rw-profile: rw/profiles/rw/rw.info

rw/profiles/rw/rw.info: rw.info rw.install rw.profile
	mkdir -p rw/profiles/rw
	cp rw.info rw/profiles/rw/
	cp rw.install rw/profiles/rw/
	cp rw.profile rw/profiles/rw/

pgsql-site: rw-profile
	cd rw && drush si rw --db-url=pgsql://$(DBUSER):$(DBPASS)@localhost/$(DB)

mysql-site: rw-profile
	cd rw && drush si rw --db-url=mysql://$(DBUSER):$(DBPASS)@localhost/$(DB)

sqlite-site: rw-profile
	cd rw && drush si rw --db-url=sqlite://sites/default/test.ht.sqlite

mrproper:
	@echo "*** This will destroy your site! Remorse timer is 5 seconds..."
	@sleep 5
	chmod -R a+rw rw
	rm -r rw

