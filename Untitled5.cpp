#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << "====Program Berat Badan===" << endl;
	cout << "Berapa Tinggi badan Anda = "; cin >> tinggi;
	cout << "Berapa Berat badan Anda = "; cin >> berat;
		if (berat<tinggi/2.5){
			cout << "Underweight";
		}else if(tinggi/2.5 <= berat && berat <= tinggi/2.3){
			cout << "Normal";
		}else if(tinggi/2.3 < berat){
			cout << "Overweight";
		}
}
