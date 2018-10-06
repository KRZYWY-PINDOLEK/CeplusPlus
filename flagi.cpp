#include <iostream>
#include <windows.h>

using namespace std;

int liczbaK = 0;
int k = 39;
int liczbaW = 0;
int w = 12;
bool czyGwiazdka = true;
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12)

int main()
{
	/*//DO WHILE
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "DO WHILE\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);
	do {
		do {
			cout << "*";
			liczbaK++;
		} while (liczbaK < k);
		if (liczbaW >= 5) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		}
		liczbaW++;
		cout << "\n";
		liczbaK = 0;
	} while (liczbaW < w);


	// WHILE
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nWHILE\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);

	while (liczbaW <= w) {
		if (liczbaW > 6) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		}
		while (liczbaK < k) {
			cout << "*";
			liczbaK++;
		} liczbaW++;
		cout << "\n";
		liczbaK = 0;
	}

	// FOR
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nFOR\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		if (liczbaW >= 6) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		}
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	} */

	// FOR AREMENIA
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nARMENIA\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		if (liczbaW >= 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		if (liczbaW >= 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9 + 9 * 16);
		if (liczbaW >= 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14 + 14 * 16);
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	}

	// FOR AUSTRIA
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nAUSTRIA\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		if (liczbaW >= 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		if (liczbaW >= 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);
		if (liczbaW >= 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	}

	// FOR GWINEA
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nGWINEA\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			if (liczbaK >= 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
			if (liczbaK >= 12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14 + 14 * 16);
			if (liczbaK >= 24) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2 + 2 * 16);
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	}

	// FOR RUMUNIA
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nRUMUNIA\n";
	liczbaK = 0;
	liczbaW = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			if (liczbaK >= 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9 + 9 * 16);
			if (liczbaK >= 12) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14 + 14 * 16);
			if (liczbaK >= 24) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	}

	// AMERICA FUCK YEAH
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	cout << "\n\nAMERICA FUCK YEAH (wiem ze liczba gwiazdek sie nie zgadza, ale przynajmniej jest 13 paskow)\n";
	liczbaK = 0;
	liczbaW = 0;
	w = 13;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);

	for (liczbaW = 0; liczbaW < w; liczbaW++) {
		if (liczbaW%2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
		else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);
		for (liczbaK = 0; liczbaK < k; liczbaK++) {
			if ((liczbaK < 17) && (liczbaW < 7)) {
				if (czyGwiazdka) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 9 * 16);
					czyGwiazdka = !czyGwiazdka;
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9 + 9 * 16);
					czyGwiazdka = !czyGwiazdka;
				}
			}
			else if (liczbaW % 2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 + 12 * 16);
			else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 + 15 * 16);
			cout << "*";
		} cout << "\n";
		liczbaK = 0;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

	system("pause");
	return 0;
}
