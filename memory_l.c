// cretae a student database record
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_RECORDS 4

// We need the gwid and name
struct student {
    unsigned int _gwid;
    //this create a fixed size array 
    //char _name[128] ;
    // instead of a fixed array we need a dynamically allocated name. And we do that using star which is a pointer
    char* _name;
    // save the name as a character since it is a string
};


// Interface for creating student record
struct student* create_student_records(unsigned int gwid, char* name){
    struct student* new_student = (struct student*) malloc(sizeof(struct student));
    new_student->_gwid = gwid;
    new_student->_name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    strcpy(new_student->_name, name);
    
    return new_student;
}


void delete_student_record (struct student_records* s) {
    // We free the memory in s 
    free(s->_name);
}

int main() 
{
    struct student new_student1 = create_student_records( 1111111, "xxxxxxxx");
    /*
    struct student new_student;
    new_student._gwid = 123456;
    // new_student._name = "asgfwhg";
     // derefrencing *(new_student._name) = "asgfwhg";
    // doing it for _name for a single struct 
    new_student._name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    // makes a string copy which will get printed into the _name memory location
    strcpy(new_student._name, "asgfwhg");

    // a way to track student records
    //struct student student_records[4];
    // An array of pointers to a structs(with pointers)
    struct student* student_records[4];
    student_records[0] = (struct student*) malloc( sizeof(struct student));
    student_records[0]->_gwid = 123456;
    student_records[0]->_name = (char*) malloc( sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[0]->_name, "abc");

     student_records[1] = (struct student*) malloc( sizeof(struct student));
    student_records[1]->_gwid = 123456;
    student_records[1]->_name = (char*) malloc( sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[1]->_name, "abc");

     student_records[2] = (struct student*) malloc( sizeof(struct student));
    student_records[2]->_gwid = 123456;
    student_records[2]->_name = (char*) malloc( sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[2]->_name, "abc");

     student_records[3] = (struct student*) malloc( sizeof(struct student));
    student_records[3]->_gwid = 123456;
    student_records[3]->_name = (char*) malloc( sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[3]->_name, "abc");


    // doing the same thing for the first struct of the array
    student_records[0]._name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[0]._name, "abc");
    student_records[0]._gwid = 123456;

    student_records[1]._name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[1]._name, "def");
    student_records[1]._gwid = 234567;

    student_records[2]._name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[2]._name, "ghi");
    student_records[2]._gwid = 345678;

    student_records[3]._name = (char*) malloc(sizeof(char)* MAX_NAME_SIZE);
    strcpy(student_records[3]._name, "jkl");
    student_records[3]._gwid = 456789;
    */
    struct student* student_records[4];
    student_records[0] = create_student_records(123456,"abc");
    student_records[1] = create_student_records(123456,"abc");
    student_records[2] = create_student_records(123456,"abc");
    student_records[3] = create_student_records(123456,"abc");

    printf("\nGWID \t\t NAME\n");
    printf("-------------------\n");
    printf("\n");
    for (unsigned int i = 0; i <MAX_RECORDS; i++) {
        printf("%d \t\t %s\n", 
            student_records[i]->_gwid, student_records[i]->_name);
    }

    for (unsigned int i = 0; i <4; i++) {
        delete_student_record(student_records[i]);
    }
    printf("/n");
    return 0;
}