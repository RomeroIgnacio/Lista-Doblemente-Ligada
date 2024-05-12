#include <algorithm>
#include <cstddef>
#include <iostream>
#include <iterator>
#include "ldl.h"

int main()
{
	LDL<int> enteros;

	enteros.push_front(5);
	//enteros.push_front(3);
	//enteros.push_front(1);
	enteros.push_back(7);
	//enteros.push_back(9);
	//enteros.pop_front();
	//enteros.pop_back();
	//enteros.insert(2, 4);
	//enteros.clear();
	//enteros.remove(5);

	//for (size_t i(0); i < enteros.size(); ++i)
	//{
	//	cout << enteros[i] << enteros.size() << endl;
	//}

	cout << "Vacía: " << enteros.empty() << endl << "Tamaño: " << enteros.size() << endl;
	cout << "Frente: " << enteros.front() << endl;
	cout << "Final: " << enteros.back() << endl;

    return 0;
}
