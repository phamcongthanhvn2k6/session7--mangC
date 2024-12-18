#include <stdio.h>

int main() {
    int hang, cot;

    printf("Nhap vao so hang: ");
    scanf("%d", &hang);
    printf("Nhap vào so cot: ");
    scanf("%d", &cot);

    int array[hang][cot];

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Mang theo dang ma tran la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

