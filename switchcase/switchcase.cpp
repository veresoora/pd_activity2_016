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

	cout << "---------------------" << endl;
	cout << "-------M E N U-------" << endl;
	cout << "---------------------" << endl;

	cout << "1. luas persegipanjang" << endl;
	cout << "2. luas segitiga" << endl;
	cout << "3. luas lingkaran" << endl;
	cout << "4. exit" << endl;

	cout << "masukan pilihan : ";
	cin >> pilihan;
}