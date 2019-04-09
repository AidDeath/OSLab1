#pragma once
// define VOLODKO_EXPORTS for export
//#ifdef Dll2_EXPORTS
#define Dll8_API __declspec(dllexport)
//#else 
//#define Dll2_API __declspec(dllimport)
//#endif
// Обьявить функцию в заголовке

Dll8_API void getOct(int x, char* out);
Dll8_API unsigned int SenseOfExisting();