#include<stdio.h>
#include<stdlib.h>

#define MAX_VALUE 1000

struct value {
    char _array[MAX_VALUE];
};
// return by value 
struct value create_value() {
    struct value new_value;
    return new_value;
};

 //returning a pointer by reference 
 // we are responsible for doing free to clean it up
 /*
struct value* create_value() {
    struct value* new_value =(struct value*) malloc(sizeof(struct value));
    return new_value;
};
*/

int main (int argc, char* argv[]) {
    if(argc != 2) {
        printf("usage:./return_value<size of loop>\n\n");
        return -1;
    }
    struct value v;
    for (unsigned int i = 0; i < atoi(argv[1]); ++i)
        v = create_value();

    return 0;
}