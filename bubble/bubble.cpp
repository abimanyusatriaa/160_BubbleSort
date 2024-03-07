
#include <iostream>
using namespace std;

int a[20];             //deklarasi array a dengan ukuran 20
int n;                 //deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() { //prosedur untuk input 
	while (true) {     //Looping
		cout << "Masukan banyaknya elemen pada array : ";      //Output ke layar
		cin >> n;      //input dari pengguna
		if (n <= 20)   //jika n kurang dari atau sama dengan 20
			break;     //keluar dari loop
		else {         //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    //output ke layar
		}
	}
	cout << endl;                               //output baris kosong
	cout << "==================" << endl;       //output ke layar
	cout << "Masukan Elemen Array" << endl;     //output ke layar

	for (int i = 0; i < n; i++) {          //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";   //Output ke layar
		cin >> a[i];                       //output dari pengguna
	}
}

void display() {        //prosedur untuk menampilkan hasil
	cout << endl;       //output baris kosong
	cout << "===============================" << endl;       //output ke layar
	cout << "Elemen Array yang Telah Disusun" << endl;       //output ke layar
	cout << "===============================" << endl;       //output ke layar
	for (int j = 0; j < n; j++) {                 //looping dengan j dimulai dari 0 hingga n-1
		cout << "Data ke-" << j + 1 << ": ";
		cout << a[j] << endl;                     //output ke layar 
	}
	cout << endl;                                 //output baris kosong
}

int main()
