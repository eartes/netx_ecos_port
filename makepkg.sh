#!/bin/sh

VERSION=current

tar cf netx_bsp-$VERSION.tar pkgadd.db devs hal
gzip -9 netx_bsp-$VERSION.tar
mv netx_bsp-$VERSION.tar.gz netx_bsp-$VERSION.epk

