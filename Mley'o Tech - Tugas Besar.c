#include <stdio.h>



void judulprogram (void); 
void menu (void);
void pilihanmenu (int input);


int main (void){
	int input_menu;
	char input_program;
	
	 	judulprogram ();
	 	menu();
	 	
	 	printf("\t\t\t\t\tMasukan Pilhan Menu Anda :");
	 	scanf("%d", &input_menu);
	 	input_program = input_menu;
	
	 	
	 	pilihanmenu (input_program);
	 	
	return (0);
 }

void judulprogram (void){
	printf("\n\n\t\t\t\t\t##############################################\n");
	printf("\t\t\t\t\t##        Program Toko  Mley'o Tech         ##\n");
	printf("\t\t\t\t\t==============================================\n");
	printf("\t\t\t\t\t##             Dibuat Oleh :                ##\n");
	printf("\t\t\t\t\t##                                          ##\n");
	printf("\t\t\t\t\t## - Kadek Rega Prawira Suyoga              ##\n");
	printf("\t\t\t\t\t## - I Gede Khresna Adi Wedanta Beratha     ##\n");
	printf("\t\t\t\t\t##                                          ##\n");
	printf("\t\t\t\t\t##############################################\n");
}

void menu (void){
	printf("\n\n\t\t\t\t\t##############################################\n");
	printf("\t\t\t\t\t##             Toko Mley'o Tech             ##\n");
	printf("\t\t\t\t\t##==========================================##\n");
	printf("\t\t\t\t\t##                                          ##\n");
	printf("\t\t\t\t\t## 1 Laptop                                 ##\n");
	printf("\t\t\t\t\t## 2 Keyboard                               ##\n");
	printf("\t\t\t\t\t## 3 Voucher Game                           ##\n");
	printf("\t\t\t\t\t##                                          ##\n");
	printf("\t\t\t\t\t##############################################\n");
	
}

void pilihanmenu (int input){
	switch (input){
		case '1' :
		
			printf("- ASUS\n");
			printf("- Macbook\n");
			printf("- ROG\n");
			break;
			
		case '2' :	
	
			printf("- Razer BlackWidow Chroma\n");
			printf("- Cougar Attack X3\n");
			printf("- Digital Alliance K1\n");
		break;
			
		case '3' :
		
			printf("Voucher PB\n");
			break;
			
		default:
			printf("Data Yang Anda Masukan Salah \n");
		break;
				
	}
}

