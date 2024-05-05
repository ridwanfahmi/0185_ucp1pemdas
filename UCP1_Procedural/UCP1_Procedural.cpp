// 1. int, float, string
// 2. prosedur ini tidak mengembalikan nilai, tapi melewatan nilai, contoh penggunakan void (nama prosedur)
//    fungsi ini mengembalikan nilai, contoh penggunaan tipe data - nama fungsi
// 3. looping digunakan untuk mengulangi sebuah proses pada program, contohnya for (kondisi awal, akhir, pengubah kondisi)
//    while (kondisi), Do {} while (kondisi)
// 4. digunakan untuk menentukan hasil dari kondisi-kondisi tertentu, contoh jika nilai rata"nya 80 maka lulus 
// 5. struct digunakan untuk menampung banyak data dari sebuah entitas atau objek, contoh struct mahasiswa, struktur ini bisa menampung
//    nim, nama, dan alamat




#include <iostream>
using namespace std;

int main()
{
	int ts1, ts2, ts3, bs1, bs2, bs3, rerataharianT, rerataharianB;
	string status;
	string kota1, kota2;

	cout << "Masukkan Nama Kota: ";
	cin >> kota1;

	cout << "Masukkan Tingkat Polutan s1: ";
	cin >> ts1;

	cout << "Masukkan Tingkat Polutan s2: ";
	cin >> ts2;

	cout << "Masukkan Tingkat Polutan s3: ";
	cin >> ts3;

	cout << "Masukkan Nama kota: ";
	cin >> kota2;

	cout << "Masukkan Tingkat Polutan s1: ";
	cin >> bs1;

	cout << "Masukkan Tingkat Polutan s2: ";
	cin >> bs2;

	cout << "Masukkan Tingkat Polutan s3: ";
	cin >> bs3;

	rerataharianT = (ts1 + ts2 + ts3) / 3;
	rerataharianB = (bs1 + bs2 + bs3) / 3;

	if (rerataharianT >= 75) {
		status = "Tidak Sehat";
	}
	else if (ts1 || ts2 || ts3 >= 45) {
		status = "Tidak sehat";
	}

	else if (rerataharianT < 75){
		status = "Sehat";
	}
	else if (rerataharianB >= 75) {
		status = "Tidak Sehat";
	}
	else if (bs1 || bs2 || bs3 >= 45) {
		status = "Tidak sehat";
	}

	else if (rerataharianB < 75) {
		status = "Sehat";
	}

	cout << "Nama Kota : " << kota1 << endl;
	cout << "Tingkat Polutan Sensor 1 : " << ts1 << endl;
	cout << "Tingkat Polutan Sensor 2 : " << ts2 << endl;
	cout << "Tingkat Polutan Sensor 3 : " << ts3 << endl;
	cout << "Rata Rata Tingkat Polutan Harian : " << rerataharianT << endl;
	cout << "Statusnya adalah : " << status << endl;

	cout << "Nama Kota : " << kota2 << endl;
	cout << "Tingkat Polutan Sensor 1 : " << bs1 << endl;
	cout << "Tingkat Polutan Sensor 2 : " << bs2 << endl;
	cout << "Tingkat Polutan Sensor 3 : " << bs3 << endl;
	cout << "Rata Rata Tingkat Polutan Harian : " << rerataharianB << endl;
	cout << "Statusnya adalah : " << status << endl;

	return 0;
}