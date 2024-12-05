#include<stdio.h>
int main(){
	int n;
	int luachon;
	int a[100];
	while(1){
		printf("\n \t \t MENU \n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac phan tu trong mang \n"); 
		printf("3. Dem so luonng cac so hoan hao \n");
		printf("4. Tim gia tri lon thu hai trong mang, khong duoc sap xep mang \n");
		printf("5. Them mot phan tu vao trong mang\n");
		printf("6. Xoa mot phan tu\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Tim kiem phan tu\n");
		printf("9. Sap xep cac phan tu sao cho cac phan tu chan dung truoc va phan tu le dung sau\n");
		printf("10. Dao nguoc cac phan tu co trong mang \n");
		printf("11. Thoat chuong trinh\n");
		printf("\n Nhap lua chon cua ban: ");
		scanf("%d", &luachon);
		printf("\n");
		switch(luachon){
			case 1:{
				printf("Nhap so phan muon nhap: ");
				scanf("%d", &n);
				if(n<0 || n> 100){
					printf("So phan tu khong hop le");
				}else {
			    	for(int i=0; i < n; i++){
				    	printf("phan tu thu %d la: ", i+1);
				    	scanf("%d", &a[i]);
			        }
				}
				break;
			}
			case 2:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
					printf("Mang hien tai la:  ");
					for (int i=0; i<n; i++){
						printf("\t a[%d]= %d", i, a[i]);
					}
					printf("\n");
				}
				break;
			}
			case 3:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
					
				break;
			    }
		    }
		    case 4:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
					int temp;
					int maxt2;
					int max=a[0];
					for (int i=0;i<n;i++){
						if(max > a[i]){
						temp = max;
						max= a[i];
						} for (int i=0;i<n;i++){
						    if(maxt2 > a[i] && maxt2 < max){
						    temp = maxt2;
						    maxt2= a[i];
					}
				}
				printf("Gia tri lon thu hai la: %d ",maxt2);
			}
		    }
				break;
	    	}
		    case 5:{
		    	int giatri, vitri;
		    	printf("nhap gia tri muon them: ");
		    	scanf("%d", &giatri);
		    	printf("nhap vi tri muon them: ");
		    	scanf("%d", &vitri);
				if (vitri<1|| vitri>n+1){
					printf("Vi tri khong hop le");
					break;
				}else{
				    for (int i=n ;i>= vitri; i--){
				    	a[i]=a[i-1];
				    }
				    a[vitri-1]=giatri;
				    n++;
				    printf("mang sau khi them la: ");
				    for (int i=0; i<n; i++){
				    	printf("  %d  ", a[i]);
					}
				    break;
					}
					
				}	
			    case 6:{
			    	int vitri;
					printf("nhap vi tri muon xoa");
					scanf("%d", &vitri);
				    if (vitri<1|| vitri>n+1){
					    printf("Vi tri khong hop le");
				    	break;
				}else{
					for (int i=vitri -1; i< n-1; i++){
						a[i]=a[i+1];	
					}
					n--;
					printf("mang sau khi xoa la:");
					for(int i=0; i< n ; i++){
						printf(" %d ", a[i]);
					}
				break;
			    }
		    }
		    case 7:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
						printf("\t");
				break;
		        }
			}
		    case 8:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
					int sotim;
					printf("so can tim la: ");
					scanf("%d", &sotim);
						for(int i=0; i< n ; i++){
							if(a[i]== sotim){
						printf("vi tri o: %d ", a[i]);
				} else{
					printf(" khong tim thay");
				}	
				}
					printf("\t");
				break;
			    }
		    }
		    case 10:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
						printf("\t");
				break;
		        }
		    }
		    case 9:{
				if(n==0){
					printf(" Mang chua duoc nhap ");
				}else{
					printf(" Mang sau khi duoc sap xep la: ");
						for(int i=0; i< n ; i++){
							if(a[i]%2==0){
						printf(" %d ", a[i]);
				}	
				}	for(int i=0; i< n ; i++){
							if(a[i]%2!=0){
						printf(" %d ", a[i]);
				}	
				}
				break;
			    }
		    }
		    case 11:{
					printf(" Thoat Chuong Trinh ");
					return 0;
				}
		    
	    }
	} 
	return 0; 
}
