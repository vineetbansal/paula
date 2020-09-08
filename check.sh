#!/bin/bash

sudo apt-get install libeigen3-dev
sudo ln -s /usr/include/eigen3/Eigen /usr/include/Eigen

pip uninstall -y paula

rm -rf dist build

python setup.py install
pytest tests

pip uninstall -y paula

