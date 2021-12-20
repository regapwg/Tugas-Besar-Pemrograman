//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>       	 Library dan Tipe data           <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 5 Desember 2021 <<                         //
// Nama Library      : stdlib.h                                          //
// Deskripsi         : berfungsi untuk clearscreen                       //
// Dibuat Oleh       : I Gede Khresna Adi Wedanta Beratha - 2105551038   //
//                                                                       //
//                         >> 5 Desember 2021 <<           	         //
// 1. Nama Tipe data : Char                                              //
//    Deskripsi      : berfungsi untuk menggunakan variabel berupa       //
//                     karakter                                          //
// 2. Nama Tipe data : Struct dengan variabel user, didalamnya terdapat  //
//                     variabel char                                     //
//    Deskripsi      : berfungsi untuk menampung beberapa variabel       //
//    Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005            //
//                                                                       //
//                         >> 10 Desember 2021 <<           	         //
// 1. Nama Library   : time.h                                            //
//    Deskripsi      : berfungsi untuk menggunakan waktu sistem          //
//                                                                       //
//-----------------------------------------------------------------------//

#include <stdio.h>     // library menu utama 
#include <stdlib.h>   // Library System Clearscreen
#include <time.h>   //Library Untuk Tanggal 

void judulProgram (void); //fungsi tampilan judul program

void header(void); //fungsi untuk menampilkan header program

void menuLogin (void); //fungsi login

void menuUtama (void); //fungsi tampilan menu utama ketika login

void menuUtama2 (void); //fungsi tampilan menu utama tanpa login

void menuLaptop (void); //fungsi tampilan menu laptop

void listSpesifikasi (void); //fungsi tampilan list spesifikasi laptop

void listSpesifikasi2 (void); //fungsi tampilan list spesifikasi laptop tanpa login

void opsiKembali (void); //fungsi opsi kembali untuk fungsi spesifikasi (login)

void opsiKembali2 (void); //fungsi opsi kembali untuk fungsi spesifikasi (tanpa login)

void specLaptop1 (void); //fungsi menampilkan spec laptop 1

void specLaptop2 (void); //fungsi menampilkan spec laptop 2

void specLaptop3 (void); //fungsi menampilkan spec laptop 3

void specLaptop4 (void); //fungsi menampilkan spec laptop 4

void specLaptop5 (void); //fungsi menampilkan spec laptop 5

void specLaptop6 (void); //fungsi menampilkan spec laptop 6

void specLaptop7 (void); //fungsi menampilkan spec laptop 7

void specLaptop8 (void); //fungsi menampilkan spec laptop 8

void specLaptop9 (void); //fungsi menampilkan spec laptop 9

void specLaptop10 (void); //fungsi menampilkan spec laptop 10

char username[20]; 
char password [20];

struct Data{
    char nama[100];
    char password[100];
}user;

FILE*kumpulandata; //pointer untuk mengakses file

//-----------------------------------------------------------------------//
//>>>>>>>>>>>                   Program Utama                 <<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 4 Desember 2021 <<           		 //
// Nama 	  : int main (void)                                      //
// Deskripsi      : program utama berisikan beberapa fungsi yang akan    //
//                  dijalankan, diantaranya judulprogram (); menu();     //	
//                  serta pilihanmenu (input_program);                   //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga  - 2105551005              //
//                                                                       //
//                         >> 5 Desember 2021 <<           	         //
// Revisi 1       : Merubah isi fungsi yang digunakan hanya judulProgram //
//                  dan menuLogin(); saja                                //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//

int main (void){
	
	judulProgram();
	menuLogin();
	 	
	
	return (0);
 }
 
//-----------------------------------------------------------------------//
//<<<<<<<<<<<<<<    Fungsi Untuk Menampilkan Judulprogram  <<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 4 Desember 2021 <<           		 //
// Nama Fungsi    : judulprogram                                         //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan judul program //
//                  saat program pertama kali di buka                    //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                                              			 //
//                         >> 6 Desember 2021 <<           		 //
// Revisi 1       : Merapikan tampilan menu pada fungsi judulprogram     //
//                  Mengganti nama fungsi menjadi judulProgram           //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//

