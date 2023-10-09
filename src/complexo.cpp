#include <iostream>
#include <ostream>
#include <cmath>
#include "./../include/complexo.h"

using namespace std;
using std::endl;

Complexo::Complexo(double r, double i){
    real = r;
    imaginario = i;
}
Complexo::Complexo(){
    real = 0;
    imaginario = 0;
}
Complexo::~Complexo(){

}


Complexo Complexo::operator+(Complexo &c){
    int r = real + c.real;
    int i = imaginario + c.imaginario;
    return Complexo(r, i);
}

Complexo Complexo::operator-(Complexo &c){
    int r = real - c.real;
    int i = imaginario - c.imaginario;
    return Complexo(r, i);
}

Complexo Complexo::operator*(Complexo &c){
    int r = real + c.real;
    int i = imaginario + c.imaginario;
    return Complexo(r, i);
}

float Complexo::operator|(Complexo &c){
    float r = sqrt(pow(real, 2) + pow(imaginario, 2));
    return r;
}

//
std::ostream& operator <<(std::ostream &o, Complexo const &c){
    o<<c.real;
    if(c.imaginario>0)
        o << "+" << c.imaginario << "i" << endl;
    else if(c.imaginario < 0)
        o << c.imaginario << "i" << endl;
    return o;
}