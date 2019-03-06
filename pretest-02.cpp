/*
Nama Program 	: Pretest 02
Nama 			: Sharashena Chairani
NPM 			: 140810180022
Kelas 			: B
Tanggal Buat 	: 06 Maret 2019
Deskripsi 		: Mengurutkan data dari terkecil (0) yang berupa Array dengan panjang data 5
*/

#include <iostream>
using namespace std;

void input (int (&arr)[100], int& n){
	cout<<"Masukkan Panjang Data : ";cin>>n;
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
}

void moveZeroToFront (int arr[], int n){
	int count=0;
    for (int i=0; i<n; i++)
        if (arr[i] != 0)
            swap(arr[count++], arr[i]);
}

void output (int arr[], int n){
	cout << "Hasilnya  : ";
    for (int i = 0; i<n; i++)
    cout<<arr[i]<< " ";
}

int main(){
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToFront(arr,n);
	output (arr,n);
}

