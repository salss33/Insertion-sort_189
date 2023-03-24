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
