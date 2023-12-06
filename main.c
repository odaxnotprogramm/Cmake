#include <stdio.h>

void main() {
  int firstMatrixRowSize, firstMatrixColSize, secondMatrixRowSize, secondMatrixColSize;
  printf("Enter the number of rows of the first matrix: ");
  scanf_s("%d", &firstMatrixRowSize);
  printf("Enter the number of columns of the first matrix: ");
  scanf_s("%d", &firstMatrixColSize);
  printf("Enter the number of rows of the second matrix: ");
  scanf_s("%d", &secondMatrixRowSize);
  printf("Enter the number of columns of the second matrix: ");
  scanf_s("%d", &secondMatrixColSize);
  
  while (firstMatrixColSize != secondMatrixRowSize) {
    printf("\nMultiplication is not possible!\n");
    printf("Please, enter the right data!\n");
    printf("Enter the number of columns of the first matrix: ");
    scanf_s("%d", &firstMatrixColSize);
    printf("Enter the number of rows of the second matrix: ");
    scanf_s("%d", &secondMatrixRowSize);
  }
  
  int firstMatrix [50][50];
  int secondMatrix[50][50];
  int resMatrix[50][50];
  
  printf("\nEnter the elements of the first matrix:\n");
  for (int i = 0; i < firstMatrixRowSize; i++) {
    for (int j = 0; j < firstMatrixColSize; j++) {
      scanf_s("%d", &firstMatrix[i][j]);
    }
  }
  
  printf("\nEnter the elements of the second matrix: \n");
  for (int i = 0; i < secondMatrixRowSize; i++) {
    for (int j = 0; j < secondMatrixColSize; j++) {
      scanf_s("%d", &secondMatrix[i][j]);
    }
  }
  
  for (int i = 0; i < firstMatrixRowSize; i++) {
    for (int j = 0; j < secondMatrixColSize; j++) {
      resMatrix[i][j] = 0;
      for (int k = 0; k < firstMatrixColSize; k++)
        resMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
    }
  }
  
  printf("\nResult matrix: \n");
  for (int i = 0; i < firstMatrixRowSize; i++) {
    for (int j = 0; j < secondMatrixColSize; j++) {
        printf("%d ", resMatrix[i][j]);
    }
    printf("\n");
  }
}