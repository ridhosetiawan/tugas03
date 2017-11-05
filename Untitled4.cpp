#include <iostream>
using namespace std;
 int main(){
 	int x;
 	cout << "Masukan Angka = "; cin >> x;
 	if (x>0){
 		cout << x << " Ini Adalah Bilangan Positif";	
	 }else if(x<0){
	 	cout << x << " Ini Adalah Bilangan Negatif";
	 }else if(x==0){
	 	cout << x << " Ini Adalah Bilangan Nol";
	 }
 }
