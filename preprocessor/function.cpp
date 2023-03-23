#include <iostream>
#include "function.h"
using namespace std;
void fillingTheArrayWithRandomValuesInteger(int arrInteger[], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arrInteger[i] = rand() % 100;
	}
}

void outputOfArrayValuesToTheConsoleInteger(int arrInteger[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "arrInteger [ " << i << " ] - " << arrInteger[i] << endl;
	}
}

void findingTheMinimumElementInteger(int arrInteger[], int size) {
	int min = arrInteger[0];
	for (int i = 0; i < size; i++) {
		if (arrInteger[i] < min) {
			min = arrInteger[i];
		}
	}
	cout << "Minimum value of the array = " << min << endl;
}

void findingTheMaximumElementInteger(int arrInteger[], int size) {
	int max = arrInteger[0];
	for (int i = 0; i < size; i++) {
		if (arrInteger[i] > max) {
			max = arrInteger[i];
		}
	}
	cout << "Maximum value of the array = " << max << endl;
}

void sortingInteger(int arrInteger[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arrInteger[j] > arrInteger[i]) {
				swap(arrInteger[i], arrInteger[j]);
			}
		}
	}
}

void editingAnArrayValueInteger(int arrInteger[]) {
	int index, value;
	cout << "Enter the index value: ";
	cin >> index;
	cout << "Enter new value: ";
	cin >> value;
	arrInteger[index] = value;
}



void fillingTheArrayWithRandomValuesFloat(float arrFloat[], int size1) {
	srand(time(0));
	for (int i = 0; i < size1; i++) {
		arrFloat[i] = rand() % 100;
	}
}

void outputOfArrayValuesToTheConsoleFloat(float arrFloat[], int size1) {
	for (int i = 0; i < size1; i++) {
		cout << "arrFloat [ " << i << " ] - " << arrFloat[i] << endl;
	}
}

void findingTheMinimumElementFloat(float arrFloat[], int size1) {
	float min = arrFloat[0];
	for (int i = 0; i < size1; i++) {
		if (arrFloat[i] < min) {
			min = arrFloat[i];
		}
	}
	cout << "Minimum value of the array = " << min << endl;
}

void findingTheMaximumElementFloat(float arrFloat[], int size1) {
	float max = arrFloat[0];
	for (int i = 0; i < size1; i++) {
		if (arrFloat[i] > max) {
			max = arrFloat[i];
		}
	}
	cout << "Maximum value of the array = " << max << endl;
}

void sortingFloat(float arrFloat[], int size1) {
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size1; j++) {
			if (arrFloat[j] > arrFloat[i]) {
				swap(arrFloat[i], arrFloat[j]);
			}
		}
	}
}

void editingAnArrayValueFloat(float arrFloat[]) {
	int index;
	float value;
	cout << "Enter the index value: ";
	cin >> index;
	cout << "Enter new value: ";
	cin >> value;
	arrFloat[index] = value;
}



void fillingTheArrayWithRandomValuesChar(char arrChar[], int size2) {
	srand(time(0));
	for (int i = 0; i < size2; i++) {
		arrChar[i] = rand() % 100;
	}
}

void outputOfArrayValuesToTheConsoleChar(char arrChar[], int size2) {
	for (int i = 0; i < size2; i++) {
		cout << "arrChar [ " << i << " ] - " << arrChar[i] << endl;
	}
}

void findingTheMinimumElementChar(char arrChar[], int size2) {
	char min = arrChar[0];
	for (int i = 0; i < size2; i++) {
		if (arrChar[i] < min) {
			min = arrChar[i];
		}
	}
	cout << "Minimum value of the array = " << min << endl;
}

void findingTheMaximumElementChar(char arrChar[], int size2) {
	char max = arrChar[0];
	for (int i = 0; i < size2; i++) {
		if (arrChar[i] > max) {
			max = arrChar[i];
		}
	}
	cout << "Maximum value of the array = " << max << endl;
}

void sortingChar(char arrChar[], int size2) {
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			if (arrChar[j] > arrChar[i]) {
				swap(arrChar[i], arrChar[j]);
			}
		}
	}
}

void editingAnArrayValueChar(char arrChar[]) {
	int index;
	char value;
	cout << "Enter the index value: ";
	cin >> index;
	cout << "Enter new value: ";
	cin >> value;
	arrChar[index] = value;
}
	
