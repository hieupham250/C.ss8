#include<stdio.h>
int main() {
	int n,i,find_number,sum = 0;
	printf("nhap n:");
	 scanf("%d", &n);
	int numbers[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&numbers[i]);
	}
	printf("nhap find_number");
	 scanf("%d",&find_number);
	printf("chi so cua cac phan tu bang find_number la:\n ");
	for (i=0;i<n;i++) {
		if (numbers[i] == find_number) {
		  printf("numbers[%d]=%d\n ",i,numbers[i]);
		  sum += numbers[i];
	    }
	}
	printf("\n");
	printf("tong cua cac phan tu bang find_number la: %d", sum);
}
