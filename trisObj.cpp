#include "tris.h"


Principale::Principale() { // creazione dell'array 3D 
        for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                        scacchiera[i][j] = 0;
                }
        }
}
 
void Principale::pulisci() { // funzione per separare e rendere più chiaro e pulito lo schermo
        for(int i = 0; i < 80; i++)
                cout << endl;
}
 
void Principale::visualizza() { // funzione che visualizza la scacchiera della partita
        pulisci();
        cout << endl;
        cout <<  "  |    " << setw(1) << 0 << "|" << 1 << "|" << 2 << "  Y" << endl;
        cout << setw(1) << "--|------------" << endl;
        cout <<            "  |" << endl;
        cout << setw(1) << 0 << setw(3) << " |    " << scacchiera[0][0] << "|" << scacchiera[0][1] << "|" << scacchiera[0][2] << "\n";
        cout <<            "--|   -------" << endl;
        cout << setw(1) << 1 << setw(3) << " |    " << scacchiera[1][0] << "|" << scacchiera[1][1] << "|" << scacchiera[1][2] << "\n";
        cout <<            "--|   -------" << endl;       
        cout << setw(1) << 2 << setw(3) << " |    " << scacchiera[2][0] << "|" << scacchiera[2][1] << "|" << scacchiera[2][2] << "\n";
        cout << "  |" << endl;
        cout << "X" << " |\n" << endl;
}
 
void Principale::primoGiocatore() { // funzione turno giocatore 1
ins:
                        cout << "Inserire posizione X:";
                        cin >> posX;
                        cout << "\nInserire posizione Y:";
                        cin >> posY;
                        if(scacchiera[posX][posY] != 0 || posX > 2 || posY > 2) {
                                cout << "\aMossa non valida!\n";
                                goto ins;
                        }
                                else {
                                scacchiera[posX][posY] = 1;
                                }
                }
 
void Principale::secondoGiocatore() { // funzione turno giocatore 2
inss:
                        cout << "Inserire posizione X:";
                        cin >> posX;
                        cout << "\nInserire posizione Y:";
                        cin >> posY;
                        if(scacchiera[posX][posY] != 0 || posX > 2 || posY > 2) {
                                cout << "\aMossa non valida!\n";
                                goto inss;
                        }
                                else {
                                scacchiera[posX][posY] = 2;
                                }
                }
 
bool Principale::VincitaPrimoGiocatore() { // funzione vittoria del giocatore 1
        if(scacchiera[0][0] == 1 && scacchiera[0][1] == 1 && scacchiera[0][2] == 1) return true; // orizzontale prima linea
        if(scacchiera[1][0] == 1 && scacchiera[1][1] == 1 && scacchiera[1][2] == 1) return true; // orizzontale seconda linea
        if(scacchiera[2][0] == 1 && scacchiera[2][1] == 1 && scacchiera[2][2] == 1) return true; // orizzontale terza linea
        if(scacchiera[0][0] == 1 && scacchiera[1][0] == 1 && scacchiera[2][0] == 1) return true; // verticale prima linea
        if(scacchiera[0][1] == 1 && scacchiera[1][1] == 1 && scacchiera[2][1] == 1) return true; // verticale seconda linea
        if(scacchiera[0][2] == 1 && scacchiera[1][2] == 1 && scacchiera[2][2] == 1) return true; // verticale terza linea
        if(scacchiera[0][0] == 1 && scacchiera[1][1] == 1 && scacchiera[2][2] == 1) return true; // diagonale verso il basso
        if(scacchiera[0][2] == 1 && scacchiera[1][1] == 1 && scacchiera[2][0] == 1) return true; // diagonale verso l'alto
        else
                return false;
}
 
bool Principale::VincitaSecondoGiocatore() { // funzione vittoria del giocatore 2
        if(scacchiera[0][0] == 2 && scacchiera[0][1] == 2 && scacchiera[0][2] == 2) return true; // orizzontale prima linea
        if(scacchiera[1][0] == 2 && scacchiera[1][1] == 2 && scacchiera[1][2] == 2) return true; // orizzontale seconda linea
        if(scacchiera[2][0] == 2 && scacchiera[2][1] == 2 && scacchiera[2][2] == 2) return true; // orizzontale terza linea
        if(scacchiera[0][0] == 2 && scacchiera[1][0] == 2 && scacchiera[2][0] == 2) return true; // verticale prima linea
        if(scacchiera[0][1] == 2 && scacchiera[1][1] == 2 && scacchiera[2][1] == 2) return true; // verticale seconda linea
        if(scacchiera[0][2] == 2 && scacchiera[1][2] == 2 && scacchiera[2][2] == 2) return true; // verticale terza linea
        if(scacchiera[0][0] == 2 && scacchiera[1][1] == 2 && scacchiera[2][2] == 2) return true; // diagonale verso il basso
        if(scacchiera[0][2] == 2 && scacchiera[1][1] == 2 && scacchiera[2][0] == 2) return true; // diagonale verso l'alto
        else
                return false;
}
 
bool Principale::pareggio() { // funzione in caso di pareggio
        if(scacchiera[0][0] != 0 && scacchiera[0][1] != 0 && scacchiera[0][2] != 0 && scacchiera[1][0] != 0 && scacchiera [1][1] != 0 && scacchiera [1][2] != 0 && scacchiera[2][0] != 0 && scacchiera[2][1] != 0 && scacchiera[2][2] != 0 && VincitaPrimoGiocatore() == false && VincitaSecondoGiocatore() == false)                                                             
                return true;
        else
                return false;
}
 