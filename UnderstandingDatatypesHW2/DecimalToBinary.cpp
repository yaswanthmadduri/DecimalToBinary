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
	bitArray = (int*)calloc(100, 1);
	int index = 0;
	int decimal = inputInteger;
	while ((decimal / 2) > 0) {
		bitArray[index] = decimal % 2;
		decimal = decimal / 2;
		index++;
	}
	bitArray[index] = decimal % 2;

	cout << "Binary equivalent of " << inputInteger << " is ";

	for (int l_index = index; l_index >= 0; l_index--) {
		cout << bitArray[l_index];
	}

	free(bitArray);
	return 0;
}