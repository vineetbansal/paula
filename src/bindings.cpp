#include <pybind11/pybind11.h>
#include "paula/celia/include/hello.h"

int add(int i, int j) {
    return i + j;
}

namespace py = pybind11;

PYBIND11_MODULE(ext, m) {
    m.attr("__name__") = "paula.ext";
    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");

    py::class_<Hello>(m, "Hello")
    .def(py::init<>())
    .def("greet", &Hello::greet);

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}
