#include <stdio.h>
#include<math.h>

	int main(){
		int hang,cot,i,j;
		printf("NHap vao so hang: ");
		scanf("%d",&hang);
		printf("Nhap vao so cot: ");
		scanf("%d",&cot);
		
		int array[hang][cot];
		
		printf("Nhap vao cac phan tu cua mang: \n");
		for (int i=0; i< hang;i++){
			for (int j=0; j<cot;j++){
				printf("Nhap vao phan tu hang:%d, cot:%d la:   ",i+1,j+1);
				scanf("%d", &array[i][j]);
			}
		}
		
		printf("Mang theo ma tran la: \n");
		for (int i=0; i< hang;i++){
			for (int j=0; j<cot;j++){
				printf("%d ",array[i][j]);		
			}
			printf("\n");
		}
		printf("Cac so tren duong bien la: \n");
		for (int i=0; i< hang;i++){
			for (int j=0; j<cot;j++){
				if( i==0 || i==hang-1 || j==0 || j==cot-1){
					printf("%d\n",array[i][j]);
				}
			}
		}
		return 0;
	}
