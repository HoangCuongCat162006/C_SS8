#include<stdio.h>

int main (){
	
	int n=4;
	int arr[4][4]= {{1,4,5,6} , {23,4,52,6} , {12,32,1,6} , {9,7,2,5}};
	int sum=0;
	
	printf("Cac duong cheo chinh cua ma tran la : ");
	for(int i=0;i<4;i++){
		printf("%d",arr[i][i]);
		sum+=arr[i][i];
		}
		printf(" \nTong cac phan tu tren duong cheo chinh la : %d\n ",sum);
	
	return 0;
}
