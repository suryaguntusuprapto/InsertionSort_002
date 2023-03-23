#include <iostream>
using namespace std;

int arr[20];      //membuat array dengan panjang data 20
int n;         //membuat variable inputan n

void input() {    //procedure input
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : "; //membuat inputan jumlah element array
		cin >> n;       //memanggil variable inputan n

		if (n <= 20)      //membuat kondisi n tidak lebih dari 20
		{
			break;
		}
		else {
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; //menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "masukkan data ke-" << (i + 1) << ":";
		cin >> arr[i];
	}

}