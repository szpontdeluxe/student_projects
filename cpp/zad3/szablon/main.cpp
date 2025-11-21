#include <iostream>

using namespace std;

int main(){
ifstream plik("dane.txt");
plik.open("dane.txt");
if (!plik.is_open()) {
    cout << "Nie udalo sie otworzyc pliku\n";
	return 1;
}

    int linia;
    int suma=0;
    while (getline(plik, linia)) {
        cout << linia << endl;
        suma+=linia;
    }
    cout<< "Suma wynosi:";
      cout<<suma<<endl;
    plik.close();
    return 0;
}

