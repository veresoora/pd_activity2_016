#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {	//Untuk menghitung luas persegi panjang
	return p * l;
}

float luassegitiga(float a, float t) {			//Untuk menghitung luas segitiga
	return 0.5 * a * t;
}

float luaslingkaran(float r) {					//Untuk menghitung luas lingkaran
	return 3.14 * r * r;
}

int main() {
	
	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;

	do {

		cout << "---------------------" << endl;
		cout << "-------M E N U-------" << endl;
		cout << "---------------------" << endl;

		cout << "1. luas persegipanjang" << endl;
		cout << "2. luas segitiga" << endl;
		cout << "3. luas lingkaran" << endl;
		cout << "4. exit" << endl;

		cout << "masukan pilihan : ";
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "\nMasukan Panjangnya = ";
			cin >> panjang;
			cout << "\nMasukan Lebarnya   = ";
			cin >> lebar;
			cout << "\nMaka Luasnya adalah = " << Luaspersegipanjang(panjang, lebar) << endl;
			break;
		case 2:
			cout << "\nMasukan alasnya   = ";
			cin >> alas;
			cout << "\nMasukan tingginya = ";
			cin >> tinggi;
			cout << "\nMaka Luasnya adalah = " << luassegitiga(alas, tinggi) << endl;
			break;
		case 3:
			cout << "\nMasukan Jari - Jarinya = ";
			cin >> jejari;
			cout << "\nMaka Luasnya adalah = " << luaslingkaran(jejari) << endl;
			break;
		case 4:
			break;
		default:
			cout << "\nPilihan yang anda masukan salah !";
			break;
		}
	} while (pilihan != 4);
}