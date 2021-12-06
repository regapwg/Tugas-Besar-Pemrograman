
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
//=======================================================================//
//***********     Fungsi Untuk Menampilkan Judulprogram  ****************//
//=======================================================================//
//                         >> 4 Desember 2021 <<           		 //
// Nama Fungsi    : judulprogram                                         //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan judul program //
//                  saat program pertama kali di buka                    //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//                                              			 //
//=======================================================================//
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
//=======================================================================//
//***********       Fungsi Untuk Menampilkan Menu	 ****************//
//=======================================================================//
//                         >> 4 Desember 2021 <<           		 //
// Nama Fungsi    : menu                                                 //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan menu utama    //
//                  dalam program ini			                 //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//=======================================================================//
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
//=======================================================================//
//***********       	  Fungsi Pilihan Menu		 ****************//
//=======================================================================//
//                         >> 4 Desember 2021 <<           		 //
// Nama Fungsi    : pilihanmenu                                          //
// Deskripsi      : fungsi ini berfungsi untuk memilih kondisi menu      //
//                  dalam program ini			                 //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//=======================================================================//
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

