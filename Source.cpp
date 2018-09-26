#include <iostream>

//pozwolilem sobie uzyczyc kodu od Pawla Sitka zeby byl chociaz jeden plik na stronie
//i zeby kazdy (wlacznie ze mna) mogl w ogole zobaczyc jak to wszystko dziala
using namespace std;

int main()
{
	cout << "Wrowadz liczbe, sprawdze czy jest podzielna przez 7 i przez 5." << endl;
	int x;
	cin >> x;
	if (x % 7 == 0 && x % 5 == 0) cout << "Liczba jest podzielna przez 7 i przez 5 :P " << endl;
	if (x % 2 == 0) cout << "Liczba jest te¿ podzielna przez 2" << endl;
	if (x % 3 == 0) cout << "Liczba jest tak¿e podzielna przez 3" << endl;

	return 0;
}