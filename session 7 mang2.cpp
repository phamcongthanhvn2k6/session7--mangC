#include <stdio.h>

int main() {
    int array[5];

    printf("Nhap vao 5 phan tu cua mang:\n");
    for(int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang la:\n");
    for(int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }

    return 0;
}

