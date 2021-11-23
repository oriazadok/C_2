#include <stdio.h>


/*
    this function get the values of the matrix
*/

int function_1(int mat[10][10]) {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++){
            printf("Enter the %d %d number for the matrix: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    return 0;
}

/*
    this function_2 get two vertices and check if there is a route between them
    this function works in recursion
    we start with vertex i and send all his "children" to the function to check its
    equals to vertex j

*/

int function_2(int mat[10][10]) {
    printf("Enter two integers represent two vertices: ");
    int i, j;
    scanf("%d, %d", &i, &j);

    for(int k=0; k<10; k++) {
        for(int i=0; i<10; i++) {
            for(int j=0; j<10; j++) {
                if(mat[i][j] > mat[i][k] + mat[k][j]) {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

    if(mat[i][j] != 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}


/*
    this function print the sortest route between two vertices
    if there is'nt any ,return -1 

*/
int function_3(int mat[10][10]) {

    printf("Enter two integers represent two vertices: ");
    int i, j;
    scanf("%d, %d", &i, &j);

    for(int k=0; k<10; k++) {
        for(int i=0; i<10; i++) {
            for(int j=0; j<10; j++) {
                if(mat[i][j] > mat[i][k] + mat[k][j]) {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

    if(mat[i][j] != 0) {
        return mat[i][j];
    }

    return -1;
}



























// int f2(int mat[][]) {

//     printf("Enter two integers represent two vertices: ");
//     char i, j;
//     scanf("%d, %d", &i, &j);

//     int route = 0;
//     if(i == j) {
//         route = 1;
//     }

//     for(int k=0; k<10;; k++) {
//         if(k == i) {
//             continue;
//         } else if (mat[i][k] != 0) {
//             int t = f_2(mat[][], k, j);
//         }
//         route += t;  
//     }

//     return route;
// }


// void function_2(int mat[10][10]) {
//     printf("Enter two integers represent two vertices: ");
//     int i, j;
//     scanf("%d, %d", &i, &j);

//     if(i == j) {          //need to check the definition if there is a route from vertex to itself
//         printf("True");
//         return;
//     }

//     int ans = f_2(arr, i, j);

//     if(ans != 0) {
//         printf("True");
//     } else {
//         printf("False");
//     }
// }