void judulProgram (void){
	printf("\n\n\n\n\n");
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


//-----------------------------------------------------------------------//
//>>>>>>>>>>>         Fungsi Untuk Menggunkan header          <<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           		 //
// Nama Fungsi    : header                                               //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan header di     //
//                  setiap menu yang di tampilkan                        //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                         >> 9 Desember 2021 <<           		 //
// Revisi 1       : Menambahkan sistem waktu dan tanggal otomatis yang   //
//                  diambil berdasarkan waktu server                     //
// Direvisi Oleh  : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                         >> 10 Desember 2021 <<           	         //
// Revisi 2       : Menghapus penggunaan beberapa struct variabel        //
//                  sebelumnya dan merapikan penulisan coding            //
// Direvisi Oleh  : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
// Revisi 3       : Memperbaiki tampilan dan menambahkan sistem hari     //
//                  otomatis yang diambil berdasarkan waktu server       //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//
void header (void){
	
int bulan, tanggal, tahun, jam, menit, detik, hari;
char date[64];	
		      					
	time_t kalender; //Tipe data dari library time.h
	time(&kalender);
		
		struct tm*data = localtime(&kalender); 	//Tipe data dan variabel untuk waktu system 
			bulan = data->tm_mon + 1;
			tanggal = data->tm_mday;
			tahun = data->tm_year + 1900;
			jam = data->tm_hour;
			menit = data-> tm_min;
			detik = data->tm_sec;
			hari = data->tm_wday;
	
	printf("\t\t\t\t                      Mley'o Tech                      \n");
	printf("\t\t\t\t         Jl. Disana GG. Disini No.666, Denpasar        \n");
	printf("\t\t\t\t                     +62 81246810121                   \n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	strftime(date, 64, "\t\t\t\t %A, %d %B %Y", data);
    	printf(date);
	printf("\t\t       %02i:%02i:%02i", jam, menit, detik );
	printf("\n\n");
}


//-----------------------------------------------------------------------//
//>>>>>>>>>>>    Fungsi Untuk Menggunakan sistem menuLogin    <<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 5 Desember 2021 <<           		 //
// Nama Fungsi    : menuLogin                                            //
// Deskripsi      : fungsi ini berfungsi untuk melakukan login serta     //
//                  registrasi akun sebelum masuk ke menu utama          //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                         >> 10 Desember 2021 <<           	         //
// Revisi 1       : Menambahkan Opsi User tanpa Login                    //
// Direvisi Oleh  : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
// Revisi 2       : Memperbaiki tampilan pada menu login dan daftar      //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//

void menuLogin(void){
	awalmenu: //
	system("cls");
        #define true 1
        #define false 0
	int opsi, status;
	
 	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||         Welcome to Program Toko Mley'o Tech      ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
        printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                   1 | Masuk                      ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                   2 | Login                      ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||                   3 | Daftar                     ||\n");		
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");	
	printf("\n");
	printf("\t\t\t\t >> Input Pilihan : ");
	scanf("%d", &opsi);
		switch(opsi){
					
		case 1:
			menuUtama2();
		break;		
	    case 2: //log-in setelah membuat akun
			
								
			system("cls");
			kumpulandata = fopen("user","r+"); //
					
			printf ("\n\n");
			header(); 
			printf ("\n");
			printf ("\t\t\t\t\t         USERNAME  : ");
			scanf("%s", &username);
			printf ("\n");
			printf ("\t\t\t\t\t         PASSWORD  : ");
			scanf("%s", &password);
							
			while(fscanf(kumpulandata,"\n%s\n%s",user.nama,user.password)!=EOF){ //
								            
				if((strcmp(user.nama,username) == 00) && 
				(strcmp(user.password,password)==00)){ //
			    status = true;
			    break;
			    }
	    	}	
				       				
		if (status) { //jika benar akan masuk ke menu utama
			system("cls");
			printf("\n\n\n\n\n");
			printf("\t\t\t\t\t +------------------------------------------+\n");
			printf("\t\t\t\t\t |          Program Toko Mley'o Tech        |\n");
			printf("\t\t\t\t\t +------------------------------------------+\n");
			printf("\t\t\t\t\t |                                          |\n");
			printf("\t\t\t\t\t |           !! LOGIN BERHASIL !!           |\n");
			printf("\t\t\t\t\t |                                          |\n");
			printf("\t\t\t\t\t |            enter to continue             |\n");
			printf("\t\t\t\t\t |                                          |\n");
			printf("\t\t\t\t\t +------------------------------------------+\n");
			getch();
			menuUtama();
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
						
		case 3: //untuk melakukan registrasi apabila belum memiliki akun
			system("cls");
			kumpulandata=fopen("user","a+"); //membuka file
				
			printf ("\n\n");
			header(); 
			printf ("\n");
			printf ("\t\t\t\t\t         USERNAME  : ");
			scanf("%s", &user.nama);
			printf ("\t\t\t\t\t         PASSWORD  : ");
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
									
			fprintf(kumpulandata,"\n%s",user.nama); //menyimpan data ke file
			fprintf(kumpulandata,"\n%s",user.password);
			fclose(kumpulandata);	//				
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>        Fungsi Untuk Menampilkan Menu	    <<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 4 Desember 2021 <<           	         //
// Nama Fungsi    : menu                                                 //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan menu utama    //
//                  dalam program ini			                 //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga -  2105551005              //
//                                                                       //
//                                              		         //
//                         >> 6 Desember 2021 <<                         //
// Revisi 1       : Merapikan tampilan menu pada fungsi menu             //
//                  Mengganti nama fungsi menjadi menuUtama              //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//

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
	printf("\t\t\t\t ||  [2] SPESIFIKASI LAPTOP                          ||\n");
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
		else if(menuUtama==2){
			listSpesifikasi();
		}
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>  Fungsi Untuk Menampilkan Menu Tanpa Login  <<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 10 Desember 2021 <<                        //
// Nama Fungsi    : menuUtama2                                           //
// Deskripsi      : fungsi ini berfungsi untuk menampilkan menu utama    //
//                  dalam program user tanpa login                       //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga -  2105551005              //
//-----------------------------------------------------------------------//
void menuUtama2 (void){
	menuUtama2:
	system("cls");
	printf("\n\n");
	header();
	int menuUtama;
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                    MAIN MENU                     ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] SPESIFIKASI LAPTOP                          ||\n");
	printf("\t\t\t\t ||  [2] REKOMENDASI LAPTOP (Coming Soon)            ||\n");
	printf("\t\t\t\t ||  [3] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ||  [4] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ||  [5] Coming Soon ~                               ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||  [97] Coming Soon ~                              ||\n");
	printf("\t\t\t\t ||  [98] Coming Soon ~                              ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t || >> Selamat datang, silahkan pilih : "); // Memilih Jasa yang diinginkan
	scanf("%d", &menuUtama);
	//memilih menu
		if(menuUtama==1){
			listSpesifikasi2();
		}
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>       	     Fungsi Pilihan Menu	 <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 4 Desember 2021 <<           	         //
// Nama Fungsi    : pilihanmenu                                          //
// Deskripsi      : fungsi ini berfungsi untuk memilih kondisi menu      //
//                  dalam program ini			                 //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                                              			 //
//                         >> 6 Desember 2021 <<                         //
// Revisi 1       : Merapikan tampilan menu pada fungsi pilihanmenu      //
//                  Mengganti nama fungsi menjadi menuLaptop             //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//							                 //
//                         >> 9 Desember 2021 <<                         //
// Revisi 2       : Merapikan tampilan menu pada fungsi menuLaptop       //
//                  menambahkan menu lanjutan ke pembayaran              //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//									 //
// Revisi 3       : Merapikan tampilan menu pada data diri pembeli       //
// Direvisi Oleh  : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                         >> 10 Desember 2021 <<           	         //
// Revisi 4       : Merapikan tampilan menu pada bagian daftar bank      //
//                  dan merubah beberapa nama variabel                   //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//                         >> 20 Desember 2021 <<           	         //
// Revisi 5       : Menambahkan menu laptop baru dan memperbaiki         //
//                  tampilan menu daftar laptop                          //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//									 //
// Revisi 6       : Menambahkan menu laptop baru                         //
// Direvisi Oleh  : Kadek Rega Prawira Suyoga - 2105551005               //
//-----------------------------------------------------------------------//
void menuLaptop (void){
	menuAwal:;
		
	const char * namaLaptop[100][25];
		
	int data, unit, menuLaptop[100], harga[100], totalTagihan = 0;
	char pilihan, checkout, jumlah [100];
	
	system("cls");
	printf("\n\n");
	header();
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||            DAFTAR LAPTOP                   |       HARGA      ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  <1>  Mackbook Air 2020                    |   Rp.16.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <2>  Mackbook Pro M1                      |   Rp.20.900.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <3>  ASUS TUF Gaming F15                  |   Rp.18.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <4>  ASUS TUF Gaming A15                  |   Rp.16.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <5>  ASUS TUF Dash F15 2021               |   Rp.18.799.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <6>  HP Pavilion x360 Convertible         |   Rp.14.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <7>  HP Pavilion Gaming dk2068TX          |   Rp.15.499.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <8>  Lenovo Legion Y740                   |   Rp.28.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <9>  Lenovo Legion 7i                     |   Rp.29.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <10>  Lenovo Legion 5 Pro                 |   Rp.35.200.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||                         [Y]  Checkout                         ||\n");
	printf("\t\t\t  ||                         [T]  Kembali                          ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  >> ingin checkout Laptop? : ");
	scanf("%s", &pilihan);
	
	if (pilihan == 'y'|| pilihan =='Y'){
		printf("\t\t\t  ||  >> Ingin checkout berapa unit Laptop? : ");
		scanf("%d", &unit);
		printf("\t\t\t\t ++--------------------------------------------------++\n\n");
		
		for(data=1; data<=unit; data++){  
		printf("\n");               //perulangan dalam memilih unit Laptop
		printf("\t\t\t  >> Pilih Laptop ke-%d   : " , data);
		scanf("%d", &menuLaptop[data]);
		printf("\n");
		printf("\t\t\t  >> Jumlah Unit         : " , data);
		scanf("%i", &jumlah[data]);
		printf("\n");
			
		
			if (menuLaptop[data]==1){
				harga[data]= 16500000;
				namaLaptop[data][data]= "Macbook Air 2020";
			}
			else if(menuLaptop[data]==2){
				harga[data]= 20900000;
				namaLaptop[data][data]= "Macbook Pro M1";	
			}
			else if(menuLaptop[data]==3){
				harga[data]= 18500000;
				namaLaptop[data][data]= "ASUS TUF Gaming F15";	
			}
			else if(menuLaptop[data]==4){
				harga[data]= 16899000;
				namaLaptop[data][data]= "ASUS TUF Gaming A15";	
			}
			else if(menuLaptop[data]==5){
				harga[data]= 18799000;
				namaLaptop[data][data]= "ASUS TUF Dash F15 2021";	
			}
			else if(menuLaptop[data]==6){
				harga[data]= 14999000;
				namaLaptop[data][data]= "HP Pavilion x360 Convertible";	
			}
			else if(menuLaptop[data]==7){
				harga[data]= 15499000;
				namaLaptop[data][data]= "HP Pavilion Gaming dk2068TX ";	
			}
			else if(menuLaptop[data]==8){
				harga[data]= 28899000;
				namaLaptop[data][data]= "Lenovo Legion Y740";	
			}
			else if(menuLaptop[data]==9){
				harga[data]= 29999000;
				namaLaptop[data][data]= "Lenovo Legion 7i";	
			}
			else if(menuLaptop[data]==10){
				harga[data]= 35200000;
				namaLaptop[data][data]= "Lenovo Legion 5 Pro";	
			}
			else{
				printf ("\t\t\t\t >> Masukan Pilihan Yang Sesuai! << ");
				getch();
	   			goto menuAwal;
			}	
	}	
		
		for(data=1; data<=unit; data++){
		harga[data] = harga[data] * jumlah[data];
		totalTagihan = totalTagihan + harga[data];
		}
		
 			system("cls");
			printf("\n\n");
			header();
			printf("\n");
			printf("\t\t\t   -----------------------------------------------------------------\n");
			for(data=1; data<=unit; data++){
				printf("\t\t\t   >> Nama Unit         : %s\n",namaLaptop[data][data]);
				printf("\t\t\t   >> Jumlah            : %i\n",jumlah[data]);
				printf("\t\t\t   >> Total Harga       : Rp.%d\n",harga[data]);
				printf("\t\t\t   -----------------------------------------------------------------\n");				
			} 
				
			
			printf("\n");
			printf("\t\t\t   TOTAL TAGIHAN : Rp.%d  ||  ", totalTagihan);
			printf("Teruskan Pemesanan? (y/n) : ");
			getchar();
			checkout = getchar();
			printf("\t\t\t   -----------------------------------------------------------------\n\n");	
			 
			checkout:;
			char namaCustomer[100] ;
			char HP[20];
			char alamat[50];
                        if(checkout == 'y'||checkout == 'Y'){                                             
				system("cls");
				printf("\n\n");
				header();
				printf("\n");
				printf("\t\t\t   -----------------------------------------------------------------\n");	
				printf("\t\t\t                      Silahkan Isi Data Diri Anda\n\n");
				printf("\t\t\t   >> Nama          : "); fflush(stdin);
				gets(namaCustomer);
				printf("\t\t\t   >> No Telepon    : "); fflush(stdin);
				gets(HP);
				printf("\t\t\t   >> Alamat        : "); fflush(stdin);
				gets(alamat);
				printf("\t\t\t   -----------------------------------------------------------------\n\n");
			    	printf("\t\t\t                     >> Data Berhasil Tersimpan <<\n\n");
			    	printf("\t\t\t   Silahkan Lakukan Pembayaran Melalui Salah Satu Rekening Berikut : \n\n");
			    	printf("\t\t\t   CIMB Niaga     : 2105551038");
			    	printf("\t         Bank Syariah   : 2105551005\n");
			    	printf("\t\t\t   BCA            : 2105551038");
			    	printf("\t         DANA           : 2105551005\n");
			    	
			    
			    	getchar();
			    	menuUtama();
			}
			
			 
			else if(checkout == 'n'||checkout == 'N'){
				goto menuAwal;
			}
			else{
				printf("\t\t\t\t         Input salah, Masukkan Input yang Benar!    \n");	
				printf("\t\t\t\t                   Enter untuk Coba Lagi         \n");
				goto checkout;
			}
	}
	else if (pilihan=='t'||pilihan=='T'){
		menuUtama();
		getch();
	}
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>       	  Fungsi List Spesifikasi	 <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           	   	 //
// Nama Fungsi    : listSpesifikasi                                      //
// Deskripsi      : berfungsi untuk menampilkan menu list laptop         //
//                  yang digunakan untuk melihat spesifikasi laptop      //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//                         >> 20 Desember 2021 <<           	         //
// Revisi 1       : Menambahkan pilihan laptop baru dan memperbaiki      //
//                  tampilan menu daftar laptop                          //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//
void listSpesifikasi (void){
	menuSpec:;
	
	int unit;
	char pilihan;
	
	system("cls");
	printf("\n\n");
	header();
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||            DAFTAR LAPTOP                   |       HARGA      ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  <1>  Mackbook Air 2020                    |   Rp.16.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <2>  Mackbook Pro M1                      |   Rp.20.900.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <3>  ASUS TUF Gaming F15                  |   Rp.18.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <4>  ASUS TUF Gaming A15                  |   Rp.16.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <5>  ASUS TUF Dash F15 2021               |   Rp.18.799.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <6>  HP Pavilion x360 Convertible         |   Rp.14.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <7>  HP Pavilion Gaming dk2068TX          |   Rp.15.499.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <8>  Lenovo Legion Y740                   |   Rp.28.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <9>  Lenovo Legion 7i                     |   Rp.29.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <10>  Lenovo Legion 5 Pro                 |   Rp.35.200.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||                     [Y]  Lihat Spesifikasi                    ||\n");
	printf("\t\t\t  ||                     [T]  Kembali                              ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  >> Cek spesifikasi? : ");
	scanf("%s", &pilihan);
	
	if (pilihan == 'y'|| pilihan =='Y'){
		
		printf("\t\t\t  ||  >> Silahkan pilih Laptop yang diinginkan  : ");
		scanf("%d", &unit);
		printf("\t\t\t\t  ++--------------------------------------------------++\n");
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
			else if(unit==4){
				system("cls");
				specLaptop4 ();
				opsiKembali ();	
			}
			else if(unit==5){
				system("cls");
				specLaptop5 ();
				opsiKembali ();	
			}
			else if(unit==6){
				system("cls");
				specLaptop6 ();
				opsiKembali ();	
			}
			else if(unit==7){
				system("cls");
				specLaptop7 ();
				opsiKembali ();	
			}
			else if(unit==8){
				system("cls");
				specLaptop8 ();
				opsiKembali ();	
			}
			else if(unit==9){
				system("cls");
				specLaptop9 ();
				opsiKembali ();	
			}
			else if(unit==10){
				system("cls");
				specLaptop10 ();
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>       	 Fungsi List Spesifikasi2	 <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 10 Desember 2021 <<                   	 //
// Nama Fungsi    : listSpesifikasi2                                     //
// Deskripsi      : berfungsi untuk menampilkan menu list spesifikasi    //
//                  laptop untuk user tanpa login                        //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//                         >> 20 Desember 2021 <<           	         //
// Revisi 1       : Menambahkan pilihan laptop baru dan memperbaiki      //
//                  tampilan menu daftar laptop                          //
// Direvisi Oleh  : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//-----------------------------------------------------------------------//
void listSpesifikasi2 (void){
	menuSpec:;
	
	int unit;
	char pilihan;
	
	system("cls");
	printf("\n\n");
	header();
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||            DAFTAR LAPTOP                   |       HARGA      ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  <1>  Mackbook Air 2020                    |   Rp.16.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <2>  Mackbook Pro M1                      |   Rp.20.900.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <3>  ASUS TUF Gaming F15                  |   Rp.18.500.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <4>  ASUS TUF Gaming A15                  |   Rp.16.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <5>  ASUS TUF Dash F15 2021               |   Rp.18.799.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <6>  HP Pavilion x360 Convertible         |   Rp.14.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <7>  HP Pavilion Gaming dk2068TX          |   Rp.15.499.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <8>  Lenovo Legion Y740                   |   Rp.28.899.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <9>  Lenovo Legion 7i                     |   Rp.29.999.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ||  <10>  Lenovo Legion 5 Pro                 |   Rp.35.200.000  ||\n");
	printf("\t\t\t  ++--------------------------------------------+------------------++\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||                     [Y]  Lihat Spesifikasi                    ||\n");
	printf("\t\t\t  ||                     [T]  Kembali                              ||\n");
	printf("\t\t\t  ++---------------------------------------------------------------++\n");
	printf("\t\t\t  ||  >> Cek spesifikasi? : ");
	scanf("%s", &pilihan);
	
	if (pilihan == 'y'|| pilihan =='Y'){
		
		printf("\t\t\t  ||  >> Silahkan pilih Laptop yang diinginkan  : ");
		scanf("%d", &unit);
		printf("\t\t\t  ++--------------------------------------------------++\n");
			if (unit==1){
				system("cls");
				specLaptop1 ();
				opsiKembali2 ();
			}
			else if(unit==2){
				system("cls");
				specLaptop2 ();
				opsiKembali2 ();
			}
			else if(unit==3){
				system("cls");
				specLaptop3 ();
				opsiKembali2 ();	
			}
			else if(unit==4){
				system("cls");
				specLaptop4 ();
				opsiKembali2 ();	
			}
			else if(unit==5){
				system("cls");
				specLaptop5 ();
				opsiKembali2 ();	
			}
			else if(unit==6){
				system("cls");
				specLaptop6 ();
				opsiKembali2 ();	
			}
			else if(unit==7){
				system("cls");
				specLaptop7 ();
				opsiKembali2 ();	
			}
			else if(unit==8){
				system("cls");
				specLaptop8 ();
				opsiKembali2 ();	
			}
			else if(unit==9){
				system("cls");
				specLaptop9 ();
				opsiKembali2 ();	
			}
			else if(unit==10){
				system("cls");
				specLaptop10 ();
				opsiKembali2 ();	
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


//-----------------------------------------------------------------------//
//>>>>>>>>>>>            Fungsi Untuk Opsi Kembali            <<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           	         //
// Nama Fungsi    : opsiKembali                                          //
// Deskripsi      : fungsi ini berfungsi untuk memilih opsi kembali ke   //
//                  menu sebelumnya ataupun menu utama yang digunakan    //	
//                  di setiap menu                                       //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                              		         //
//-----------------------------------------------------------------------//
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>            Fungsi Untuk Opsi Kembali 2          <<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                                              		         //
//                         >> 12 Desember 2021 <<           	         //
// Nama Fungsi    : opsiKembali2                                         //
// Deskripsi      : fungsi ini berfungsi untuk memilih opsi kembali ke   //
//                  menu sebelumnya dan alert untuk melakukan login      //	
//                  terlebih dahulu                                      //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//-----------------------------------------------------------------------//

void opsiKembali2 (void){
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
		system ("cls");
		printf("\n\n\n\n");
		printf("\t\t\t >>  Silahkan Kembali ke Menu Awal Untuk Log-in Terlebih Dahulu << ");
		getch();
		menuLogin();
	}   
}	


//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>      	    Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop1                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop MACBOOK AIR 2020	                 //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//

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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop		 <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           	     	 //
// Nama Fungsi    : specLaptop2                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	MACBOOK PRO M1                           //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 6 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop3                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	ASUS TUF GAMING F15                      //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop4                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	ASUS TUF GAMING A15                      //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop4 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                   ** ASUS TUF GAMING A15 **                                         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar IPS Panel                                                                               |\n");
	printf ("\t |       15.6-inch, FHD (1920 x 1080) 16:9, anti-glare display, sRGB:62.5%, Refresh Rate 144Hz         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] AMD Ryzen™ 7 4800H Mobile Processor                                                           |\n");
	printf ("\t |       (8C/16T, 12MB Cache, 4.2 GHz Max Boost)                                                       |\n");
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

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop5                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	ASUS TUF DASH F15 2021                   //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop5 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                  ** ASUS TUF DASH F15 2021 **                                       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar IPS Panel                                                                               |\n");
	printf ("\t |       15.6-inch, FHD (1920 x 1080) 16:9, anti-glare display, sRGB:62.5%, Refresh Rate 144Hz,        |\n");
	printf ("\t |       Adobe:47.34%, Value IPS-level, Optimus                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Intel® Core™ i7-11370H Processor 3.3 GHz, 4 cores                                             |\n");
	printf ("\t |        (12M Cache, up to 4.8GHz)                                                                    |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8GB DDR4 on board, Max Capacity : 32GB                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       NVIDIA® GeForce RTX™ 3060 Laptop GPU, 6GB GDDR6                                               |\n");
	printf ("\t |       With ROG Boost up to 1525MHz at 80W (85W with Dynamic Boost)                                  |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Windows 10 Home (upgradeable to Windows 11)                                                   |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop6                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	HP Pavilion x360 Convertible             //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop6 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                              ** HP Pavilion x360 Convertible **                                     |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar IPS Panel                                                                               |\n");
	printf ("\t |       14 inch diagonal FHD touch display FHD (1920 x 1080)        				  |\n");
	printf ("\t |       Multitouch-enabled, IPS, edge-to-edge glass, micro-edge, 250 nits, 45% NTSC                   |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Intel® Evo™ platform 11th Gen Intel® Core™ i7 processor                                       |\n");
	printf ("\t |       (up to 4.7 GHz with Intel® Turbo Boost Technology, 12 MB L3 cache, 4 cores)                   |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8 GB DDR4-3200 MHz RAM (2 x 4 GB), 512 GB SSD storage                                         |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       Intel® Iris® X? Graphics                                        			          |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Windows 10 Home Single Language 64                                                            |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop5                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	HP Pavilion Gaming dk2068TX              //	
// Dibuat Oleh    : I Gede Khresna Adi Wedanta Beratha - 2105551038      //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop7 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                              ** HP Pavilion Gaming dk2068TX **                                      |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Layar IPS Panel                                                                               |\n");
	printf ("\t |       15.6 inch diagonal, FHD (1920 x 1080)       					          |\n");
	printf ("\t |       144 Hz, IPS, micro-edge, anti-glare, 250 nits, 45% NTSC                                       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Intel® Core™ i7-11370H                                                                        |\n");
	printf ("\t |       (up to 4.8 GHz with Intel® Turbo Boost Technology, 12 MB L3 cache, 4 cores)                   |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       8 GB DDR4-3200 MHz RAM (1 x 8 GB), 512 GB PCIe® NVMe™ M.2 SSD                                 |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       NVIDIA® GeForce® GTX 1650 Laptop GPU (4 GB GDDR6 dedicated)                   	          |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Windows 10 Home Single Language 64                                                            |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop8                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	Lenovo Legion Y740                       //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop8 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                   * Lenovo Legion Y740 *                                            |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Display                                                                                       |\n");
	printf ("\t |       15.6 inch FHD (1920 x 1080), 72% color gamut, NVIDIA ® G-SYNC      			          |\n");
	printf ("\t |       Dolby Vision-enabled, 144 Hz, 300 nits                                                        |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] 8th Gen Intel® Core™ i7-8750H processor                                                       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       16 GB DDR4 2666 MHz, Up to 512 GB PCIe NVMe, Up to 1 TB HDD 7200RPM                           |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       NVIDIA® GeForce® RTX 2060                                                   	          |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Windows 10 Home                                                                               |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop9                                          //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop Lenovo Legion 7i                         //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop9 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                    * Lenovo Legion 7i *                                             |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Display                                                                                       |\n");
	printf ("\t |       15,6 inch FHD (1920 x 1080), WVA, 300 nits, 144Hz, hingga 5ms untuk waktu respon              |\n");
	printf ("\t |       100% Adobe sRGB, Dolby Vision™ supported                                                      |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] 10th Gen Intel® Core™ i7-10870H                                                               |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       32GB 3200MHz DDR4, 1TB M.2 NVMe PCIe SSD (RAID 0)                                             |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       NVIDIA®GeForce RTX™ 2060 with Max-Q Design                                                    |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Up to Windows 11 Pro                                                                          |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}

//-----------------------------------------------------------------------//
//>>>>>>>>>>>>>>      	  Fungsi Spec Laptop	         <<<<<<<<<<<<<<<<//
//-----------------------------------------------------------------------//
//                         >> 20 Desember 2021 <<           	         //
// Nama Fungsi    : specLaptop10                                         //
// Deskripsi      : berfungsi untuk menampilkan deskripsi spec dari      //
//                  tipe laptop	Lenovo Legion 5 Pro                      //	
// Dibuat Oleh    : Kadek Rega Prawira Suyoga - 2105551005               //
//                                                                       //
//-----------------------------------------------------------------------//
void specLaptop10 (void){
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |                                  * Lenovo Legion 5 Pro *                                            |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
	printf ("\t | SPESIFIKASI :                                                                                       |\n");
	printf ("\t |   [1] Display                                                                                       |\n");
	printf ("\t |       16 inch QHD (2560 x 1600) IPS, 16:10, 500 nits, 165Hz / 3ms response time, 100% sRGB, VESA    |\n");
	printf ("\t |       DisplayHDR™-certified, Dolby Vision™-enabled, NVIDIA®G-SYNC®, AMD Freesync™                   |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [2] Up to AMD Ryzen™ 7 5800H                                                                      |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [3] Memori dan Penyimpanan                                                                        |\n");
	printf ("\t |       Up to 16GB, Up to 2TB M.2 NVMe PCIe SSD                                                       |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [4] Graphic Card                                                                                  |\n");
	printf ("\t |       Up to NVIDIA®GeForce RTX™ 3070 Laptop GPU 8GB GDDR6, listed boost clock 1560MHz               |\n");
	printf ("\t |       achieved boost clock 1620MHz, maximum graphics power 140W                                     |\n");
	printf ("\t |                                                                                                     |\n");
	printf ("\t |   [5] Sistem Operasi                                                                                |\n");
	printf ("\t |       Up to Windows 11 Pro                                                                          |\n");
	printf ("\t +-----------------------------------------------------------------------------------------------------+\n");
}
