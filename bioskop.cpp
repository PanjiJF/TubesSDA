#include "Logic.h"

using namespace std;

int main (){
	int menu;
	Studio *arrStudio = NULL;
	init(arrStudio);
	do{

		system("cls");
		cout << "�������������������������������������������������ͻ" << endl;
		cout << "�                  Nama Bioskop                   �" << endl;
		cout << "�������������������������������������������������ͼ" << endl;
		cout << "�������������������������������������������������ͻ" << endl;
		cout << "�                      MENU                       �" << endl;
		cout << "�������������������������������������������������ͺ" << endl;
		cout << "�1. Pesan Tiket                                   �" << endl;
		cout << "�2. List Film                                     �" << endl;
		cout << "�3. Input Jadwal                                  �" << endl;
		cout << "�4. Input Jadwal                                  �" << endl;
		cout << "�5. Input Film                                    �" << endl;
		cout << "�6. Keluar                                        �" << endl;


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
			   	setJadwal(arrStudio);
                break;

            case 4:

                break;

            case 5:
				inputFilm();
                break;


			case 6:
			  	beforeExit(arrStudio);
			   	break;

			default:
                cout << "Menu tidak ditemukan";
			    break;
		}
	}while(true);
	return 0;
}
