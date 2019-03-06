/*
Nama Program 	: exercise-02
Nama 			: Sharashena Chairani
NPM 			: 140810180022
Kelas 			: B
Tanggal Buat 	: 06 Maret 2019
Deskripsi 		: Menginput dan mengoutput Room, Seat, dan Movie Title
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[10];
	
};

int main(){
	Theater Hollywood;
	Hollywood.room = 7;
	strcpy(Hollywood.seat, "J9");
	strcpy(Hollywood.movieTitle, "Adit & Jarwo");
	

	
	cout<<Hollywood.room<<endl;
	cout<<Hollywood.seat<<endl;
	cout<<Hollywood.movieTitle<<endl;
	
}
