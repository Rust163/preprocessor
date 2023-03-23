#pragma 

#ifndef INTEGER
	void fillingTheArrayWithRandomValuesInteger(int arrInteger[], int size);
	void outputOfArrayValuesToTheConsoleInteger(int arrInteger[], int size);
	void findingTheMinimumElementInteger(int arrInteger[], int size);
	void findingTheMaximumElementInteger(int arrInteger[], int size);
	void sortingInteger(int arrInteger[], int size);
	void editingAnArrayValueInteger(int arrInteger[]);
#define fillingTheArrayWithRandomValues fillingTheArrayWithRandomValuesInteger;
#define outputOfArrayValuesToTheConsole outputOfArrayValuesToTheConsoleInteger;
#define findingTheMinimumElement findingTheMinimumElementInteger;
#define findingTheMaximumElement findingTheMaximumElementInteger;
#define sorting sortingInteger;
#define editingAnArrayValue editingAnArrayValueInteger;
#endif

#ifndef FLOAT
	void fillingTheArrayWithRandomValuesFloat(float arrFloat[], int size1);
	void outputOfArrayValuesToTheConsoleFloat(float arrFloat[], int size1);
	void findingTheMinimumElementFloat(float arrFloat[], int size1);
	void findingTheMaximumElementFloat(float arrFloat[], int size1);
	void sortingFloat(float arrFloat[], int size1);
	void editingAnArrayValueFloat(float arrFloat[]);
#define fillingTheArrayWithRandomValues fillingTheArrayWithRandomValuesFloat;
#define outputOfArrayValuesToTheConsole outputOfArrayValuesToTheConsoleFloat;
#define findingTheMinimumElement findingTheMinimumElementFloat;
#define findingTheMaximumElement findingTheMaximumElementFloat;
#define sorting sortingFloat;
#define editingAnArrayValue editingAnArrayValueFloat;
#endif

#ifndef CHAR
	void fillingTheArrayWithRandomValuesChar(char arrChar[], int size2);
	void outputOfArrayValuesToTheConsoleChar(char arrChar[], int size2);
	void findingTheMinimumElementChar(char arrChar[], int size2);
	void findingTheMaximumElementChar(char arrChar[], int size2);
	void sortingChar(char arrChar[], int size2);
	void editingAnArrayValueChar(char arrChar[]);
#define fillingTheArrayWithRandomValues fillingTheArrayWithRandomValuesChar;
#define outputOfArrayValuesToTheConsole outputOfArrayValuesToTheConsoleChar;
#define findingTheMinimumElement findingTheMinimumElementChar;
#define findingTheMaximumElement findingTheMaximumElementChar;
#define sorting sortingChar;
#define editingAnArrayValue editingAnArrayValueChar;
#endif