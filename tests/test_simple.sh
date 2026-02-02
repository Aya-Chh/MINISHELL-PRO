#!/bin/bash
echo "Test MiniShell-Pro"
./MiniShell-Pro << EOF
echo Hello World
pwd
exit
EOF
