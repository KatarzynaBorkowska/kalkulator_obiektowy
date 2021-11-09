//
//  klasa.hpp
//  kalkulator_zH
//
//  Created by Kasia on 09/11/2021.
//

#ifndef klasa_hpp
#define klasa_hpp

#include <stdio.h>
#include <string>
namespace N {
class kalkulator{
public:
    
    double X;
    double M = 0.0;
    double wynik = 0;
    
    double zamiana(std::string);
    std::string ogarnij_znak(std::string);
    void wyswietl();
    void zapiszM();
    double Mzwraca();
    void podmien(double);
    void wyswietl_MR();
    void dodaj(double);
    void pierwiastek();
    void odejmnij(double);
    void pomnoz(double);
    void podziel(double);
    void modulo(double);
    void C();
    void MC();
    void Mplus();
    void Mminus();
    void Mpierwiastek();
    void Modejmnij();
    void Mpomnoz();
    void Mpodziel();
    void Mmodulo();

};
}

#endif /* klasa_hpp */
