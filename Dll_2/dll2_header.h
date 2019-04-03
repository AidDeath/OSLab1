#pragma once
// define VOLODKO_EXPORTS for export
//#ifdef Dll2_EXPORTS
#define Dll2_API __declspec(dllexport)
//#else 
//#define Dll2_API __declspec(dllimport)
//#endif
// Обьявить функцию в заголовке

Dll2_API void getBin(int x,char* out);