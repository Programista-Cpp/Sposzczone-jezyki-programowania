#include "Funkcje.cpp"
#include "stdafx.h"
using namespace System;
class mat
{
public: static const double Pi; //3.14159265359;
public: static double Odwrotnosc(double x)
{
	Funkcje::Zwroc(1 / x);
}
public: static double Przeciwna(double x)
{
	Funkcje::Zwroc(-x);
}
		class srednia
		{
		public: static double SredniaArytm(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwroc((a + b + c + d + e + f + g) / 7);
		}
		public: static double SredniaGeometryczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwroc(Mat::Pierw(a * b * c * d * e * f * g, 7));
		}
		public: static double SredniaHarmoniczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwroc(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
		}
		};
public: static double Pierw2(double arg)
{
	Funkcje::Zwroc(Math::Sqrt(arg));
}
public: static double Pierw(double arg, int grad)
{
	Funkcje::Zwroc(Math::Pow(arg, (1 / grad)));
}
public: static long double Potega(long double arg, unsigned int exp)
{
	Funkcje::Zwroc(Math::Pow(arg, exp));
}
		class polaObwody
		{
		public:static double PoleKola(double r) //Pole Ko豉
		{
			Funkcje::Zwroc(Pi * Mat::Potega(r, 2));
		}
		public: static double ObwodKola(double r) //Obw鏚 Ko豉
		{
			Funkcje::Zwroc(2 * Pi * r);
		}
		public: static int ObwodTrojkata(int a, int b, int c)
		{
			Funkcje::Zwroc(a + b + c);
		}
		public: static int PoleTrapezu(int a, int b, int h) //Pole Trapezu
		{
			Funkcje::Zwroc(((a + b) * h) / 2);
		}
		public: static int PoleRownolegloboku(int a, int h) //Pole R闚noleg這boku
		{
			Funkcje::Zwroc(a * h);
		}
		public: static int PoleProstokata(int a, int b) //Pole Prostok靖a
		{
			Funkcje::Zwroc(a * b);
		}
		public: static int PoleRombu(int e, int f) //Pole Rombu
		{
			Funkcje::Zwroc((e * f) / 2);
		}
		public: static int PoleKwadratu(int a) //Pole Kwadratu
		{
			Funkcje::Zwroc(Mat::Potega(a, 2));
		}
		public: static int PoleTrojkata(int a, int h) //Pole Tr鎩k靖a
		{
			Funkcje::Zwroc((a * h) / 2);
		}
		};
		class specjalneFunkcje
		{
		public: static int Abs(int x) //Warto Bezwzgl璠na
		{
			Funkcje::Zwroc(Math::Abs(x));
		}
		public: static int Sgn(int x) //Funkcja Signum
		{
			Funkcje::Zwroc(Math::Sign(x));
		}
		public: static double Hiperbola(int x) //Hiperbola
		{
			Funkcje::Zwroc(Odwrotnosc(x));
		}
		public: static int Parabola(int x) //Parabola
		{
			Funkcje::Zwroc(Mat::Potega(x, 2));
		}
		};
};
