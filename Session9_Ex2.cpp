#include<stdio.h>

int main(){
	// khai bao kich thuoc cua mang
	int arr[100];
	int size, value, position;
	
	// nhap kich co mang tu nguoi dung
	printf("Ban hay nhap kich co cho mang: ");
	scanf("%d", &size);
	
	// kiem tra xem hop le hay khong
	if(size < 0 || size > 100){
		printf("Kich co mang khong hop le ban hay nhap lai nhe.\n");
		return 1;
	}

	// Nhap cac phan tu vao mang
	printf("Ban hay nhap cac phan tu trong mang: \n");
	for(int i=0; i < size; i++){
		printf("Phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// Hien thi mang hien tai
	printf("Mang ban vua nhap la: ");
	for(int i=0; i< size; i++){
		printf("%3d", arr[i]);
	}
	
	// Yeu cau nguoi dung nhap gia tri va vi tri de chen
	printf("\nBan hay nhap vao gia tri ma ban muon them de sua mang: ");
	scanf("%d", &value);
	printf("Ban hay nhap vao vi tri sua mang: ");
	scanf("%d", &position);
	
	// Kiem tra vi tri hop le
	if(position < 0 || position > size){ 
		printf("Vi tri khong hop le. Vui long nhap lai vi tri.\n");
		return 1;
	}
	
    
	// Chen phan tu vao vi tri nguoi dung nhap
    arr[position] = value;
    
	// Hien thi mang sau khi chen phan tu
    printf("\nMang sau khi sua la: ");
    for(int i= 0; i<size; i++){
    	printf("%3d", arr[i]);
	}
    
    // ket thuc
	return 0;
}

