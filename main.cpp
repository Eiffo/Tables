#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    const unsigned ile = 10;
    int liczby[ile];
    int i;
    int mini, maxi;
    float srednia, suma;

    cout << endl << "Podaj dziesiec liczb naturalnych:" << endl;

    for(i=0; i<ile; i++)
    {
        cout << endl << " Podaj " << i+1 << " liczbe: ";
        cin >> liczby[i];

    }

    cout << endl;

    for(i=0; i<ile; i++)
    {
        cout << liczby[i] << "; ";
    }

    cout << endl;


    /* Wyznaczam min i max */


    mini = liczby[0];
    maxi = liczby[0];

    for(i=1; i<10; i++)
    {
        if(liczby[i] > maxi)
            maxi = liczby[i];

        if(liczby[i] < mini)
            mini = liczby[i];
    }

    cout << endl << "Liczba najmniejsza to: " << mini;
    cout << endl << "Liczba najwieksza to: " << maxi << endl;


    /* Wyznaczam sume i srednia */

    suma = 0;

    for(i=0; i<ile; i++)
    {
        suma += liczby[i];
    }

    cout << endl << "Suma liczb wynosi: " << suma << endl;

    srednia = suma/ile;

    cout << "Srednia wynosi: " << srednia << endl;


    /* Wypisuje liczby i sprawdzam czy jest parzysta lub nie */


    for(i=0; i<ile; i++)
    {
        if(liczby[i]%2 == 0)
            cout << endl << liczby[i] << " - l. parzysta";
        if(liczby[i]%2 != 0)
            cout << endl << liczby[i] << " - l. nieparzsyta";
    }

    return 0;
}
