#include <stdio.h>

int main() {
    int n;  

    int matrix[100][100];  
    int size = 0;  

    while (1) {
    	int tong = 0;
    	int tich = 1;
        printf("\n                     MENU                  \n");
        printf("\n   1. Nhap kich co can nhap va cac gia tri phan tu:\n");
        printf("\n   2. In ra gia tri cac phan tu mang theo ma tran:\n");
        printf("\n   3. In gia tri cac phan tu le va tinh tong:\n");
        printf("\n   4. In ra cac phan tu nam tren duong bien va tinh tich.\n");
        printf("\n   5. In ra cac phan tu nam tren duong cheo chinh:\n");
        printf("\n   6. In ra cac phan tu nam tren duong cheo phu:\n");
        printf("\n   7. In ra dong co tong gia tri cac phan tu la lon nhat:\n");
        printf("\n   8. Thoat.\n");  
        printf("\nLua chon cua ban la : ");
        scanf("%d", &n);

        switch (n) {
            case 1: 
                printf("Nhap kich co ma tran (n): ");
                scanf("%d", &size);

                printf("Nhap cac phan tu cho ma tran %dx%d:\n", size, size);
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        printf("Nhap phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &matrix[i][j]);
                    }
                }
            break;

            case 2:  
                printf("Gia tri cac phan tu trong ma tran:\n");
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        printf(" %d ", matrix[i][j]);
                    }
                    printf("\n");
                }
            break;

            case 3: 
                printf("Cac phan tu le trong ma tran:\n");
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        if (matrix[i][j] % 2 != 0) {
                            printf("%d ", matrix[i][j]);
                            tong += matrix[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", tong);
            break;

            case 4:  
                printf("Cac phan tu tren duong bien:\n");
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                            printf("%d ", matrix[i][j]);
                            tich *= matrix[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu duong bien: %d\n", tich);
            break;

            case 5: 
                printf("Cac phan tu tren duong cheo chinh:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", matrix[i][i]);
                }
                printf("\n");
            break;

            case 6:
                printf("Cac phan tu tren duong cheo phu:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", matrix[i][size - 1 - i]);
                }
                printf("\n");
            break;

            case 7:     
            break;

            case 8: 
                printf("Thoat chuong trinh.\n");
                return 0; 

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;  
}

