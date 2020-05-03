/*
- 3 tipuri de agenti: a,b,c care se deosebesc prin modul de deplasare:
    a->sus,jos,stanga,dreapta
    b->pe diagonala
    c->pe toate directiile
-pozitia si tipul acestora se introduce manual in harta.cpp
-jocul functioneaza pe principiul primul venit, primul servit (daca un jucator ajunge pe o celula deja ocupata atunci va pierde)
-functie care genereaza itemi aleator pe harta
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "harta.h"

using namespace std;

int main()
{
    int d,m,r;
    cout<<"Introduceti dimeniunea hartii: ";
    cin>>d;
    harta h1(d);
    cout<<"Alegeti modul de joc:\n1.Joc complet\n2.Joc pentru un numar de runde\nMod de joc: ";
    cin>>m;
    if(m==1)
        h1.start_joc();
    else if(m==2)
    {
        cout<<"Numarul de runde dorit: ";
        cin>>r;
        h1.joc_runde(r);
    }

    return 0;
}
