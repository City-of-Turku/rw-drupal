# RW Drupal configuration documentation

The recycling system backend is a Drupal Commerce installation. This 
repository will, soon, contain the details of the setup & configuration.

This now contains a preliminary site installation profile and drush makefile to 
prepare a suitable Drupal site.

# Requirements

* php
* drush

# Prepare site profile

* make

# Prepare PostgreSQL database

* createuser --pwprompt --encrypted --no-createrole --no-createdb rwdrupal
* createdb --encoding=UTF8 --owner=rwdrupal rwdrupal

# Create site

* make pgsql-site

# Services configuration

See services-configuration-export.txt
