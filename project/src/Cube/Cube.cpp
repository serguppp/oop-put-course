#include "Cube.h"

Cube::Cube() : generator(std::random_device{}()), distribution(1, 6) {}

int Cube::Roll() { return distribution(generator); }
