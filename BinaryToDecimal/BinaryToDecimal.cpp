// UnderstandingDatatypesHW2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

//forward declaration
int decimalEquivalent(int);

int main()
{
	int inputBinary;

	cout << "Enter a binary number : " << endl;
	cin >> inputBinary;
	decimalEquivalent(inputBinary);
	return 0;
}

int decimalEquivalent(int inputBinary) {
	int binaryNumArray[100];
	int index = 0;
	int binaryNumber = inputBinary;
	int resultantDecimal = 0;


				//11001
	while ((binaryNumber / 10) > 0) {
		binaryNumArray[index] = binaryNumber % 10;
		binaryNumber = binaryNumber / 10;
		index++;
	}
	binaryNumArray[index] = binaryNumber % 10;

	for (int i = index; i >= 0; i--) {
		resultantDecimal = resultantDecimal + (binaryNumArray[i] * pow(2,i));
	}																	
	cout << endl << "The Decimal equivalent of " << inputBinary << " is " << resultantDecimal << endl;
	return 0;
}


