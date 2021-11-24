#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int main() {
    char in;
    do {
        
        scanf(" %c", &in);
        
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
        }

    } while(in != 'D');

    return 0;
}
