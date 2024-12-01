#include<stdio.h>

int main(){
	int luachon,sophantubd=0;
	int arr[100];
	int vitri, phantuthem, giatrimoi;
	
	printf("      MENU         \n");
	printf("1.NHap vao mang \n");
	printf("2.Hien thi mang  \n");
	printf("3.Them phan tu \n");
	printf("4.Sua phan tu \n");
	printf("5.Xoa phan tu \n");
	printf("6.Thoat\n");
	printf("Ban hay chon 1 trong 6 thu muc tren: ");
	scanf("%d", &luachon);
	switch(luachon){
		
		case 1:
			printf("ban hay nhap vao so phan tu cua mang: ");
			scanf("%d", &sophantubd);
			if(sophantubd < 0 || sophantubd > 100){
				printf("So phan tu khong hop le. Ban hay nhap lai. ");
				break;
			}
			for(int i=0; i < sophantubd; i++){
				printf("Phan tu thu %d la: ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
			
		case 2:
			if(sophantubd==0){
				printf("Ban hay thu lai . Mang hien tai dang rong. ");
			}
			if(sophantubd > 0){
				for(int i=0; i< sophantubd; i++){
					printf("%d", arr[i]);
				}
				printf("\n");
			}
			break;
		case 3:
			printf("Nhap phan tu ban can them: ");
			scanf("%d", &phantuthem);
			arr[sophantubd] = phantuthem;
			sophantubd++ ; 
			printf("Da them phan tu % vao mang theo yeu cau cua ban: ", phantuthem);
			break;
			
		case 4:
			printf("Ban hay nhap vi tri phan tu ma ban muon sua: ");
			scanf("%d", vitri);
			printf("Ban hay nhap vao gia tri ban muon thay doi: ");
			scanf("%d", giatrimoi);
			arr[vitri]=giatrimoi;
			printf("Da sua phan tu tai vi tri %d thanh %d ", vitri, giatrimoi);
			
		case 5:
			printf("Ban hay nhap vi tri phan tu ma ban muon xoa: ");
			scanf("%d", &vitri);
			for(int i= vitri; i<sophantubd; i++){
				arr[i]=arr[i+1];
				
			}
			sophantubd-- ;
			printf("Phan tu o vi tri %d da dc xoa. ", vitri);
		case 6:
			printf("Thoat chuong trinh: ");
			return 0;
		default:
			printf("Khong hop le ban hay thu lai.");
	}
	
	
	return 0;
}
