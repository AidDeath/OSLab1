#pragma once
// define VOLODKO_EXPORTS for export
//#ifdef Dll2_EXPORTS
#define Dll3_API __declspec(dllexport)
//#else 
//#define Dll2_API __declspec(dllimport)
//#endif
// Обьявить функцию в заголовке

Dll3_API void getThree(int x, char* out);
Dll3_API unsigned int SenseOfExiting();