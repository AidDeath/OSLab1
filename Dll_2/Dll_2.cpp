// Dll_2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
//#include <sstream>
#include "dll2_header.h"


Dll2_API void getBin(int x, char* out)
{
	char buf[30];
	_itoa_s(x, buf, 2);
	strcpy_s(out, sizeof(buf), buf);
}

Dll2_API unsigned int SenseOfExiting()
{
	return 2;
}