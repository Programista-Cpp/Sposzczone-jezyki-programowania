#include "Funkcje.cpp"
#include "stdafx.h"
using namespace System;
class Mat
{
public: static const double Pi; //3.14159265359;
public: static double Odwrotnoœæ(double x)
{
	Funkcje::Zwróæ(1 / x);
}
public: static double Przeciwna(double x)
{
	Funkcje::Zwróæ(-x);
}
		class Œrednia
		{
		public: static double ŒredniaArytm(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwróæ((a + b + c + d + e + f + g) / 7);
		}
		public: static double ŒredniaGeometryczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwróæ(Mat::Pierw(a * b * c * d * e * f * g, 7));
		}
		public: static double ŒredniaHarmoniczna(double a, double b, double c, double d, double e, double f, double g)
		{
			Funkcje::Zwróæ(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
		}
		};
public: static double Pierw2(double arg)
{
	Funkcje::Zwróæ(Math::Sqrt(arg));
}
public: static double Pierw(double arg, int grad)
{
	Funkcje::Zwróæ(Math::Pow(arg, (1 / grad)));
}
public: static long double Potêga(long double arg, unsigned int exp)
{
	Funkcje::Zwróæ(Math::Pow(arg, exp));
}
		class PolaObwody
		{
		public:static double PoleKo³a(double r) //Pole Ko³a
		{
			Funkcje::Zwróæ(Pi * Mat::Potêga(r, 2));
		}
		public: static double ObwódKo³a(double r) //Obwód Ko³a
		{
			Funkcje::Zwróæ(2 * Pi * r);
		}
		public: static int ObwódTrójk¹ta(int a, int b, int c)
		{
			Funkcje::Zwróæ(a + b + c);
		}
		public: static int PoleTrapezu(int a, int b, int h) //Pole Trapezu
		{
			Funkcje::Zwróæ(((a + b) * h) / 2);
		}
		public: static int PoleRównoleg³oboku(int a, int h) //Pole Równoleg³oboku
		{
			Funkcje::Zwróæ(a * h);
		}
		public: static int PoleProstok¹ta(int a, int b) //Pole Prostok¹ta
		{
			Funkcje::Zwróæ(a * b);
		}
		public: static int PoleRombu(int e, int f) //Pole Rombu
		{
			Funkcje::Zwróæ((e * f) / 2);
		}
		public: static int PoleKwadratu(int a) //Pole Kwadratu
		{
			Funkcje::Zwróæ(Mat::Potêga(a, 2));
		}
		public: static int PoleTrójk¹ta(int a, int h) //Pole Trójk¹ta
		{
			Funkcje::Zwróæ((a * h) / 2);
		}
		};
		class SpecjalneFunkcje
		{
		public: static int Abs(int x) //Wartoœæ Bezwzglêdna
		{
			Funkcje::Zwróæ(Math::Abs(x));
		}
		public: static int Sgn(int x) //Funkcja Signum
		{
			Funkcje::Zwróæ(Math::Sign(x));
		}
		public: static double Hiperbola(int x) //Hiperbola
		{
			Funkcje::Zwróæ(Odwrotnoœæ(x));
		}
		public: static int Parabola(int x) //Parabola
		{
			Funkcje::Zwróæ(Mat::Potêga(x, 2));
		}
		};
};