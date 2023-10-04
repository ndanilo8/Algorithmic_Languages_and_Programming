#include <stdio.h>
#include <stdlib.h>

// Lecture 12 part 4
int main(){

    FILE* fptr;
    errno_t err;

    err = fopen_s(&fptr,"myfile.txt", "w");

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr, "%d", 2021);


    fclose(fptr);
//***********************************


    return 0;
}