#pragma 

#ifndef INTEGER
void fillingTheArrayWithRandomValuesInteger(int arrInteger[], int size);
void outputOfArrayValuesToTheConsoleInteger(int arrInteger[], int size);
void findingTheMinimumElementInteger(int arrInteger[], int size);
void findingTheMaximumElementInteger(int arrInteger[], int size);
void sortingInteger(int arrInteger[], int size);
void editingAnArrayValueInteger(int arrInteger[]);
#define fillingTheArrayWithRandomValues(arrInteger, size) fillingTheArrayWithRandomValuesInteger(arrInteger, size)
#define outputOfArrayValuesToTheConsole(arrInteger, size) outputOfArrayValuesToTheConsoleInteger(arrInteger, size)
#define findingTheMinimumElement(arrInteger, size) findingTheMinimumElementInteger(arrInteger, size)
#define findingTheMaximumElement(arrInteger, size) findingTheMaximumElementInteger(arrInteger, size)
#define sorting(arrFloat, size1) sortingInteger(arrInteger, size)
#define editingAnArrayValue editingAnArrayValueInteger(arrInteger)
#endif

#ifndef FLOAT
void fillingTheArrayWithRandomValuesFloat(float arrFloat[], int size1);
void outputOfArrayValuesToTheConsoleFloat(float arrFloat[], int size1);
void findingTheMinimumElementFloat(float arrFloat[], int size1);
void findingTheMaximumElementFloat(float arrFloat[], int size1);
void sortingFloat(float arrFloat[], int size1);
void editingAnArrayValueFloat(float arrFloat[]);
#define fillingTheArrayWithRandomValues(arrFloat, size1) fillingTheArrayWithRandomValuesFloat(arrFloat, size1)
#define outputOfArrayValuesToTheConsole(arrFloat, size1) outputOfArrayValuesToTheConsoleFloat(arrFloat, size1)
#define findingTheMinimumElement(arrFloat, size1) findingTheMinimumElementFloat(arrFloat, size1)
#define findingTheMaximumElement(arrFloat, size1) findingTheMaximumElementFloat(arrFloat, size1)
#define sorting(arrFloat, size1) sortingFloat(arrFloat, size1)
#define editingAnArrayValue(arrFloat) editingAnArrayValueFloat(arrFloat)
#endif

#ifndef CHAR
void fillingTheArrayWithRandomValuesChar(char arrChar[], int size2);
void outputOfArrayValuesToTheConsoleChar(char arrChar[], int size2);
void findingTheMinimumElementChar(char arrChar[], int size2);
void findingTheMaximumElementChar(char arrChar[], int size2);
void sortingChar(char arrChar[], int size2);
void editingAnArrayValueChar(char arrChar[]);
#define fillingTheArrayWithRandomValues(arrChar, size2) fillingTheArrayWithRandomValuesChar(arrChar, size2)
#define outputOfArrayValuesToTheConsole(arrChar, size2) outputOfArrayValuesToTheConsoleChar(arrChar, size2)
#define findingTheMinimumElement(arrChar, size2) findingTheMinimumElementChar(arrChar, size2)
#define findingTheMaximumElement(arrChar, size2) findingTheMaximumElementChar(arrChar, size2)
#define sorting(arrChar, size2) sortingChar(arrChar, size2)
#define editingAnArrayValue(arrChar) editingAnArrayValueChar(arrChar)
#endif