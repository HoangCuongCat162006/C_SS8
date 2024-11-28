#include <stdio.h>
int main() {
    int n;
    
    printf("Nhap kich thuoc ma tran vuong n x n: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Nhap cac phan tu cho ma tran :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu o vi tri (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = 0;
    printf("\nCac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-i-1]);
        sum += matrix[i][n-i-1];
    }
    
    printf("\nTong cac phan tu tren duong cheo phu la : %d\n", sum);
    
    return 0;
}

