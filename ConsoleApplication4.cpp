//Geliştirici : FURKAN ÖZTÜRK
//Öğrenci no : B201200038
//Ödev no : 2
//Ödev açıklama : Matris oluşturma, Matris işlemleri ve Şifreleme

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "turkish");
	char devamEdilsinMi;
	do {
		int matrisA[5][5];
		cout << "A matris değerlerini 0-10 arasında giriniz :" << endl;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << "A[" << i << "][" << j << "] : ";
				cin >> matrisA[i][j];
			}
		}
		cout << endl << "matrisA :" << endl;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << setw(4) << matrisA[i][j];
			}
			cout << endl;
		}

		cout << endl << "matrisB :" << endl;
		int matrisB[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				matrisB[i][j] = rand() % 11;
				cout << setw(4) << matrisB[i][j];
			}
			cout << endl;
		}
		int sonuç[5][5];
		int işlem;
		while (true) {
			cout << "Bir işlem seçiniz (1=toplama 2=çarpma) :" << endl;
			cin >> işlem;
			if (işlem != 1 && işlem != 2) {
				cout << "yanlış işlem girdiniz.";
			}
			else break;
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (işlem == 1) {
					sonuç[i][j] = matrisA[i][j] + matrisB[i][j];
				}
				else {
					sonuç[i][j] = matrisA[i][j] * matrisB[i][j];
				}
				cout << setw(4) << sonuç[i][j];
			}
			cout << endl;
		}
		int satır;
		int sütun;

		cout << "şifrelemek istediğiniz satır ve sütunu giriniz (1-5 arasında)" << endl;
		cout << "satır: ";
		cin >> satır;
		cout << "sütun: ";
		cin >> sütun;
		satır--;
		sütun--;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == satır)
					cout << setw(4) << "*";
				else if (j == sütun)
					cout << setw(4) << "*";
				else
					cout << setw(4) << sonuç[i][j];
			}
			cout << endl;
		}
		cout << "devam etmek istiyor musunuz? (e/H)" << endl;
		cin >> devamEdilsinMi;
	} while (devamEdilsinMi == 'E' || devamEdilsinMi == 'e');

	cout << "program sonlandırılıyor, iyi günler.";


	return 0;

}