#include <stdio.h>

int main() {
    int array[5];
    int trangthai = 0; 

   
    printf("Hay nhap 5 phan tu vao trong mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Cac so chan trong mang là: ");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            trangthai = 1; 
        }
    }
    
   
    if (!trangthai) {
        printf("Mang khong chua so chan");
    }
    printf("\n");

    return 0;
}

