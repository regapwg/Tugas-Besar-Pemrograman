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

char username[20]; 
char password [20];

struct Data{
    char nama[100];
    char password[100];
}user;

FILE*kumpulandata; //pointer untuk mengakses file

//=======================================================================//
//>>>>>>>>>>>                     Program Utama               <<<<<<<<<<<//
//=======================================================================//
//                         >> 4 Desember 2021 <<          	         //
// Nama 	      : int main (void)                                  //
// Deskripsi      : program utama berisikan beberapa fungsi yang akan    //
//                  dijalankan, diantaranya judulprogram (); menu();     //	
//                  serta pilihanmenu (input_program);                   //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga  - 2105551005              //
//                                                                       //
//                                             		                 //
// Versi : 1.1                                     Rev. 1                //
//                                                 Tgl: 05-12-2021       //
// Revisi 1       : Merubah isi fungsi yang digunakan hanya judulProgram //
//                  dan menuLogin(); saja                                //
// Direvisi Oleh  : Khresna Adi Wedanta - 2105551038                     //
//=======================================================================//

int main (void){
	
	judulProgram();
	menuLogin();
	 	
	return (0);
 }
 
//***********************************************************************//
//>>>>>>>>>>>>>>  Fungsi Untuk Menampilkan Judulprogram    <<<<<<<<<<<<<<//
//***********************************************************************//
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
//>>>>>>>>>>>         Fungsi Untuk Menggunkan header          <<<<<<<<<<<//
//=======================================================================//
//                         >> 6 Desember 2021 <<           		         //
// Nama Fungsi    : header                                               //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan header di     //
//                  setiap menu yang di tampilkan                        //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//                                              	                 //
//=======================================================================//
void header (void){
	printf("\t\t\t\t                      Mley'o Tech                      \n");
	printf("\t\t\t\t         Jl. Disana GG. Disini No.666, Denpasar        \n");
	printf("\t\t\t\t                     +62 81246810121                   \n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\n");
}

//=======================================================================//
//>>>>>>>>>>>    Fungsi Untuk Menggunakan sistem menuLogin    <<<<<<<<<<<//
//=======================================================================//
//                         >> 5 Desember 2021 <<           	         //
// Nama Fungsi    : menuLogin                                            //
// Deskripsi      : fungsi ini berfungsi untuk melakukan login serta     //
//                  registrasi akun sebelum masuk ke menu utama          //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga                            //
//                  (2105551005)                                         //
//                                              		         //
//=======================================================================//
void menuLogin(void){
	awalmenu:
	system("cls");
 
	
		bool status;
		int opsi;
 	
 				printf("\n\n");
				printf("\t\t\t\t ++------------------------------------------++\n");
				printf("\t\t\t\t ||    Welcome to Program Toko Mley'o Tech   ||\n");
				printf("\t\t\t\t ++------------------------------------------++\n");
				printf("\t\t\t\t ||                                          ||\n");
				printf("\t\t\t\t ||             1 | Login                    ||\n");
				printf("\t\t\t\t ||                                          ||\n");
				printf("\t\t\t\t ||             2 | Daftar                   ||\n");		
				printf("\t\t\t\t ||                                          ||\n");
				printf("\t\t\t\t ++------------------------------------------++\n");	
				printf("\n");
				printf("\t\t\t\t >> Input Pilihan : ");
				scanf("%d", &opsi);
					switch(opsi){
						
							
						case 1: //log-in setelah membuat akun
						
								
							system("cls");
							kumpulandata = fopen("user","r+");
						
							printf ("\n\n\n"); 
							printf ("\t\t\t\t |  USERNAME  : ");
							scanf("%s", &username);
							printf ("\t\t\t\t +-----------------------+\n");
							printf ("\t\t\t\t |  PASSWORD  : ");
							scanf("%s", &password);
							
									while(fscanf(kumpulandata,"%s, %s",user.nama,user.password)!=EOF){
							            if((strcmp(user.nama,username) == 00) && (strcmp(user.password,password)==00)){
							                status = true;
							                break;
					           			}
				       				}	
				       				
						        	if (status) { //jika benar akan masuk ke menu utama
										menuUtama();
										getch();
							            system("cls");
						        	}
							    	else { //jika salah akan masuk kesini untuk opsi ke menu awal (login kembali)
							    		
							            system("cls");
							            printf("\n");
							            printf("\t\t\t\t +------------------------------------------+\n");
										printf("\t\t\t\t |          Program Toko Mley'o Tech        |\n");
										printf("\t\t\t\t +------------------------------------------+\n");
										printf("\t\t\t\t |                                          |\n");
										printf("\t\t\t\t |        !! LOGIN TIDAK BERHASIL !!        |\n");
										printf("\t\t\t\t |                                          |\n");
										printf("\t\t\t\t |            enter to continue             |\n");
										printf("\t\t\t\t |                                          |\n");
										printf("\t\t\t\t +------------------------------------------+\n");	
							          	getch();
							            goto awalmenu;
							    	} 
						break;
						
						case 2: //untuk melakukan registrasi apabila belum memiliki akun
							system("cls");
							kumpulandata=fopen("user","a+"); //membuka file
							printf ("\n\n\n"); 
							printf ("\t\t\t\t |  USERNAME  : ");
							scanf("%s", &user.nama);
							printf ("\t\t\t\t +--------------------------------------------------+\n");
							printf ("\t\t\t\t |  PASSWORD  : ");
							scanf("%s", &user.password);
							
							system("cls");
							printf("\n");
							printf("\t\t\t\t +------------------------------------------+\n");
							printf("\t\t\t\t |          Program Toko Mley'o Tech        |\n");
							printf("\t\t\t\t +------------------------------------------+\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t |      !! REGISTRASI TELAH BERHASIL !!     |\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t |            enter to continue             |\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t +------------------------------------------+\n");
									
							fprintf(kumpulandata,"\n%s(username), ",user.nama); //menyimpan data ke file
				            fprintf(kumpulandata,"%s(password)",user.password);
				            fclose(kumpulandata);
							getch();
							system("cls");			
							goto awalmenu; 
						break;
						
						default :
							system("cls");
							printf("\n");
							printf("\t\t\t\t +------------------------------------------+\n");
							printf("\t\t\t\t |          Program Toko Mley'o Tech        |\n");
							printf("\t\t\t\t +------------------------------------------+\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t |           !! INPUT ANDA SALAH !!         |\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t |              enter to continue           |\n");
							printf("\t\t\t\t |                                          |\n");
							printf("\t\t\t\t +------------------------------------------+\n");
								getch();
								goto awalmenu;
						break;
				    }
}

