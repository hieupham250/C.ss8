#include<stdio.h>

int main(){
	int i;
	int number[5];
	for(i=0;i<5;i++){
		printf("number[%d]=",i);
		scanf("%d",&number[i]);
	}
	printf("gia tri cac phan tu trong mang:\n");
	for(i=0;i<5;i++){
		printf("%d\t",number[i]);
	}
}
