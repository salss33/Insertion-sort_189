#include <iostream>
using namespace std;

int arr[20];                                     // Membuat Array dengan panjang data 20
int n;                                           // Membuat variable inputan n

void input() {                 // Procedure input
	while (true)
	{
		cout << "Masukan Jumlah Data Pada Array : "; // Membuat inputan jumlah element Array
		cin >> n;                                    // Memanggil variable inputan n

		if (n <= 20) {                                // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n";    // Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;                                    // Membuat jarak per baris program
	cout << "==============" << endl;                // Membuat tampilan susunan data element array
	cout << "Masukan Element Array" << endl; 
	cout << "==============" << endl;


	for (int i = 0; i < n; i++)                      // Memnggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";       // Memasukan atau menginputkan nilai data n
		cin >> arr[i];                               // Menyimpan nilai data n kedalam array arr
	}