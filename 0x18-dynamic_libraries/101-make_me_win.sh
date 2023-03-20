#!/bin/bash
wget -P /tmp https://github.com/godfrey-creat/alx-low_level_programming/raw/main/0x18-dynamic_libraries/putshack.o
export LD_PRELOAD=/tmp/putshack.o
