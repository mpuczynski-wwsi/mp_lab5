#include <stdio.h>
#include <iostream>
#include "Temperatura.cpp"
#include "Celsjusz.cpp"
#include "Fahrenheit.cpp"
#include "Kalvin.cpp"

using namespace std;

/**
      Napisz program realizujący zadanie przeliczania podanej temperatury zgodnej z wybraną 
      poprzez menu użytkownika skali na  temperatury pozostałych skal.

Menu

    Kalvin
    Fahrenheit
    Celsjusz

Uwaga:

- w ramach zadania utwórz klasę „Temperatura”, zawierającą chronione pole „temp” 
oraz publiczne metody dostępowe do tego pola o nazwie „setTemp” i „getTemp”

- zadaniem metody „setTemp” jest ustalenie wartości dla pola „temp” na taką, jaka zostanie 
podana jako argument jej wywołania.

- zadaniem metody „getTemp” jest przekazanie wartości pola „temp”

- utwórz klasy o nazwach zgodnych z punktami menu. Każda z tych klas 
powinna dziedziczyć po klasie „Temperatura”

- w utworzonych klasach specjalistycznych zdefiniuj metody publiczne przeliczające 
podaną temperaturę na dwie inne skale np.: klasa Celsjusz będzie posiadała 
metody „c_k” i „c_f” przeliczające odpowiednio temperaturę podana w stopniach Celsjusza 
na temperaturę w stopniach Kelvina i Fahrenheita

*/

void menu();

int main(int argc, char const *argv[])
{
  menu();
  return 0;
}


void menu(){
  int wybor = 0;
  float temp;
  Celsjusz c;
  Fahrenheit f;
  Kalvin k;

  do {
    cout <<  endl;
    cout << "MENU: " << endl;
    cout << "(1) Kalvin" << endl;
    cout << "(2) Fahrenheit" << endl;
    cout << "(3) Celsjusz" << endl;
    cout << "(0) Wyjdz" << endl;
    cout <<  endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Podaj temperature w Kalvinach: ";
        cin >> temp;
        k.setTemp(temp);
        cout << endl;
        k.show();
        cout << endl;

      break;
    case 2:
        cout << "Podaj temperature w Fahrenheitach: ";
        cin >> temp;
        cout << endl;
        f.setTemp(temp);
        f.show();
        cout << endl;
      break;
    case 3:
        cout << "Podaj temperature w Celsjuszach: ";
        cin >> temp;
        cout << endl;
        c.setTemp(temp);
        c.show();
        cout << endl;
      break;
    }
  } while (wybor != 0);
}