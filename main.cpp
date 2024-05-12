#include <iostream>
#include "ldl.h"

using namespace std;

int main()
{
    LDL<int> enteros;
    enteros.push_front(5);
    enteros.push_front(3);
    enteros.push_front(1);
    enteros.push_back(7);
    enteros.push_back(9);

    cout << "Vacía: " << enteros.empty() << endl
    << "Tamaño: " << enteros.size() << endl
    << "Frente: " << enteros.front() << endl
    << "Final: " << enteros.back() << endl;
    return 0;
}
