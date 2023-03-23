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

void isertionsort() {      //procedure insertionsort

	int temp;      //membuat variable data temporer atau penyimpanan sementara
	int j;         //membuat variable j sebagai penanda
	for (int i = 1; i < n; i++) {      //looping dengan i dimulai dari 1 hingga n+1

		temp = arr[i];      // simpan nilai arr[i] ke variable sementara temp
		j = i - 1;        //setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) {     //looping while dimana nilai j lebih besar sama dengan 0 dan
			arr[j + 1] = arr[j];     //arr[j] lebih besar daripada temp
			j--;               //decrement nilai j by 1
		}
		arr[j + 1] = temp;     //simpan nilai temp ke dalam arr[j+1]

		cout << "\nstep " << i << ": ";    //output ke layar
		for (int k = 0; k < n; k++) {     //looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";    //output ke layar
		}
	}
}

void display() {           //procedure display
	cout << endl;    // output baris kosong 
	cout << "\n==================================" << endl;     //output ke layar
	cout << "Element Array yang telah tersusun" << endl;       // output ke layar
	cout << "=================================" << endl;        // output ke layar

	for (int j = 0; j < n; j++) {       //looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;        //output ke layar
	}
	cout << endl; //output baris kosong
}

int main() {
	input();            //memanggil input
	isertionsort();     //memanggil insertionsort
	display();          //memanggil display
}