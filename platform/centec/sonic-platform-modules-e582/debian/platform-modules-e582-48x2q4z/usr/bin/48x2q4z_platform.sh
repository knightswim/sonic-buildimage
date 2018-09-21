#!/bin/bash

#platform init script for centec e582-48x2q4z

if [ "$1" == "init" ]; then
    depmod -a
    modprobe dal
elif [ "$1" == "deinit" ]; then
    modprobe -r dal
else
     echo "e582-48x2q4z_platform : Invalid option !"
fi
