#ifndef MIETWAGEN_H
#define MIETWAGEN_H

#include <iostream>
#include <vector>   //liste
#include "fahrt.h"  // wir müssen fahrt includieren weil wir später vector<fahrt> schreibenm der compiler muss zuerst wissen was fahrt ist überhaupt

using namespace std;

class mietwagen
{
private:
    string marke;   //Attribute stehen in der aufgabenstellung
    string kennzeichen;
    int sitze;
    
    vector<fahrt> fahrtenbuch; // warum vector? weil aufgabe sagt mietwagen besitzt ein fahrtenbuch mit mehrern fahrten, also brauchen mehrere objekte
    
public:     // methoden die bekommen wir aus der aufgabenstellung
    mietwagen();

    void anmieten (fahrt f);    // logisch weil wenn jemand ein fahrzeug mietet braucht die funktion fahrt

    void extracted();
    void
    fahrtAnzeigen(int nummer); // void weil nicihts zurückgegeben werden soll

    void alleFahrtenAnzeigen();

};
#endif // MIETWAGEN_H
