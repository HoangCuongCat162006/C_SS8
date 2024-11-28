#include<stdio.h>

int main(){
	int n = 3;
	int arr[3][3]={{3,4,6},{6,8,7},{8,9,12}};
	int sum=0;
	
	printf("Cac phan tu tren duong cheo chinh cua ma tran la : ");
	for (int i=0;i<n;i++){
		printf("%d",arr[i][i]);
		sum+=arr[i][i];
	}
	printf("\n Tong cac phan tu tren duong cheo chinh la : %d \n",sum);
	return 0;
}
