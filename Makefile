all: rw rw-profile

rw: rw.info rw.make
	drush make rw.make rw

rw-profile: rw/profiles/rw/rw.info

rw/profiles/rw/rw.info: rw.info rw.install rw.profile
	mkdir -p rw/profiles/rw
	cp rw.info rw/profiles/rw/
	cp rw.install rw/profiles/rw/
	cp rw.profile rw/profiles/rw/

test-site:

clean:
	rm -r rw
