#ifndef FAHRT_H
#define FAHRT_H
#include <iostream>
using namespace std;

class fahrt     //hier beginnt die Klasse
{
private:        //alles unter private darf nur die klasse selbst benutzen (in der aufgabenstellung alles was bei minus steht ist private, + ist public)
    int nummer;
    string kunde;
    int abholdatum;
    int abgabedatum;

public:     //alles unter public darf jeder benutzen zb in main oder in klasse mietwagen
    fahrt(int n, string k, int ab, int bis); //Konstruktor, heißt immer genau so wie die klasse, hat kein rückgabetyp,

    void anzeigen (); //kein rückgabe funktion soll nur die parameter im konstruktor anzeigen

    int getNummer(); // wir brauchen getter weil nummer ist private und kann von außen nicht benutzt werden

};
#endif // FAHRT_H
