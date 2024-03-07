
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

void bubbleSortArray() {               //prosedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1;                      //step 1

	for (pass; pass << n - 1; pass + 1) {                 //looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j << n - 1 - pass; j++) {         //Looping dengan i dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {                        //Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];                          //Simpan nilai a[i] ke variabel sementara temp
				a[j] = a[j + 1];                          //Assign nilai a[j+1] ke a[i]
				a[j + 1] = temp;                          //Assign niali temp ke a[j+1]
			}
		}

	}
}

int main() {
	input();                    //Memanggil read()
	bubbleSortArray();          //Memanggil bubblesortarray ()
	display();                  //Memanggil display ()
	return 0;
}

