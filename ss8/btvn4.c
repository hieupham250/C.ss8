#include <stdio.h>

int main(){
	int addValue,addIndex,n,i;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int oldNumbers[n];
	for(i=0;i<n;i++){
		printf("oldNumbers[%d]=",i);
		scanf("%d",&oldNumbers[i]);
	}
	printf("Nhap vao gia tri can chen vao mang:");
	scanf("%d",&addValue);
	printf("Nhap vao chi so can chen vao mang:");
	scanf("%d",&addIndex);
	printf("Nhap gia tri cac phan tu cua mang:\n");
	if(addIndex<n){
		int newNumbers[n+1];
		for(i=0; i<n+1; i++){
			if(i<addIndex){
				newNumbers[i] = oldNumbers[i];
			}else if(i==addIndex){
				newNumbers[i] = addValue;
			}else{
				newNumbers[i] = oldNumbers[i-1];
			}		
		}	
		printf("Mang sau khi chen phan tu la:\n");
		for(i=0; i<n+1; i++){
			printf("%d\t",newNumbers[i]);
		}		
	}else{
		int newNumbers[addIndex+1];
		for(i=0; i<addIndex; i++){
			if(i<n){
				newNumbers[i] = oldNumbers[i];
			}else{
				newNumbers[i] = 0;
			}
		}			
		newNumbers[addIndex] = addValue;
		printf("Mang sau khi chen phan tu la:\n");
		for(i=0; i<=addIndex; i++){
			printf("%d\t",newNumbers[i]);
		}		
	}
	
}
