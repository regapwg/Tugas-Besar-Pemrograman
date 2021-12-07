//***********************************************************************//
//>>>>>>>>>>>>>>       	 Library dan Tipe data           <<<<<<<<<<<<<<<<//
//***********************************************************************//
//                         >> 5 Desember 2021 <<                         //
// Nama Library   : stdlib.h                                             //
// Deskripsi      : berfungsi untuk clearscreen                          //
// Dibuat Oleh    : I GedeKhresna Adi Wedanta Beratha                    //
//                  (2105551038)                                         //
//                                                                       //
//                         >> 5 Desember 2021 <<                         //
// 1. Nama Library   : stdbool.h                                         //
//    Deskripsi      : berfungsi untuk menggunakan tipe data boolean     //
// 2. Nama Tipe data : Char                                              //
//    Deskripsi      : berfungsi untuk menggunakan variabel berupa       //
//                     karakter                                          //
// 3. Nama Tipe data : Struct dengan variabel user, didalamnya terdapat  //
//                     variabel char                                     //
//    Deskripsi      : berfungsi untuk menampung beberapa variabel       //
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//=======================================================================//
#include <stdio.h>     // library menu utama 
#include <stdlib.h>   // Library System Clearscreen
#include <stdbool.h> // library untuk tipe data boolean

void judulprogram (void); 

void header(void); //fungsi untuk menampilkan header program

void menuLogin (void); //fungsi login

void menuUtama (void);

void menuLaptop (void);

void listSpesifikasi (void); //fungsi tampilan list spesifikasi laptop

void opsiKembali (void); //fungsi opsi kembali 

void specLaptop1 (void); 

void specLaptop2 (void); 

void specLaptop3 (void); 


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
// Versi : 1.1                                     Rev. 1                //
//                                                 Tgl: 06-12-2021       //
// Revisi 1       : Merapikan tampilan menu pada fungsi judulprogram     //
//                  Mengganti nama fungsi menjadi judulProgram           //
// Direvisi Oleh  : Khresna Adi Wedanta - 2105551038                     //
//=======================================================================//

