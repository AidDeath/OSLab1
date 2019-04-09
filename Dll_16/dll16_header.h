#pragma once
// define VOLODKO_EXPORTS for export
//#ifdef Dll2_EXPORTS
#define Dll16_API __declspec(dllexport)
//#else 
//#define Dll2_API __declspec(dllimport)
//#endif
// Обьявить функцию в заголовке

Dll16_API void getHex(int x, char* out);
Dll16_API unsigned int SenseOfExisting();