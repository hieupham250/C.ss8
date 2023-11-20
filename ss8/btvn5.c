#include<stdio.h>

int main(){
	int n,i;
	int update_Value,update_Index;
	printf("nhap phan tu cua mang n: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("nhap so can thay: ");
	scanf("%d",&update_Value);
	printf("nhap vi tri can thay: ");
	scanf("%d",&update_Index);
	a[update_Index-1] = update_Value;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
