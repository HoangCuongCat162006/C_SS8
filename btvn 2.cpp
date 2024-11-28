#include<stdio.h>

int main(){
	
	int arr[]={1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sc,test = 0;
	
	printf("Nhap phan tu can tim : ");
	scanf ("%d",&sc);
	
	for(int i=0;i<n;i++){
		if (arr[i] == sc) {
			printf("Phan tu trong mang la : %d \n",i);
			test = 1;
			break;
		}
	}
		if (! test ){
   			printf("Phan tu khong ton tai ");
		}
	
	return 0;
}
