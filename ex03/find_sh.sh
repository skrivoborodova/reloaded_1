#!/bin/bash
find . -name '*.sh' -print | cut -d"/" -f2 | cut -d"." -f1
