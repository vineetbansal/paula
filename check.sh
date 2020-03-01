#!/bin/bash

pip uninstall -y paula

rm -rf dist build
rm -rf src/paula/celia/build/*

cmake -Ssrc/paula/celia -Bsrc/paula/celia/build
cmake --build src/paula/celia/build

python setup.py install
pytest tests

pip uninstall -y paula

