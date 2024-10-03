#include <stdio.h>
#include <assert.h>

double celsius_to_farenheit = 9.0/5.0;
//double celsius_to_farenheit = 9/5; // Implicit conversion

double foo(double a) {
    // double temperature = a; local to foo

    // Double
    double temperature = 98.4;
    printf("Outside temperature  = %f\n", temperature);
}




int main () {

    foo(1.0);
    
    printf("\n");
    return 0;
}