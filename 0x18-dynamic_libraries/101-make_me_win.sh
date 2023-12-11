#!/bin/bash
cp libgiga.so /tmp/libgiga.so
LD_PRELOAD=/tmp/libgiga.so ./gm 9 8 10 24 75 9
