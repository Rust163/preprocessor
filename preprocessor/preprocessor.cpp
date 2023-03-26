#include <iostream>
#include "function.h"
#define CHAR
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) (x) * (x) * (x)
#define POW(x) (x) * (x)
#define EVEN_NOT_EVEN(x) ( x % 2 == 0 ? "Четное" : "Не четное" )
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Наименьшее из двух чисел: " << MIN(23, 15) << endl;
	cout << "Наибольшее из двух чисел: " << MAX(23, 15) << endl;
	cout << "Возведение числа в квадрат: " << SQUARE(3) << endl;
	cout << "Возведение числа в степень: " << POW(3) << endl;
	cout << "Проверка числа на четноесть или не четность: " << EVEN_NOT_EVEN(3) << endl;

#ifdef INTEGER
#include "function.h"
	cout << "\n////////////////////////////////*************INTEGER**************////////////////////////////////////\n";
	const int size = 10;
	int arrInteger[size];
	fillingTheArrayWithRandomValuesInteger(arrInteger, size);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsoleInteger(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElementInteger(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElementInteger(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sortingInteger(arrInteger, size);
	outputOfArrayValuesToTheConsoleInteger(arrInteger, size);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValueInteger(arrInteger);
	outputOfArrayValuesToTheConsoleInteger(arrInteger, size);
#endif // INTEGER
#ifdef FLOAT
#include "function.h"
	cout << "\n////////////////////////////////*************FLOAT**************////////////////////////////////////\n";
	const int size1 = 10;
	float arrFloat[size1];
	fillingTheArrayWithRandomValuesFloat(arrFloat, size1);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsoleFloat(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElementFloat(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElementFloat(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sortingFloat(arrFloat, size1);
	outputOfArrayValuesToTheConsoleFloat(arrFloat, size1);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValueFloat(arrFloat);
	outputOfArrayValuesToTheConsoleFloat(arrFloat, size1);
#endif // FLOAT
#ifdef CHAR
#include "function.h"
	cout << "\n////////////////////////////////*************CHAR**************////////////////////////////////////\n";
	const int size2 = 10;
	char arrChar[size2];
	fillingTheArrayWithRandomValuesChar(arrChar, size2);
	cout << "Show this array: " << endl;
	outputOfArrayValuesToTheConsoleChar(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find minimum this array: " << endl;
	findingTheMinimumElementChar(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Find maximum this array: " << endl;
	findingTheMaximumElementChar(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Lets sort this array: " << endl;
	sortingChar(arrChar, size2);
	outputOfArrayValuesToTheConsoleChar(arrChar, size2);
	cout << endl;
	cout << "\n==================================================\n";
	cout << "Edit value this array: " << endl;
	editingAnArrayValueChar(arrChar);
	outputOfArrayValuesToTheConsoleChar(arrChar, size2);
#endif // CHAR
}
