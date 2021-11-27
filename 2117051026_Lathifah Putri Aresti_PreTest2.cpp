#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	/* Nama		: Lathifah Putri Aresti
	   NPM		: 2117051026
	   Kelas	: D
	*/
	
	double berat_badan;
	double tinggi_badan;
	double BMI;
	
	//Input//
	cout << "Masukkan berat badan (kg) : ";
	cin >> berat_badan;
	cout << "Masukkan tinggi badan (m) : ";
	cin >> tinggi_badan;
	
	//Output//
	BMI = berat_badan/(tinggi_badan*tinggi_badan);
	
	cout << "Body mass index : " << BMI << endl;
	
	return 0;
}
