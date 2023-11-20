#include<stdio.h>

int main(){
	int n,i,delete_Index;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int oldNumbers[n];
	printf("nhap vao cac gia tri:\n");
	for(i=0;i<n;i++){
		printf("numbers[%d]= ",i);
		scanf("%d",&oldNumbers[i]);
	}
	printf("nhap chi so phan tu can xoa: ");
	scanf("%d",&delete_Index);
	for(i=delete_Index;i<n-1;i++){
		oldNumbers[i] = oldNumbers[i + 1];
	}
	for(i=0;i<n-1;i++){
		printf("%d\t",oldNumbers[i]);
	}
}
