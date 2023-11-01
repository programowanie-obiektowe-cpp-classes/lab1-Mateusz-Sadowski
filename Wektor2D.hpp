#pragma once
#include<iostream>
class informer
{
public:
    informer()
    {
        std::cout << '\n' << "Konstrukcja";
    }
    ~informer()
    {
        std::cout << '\n' << "Destrukcja";
    }
};

class Wektor2D
{
    double norm() { return sqrt(X * X + Y * Y); }
    double X = 0, Y = 0;

public:	

    double iks=0, igrek=0;
	void print() { std::cout << '\n' << "X=" << X << "   Y=" << Y << "   norm=" << norm(); }

    Wektor2D() {}
    Wektor2D(double X, double Y)
    {
        iks = X;
        igrek = Y;
        std::cout << '\n' << "X=" << iks << "   Y=" << igrek;
    }
    ~Wektor2D()
    {
        std::cout << '\n' << "X=" << iks << "   Y=" << igrek;
    }
    informer i1;//Tworzony obiekt i1 klasy informer

    void setX(double  wczytywany_X)
    {
        X = wczytywany_X;
        iks = X;
        std::cout << '\n' << "setX=" << X;
    }
    void setY(double wczytywany_Y)
    {
        Y = wczytywany_Y;
        igrek = Y;
        std::cout << '\n' << "setY=" << Y;
    }
    double getX()
    {
        std::cout << '\n' << "getX=" << iks;
        return iks;
    }
    double getY()
    {
        std::cout << '\n' << "getY=" << igrek;
        return igrek;
    }
};


//Klasy są równorzędne z typami zmiennych (double, float, int, itd), więc oprator mógłby być np. typu Wektor2D
Wektor2D operator+(Wektor2D normalny, Wektor2D przerobiony)
{
    return (Wektor2D(normalny.iks + przerobiony.iks, normalny.igrek + przerobiony.igrek));
}
//To samo dla operacji *, iloczyn skalarny
double operator*(Wektor2D normalny, Wektor2D przerobiony)
{
    return (normalny.iks * przerobiony.iks + normalny.igrek * przerobiony.igrek);
}
