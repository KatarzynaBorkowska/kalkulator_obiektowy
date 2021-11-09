#include "klasa.hpp"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
using namespace N;

int main(){
    kalkulator w;
    string z = "0";
    double l;
    char pom = '\0', p2 = '\0';
    int tab[3] = {0,0,0};
    cout << "Podaj jeden ze znakow jaki chcesz wykonać w zadaniu. + - * / % (działanie modulo) „s” oznaczający pierwiastek 2-giego stopnia\nE - wyjscie z programu,\t C - wyzerowanie\tMC - wyzerowanie i zapisanie\t MR - wyswietla liczbe z pamieci\nJeżeli uznasz,że chcesz zmienic znak lub liczbe wcisnij d\nM+ dodaje liczbe z pamieci\tM- odejmije liczbe z pamieci itd.\n";
    w.wyswietl();
    do{
        
        cin >> z;
        if(z != "E"){
        if(!isdigit(z[z.size()-1])){
            
            z = w.ogarnij_znak(z);
            pom = z[0];
            tab[2] = 1;
        
            if(z == "MC")
                w.MC();
            else if(z == "M+")
                w.Mplus();
            else if(z == "M-")
                w.Mminus();
            else if(z == "M%")
                w.Mmodulo();
            else if(z == "M*")
                w.Mpomnoz();
            else if(z == "M%")
                w.Mpodziel();
            else if(z == "MR")
                w.wyswietl_MR();
            else if(z == "s")
                w.pierwiastek();
            else
                p2 = pom;
            
            
            if(z == "MR"){
                if(p2 == '1')
                    pom = p2;
                tab[2] = 3;
            }
            else if(z[0] == 'M')
                tab[2] = 4;
            
        }
        else{
            
            if(tab[0] == 3 && tab[1] == 3){
               l = w.Mzwraca();}
            else{
                l = w.zamiana(z);
            }
            bool b = false;
            if(tab[1] == 1 && tab[0] == 1)
                b = true;
            if(tab[1] == 1 && tab[0] == 2)
                b = true;
            if(tab[1] == 1 && tab[0] == 3)
                b = true;
            if(tab[1] == 1 && tab[0] == 4)
                b = true;
            if(tab[0] == 1 && tab[1] == 3)
                b = true;
            
            if(tab[1] == 3 && tab[0] == 1){
                pom = p2;
                }
            
        
            if(b != true)
            {
                pom = '#';
                b = false;
            }
            
            p2 = '1';
            tab[2] = 2;
            switch (pom) {
                case '+':
                    w.dodaj(l);
                    break;
                case '-':
                    w.odejmnij(l);
                    break;
                case '*':
                    w.pomnoz(l);
                    break;
                case '/':
                    if(l == 0)
                        cout << "ERROR";
                    else{
                        w.podziel(l);
                    }
                    break;
                case '%':
                    w.modulo(l);
                    break;
                case 'C':
                    w.C();
                    break;
                case '#':
                    w.podmien(l);
                    break;

                default:
                    break;
            }
            if(tab[0] == 3){
                w.zapiszM();
            }
        }}
        
        
    if(z != "MR" && z != "E")
        w.wyswietl();
        
        tab[0] = tab[1];
        tab[1] = tab[2];
        tab[2] = 0;
        
        
    }while(z != "E");
    
    return 0;
}
