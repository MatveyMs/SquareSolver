#include <stdio.h>
#include <stdlib.h>
#include "square.hpp"

int main()
{
    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0;
    int NumberOfSolutions = 0;

    if (!Input(&a, &b, &c)) {
        printf ("Error input");
        return 1;
    }
    NumberOfSolutions = SquareSolve (a, b, c, &x1, &x2);
    Output(x1, x2, NumberOfSolutions);

    return 0;
}

