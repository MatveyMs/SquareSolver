#include <stdio.h>
#include <assert.h>
#include <TXLib.h>
#include "Test.hpp"

int main ()
{
    double a = 0, b = 0, c = 0;
    int NumOfRoots = 0, i = 0, j = 0;
    
    FILE* fp = fopen("Tests.txt", "r");
    if (fp == NULL)
    {
        printf("No such file\n");
        return 1;
    }

    while(fscanf(fp,"%lf %lf %lf %d\n", &a, &b, &c, &NumOfRoots) != EOF)
    {
        i += Test(a, b, c, NumOfRoots);
        j += 1;
    }

    fclose(fp);

    printf("Succesful tests: %d\nAll tests: %d\n", i, j);

    return 0;
}