#include "fahrt.h"          // wichtig, cpp muss wissen welche klasse sie programmiert
using namespace std;

fahrt:: fahrt(int n, string k, int ab, int bis)     //Fahrt:: heißt funktion gehört zur Klasse Fahrt :: ist bereichsoperator
{                                                   //Fahrt(..) ist der Konstruktor der heißt immer wie klasse; die selben Parameter wie aus header
    //datei nochmal hinschreiben damit compiler weiß welche funktion wir programmieren
                                                
    nummer = n;         //nummer ist variable der klasse sie gehört zum objekt rechts n ist parameter; wenn wir später schreiben Fahrt f(1000,"Bond",
    kunde = k;          //20230404, 20230406); passiert automatisch n=1000 dann wird nummer= n also nummer = 1000; dasselbe gilt für k, ab, bis. Warum?
    abholdatum = ab;    //damit das objekt seine eigenen werte speichert jedes objekt hat später eigene daten
    abgabedatum = bis;
    
}

void fahrt::anzeigen()     //warum wieder fahrt::? weil wir sagen müssen diese funktion gehört zur klasse fahrt; void weil kein rückgabewert
{
    cout << "Nr. " << nummer    // wenn nummer =1000 dann wird "Nr.1000" ausgegeben
         << ": Kunde " << kunde  //Alles zusammen gibt Nr.1000: Kunde Bond, James holt Fahrzeug am 20230404 ab und bringt es am 20230406 zurück
         << " holt Fahrzeug am "
         << abholdatum
         << " ab und bringt es am "
         << abgabedatum
         << " zurueck" <<endl;
}
int fahrt::getNummer()
{
    return nummer;      //gibt die gespeicherte nummer zurück
} 
