#include "Funkcje.cpp"
#include <math.h>
using namespace std;

namespace Mat
{
    static const double Pi = 3.14159265359;
    static double Odwrotnosc(double x)
    {
        Funkcje::Zwroc(1 / x);
    }
    static double Przeciwna(double x)
    {
        Funkcje::Zwroc(-x);
    }

    static double Pierw2(double arg)
    {
        Funkcje::Zwroc(sqrt(arg));
    }
    static double Pierw(double arg, int grad)
    {
        Funkcje::Zwroc(pow(arg, (1 / grad)));
    }
    static long double Potega(long double arg, unsigned int exp)
    {
        Funkcje::Zwroc(pow(arg, exp));
    }

    namespace srednia
    {
        static double SredniaArytm(double a, double b, double c, double d, double e, double f, double g)
        {
            Funkcje::Zwroc((a + b + c + d + e + f + g) / 7);
        }
        static double SredniaGeometryczna(double a, double b, double c, double d, double e, double f, double g)
        {
            Funkcje::Zwroc(Mat::Pierw(a * b * c * d * e * f * g, 7));
        }
        static double SredniaHarmoniczna(double a, double b, double c, double d, double e, double f, double g)
        {
            Funkcje::Zwroc(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
        }
    };

    namespace polaObwody
    {
        static double PoleKola(double r) //Pole Kola
        {
            Funkcje::Zwroc(Pi * Mat::Potega(r, 2));
        }
        static double ObwodKola(double r) //Obwod Kola
        {
            Funkcje::Zwroc(2 * Pi * r);
        }
        static int ObwodTrojkata(int a, int b, int c)
        {
            Funkcje::Zwroc(a + b + c);
        }
        static int PoleTrapezu(int a, int b, int h) //Pole Trapezu
        {
            Funkcje::Zwroc(((a + b) * h) / 2);
        }
        static int PoleRownolegloboku(int a, int h) //Pole Rownolegloboku
        {
            Funkcje::Zwroc(a * h);
        }
        static int PoleProstokata(int a, int b) //Pole Prostokata
        {
            Funkcje::Zwroc(a * b);
        }
        static int PoleRombu(int e, int f) //Pole Rombu
        {
            Funkcje::Zwroc((e * f) / 2);
        }
        static int PoleKwadratu(int a) //Pole Kwadratu
        {
            Funkcje::Zwroc(Mat::Potega(a, 2));
        }
        static int PoleTrojkata(int a, int h) //Pole Trojkata
        {
            Funkcje::Zwroc((a * h) / 2);
        }
    };
    namespace specjalneFunkcje
    {
        static int abs(int x) //Wartosc Bezwzgledna
        {
            Funkcje::Zwroc(abs(x));
        }
        static int Sgn(int x) //Funkcja Signum
        {
            if (x > 0) Funkcje::Zwroc(1);
            else if (x == 0) Funkcje::Zwroc(0);
            else Funkcje::Zwroc(-1);
        }
        static double Hiperbola(int x) //Hiperbola
        {
            Funkcje::Zwroc(Odwrotnosc(x));
        }
        static int Parabola(int x) //Parabola
        {
            Funkcje::Zwroc(Mat::Potega(x, 2));
        }
    };
};
