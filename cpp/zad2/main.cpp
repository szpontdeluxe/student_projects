#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string imie;
	string nazwisko;
	cout<<"Podaj swoje imie"<<endl;
	cin>>imie;
	cout<<"Podaj swoje nazwisko"<<endl;
	cin>>nazwisko;
	fstream plik;
	plik.open("dane.txt",ios::app);
	if (!plik.is_open()){
	cout<<"Nie działa";
	return 1;
	}

	plik<<imie + nazwisko;
	plik.close();
	return 0;
	cout<<imie + "" + nazwisko + "\n";
	cout<<"czy dodac jeszcze jakies dane??";
	char x = "t";
	cin>>x;
	string nowe;
	if (x===t){
	
}
}
