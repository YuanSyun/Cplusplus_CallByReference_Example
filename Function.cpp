#include "Header.h"

//call-by-reference
void add(int& iA, int& iB){
	cout << "����function���ѼơG\n";
	cout << "�Ѽ�1\n";
	cout << "\tvalue = " << iA << endl;
	cout << "\tReference = iNumber_1" << endl;
	cout << "\tpointer = " << &iA << endl;
	cout << "�Ѽ�2\n";
	cout << "\tvalue = " << iB << endl;
	cout << "\tReference = iNumber_2" << endl;
	cout << "\tpointer = " << &iB << endl;

	iA = iA + 10;
	iB = iB + 10;

	cout << "�B�⵲�G\n";
	cout << "\t�Ѽ�1 = " << iA << endl;
	cout << "\t�Ѽ�2 = " << iB << endl;
}