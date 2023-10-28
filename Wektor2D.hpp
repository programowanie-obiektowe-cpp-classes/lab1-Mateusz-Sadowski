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
    double X, Y;

public:	

    double iks, igrek;
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
    }
    void setY(double wczytywany_Y)
    {
        Y = wczytywany_Y;
    }
    double getX()
    {
        return iks;
    }
    double getY()
    {
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
