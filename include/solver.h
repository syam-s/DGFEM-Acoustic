#include <configParser.h>
#include <Mesh.h>

#ifndef DGALERKIN_SOLVER_H
#define DGALERKIN_SOLVER_H

namespace solver {

    void dtfu(Mesh &mesh, Config config, std::vector<double> &u, std::vector<double> &a, double beta, int N);
    void solveTimeIntegration(Mesh &mesh, Config config);
}

#endif