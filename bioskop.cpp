#include "Logic.h"

using namespace std;

int main (){
	int menu;
	Studio *arrStudio = NULL;
	init(arrStudio);
	do{
		cout << "�������������������������������������������������ͻ " << endl;
		cout << "�                  Nama Bioskop                   �" << endl;
		cout << "�������������������������������������������������ͼ " << endl;
		cout << "�������������������������������������������������ͻ " << endl;
		cout << "�                      MENU                       �" << endl;
		cout << "�������������������������������������������������ͺ " << endl;
		cout << "�1. Pesan Tiket                                   �"  << endl;
		cout << "�2. List Film                                     �" << endl;
		cout << "�3. Cek Kursi                                     �" <<  endl;
		cout << "�4. List Jam tayang                               �"<< endl;
		cout << "�5. Keluar                                        �"<< endl;
		
		cout << "�������������������������������������������������ͼ " << endl;
		cout << " " << endl;
		cout << "|======================================================================================================================|" << endl;
		cout << " " << endl;
		cout << " Pilih : ";
		cin >> menu; 	//Input data ke variabel menu
		system("cls");
		switch(menu)
		{
		    case 1:
		    	input(arrStudio);
//			    char rep; 	//variable rep bertipe data char
//				cout <<endl;
//				cout << "���������������������������������������������������������������������������ͻ " << endl;
//				cout << "�                            Mohon perhatikan                               �" << endl;
//				cout << "� Sebelum memesan tiket pastikan anda sudah cek jadwal film dan harga tiket �" << endl;
//				cout << "���������������������������������������������������������������������������ͼ " << endl;
//				cout << "\n\n Tekan Y untuk Lanjutkan atau N untuk kembali = ";
//				cin >> rep;		    //Input data akan dimasukan ke rep
//				system("cls");
//				    if (rep == 'N' || rep == 'n')
//				    {
//				        exit();
//				    }
//					cout << endl;
//				    do
//				    {
//				        cout << "Total " << sisabangku << " Tempat duduk yang tersisa.\n";
//				        cout << endl;
//				        cout << "Masukkan jumlah tiket : ";
//				        cin >> tiket;		    //Input data akan dimasukan ke var tiket
//				
//				        if (tiket > 10)
//				        {
//				            cout << "Maximal pembelian 10 Tiket\n\n";
//				        }
//				    } while (tiket > 10 || tiket > sisabangku);
//				    system("cls");
//				    cout << "";
//				    layar(arrStudio[0]);			 //menampilkan data tempat duduk yang tersedia dan sudah terbooking
//				    input();		    // menampilkan form input data pemesanan tiket n 
//				    cout << endl
//				         << endl;
//					listFilm();
				    break;
				
			    case 2:
					listFilm();
					break;
				
			    case 3:
			    	layar(arrStudio[0]);
//					cout << endl;
//					cout << endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͻ " << endl;
//					cout << "�                                                     HARGA TIKET                                                     �" << endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͼ " << endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͻ " << endl;
//					cout << "�\t  Senin\t\t Selasa\t\t Rabu\t\tKamis\t\tJumat\t\tSabtu\t\tMinggu        �" <<endl;
//					cout << "�                                                                                                                     �" <<endl;
//					cout << "� B\t  35k \t\t  30k \t\t 30k \t\t 30k \t\t 40k \t\t 50k \t\t 50k          �" <<endl;
//					cout << "�                                                                                                                     �" <<endl;
//					cout << "� V\t  65k \t\t  50k \t\t 50k \t\t 50k \t\t 75k \t\t 90k \t\t 90k          �" <<endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͼ " << endl;
//					cout << endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͻ " << endl;
//					cout << "�                                                      B = Biasa                                                      �" << endl;
//					cout << "�                                                      V = VIP                                                        �" << endl;
//					cout << "���������������������������������������������������������������������������������������������������������������������ͼ " << endl;
//					cout << endl;
					break;
					
			    case 4:
					cout << endl;
					cout << endl;
					cout << "���������������������������������������������������������������������������������������������������������������������ͻ " << endl;
					cout << "�                                                    JAM TAYANG                                                       �" << endl;
					cout << "�                                    Berikut list jam tayang film pada hari ini                                       �" << endl;
					cout << "���������������������������������������������������������������������������������������������������������������������ͼ " << endl;
					cout << endl;
					cout << "���������������������������������������������������������������������������������������������������������������������ͻ " << endl;
					cout << "�\t No \t\tJudul Film  \t\t\t\t    Jam Tayang Film \t\t\t\t      �" << endl;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 1 \t\tKKN Desa Penari  \t\t\t    08.40, 10.50, 12.30, 14.25, 15.35, 18.10, 19.00   �" << endl;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 2 \t\tKuntilanak 3\t\t\t\t    08.00, 09.30, 11.40, 13.20, 15.20, 17.50, 20.20   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 3 \t\tDoctor Strange\t\t\t\t    08.10, 10.20, 11.40, 13.00, 16.30, 17.40, 18.20   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 4 \t\tMosul\t\t\t\t\t    08.40, 10.50, 12.10, 13.00, 15.45, 18.30, 19.40   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 5 \t\tKamu Tidak Sendiri \t\t\t    09.40, 11.50, 13.30, 14.50, 16.00, 18.10, 20.00   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 6 \t\tGara Gara Warisan \t\t\t    09.00, 10.30, 12.20, 15.30, 17.50, 19.40, 28.30   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 7 \t\tTokyo Ghoul \t\t\t\t    08.50, 11.10, 13.20, 14.30, 16.20, 18.00, 20.10   �" << endl ;
					cout << "�                                                                                                                     �" <<endl;
					cout << "�\t 8 \t\tAshiap Man \t\t\t\t    10.30, 12.00, 13.50, 15.50, 17.30, 18.50, 20.50   �" << endl ;
					cout << "���������������������������������������������������������������������������������������������������������������������ͼ " << endl;
					cout << endl;
					break;
			
			    case 5:
			    	exit();
			    	break;
			
			    default: cout << "Menu tidak ditemukan";
			    break;
		}
	}while(true);
	return 0;
}
