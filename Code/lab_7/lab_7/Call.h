#pragma once
#include <iostream>
#include <cstdarg>

namespace call {
	int _cdecl cdec(int a, int b, int c);
	int _stdcall cstd(int& a, int b, int c);
	int _fastcall csft(int a, int b, int c, int d);
}