//=======================================================================//
//>>>>>>>>>>>>>>>      Fungsi Untuk Menampilkan Menu	  <<<<<<<<<<<<<<<//
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
//>>>>>>>>>>>>>>>      	     Fungsi Pilihan Menu	  <<<<<<<<<<<<<<<//
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
//>>>>>>>>>>>>>>>      	  Fungsi List Spesifikasi	  <<<<<<<<<<<<<<<//
//=======================================================================//
//                         >> 6 Desember 2021 <<           	         //
// Nama Fungsi    : listSpesifikasi                                      //
// Deskripsi      : berfungsi untuk menampilkan menu list laptop         //
//                  yang digunakan untuk melihat spesifikasi laptop      //	
// Dibuat Oleh    : I GedeKhresna Adi Wedanta Beratha                    //
//                  (2105551038)                                         //
//=======================================================================//
void listSpesifikasi (void){
	menuSpec:;
	
	int unit;
	char pilihan;
	
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
	printf("\t\t\t\t ||  [Y]  Melihat Spesifikasi                        ||\n");
	printf("\t\t\t\t ||  [T]  Kembali                                    ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||  >> Cek spesifikasi? : ");
	scanf("%s", &pilihan);
	
	if (pilihan == 'y'|| pilihan =='Y'){
		
		printf("\t\t\t\t ||  >> Silahkan pilih Laptop yang diinginkan  : ");
		scanf("%d", &unit);
		printf("\t\t\t\t ++--------------------------------------------------++\n");
			if (unit==1){
				system("cls");
				specLaptop1 ();
				opsiKembali ();
			}
			else if(unit==2){
				system("cls");
				specLaptop2 ();
				opsiKembali ();
			}
			else if(unit==3){
				system("cls");
				specLaptop3 ();
				opsiKembali ();	
			}
			else{
				printf("\t\t\t\t         Input salah, Masukkan Input yang Benar!    \n");	
				printf("\t\t\t\t                   Enter untuk Coba Lagi         \n");	
				getch();
				goto menuSpec;
			}
		}
		

	else if (pilihan=='t'||pilihan=='T'){
		menuUtama();
		getch();
	}		
}

//=======================================================================//
//>>>>>>>>>>>>>>>      	  Fungsi Spec Laptop		  <<<<<<<<<<<<<<<//
//=======================================================================//
//                         >> 6 Desember 2021 <<           		 //
// Nama Fungsi    : opsiKembali                                          //
// Deskripsi      : berfungsi untuk menampilkan pilihan kembali atau     //
//                  lanjut ke pemesanan			                 //	
// Dibuat Oleh    : I GedeKhresna Adi Wedanta Beratha                    //
//                  (2105551038)                                         //
//=======================================================================//

void opsiKembali (void){
	char opsi;
	
	printf ("\n\n");
	printf("\t\t\t\t >> [Y] Cek Spesifikasi lain \n");
	printf("\t\t\t\t >> [P] Pesan Sekarang \n\n");
	printf("\t\t\t\t >> Masukkan Pilihan : ");
	scanf("%s", &opsi);
				
	if (opsi == 'y' || opsi=='Y'){
		listSpesifikasi();
	}
	else if (opsi == 'p' || opsi=='P') {
		menuLaptop();
	}   
}	

//=======================================================================//
//>>>>>>>>>>>>>>>      	  Fungsi Spec Laptop		  <<<<<<<<<<<<<<<//
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
