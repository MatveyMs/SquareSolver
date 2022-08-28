#ifndef SQUARE_HPP
#define SQUARE_HPP

const int SS_INF_ROOTS = 3;
const double eps = 1e-7;

/*!

    @brief Comparison double type with zero
    @details This function compares double number with zero
    @param [in] num {double number that will be compared with zero}
    @return Boolean value
*/
int ZeroDouble(double num);

/**
    @brief Solving a linear equation
    @details This function solving a linear equation

    @param [in] a {coefficient a equation}
    @param [in] b {coefficient b equation}
    @param [in] c {coefficient c equation}
    @param [out] x1 {root of the solution}

    @return Number of solutions
*/
int LinSolve(double b, double c, double* x1);

/**
    @brief Solving a square equation
    @details This function solving a linear equation

    @param [in] a {coefficient a equation}
    @param [in] b {coefficient b equation}
    @param [in] c {coefficient c equation}
    @param [out] x1 {root of the first solution}
    @param [out] x2 {root of the second solution}

    @return Number of solutions
*/
int SquareSolve(double a, double b, double c, double* x1, double* x2);

/**
    @brief Input function
    @details This function accepts the input of coefficients

    @param [in,out] a {coefficient a equation}
    @param [in,out] b {coefficient b equation}
    @param [in,out] c {coefficient c equation} 

    @return succesfull or unsuccesfull input  
*/
bool Input(double* a, double* b, double* c);


/**
    @brief Output function fgfhgfhgf
    @details This function displays the roots of the equation

    @param [in] x1 {first root}
    @param [in] x2 {second root}
    @param [in] NumberOfSolutions {number of solutions}   
*/
void Output(double x1, double x2, int NumberOfSolutions);

#endif // SQUARE_HPP