#include<stdio.h>

int main(){
	int sophantubd, choice, count=0;
	int arr[100], vitri, themphantu;
	int sum = 0;
	
	while(1){
		printf("  \n       MENU       \n ");
		printf("1.Nhap so cac phan tu va gia tri cac phan tu do.\n");
		printf("2.In ra cac gia tri cac phan tu dang quan li.\n");
		printf("3.In cac phan tu chan va tinh tong.\n");
		printf("4.In gia tri lon nhat va gia tri nho nhat.\n");
		printf("5.In ra cac so nguyen to va tinh tong.\n");
		printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu.\n");
		printf("7.Them 1 phan tu vao vi tri chi dinh.\n");
		printf("8.Thoat\n");
		printf("Ban hay lua chon 1 trong 8 thu muc tren:  ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Ban hay nhap vao kich thuoc cua mang: ");
				scanf("%d", &sophantubd);
				if(sophantubd <0 || sophantubd > 100){
					printf("Loi ban hay thu lai.\n");
					break;
				}
				printf("Ban hay nhap cac phan tu vao mang. \n");
				for(int i=0; i<sophantubd; i++){
					printf("Phan tu thu %d la: ", i+1);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				printf("Mang sau khi tiep nhan phan tu: ");
                for (int i = 0; i < sophantubd; i++) {
                    printf(" %3d ", arr[i]);
                }
                printf("\n");
		        break;
			case 3:
				printf("Cac phan tu chan: ");
                for (int i = 0; i < sophantubd; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
			    break;
			case 4:
				if(sophantubd==0){
					printf("Mang rong");
				}else{
					int max = arr[0];
					int min = arr[0];
					for(int i=0; i<sophantubd; i++){
						if(max < arr[i]){
							max=arr[i];
						}
						if(min > arr[i]){
							min=arr[i];
						}
					}
					printf("GTLN la: %d\n", max);
					printf("GTNN la: %d\n", min);
				}
			case 5:
				printf("So nguyen to trong mang la: ");
				for(int i =0; i<sophantubd; i++){
					if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
						printf("%d\t", arr[i]);
					}
				}
				break;
			case 6:
				int x;
				 printf("Nhap vao mot so de thong ke: ");
                scanf("%d", &x);
                for (int i = 0; i < sophantubd; i++) {
                     if (arr[i] == x) {
                        count++;
                }
            }
            printf("So %d xuat hien %d lan trong mang.\n", x, count);
	    	break;
            case 7:
            	printf("Ban hay nhap vi tri them phan tu: ");
            	scanf("%D", &vitri);
            	printf("Ban hay nhap phan tu muon them: ");
            	scanf("%d", &themphantu);
            	if(vitri<0 || vitri>sophantubd+1){
            		printf("Vi tri khong hop le. \n");
            		break;
				}
				for(int i=0; i > vitri; i--) {
					arr[i]=arr[i-1];
				}
				arr[vitri]=themphantu;
				sophantubd++;
				break;
			case 8:
			return 0;
			default:
				
				printf("Khong hop le.");
			
			
			
		}
		
	}
	
	
	
	
	return 0;
}
