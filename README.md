# RW Drupal configuration documentation

The recycling system backend is a Drupal Commerce installation. This 
repository will, soon, contain the details of the setup & configuration.

This now contains a preliminary site installation profile and drush makefile to 
prepare a suitable Drupal site.

## Requirements

* Apache
* PostgreSQL (or MySQL if you so prefer)
* php
* drush

## Prepare site profile

* make rw

## Prepare PostgreSQL database

* createuser --pwprompt --encrypted --no-createrole --no-createdb rwdrupal

Give a suitable password at the prompt.

* createdb --encoding=UTF8 --owner=rwdrupal rwdrupal

## Create site

* make pgsql-site DB=rwdrupal DBUSER=rwdrupal DBPASS=(what-you-set)

# Configuration

For now manual configuration is required. To be fixed.

## Services configuration

See services-configuration-export.txt


