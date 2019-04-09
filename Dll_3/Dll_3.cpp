// Dll_3.cpp : Defines the exported functions for the DLL application.
//
#include "stdafx.h"
#include <iostream>
#include "dll3_header.h"


Dll3_API void getThree(int x, char* out)
{
	char buf[30];
	_itoa_s(x, buf, 3);
	strcpy_s(out, sizeof(buf), buf);
}

Dll3_API unsigned int SenseOfExisting()
{
	return 3;
}