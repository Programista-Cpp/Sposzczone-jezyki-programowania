// POLC++.cpp : main project file.

#include "stdafx.h"

using namespace System;
//String^ komenda;

Void PiszStd(String^ arg)
{
	Console::WriteLine(arg);
}
Void PiszCalStd(int arg)
{
	Console::WriteLine(arg);
}
Void CzytajStd(String^ arg)
{
	arg = Console::ReadLine();
}
Void WczytajZnak()
{
	Console::Read();
}
int main(array<String ^> ^args)
{
	short liczba1;
	Console::WriteLine(L"Witaj �wiecie!");
	Console::WriteLine(L"Podaj liczb� : ");
	Console::ReadLine();
	short inkrementacja = liczba1++;
	Console::WriteLine(inkrementacja);
	Console::Read();
	/*PiszStd(L"Witaj �wiecie! \n");
	PiszStd(L"Podaj liczb� : ");
	CzytajStd(Convert::ToString(liczba1));
	short inkrementacja = 2*liczba1;
	PiszCalStd(inkrementacja);
	WczytajZnak();*/
	return 0;
}