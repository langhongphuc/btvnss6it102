#include <stdio.h>


int main(){
	
	float  a , b , c; 
	int choice; 
	
	do{
		
		printf("\nHay nhap so nguyen a vao day :   ");
		scanf("%f", &a);
		printf("Hay nhap so nguyen b vao day : ");
		scanf("%f", &b);
		printf("Hay nhap so nguyen c vao day : ");
		scanf("%f", &c);
		
	        	printf("\n 1.Tong 3 so nguyen "); 
	        	printf("\n 2.Trung binh cong 3 so ");
	        	printf("\n 3.So nho nhat trong ba so ");
	        	printf("\n 4.So lon nhat trong ba so ");
	        	printf("\n 5.Thoat ");
	          	printf("\n Ban hay chon cac chuc nang ma ban muon : ");
	        	scanf ("%d", &choice );
		
		switch(choice){
			case 1:
			printf("\n Tong = %.2f + %.2f + %.2f = %.2f  ",a , b , c , a + b + c );
			break;	
			case 2: 
		    printf("\nTrung binh = (%.2f + %.2f + %.2f)/ 3 = %.2f ", a , b ,c , a + b + c  );
		    break; 
			case 3:   
			if( a > b && a > c && b > c ){
			   	printf("\nc la so nho nhat ");
			} else if ( a > b && a > c && b < c ){
				printf("\nb la so nho nhat "); 
			} else if ( a > b && a < c && b < c ){
				printf("\nb la so nho nhat ");
			} else if ( a < b && a < c && b < c ){
				printf("\na la so nho nhat "); 
			} else if( a < b && a < c && b > c ){
				printf("\na la so nho nhat ");
			} else if ( a < b && a > c && b > c ){
				printf("\nc la so nho nhat ");
			} else {
				printf("\nThong bao loi xin vui long nhap lai ");
			} 
			break;
			case 4:
		    if( a > b && a > c && b > c ){
			   	printf("\na la so lon nhat  ");
			} else if ( a > b && a > c && b < c ){
				printf("\na la so lon nhat "); 
			} else if ( a > b && a < c && b < c ){
				printf("\nc la so lon nhat  ");
			} else if ( a < b && a < c && b < c ){
				printf("\nc la so lon  nhat "); 
			} else if( a < b && a < c && b > c ){
				printf( "\nb la so lon  nhat ");
			} else if ( a < b && a > c && b > c ){
				printf("\nb la so lon  nhat ");
			} else {
				printf(" \nThong bao loi xin vui long nhap lai ");
			} 
			break; 
			case 5:
		    printf(" \nCam on vi da su dung chuong trinh nay ");
		    break;
			default:
		    printf(" \nThong bao loi xin vui long nhap lai ");
			 
		}
		
		
	} while( choice  != 5 );
	
	
	return 0; 
	
}

