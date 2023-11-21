#include <stdio.h>

int main() {
    int n, i, delete_Index;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int oldNumbers[n];
    printf("Nhap vao cac gia tri:\n");
    for (i = 0; i < n; i++) {
        printf("numbers[%d]= ", i);
        scanf("%d", &oldNumbers[i]);
    }
    printf("Nhap chi so phan tu can xoa: ");
    scanf("%d", &delete_Index);

    if (delete_Index >= 0 && delete_Index < n) {
        for (i = delete_Index; i < n - 1; i++) {
            oldNumbers[i] = oldNumbers[i + 1];
        }
        n--;  
        printf("Mang sau khi xoa:\n");
        for (i = 0; i < n; i++) {
            printf("%d\t", oldNumbers[i]);
        }
    } else {
        printf("Chi so phan tu can xoa khong hop le.\n");
    }
}
