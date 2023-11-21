#include <stdio.h>

int main() {
    int n,i,update_Value,update_Index;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int numbers[n];
	for(i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	printf("nhap gia tri can cap nhat: ");
	scanf("%d",&update_Value);
	printf("nhap chi so phan tu cap nhat:");
	scanf("%d",&update_Index);
	printf("mang sau khi cap nhat:\n");
	for(i=0;i<n;i++){
		if(i==update_Index){
			numbers[i] = update_Value;	
		}
		printf("%d\t",numbers[i]);
	}
}

