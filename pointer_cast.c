#include <stdlib.h>
#include <stdio.h>
#include <assert.h>



int main () {
    int* a = (int*) malloc(sizeof(int));
    assert(a != NULL);
     // Defensive programming

    *a = 1145258561; 
    // a is an integer pointer 
    printf("Value of mem loc pointed by a = %d\n", *a);
    // Now we casted it and turned it into a character pointer(cast from INT* to CHAR*)
    char*pc = (char*) a;
    for(unsigned int i = 0; i < sizeof(int); ++i) {
        printf("%c",*pc++);

        int a = 100;
      // ++a means a = a +1
        int b = ++a;// ++a then b = a 
        int c = a++;// c = a; ++a
        printf("\n a = %d\t b = %d\t c = %d\n", a,b,c);
    }


    printf("\n");
    return 0;
}