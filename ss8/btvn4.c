#include<stdio.h>

int main(){
	int n,i,add_Value,add_Index;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n+1];
	for(i=0;i<n;i++){
		printf("array[%d]= ",i);
		scanf("%d",&array[i]);
	}
	printf("nhap phan tu can chen: ");
	scanf("%d",&add_Value);
	printf("nhap vi tri can chen: ");
	scanf("%d",&add_Index);
	for(i=n;i>=0;i--){
		array[i] = array[i-1];
		if(i == add_Index){
			array[i]=add_Value;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
}
