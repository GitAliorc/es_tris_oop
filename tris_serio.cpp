#include "tris.h"
 
void inizio_gioco() { // funzione dove si svolge il gioco
    char ex;
    int loop;
    continua_gioco:// loop del gioco
        string n1,n2; // nomi
        cout << "Benvenuto a TRIS !!!" << endl
        << "--------------------" << endl
        << "Inserire il nome del primo giocatore   >>> ";
        cin >> n1;
        cout << "Inserire il nome del secondo giocatore >>> ";
        cin >> n2;
        Principale tris;
        tris.visualizza();
        while(true) {
                cout << "E' il turno di " << n1 << ":" << endl;
                tris.primoGiocatore();
                tris.visualizza();
                if(tris.VincitaPrimoGiocatore()) {
                        cout << "\aVince " << n1 << endl;
                        cout << "Vuoi continuare? (si = 1, no = 0) >>> ";
                        cin >> loop;
                        if(loop == 1){
                                goto continua_gioco;
                        }
                        else
                                exit(0);
                } 
                if(tris.pareggio()) {
                        cout << "\aLa partita finisce in parità" << endl;
                        cout << "Vuoi continuare? (si = 1, no = 0) >>> ";
                        cin >> loop;
                        if(loop == 1){
                                goto continua_gioco;
                        }
                        else{
                                exit(0);
                        }
                }       
                cout << "E' il turno di " << n2 << ":" << endl;
                tris.secondoGiocatore();
                tris.visualizza();
                if(tris.VincitaSecondoGiocatore()) {
                        cout << "\aVince " << n2 << endl;
                        cout << "Vuoi continuare? (si = 1, no = 0) >>> ";
                        cin >> loop;
                        if(loop == 1){
                                goto continua_gioco;
                        }
                else
                exit(0);
                }
                

                }
}


int main() { // richiama la funzione di inizio gioco
        inizio_gioco();
return 0;
}
