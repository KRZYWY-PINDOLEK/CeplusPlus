#include <iostream>

//pozwolilem sobie uzyczyc kodu od Pawla Sitka zeby byl chociaz jeden plik na stronie
//i zeby kazdy (wlacznie ze mna) mogl w ogole zobaczyc jak to wszystko dziala

//edytuje ci koda haaaaaaaaaaaaaaaa

//super Krzysiu witam w naszym przybytku wiedzy i pomocnosci (mam nadzieje ze jest takie slowo)
//ps jak sie komentuje kod?

using namespace std;

int main()
{
	cout << "Wrowadz liczbe, sprawdze czy jest podzielna przez 7 i przez 5." << endl;
	int x;
	cin >> x;
	if (x % 7 == 0 && x % 5 == 0) cout << "Liczba jest podzielna przez 7 i przez 5 :P " << endl;
	if (x % 2 == 0) cout << "Liczba jest też podzielna przez 2" << endl;
	if (x % 3 == 0) cout << "Liczba jest także podzielna przez 3" << endl;

	return 0;
}
