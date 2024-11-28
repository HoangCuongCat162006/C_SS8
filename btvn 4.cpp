#include<stdio.h>

int main(){
	int arr[2][2]={{7,4},{6,12}};
	int max = arr[0][0];
	int row = 2,col=2;
	
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			if(arr[i][j] >max ) {
				max = arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la : %d \n",max);
	
	
	return 0;}
