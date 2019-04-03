// Dll_16.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include "dll16_header.h"


Dll16_API void getHex(int x, char* out)
{
	char buf[30];
	_itoa_s(x, buf, 16);
	strcpy_s(out, sizeof(buf), buf);
}

Dll16_API unsigned int SenseOfExiting()
{
	return 16;
}