// UnderstandingDatatypesHW2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

//forward declaration
int binaryEquivalent(int);

int main()
{
	int inputInteger;

	cout << "Enter an integer : " << endl;
	cin >> inputInteger;
	binaryEquivalent(inputInteger);
	return 0;
}

int binaryEquivalent(int inputInteger) {
	//int bitArray[100];
	int* bitArray;
	bitArray = (int*)calloc(100, sizeof(char));
	int index = 0;
	int decimalNumber = inputInteger;
	while ((decimalNumber / 2) > 0) {
		bitArray[index] = decimalNumber % 2;
		decimalNumber = decimalNumber / 2;
		index++;
	}
	bitArray[index] = decimalNumber % 2;

	cout << "Binary equivalent of " << inputInteger << " is ";

	for (int l_index = index; l_index >= 0; l_index--) {
		cout << bitArray[l_index];
	}

	free(bitArray);
	return 0;
}