// Dll_8.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
//#include <sstream>
#include "dll8_header.h"


Dll8_API void getOct(int x, char* out)
{
	char buf[30];
	_itoa_s(x, buf, 8);
	strcpy_s(out, sizeof(buf), buf);
}

Dll8_API unsigned int SenseOfExisting()
{
	return 8;
}