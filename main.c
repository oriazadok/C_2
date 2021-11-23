#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int main() {
    char in;
    do {
        printf("Enter a letter: \n");
        printf("A - for fuction number 1\n");
        printf("B - for fuction number 2\n");
        printf("C - for fuction number 3\n");
        printf("D - to get out of the program\n");
        
        scanf("%c", &in);
        
        switch(in) {
            case 'A':
                function_1(mat);
                break;
            case 'B':
                function_2(mat);
                break;
            case 'C':
                function_3(mat);
                break;
            default:
                printf("Please enter one of the four letters\n");
                printf("\n");
        }

    } while(in != 'D');

    return 0;
}