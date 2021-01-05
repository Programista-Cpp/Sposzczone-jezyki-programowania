#pragma once

#include "Funkcje.hpp"
#include <cmath>
#include <concepts>

namespace plCppExt
{
    namespace Mat
    {
        static long double Pi()
        {
            return 3.14159265359;
        }
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
            Funkcje::Zwroc(std::sqrt(arg));
        }
        static double Pierw(double arg, int deg)
        {
            Funkcje::Zwroc(std::pow(arg, (1 / deg)));
        }
        static long double Potega(long double arg, unsigned int exp)
        {
            Funkcje::Zwroc(std::pow(arg, exp));
        }

        namespace Srednia
        {
            static double SredniaArytm(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0, double f = 0, double g = 0)
            {
                Funkcje::Zwroc((a + b + c + d + e + f + g) / 7);
            }
            static double SredniaGeometryczna(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0, double f = 0, double g = 0)
            {
                Funkcje::Zwroc(Mat::Pierw(a * b * c * d * e * f * g, 7));
            }
            static double SredniaHarmoniczna(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0, double f = 0, double g = 0)
            {
                Funkcje::Zwroc(7 / ((1 / a) + (1 / b) + (1 / c) + (1 / d) + (1 / e) + (1 / f) + (1 / g)));
            }
        }

        namespace polaObwody
        {
            static double PoleKola(double r) /// Pole Kola
            {
                Funkcje::Zwroc(Pi() * Mat::Potega(r, 2));
            }
            static double ObwodKola(double r) /// Obwod Kola
            {
                Funkcje::Zwroc(2 * Pi() * r);
            }
            static int ObwodTrojkata(int a = 0, int b = 0, int c = 0)
            {
                Funkcje::Zwroc(a + b + c);
            }
            static int PoleTrapezu(unsigned int a = 1, unsigned int b = 1, unsigned int h = 1) /// Pole Trapezu
            {
                Funkcje::Zwroc(((a + b) * h) / 2);
            }
            static int PoleRownolegloboku(unsigned int a = 1, unsigned int h = 1) /// Pole Rownolegloboku
            {   
                Funkcje::Zwroc(a * h);
            }
            static int PoleProstokata(unsigned int a = 1, unsigned int b = 1) /// Pole Prostokata
            {
                Funkcje::Zwroc(a * b);
            }
            static int PoleRombu(unsigned int e = 1, unsigned int f = 1) /// Pole Rombu
            {
                Funkcje::Zwroc((e * f) / 2);
            }
            static int PoleKwadratu(unsigned int a = 1) /// Pole Kwadratu
            {
                Funkcje::Zwroc(Mat::Potega(a, 2));
            }
            static int PoleTrojkata(unsigned int a = 1, unsigned int h = 1) /// Pole Trojkata
            {
                Funkcje::Zwroc((a * h) / 2);
            }
        }
        namespace specjalneFunkcje
        {
            template<typename T>
            static T WartoscBezwzgledna(is_arithmetic_v<T> x = 0) /// Wartosc Bezwzgledna
            {
                Funkcje::Zwroc(abs(x));
            }
            static short Sgn(int x) /// Funkcja Signum
            {
                if (x > 0) Funkcje::Zwroc(1);
                else if (x == 0) Funkcje::Zwroc(0);
                else Funkcje::Zwroc(-1);
            }
            static double Hiperbola(int x) /// Hiperbola
            {
                Funkcje::Zwroc(Odwrotnosc(x));
            }
            static int Parabola(int x) /// Parabola
            {
                Funkcje::Zwroc(Mat::Potega(x, 2));
            }
        }
    }
}
