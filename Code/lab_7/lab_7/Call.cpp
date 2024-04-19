#include "Call.h"
#include <iostream>

namespace call{
	int cdec(int a, int b, int c) {
		return a + b + c;
	}
	int cstd(int& a, int b, int c) {
		return a * b * c;
	}
	int csft(int a, int b, int c, int d) {
		return a + b + c + d;
	}
}
