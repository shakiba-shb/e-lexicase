
#include "interaction_networks.hpp"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

PYBIND11_MODULE(lexicase, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    //m.def("LexicaseFitness", &LexicaseFitness<emp::vector<double>>, "The lexicase function");
    m.def("LexicaseFitness", [](emp::vector<emp::vector<double>> pop, double epsilon){return LexicaseFitness(pop, epsilon);}, "The lexicase function");
}