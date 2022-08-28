#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "square.hpp"

int LinSolve (double b, double c, double* x1)
{
    assert(x1 != NULL);
    assert(isfinite(b));
    assert(isfinite(c));

    if (ZeroDouble(b))
    {
        if (ZeroDouble(c))
        {
            return SS_INF_ROOTS;
        }
        else
        {
            return 0;
        }
    }

    *x1 = -c / b;
    return 1;
}

int SquareSolve(double a, double b, double c, double* x1, double* x2)
{
    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    if (ZeroDouble(a))
    {
        return LinSolve(b, c, x1);
    }

    double discr = b*b - 4*a*c;

    if (ZeroDouble(discr))
    {
        *x1 = (-b) / (2*a);
        return 1;
    }

    if (discr < 0)
    {
        return 0;
    }

    double SqDiscr = sqrt(discr);
    *x1 = (-b + SqDiscr) / (2*a);
    *x2 = (-b - SqDiscr) / (2*a);
    return 2;
}

bool Input(double* a, double* b, double* c)
{
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);

    printf("Enter a,b,c: ");

    return scanf("%lf %lf %lf", a, b, c) == 3;
}

void Output(double x1, double x2, int NumberOfSolutions)
{
    assert(isfinite(x1));
    assert(isfinite(x2));
    assert(isfinite(NumberOfSolutions));

    switch (NumberOfSolutions)
    {
        case 0:
            printf("No solutions.");
            break;
        case 1:
            printf("One solution %lf.", x1);
            break;
        case 2:
            printf("Two solutions: %lf, %lf.", x1, x2);
            break;
        case SS_INF_ROOTS:
            printf("Infinite solution.");
            break;
    }
}

int ZeroDouble(double num)
{
    assert(isfinite(num));

    return fabs(num) < eps;
}

