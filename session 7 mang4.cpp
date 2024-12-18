#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    int array[n];

    
    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Các phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    return 0;
}

