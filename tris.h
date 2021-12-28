#ifndef OOP1_H_INCLUDED
#define OOP1_H_INCLUDED
#include<iostream>
#include<iomanip>
using namespace std;

class Principale { //creazione della classe principale
public:
        Principale();
        void primoGiocatore();
        void visualizza();
        void pulisci();
        void secondoGiocatore();
        bool pareggio();
        bool VincitaPrimoGiocatore();
        bool VincitaSecondoGiocatore();
private:
        int scacchiera[3][3];
        int posX;
        int posY;
};
 


#endif // OOP1_H_INCLUDED