void judulProgram (void){
	printf("\n\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\t\t\t\t |          Program Toko Mley'o Tech          |\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t |               Dibuat Oleh :                |\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t |           Kadek Rega Prawira Suyoga        |\n");
	printf("\t\t\t\t |      I Gede Khresna Adi Wedanta Beratha    |\n");
	printf("\t\t\t\t |                                            |\n");
	printf("\t\t\t\t +--------------------------------------------+\n");
	printf("\n\n");
	printf("\t\t\t\t   ++++++++++ **Enter to Continue** +++++++++  \n");
	getch();
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
//                                              			 //
// Versi : 1.1                                     Rev. 1                //
//                                                 Tgl: 06-12-2021       //
// Revisi 1       : Merapikan tampilan menu pada fungsi menu             //
//                  Mengganti nama fungsi menjadi menuUtama              //
// Direvisi Oleh  : Khresna Adi Wedanta - 2105551038                     //
//=======================================================================//

void menuUtama (void){
	menuUtama:
	system("cls");
	printf("\n\n");
	header();
	int menuUtama;
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                    MAIN MENU                     ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] DAFTAR LAPTOP                               ||\n");
	printf("\t\t\t\t ||  [2] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ||  [3] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ||  [4] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : "); // Memilih Jasa yang diinginkan
	scanf("%d", &menuUtama);
	//memilih menu
		if(menuUtama==1){
			menuLaptop();
		}
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
//                                              			 //
// Versi : 1.1                                     Rev. 1                //
//                                                 Tgl: 06-12-2021       //
// Revisi 1       : Merapikan tampilan menu pada fungsi pilihanmenu      //
//                  Mengganti nama fungsi menjadi menuLaptop             //
// Direvisi Oleh  : Khresna Adi Wedanta - 2105551038                     //
//=======================================================================//

void menuLaptop (void){
	menuAwal:;
		
	int i, unit, menuLaptop[100];
	char pilihan, jumlah[100];
	
	system("cls");
	printf("\n\n");
	header();
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                   DAFTAR LAPTOP                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  <1>  Mackbook Air 2020                          ||\n");
	printf("\t\t\t\t ||  <2>  Mackbook Pro M1                            ||\n");
	printf("\t\t\t\t ||  <3>  ASUS TUF Gaming F15                        ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||  [Y]  Pemesanan                                  ||\n");
	printf("\t\t\t\t ||  [T]  Kembali                                    ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||  >> ingin memesan? : ");
	scanf("%s", &pilihan);
	
	if (pilihan == 'y'|| pilihan =='Y'){
		
		printf("\t\t\t\t ||  >> Ingin pesan berapa unit Laptop? : ");
		scanf("%d", &unit);
	
		for(i=1; i<=unit; i++){  
			printf("\n\n");               //perulangan dalam memilih unit Laptop
			printf("\t\t\t\t >> Pilih Laptop ke-%i   : " , i);
			scanf("%i", &menuLaptop[i]);
	
			printf("\n");
		
			if (menuLaptop[i]==1){
				printf("\t\t\t\t >> Macbook Air 2020 \n");
			}
			else if(menuLaptop[i]==2){
				printf("\t\t\t\t >> Macbook Pro M1 \n");
			}
			else if(menuLaptop[i]==3){
				printf("\t\t\t\t >> ASUS TUF Gaming F15 \n");
			}
			else{
	   		goto menuAwal;
			}
		}
	}
	else if (pilihan=='t'||pilihan=='T'){
		menuUtama();
		getch();
	}		
}

//=======================================================================//
//***********       	  Fungsi Spec Laptop		 ****************//
//=======================================================================//
//                         >> 5 Desember 2021 <<           		 //
// Nama Fungsi    : specLaptop1, specLaptop2, specLaptop3                //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  suatu tipe laptop			                 //	
// Dibuat Oleh    : I GedeKhresna Adi Wedanta Beratha                    //
//                  (2105551038)                                         //
//=======================================================================//

void specLaptop1 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                    ** MACBOOK AIR 2020 **                                           |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar                                                                                         |\n");
	printf ("\t |       13,3 inci pada resolusi 2560 x 1600, dengan teknologi true tone dan kecerahan 400 nits.       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Chip Apple M1                                                                                 |\n");
	printf ("\t |       CPU 8 Core dan Neural Engine 16 Core                                                          |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8 GB memori (expandable up to 16 GB), SSD 256/512 GB (expandable up to 2 TB)                  |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Sistem Operasi                                                                                |\n");
	printf ("\t |       Mac OS                                                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Paket Pembelian                                                                               |\n");
	printf ("\t |       >> 1 unit Macbook Air                                                                         |\n");
	printf ("\t |       >> Adaptor Daya USB-C 30W                                                                     |\n");
	printf ("\t |       >> Kabel Pengisi Daya USB-C (2m)                                                              |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

void specLaptop2 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                    ** MACBOOK PRO M1 **                                             |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar                                                                                         |\n");
	printf ("\t |       13,3 inci pada resolusi 2560 x 1600, dengan teknologi true tone dan kecerahan 500 nits.       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Chip Apple M1                                                                                 |\n");
	printf ("\t |       CPU 8 Core dan Neural Engine 16 Core                                                          |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8 GB memori (expandable up to 16 GB), SSD 256 (expandable up to 2 TB)                         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Sistem Operasi                                                                                |\n");
	printf ("\t |       Mac OS                                                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Paket Pembelian                                                                               |\n");
	printf ("\t |       >> 1 unit Macbook Pro 13 inci                                                                 |\n");
	printf ("\t |       >> Adaptor Daya USB-C 61W                                                                     |\n");
	printf ("\t |       >> Kabel Pengisi Daya USB-C (2m)                                                              |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

void specLaptop3 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                   ** ASUS TUF GAMING F15 **                                         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar IPS Panel                                                                               |\n");
	printf ("\t |       15.6-inch, FHD (1920 x 1080) 16:9, anti-glare display, sRGB:62.5%, Refresh Rate 144Hz         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Prosesor Intel® Core™ i7-10750H Processor 2.6 GHz                                             |\n");
	printf ("\t |       12M Cache, up to 5.0 GHz, 6 cores                                                             |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8GB DDR4 SO-DIMM (expandable up to 32 GB), 512GB M.2 NVMe™ PCIe® 3.0 SSD                      |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       NVIDIA® GeForce® GTX 1660Ti, 6GB GDDR6                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Windows 10 Home (upgradeable to Windows 11)                                                   |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}
