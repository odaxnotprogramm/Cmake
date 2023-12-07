#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main() {
    int firstMatrixRowSize, firstMatrixColSize, secondMatrixRowSize, secondMatrixColSize;
    
    char digit[20], *t;
    do{
        printf("Enter the number of rows of the first matrix: ");
        scanf("%s",digit);
        firstMatrixRowSize = strtod (digit, &t);
    } while(strtod (digit, &t) == 0);
    printf("Hello");
    
    do{
        printf("Enter the number of columns of the first matrix: ");
        scanf("%s",digit);
        firstMatrixColSize = strtod (digit, &t);
    } while(strtod (digit, &t) == 0);
    
    do{
        printf("Enter the number of rows of the second matrix: ");
        scanf("%s",digit);
        secondMatrixRowSize = strtod (digit, &t);
    } while(strtod (digit, &t) == 0);
    
    do{
        printf("Enter the number of columns of the second matrix: ");
        scanf("%s",digit);
        secondMatrixColSize = strtod (digit, &t);
    } while(strtod (digit, &t) == 0);

    while (firstMatrixColSize > 50 || firstMatrixColSize < 0 ||
        firstMatrixRowSize > 50 || firstMatrixRowSize < 0 ||
        secondMatrixColSize > 50 || secondMatrixColSize < 0 ||
        secondMatrixRowSize > 50 || secondMatrixRowSize < 0) {
        
        printf("\nMultiplication is not possible!\n");
        printf("Matrix colums and rows should be less than 50 and more than 0!\n");

        printf("Enter the number of rows of the first matrix: ");
        scanf("%d", &firstMatrixRowSize);
        printf("Enter the number of columns of the first matrix: ");
        scanf("%d", &firstMatrixColSize);
        printf("Enter the number of rows of the second matrix: ");
        scanf("%d", &secondMatrixRowSize);
        printf("Enter the number of columns of the second matrix: ");
        scanf("%d", &secondMatrixColSize);
    }
    while (firstMatrixColSize != secondMatrixRowSize) {
        printf("\nMultiplication is not possible!\n");
        printf("Please, enter the right data!\n");
        printf("Enter the number of columns of the first matrix: ");
        scanf("%d", &firstMatrixColSize);
        printf("Enter the number of rows of the second matrix: ");
        scanf("%d", &secondMatrixRowSize);
    }

    double firstMatrix[50][50];
    double secondMatrix[50][50];
    double resMatrix[50][50];
    
    printf("\nWarning! All incorrect elements in matrix will be replace by 0!\n");

    /*INPUT MATRIX*/
    printf("\nEnter the elements of the first matrix:\n");
    for (int i = 0; i < firstMatrixRowSize; i++) {
        for (int j = 0; j < firstMatrixColSize; j++) {
            scanf("%s",digit);
            firstMatrix[i][j] = strtod (digit, &t);
        }
    }

    printf("\nEnter the elements of the second matrix:\n");
    for (int i = 0; i < secondMatrixRowSize; i++) {
        for (int j = 0; j < secondMatrixColSize; j++) {
            scanf("%s",digit);
            secondMatrix[i][j] = strtod (digit, &t);
        }
    }

    /*OUTPUT MATRIX*/
    printf("\nThe elements of the first matrix:\n");
    for (int i = 0; i < firstMatrixRowSize; i++) {
        printf("|");
        for (int j = 0; j < firstMatrixColSize; j++) {
            printf("\t%.2lf", firstMatrix[i][j]);
        }
        printf("\t|\n");
    }

    printf("\nThe elements of the second matrix:\n");
    for (int i = 0; i < secondMatrixRowSize; i++) {
        printf("|");
        for (int j = 0; j < secondMatrixColSize; j++) {
            printf("\t%.2lf", secondMatrix[i][j]);
        }
        printf("\t|\n");
    }

    /*RESULT*/
    for (int i = 0; i < firstMatrixRowSize; i++) {
        for (int j = 0; j < secondMatrixColSize; j++) {
            resMatrix[i][j] = 0.0;
            for (int k = 0; k < firstMatrixColSize; k++)
                resMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
        }
    }

    printf("\nResult matrix:\n");
    for (int i = 0; i < firstMatrixRowSize; i++) {
        printf("|");
        for (int j = 0; j < secondMatrixColSize; j++) {
            printf("\t%.2lf", resMatrix[i][j]);
        }
        printf("\t|\n");
    }
}