#include<stdio.h>

int main(){
	int n,i,max,min;
	printf("nhap so phan tu cua mang 1 chieu: ");
	scanf("%d",&n);
	int numbers[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri phan tu so nguyen [%d]: ",i);
		scanf("%d",&numbers[i]);
	}
	max = numbers[1];
	min = numbers[1];
	for(i=0;i<numbers[i];i++){
		if(max <= numbers[i]){
			max = numbers[i];
		}
		if(min >= numbers[i]){
			min = numbers[i];
		}
	}
	printf("gia tri lon nhat cua mang: %d\ngia tri nho nhat cua mang: %d",max,min);
}
