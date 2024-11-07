#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    int matrix1[2][2];
    int matrix2[2][2];

    for(int t = 0; t < 2; t++) {
        for(int h = 0; h < 2; h++) {
            matrix1[t][h] = scores[t][h];
        }
    }

    for(int t = 2; t< 4; t++) {
        for(int h= 0; h < 2; h++) {
            matrix2[t-2][h] = scores[t][h];
        }
    }

    printf("Matrix 1:\n");
    for(int t = 0; t < 2; t++) {
        for(int h = 0; h < 2; h++) {
            printf("%d\n ", matrix1[t][h]);
        }
        ;
    }

    printf("Matrix 2:\n");
    for(int t= 0; t< 2; t++) {
        for(int h = 0; h < 2; h++) {
            printf("%d \n", matrix2[t][h]);
        }
        
    }

    return 0;
}