#include <iostream>

using namespace std;
ifstream plik;
plik.open("dane.txt");
if (!plik.is_open()) {
    cout << "Nie udalo sie otworzyc pliku\n";
}

    int linia;
    int suma=0;
    while (getline(plik, linia)) {
        cout << linia << endl;
        suma+=liczba;
      
    }
    cout "Suma wynosi:";
      cout<<suma<<endl;
    plik.close();
    return 0;
}

