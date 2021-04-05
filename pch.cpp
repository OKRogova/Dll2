// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
#include <string>
#pragma warning(disable : 4996)
using namespace std;
// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.
extern "C" __declspec(dllexport) int Group(int a)
{
	a = 561220;
	return a;
}


extern "C" __declspec(dllexport) int getName (char* A)
{
	const char* B = { "Rogova Olga Konstantinovna" };
	int Razmer = sizeof(B);
	strcpy(A, B);
	return Razmer;
}