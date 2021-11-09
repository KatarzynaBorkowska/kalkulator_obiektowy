#include "klasa.hpp"
#include <iostream>
#include <cmath>
#include <string>
using namespace N;
using namespace std;

double kalkulator::zamiana(string s)
{
    
    return stod(s);
}

string kalkulator::ogarnij_znak(string s){
    
    string p;
    
    if(s.size() == 1)
        return s;
    if(s[s.size() - 2] == 'M'){
        p += s[s.size() - 2];
        p += s[s.size() - 1];}
    else
        p = s[s.size() - 1];
    return p;
    
}

void kalkulator::wyswietl(){
    cout << "\t-> " << wynik << endl;
}

void kalkulator::wyswietl_MR(){
    wynik = M;
    cout << "\t-> " << M << endl;
}

void kalkulator::zapiszM()
{
    M = wynik;
}

double kalkulator::Mzwraca(){
    wynik = M;
    return wynik;
}

void kalkulator::podmien(double a){
    X = a;
    wynik = X;
}

void kalkulator::dodaj(double a){
    X = a;
    wynik += X;
}

void kalkulator::pierwiastek(){
    wynik = sqrt(wynik);
}

void kalkulator::odejmnij(double a){
    X = a;
    wynik -=  X;
}
void kalkulator::pomnoz(double a){
    X = a;
    wynik *= X;
}
void kalkulator::podziel(double a){
    X = a;
    wynik /= X;
}
void kalkulator::modulo(double a){
    X = a;
    wynik = fmod(wynik, X);
}

void kalkulator::C(){
    wynik = 0;
}

void kalkulator::MC(){
    M = wynik;
    wynik = 0;
}

void kalkulator::Mplus(){
    M += wynik;
}

void kalkulator::Mminus(){
    M -= wynik;
}

void kalkulator::Mpierwiastek(){
    M = sqrt(M);
}
void kalkulator::Mpomnoz(){
    M *= wynik;
}
void kalkulator::Mpodziel(){

    M /= wynik;
}
void kalkulator::Mmodulo(){
    M = fmod(M,wynik);
}
