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

    printf("Cac phan tu la so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        int trangthai = 1;  
        if (array[i] <= 1) {
            trangthai = 0;  
        } else {
            for (int j = 2; j * j <= array[i]; j++) {
                if (array[i] % j == 0) {
                    trangthai = 0;  
                    break;
                }
            }
        }

        if (trangthai) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

