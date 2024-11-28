#include<stdio.h>

int main(){
	
	int arr[]={5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int i=n-1; i>=0;i--){
		printf ("%d",arr[i]);
	}
	return 0;
}
