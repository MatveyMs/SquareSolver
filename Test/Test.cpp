#include "../square.hpp"
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Test.hpp"

int Test (double a, double b, double c, int NRoots)
{
    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    double x1 = 0, x2 = 0;
    int NumOfRoots = SquareSolve(a, b, c, &x1, &x2);

     switch (NumOfRoots)
    {
        case 0:
            if (NumOfRoots == NRoots) return 1;
        case 1:
            if (NumOfRoots == NRoots && IsSquareSolution(a, b, c, x1) ) return 1;
        case 2:
            if (NumOfRoots == NRoots && IsSquareSolution(a, b, c, x1) && IsSquareSolution(a, b, c, x2)) return 1;
        case SS_INF_ROOTS:
            if (NumOfRoots == NRoots) return 1;
        default:
            return 0;
    }

}

int IsSquareSolution (double a, double b, double c, double x)
{
    return (ZeroDouble((a*x*x + b*x + c)));
}