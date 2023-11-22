#include <fstream> // biblioteka pozwalająca na zapis i odczyt danych, File Stream
#include <cstdlib> // żeby działał exit(0);
#include <iostream>

using namespace std;

int main()
{
	fstream odczyt; //zmienna plikowa, określenie pliku, tzw. uchwyt do pliku
	string zmienna1;
	odczyt.open("password.txt", ios::in); // funkcja do otwarcia pliku, ścieżka pliku, tryb otwarcia ios::in->odczyt z pliku
		if (odczyt.good() == false)//zwraca wartość prawda/fałsz w zależności od tego czy istnieje plik
		{
			cout << "Brak pliku" << endl;
			exit(0);
		}
	odczyt >> zmienna1; // odczyt danych z pliku do utworzonej wcześniej zmiennej1,
	cout << zmienna1 << endl; // wypisane na ekranie odczytanej wartości
	odczyt.close(); // obowiązkowo zamkniecie pliku

}