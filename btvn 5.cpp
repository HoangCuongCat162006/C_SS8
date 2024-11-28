#include <stdio.h>

int main(){
	
	int row=2,col=2;
	int arr[2][2]={{3,5},{7,8}};
	int sum=0;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if (i==0 || i==row-1 || j==0 || j==col-1){
				sum +=arr[i][j];
			}
		}
	}
	printf("Tong cac phan tu tren duong bien cua ma tran la : %d \n",sum);
	
	
	return 0;
}
