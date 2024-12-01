#include <stdio.h>

int main(){
	// Khai bao kich thuoc cua mang
	int arr[100];
	int size, position;

	// Nhap kich thuoc mang tu nguoi dung
	printf("Ban hay nhap kich co cho mang ");
	scanf("%d", &size);
	
	// Kiem tra xem kich thuoc co hop le khong
	if(size < 0 || size > 100){
		printf("Kich co mang khong hop le ban hay nhap lai nhe\n");
		return 1;
	}

	// Nhap cac phan tu vao mang
	printf("Ban hay nhap cac phan tu trong mang \n");
	for(int i = 0; i < size; i++){
		printf("Phan tu thu %d ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// Hien thi mang hien tai
	printf("Mang ban vua nhap la ");
	for(int i = 0; i < size; i++){
		printf("%3d", arr[i]);
	}
	
	// Yeu cau nguoi dung nhap vi tri phan tu muon xoa
	printf("\nBan hay nhap vao vi tri ma ban muon xoa ");
	scanf("%d", &position);
	
	// Kiem tra vi tri co hop le khong
	if(position < 0 || position >= size){
		printf("Vi tri khong hop le Vui long nhap lai vi tri\n");
		return 1;
	}
	
	// Dich chuyen cac phan tu phia sau vi tri can xoa
	for(int i = position; i < size - 1; i++){
		arr[i] = arr[i + 1];
	}
	
	// Giam kich thuoc mang
	size--;
	
	// Hien thi mang sau khi xoa
	printf("\nMang sau khi xoa la ");
	for(int i = 0; i < size; i++){
		printf("%3d", arr[i]);
	}
	
	return 0;
}

