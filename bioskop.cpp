#include "Logic.h"

using namespace std;

int main (){
	int menu;
	Studio *arrStudio = NULL;
	init(arrStudio);
	do{
<<<<<<< HEAD
		system("cls");
		cout << "ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» " << endl;
		cout << "º                  Nama Bioskop                   º" << endl;
		cout << "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ " << endl;
		cout << "ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» " << endl;
		cout << "º                      MENU                       º" << endl;
		cout << "ºÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍº " << endl;
		cout << "º1. Pesan Tiket                                   º"  << endl;
		cout << "º2. List Film                                     º" << endl;
		cout << "º3. Cek Kursi                                     º" <<  endl;
		cout << "º4. List Jam tayang                               º"<< endl;
		cout << "º5. Input Film                                    º"<< endl;
		cout << "º6. Keluar                                        º"<< endl;
=======
		cout << "�������������������������������������������������ͻ " << endl;
		cout << "�                  Nama Bioskop                   �" << endl;
		cout << "�������������������������������������������������ͼ " << endl;
		cout << "�������������������������������������������������ͻ " << endl;
		cout << "�                      MENU                       �" << endl;
		cout << "�������������������������������������������������ͺ " << endl;
		cout << "�1. Pesan Tiket                                   �"  << endl;
		cout << "�2. List Film                                     �" << endl;
		cout << "�3. Input Jadwal                                  �" <<  endl;
		cout << "�4. List Jam tayang                               �"<< endl;
		cout << "�5. Keluar                                        �"<< endl;
>>>>>>> origin/algo_waktu
		
		cout << "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ " << endl;
		cout << " " << endl;
		cout << "|======================================================================================================================|" << endl;
		cout << " " << endl;
		cout << " Pilih : ";
		cin >> menu; 	//Input data ke variabel menu
		
		switch(menu)
		{
		    case 1:
		    	input(arrStudio);
				    break;
				
			    case 2:
			    	system("cls");
					displayFilm();
					getch();
					break;
				
			    case 3:
<<<<<<< HEAD
			    	layar(arrStudio[0]);
=======
			    	setJadwal(arrStudio);
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
>>>>>>> origin/algo_waktu
					break;
					
			    case 4: 
					cout << endl;
					cout << endl;
					cout << "ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» " << endl;
					cout << "º                                                    JAM TAYANG                                                       º" << endl;
					cout << "º                                    Berikut list jam tayang film pada hari ini                                       º" << endl;
					cout << "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ " << endl;
					cout << endl;
					cout << "ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» " << endl;
					cout << "º\t No \t\tJudul Film  \t\t\t\t    Jam Tayang Film \t\t\t\t      º" << endl;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 1 \t\tKKN Desa Penari  \t\t\t    08.40, 10.50, 12.30, 14.25, 15.35, 18.10, 19.00   º" << endl;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 2 \t\tKuntilanak 3\t\t\t\t    08.00, 09.30, 11.40, 13.20, 15.20, 17.50, 20.20   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 3 \t\tDoctor Strange\t\t\t\t    08.10, 10.20, 11.40, 13.00, 16.30, 17.40, 18.20   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 4 \t\tMosul\t\t\t\t\t    08.40, 10.50, 12.10, 13.00, 15.45, 18.30, 19.40   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 5 \t\tKamu Tidak Sendiri \t\t\t    09.40, 11.50, 13.30, 14.50, 16.00, 18.10, 20.00   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 6 \t\tGara Gara Warisan \t\t\t    09.00, 10.30, 12.20, 15.30, 17.50, 19.40, 28.30   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 7 \t\tTokyo Ghoul \t\t\t\t    08.50, 11.10, 13.20, 14.30, 16.20, 18.00, 20.10   º" << endl ;
					cout << "º                                                                                                                     º" <<endl;
					cout << "º\t 8 \t\tAshiap Man \t\t\t\t    10.30, 12.00, 13.50, 15.50, 17.30, 18.50, 20.50   º" << endl ;
					cout << "ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ " << endl;
					cout << endl;
					break;
			
				case 5:
					inputFilm();
					break;
				
			
			    case 6:
			    	beforeExit();
			    	break;
			
			    default: cout << "Menu tidak ditemukan";
			    break;
		}
	}while(true);
	return 0;
}
