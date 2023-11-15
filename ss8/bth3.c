#include <stdio.h>
int main() {
	int i,j;
	int row, col;
	printf("Nhap so dong va so cot cua mang 2 chieu:"); 
	scanf("%d %d", &row, &col);
	int numbers[row][col];
	for (i = 0; i < row; i++){
	    for (j = 0; j < col; j++){
	      printf("numbers[%d][%d]=",i,j);
	      scanf("%d", &numbers[i][j]);
	    }
  	}
  printf("Gia tri cac phan tu mang 2 chieu:\n"); 
	for(i = 0; i < row ; i++){
	    for (j=0; j < col; j++){
	      printf("%d\t" ,numbers[i][j]);
	    }
	    printf("\n");
	}
}
