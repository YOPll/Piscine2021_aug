#!/bin/sh
find . -type f -iname "*.sh" | rev | cut -c4-  | cut -d '/' -f1 | rev

