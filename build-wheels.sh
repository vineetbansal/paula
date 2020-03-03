#!/bin/bash
set -e -x

pys=(/opt/python/cp37-*/bin)

for PYBIN in "${pys[@]}"; do
    export PATH="${PYBIN}:$PATH"
    "${PYBIN}/pip" install -r /io/requirements.txt
    "${PYBIN}/cmake" -B/io/src/paula/celia/build -S/io/src/paula/celia
    "${PYBIN}/cmake" --build /io/src/paula/celia/build
    "${PYBIN}/pip" wheel /io/ -w wheelhouse/
done

for whl in wheelhouse/paula-*.whl; do
    auditwheel repair "$whl" -w /io/wheelhouse/
done
