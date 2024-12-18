#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang là:\n");
    for(int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, array[i]);
    }

    printf("do dài cua mang là: %d\n", length);

    return 0;
}

