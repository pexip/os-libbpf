#!/bin/bash

set -e

WDIR=`mktemp -d`
cp debian/tests/* ${WDIR}/.
cd $WDIR
gcc libbpf-test.c -l bpf -o libbpf-test
./libbpf-test
