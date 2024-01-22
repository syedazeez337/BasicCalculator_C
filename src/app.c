#include "app.h"


void welcomeMsg()
{
    printf("\n\t***************************************************\n");
    printf("\t**     Calculator Programme                        **\n");
    printf("\t** Format: number operator number                  **\n");
    printf("\t** Operations: + for Addition                      **\n");
    printf("\t**             - for Subtraction                   **\n");
    printf("\t**             * for Multiplication                **\n");
    printf("\t**             / for division                      **\n");
    printf("\t**             @ for exponential                  **\n");
    printf("\t** Example : for addition 3 + 4                    **\n");
    printf("\t**           for power 4 @ 2                       **\n");
    printf("\n\n");
}

// add function
double add(double x, double y)
{
    double result = x + y;
    return result;
}

// sub function
double sub(double x, double y)
{
    double result = x - y;
    return result;
}

// multiplication function
double mul(double x, double y)
{
    double result = x * y;
    return result;
}

// division function
double div(double x, double y)
{
    if(y == 0)
    {
        printf("Div with Zero not defined.\n");
    }
    
    double result = x / y;
    return result;
}

// power function
double pow(double x, double y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        return x * pow(x , y-1);
    }
}
