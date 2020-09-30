![CI](https://github.com/vineetbansal/paula/workflows/CI/badge.svg)
[![codecov](https://codecov.io/gh/vineetbansal/paula/branch/master/graph/badge.svg)](https://codecov.io/gh/vineetbansal/paula)


# paula

This is a sample python package meant as a boilerplate project leveraging C++/CMake for python extensions through
Pybind11, while exercising commonly applicable testing/CI practices.

I'll try to keep this updated as CIs evolve and try to improve things (but end up breaking them instead), but no
guarantees. If the badges you see here are green, then things are probably still working.

View the [documentation](https://vineetbansal.github.io/paula/).

### Installation

You need the `Eigen` library and headers to compile and install `paula`. On Debian systems, this amounts to:
```
sudo apt-get -y install libeigen3-dev
sudo ln -s /usr/include/eigen3/Eigen /usr/include/Eigen
```

The second command is a workaround for a recent error I started seeing in `pybind11` (https://github.com/opencv/opencv/issues/14868) and may eventually be not needed.

#### Anaconda
```
conda env create -f environment.yml
conda activate paula
pip install -e .
```

#### VirtualEnv
```
python -m venv env
source env/bin/activate
pip install -e .
```

### Does it work?
To successfully test the `OMP` portion of the code, set the envvar `OMP_NUM_THREADS` to `12`.
```
OMP_NUM_THREADS=12 tox
```

### What's happening here?

`paula` is a simple Python package that has a single function `hello()`. All the rest of the functionality
is in the `paula.ext` submodule (as a sub-folder `celia`), which wraps a C++ shared library.
In the `celia` sub-folder (look for `bindings.cpp` if you want to know what's exposed to Python), you'll find a
simple `add` function, an example of manipulating a numpy array, an OpenMP function.
