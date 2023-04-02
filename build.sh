#!/bin/bash

if [[ $# -eq 0 ]]; then
  echo "Usage: ./build.sh [-a|--all|-m]"
  exit 1
fi

current_dir=$(pwd)
cd "$(dirname "$0")"

if [[ $1 = "-a" || $1 = "--all" ]]; then
  echo "Deleting existing build directory"
  rm -rf ./build
  echo "Creating new build directory"
  mkdir build
  cd build
  echo "Running cmake"
  cmake ..
  make
fi
if [[ $1 = "-m" ]]; then
  cd build
  make
fi

cd "$current_dir"