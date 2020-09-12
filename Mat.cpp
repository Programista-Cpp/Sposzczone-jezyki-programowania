#include "Funkcje.cpp"
#include "stdafx.h"
using namespace System;
class Mat
{
public: static const double Pi; //3.14159265359;
public: static double Odwrotno��(double x)
{
	Funkcje::Zwr��(1 / x);
}
public: static double Przeciwna(double x)
{
	Funkcje::Zwr��(-x);
}
		class �rednia
		{
		public: static double �redniaArytm(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwr��((a + b + c + d + e + f + g) / 7);
		}
		public: static double �redniaGeometryczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwr��(Mat::Pierw(a * b * c * d * e * f * g, 7));
		}
		public: static double �redniaHarmoniczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwr��(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
		}
		};
public: static double Pierw2(double arg)
{
	Funkcje::Zwr��(Math::Sqrt(arg));
}
public: static double Pierw(double arg, int grad)
{
	Funkcje::Zwr��(Math::Pow(arg, (1 / grad)));
}
public: static long double Pot�ga(long double arg, unsigned int exp)
{
	Funkcje::Zwr��(Math::Pow(arg, exp));
}
		class PolaObwody
		{
		public:static double PoleKo�a(double r) //Pole Ko�a
		{
			Funkcje::Zwr��(Pi * Mat::Pot�ga(r, 2));
		}
		public: static double Obw�dKo�a(double r) //Obw�d Ko�a
		{
			Funkcje::Zwr��(2 * Pi * r);
		}
		public: static int Obw�dTr�jk�ta(int a, int b, int c)
		{
			Funkcje::Zwr��(a + b + c);
		}
		public: static int PoleTrapezu(int a, int b, int h) //Pole Trapezu
		{
			Funkcje::Zwr��(((a + b) * h) / 2);
		}
		public: static int PoleR�wnoleg�oboku(int a, int h) //Pole R�wnoleg�oboku
		{
			Funkcje::Zwr��(a * h);
		}
		public: static int PoleProstok�ta(int a, int b) //Pole Prostok�ta
		{
			Funkcje::Zwr��(a * b);
		}
		public: static int PoleRombu(int e, int f) //Pole Rombu
		{
			Funkcje::Zwr��((e * f) / 2);
		}
		public: static int PoleKwadratu(int a) //Pole Kwadratu
		{
			Funkcje::Zwr��(Mat::Pot�ga(a, 2));
		}
		public: static int PoleTr�jk�ta(int a, int h) //Pole Tr�jk�ta
		{
			Funkcje::Zwr��((a * h) / 2);
		}
		};
		class SpecjalneFunkcje
		{
		public: static int Abs(int x) //Warto�� Bezwzgl�dna
		{
			Funkcje::Zwr��(Math::Abs(x));
		}
		public: static int Sgn(int x) //Funkcja Signum
		{
			Funkcje::Zwr��(Math::Sign(x));
		}
		public: static double Hiperbola(int x) //Hiperbola
		{
			Funkcje::Zwr��(Odwrotno��(x));
		}
		public: static int Parabola(int x) //Parabola
		{
			Funkcje::Zwr��(Mat::Pot�ga(x, 2));
		}
		};
};