#include <iostream>
#include <string>
using namespace std;

void cetak(double x){
	cout<<"Hasil double x = "<<x<<endl;
}

void cetak(string x){
	cout<<"Hasil string x = "<<x<<endl;
}

int main(){
	cout<<"PROGRAM LATIHAN FUNGSI OVER LOADING"<<endl;
	cout<<"__________SEMESTER 3_______"<<endl;
	cout<<"____DEDE PAISAL SUDRAJAT___"<<endl;
	cetak(3.5);
	cetak("Pemograman");
	cetak(6);
	cetak("Semangat");
	cin.get();
	return 0;
}

