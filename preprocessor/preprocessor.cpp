#include <iostream>
#include "function.h"
#define INTEGER
#define FLOAT
#define CHAR
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) (x) * (x) * (x)
#define POW(x) (x) * (x)
#define EVEN_NOT_EVEN(x) ( x % 2 == 0 ? "Четное" : "Не четное" )
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Наименьшее из двух чисел: " << MIN(23, 15) << endl;
	cout << "Наибольшее из двух чисел: " << MAX(23, 15) << endl;
	cout << "Возведение числа в квадрат: " << SQUARE(3) << endl;
	cout << "Возведение числа в степень: " << POW(3) << endl;
	cout << "Проверка числа на четноесть или не четность: " << EVEN_NOT_EVEN(3) << endl;

	cout << "\n////////////////////////////////*************INTEGER**************////////////////////////////////////\n";
	const int size = 10;
	int arrInteger[size];
	fillingTheArrayWithRandomValues(arrInteger, size);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsole(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElement(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElement(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sorting(arrInteger, size);
	outputOfArrayValuesToTheConsole(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValue(arrInteger);
	outputOfArrayValuesToTheConsole(arrInteger, size);
#undef INTEGER

	cout << "\n////////////////////////////////*************FLOAT**************////////////////////////////////////\n";
	const int size1 = 10;
	float arrFloat[size1];
	fillingTheArrayWithRandomValues(arrFloat, size1);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsole(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElement(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElement(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sorting(arrFloat, size1);
	outputOfArrayValuesToTheConsole(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValue(arrFloat);
	outputOfArrayValuesToTheConsole(arrFloat, size1);
#undef FLOAT

	cout << "\n////////////////////////////////*************CHAR**************////////////////////////////////////\n";
	const int size2 = 10;
	char arrChar[size2];
	fillingTheArrayWithRandomValues(arrChar, size2);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsole(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElement(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElement(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sorting(arrChar, size2);
	outputOfArrayValuesToTheConsole(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValue(arrChar);
	outputOfArrayValuesToTheConsole(arrChar, size2);
#undef CHAR
}
