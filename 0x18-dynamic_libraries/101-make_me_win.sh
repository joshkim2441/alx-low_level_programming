#!/bin/bash
wget -P .. https://raw.githubusercontent.com/joshkim2441/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libhax.so
export LD_PRELOAD="$PWD/../libhax.so"
