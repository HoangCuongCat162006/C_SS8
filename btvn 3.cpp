#include<stdio.h>

int main(){
	
	int n;
	
	printf("Nhap vao mot so nguyen : ");
	scanf("%d",&n);
	
	int arr[n][n];
	printf ("Nhap phan tu cho mang hai chieu %d x %d : \n",n,n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Ma tran vuong %d x %d \n",n,n);
		for(int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
	
	return 0;
}
