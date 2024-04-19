#include <iostream>
#include "Call.h"
using namespace std;
using namespace call;

void main()
{
	cout << "Testing fucntions!" << endl;
	cout << "Testing cdec:";
	int a=10, b=20, c=30;
	cout << "Sum is: " << cdec(a, b, c) << endl;
	cout << "Testing cstd: ";
	int d=14, e=18, f=32;
	cout << "The result of multiplication is : " << cstd(d, e, f) << endl;
	cout << "Testing csft: ";
	int g = 160, h = 500, i = 340, j = 1300;
	cout << "Sum is: " << csft(g, h, i, j) << endl;
}