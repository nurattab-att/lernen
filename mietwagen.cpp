#include "mietwagen.h"

mietwagen::mietwagen() {        //Konstruktor wird jetzt programmiert
    
    cout <<"Automarke? ";       //in aufgabenstellung steht der benutzer soll nach den dingen gefragt werden und
    cin >> marke;               // die antworten sollen direkt gespeicehrt werden mit cin
    
    cout << "KFZ_Kennzeichen? ";
    cin >> kennzeichen;
    
    cout << "Sitze?? ";
    cin >> sitze;
    
    cout << "--> Fahrzeug "     //Nach den eingaben oben vom beitzer sollen direkt die daten nochmal ausgegeben werden
         << marke
         << " mit KFZ-Kennzeichen "
         << kennzeichen
         << " und "
         << sitze
         << " Sitze wurden aufgenommen"
         << endl;  
    
}

void mietwagen::anmieten(fahrt f)     //der benutzer hat grade eine fahrt erstellt die soll ins fahrtenbuch eingetragen werden
{
    fahrtenbuch.push_back(f);       //mit push back d.h. hänge das objekt hinten an den vector an
    
    cout << "Fahrt "
         << f.getNummer()
         << "erfolgreich angelegt."
         << endl;
    
}

void mietwagen::fahrtAnzeigen(int nummer)
{
    for (int i= 0; i < fahrtenbuch.size(); i++) // wir brauchen schleife weil wir nicht wissen an welcher stelle im array fahrt liegt
    {
        if (fahrtenbuch[i].getNummer() == nummer) //wir nehmen die i-te fahrt dann holt die nummer und dann vergleichen wir obs die gesuchte nummer ist
        {
            fahrtenbuch[i].anzeigen(); // wenn ja dann anzeigen
            return;
        }

    }

    cout << "Fahrt existiert nicht." << endl; //wenn schleife fertig ist ohne etwas gefunden zu haben dann wird das rausgegeben
}

void mietwagen::alleFahrtenAnzeigen()
{
    if (fahrtenbuch.empty ())   //erst prüfen weil wenn vector leer ist dann gibts nichts auszugeben
    {
        cout << "Mietwagen wurde noch verliehen." << endl;
        return;
    }

    for (int i = 0; i < fahrtenbuch.size(); i++) //ansonsten durchlaufen wir wieder alle fahrten und lassen sie anzeigen
    {
        fahrtenbuch[i].anzeigen();
        cout << "---------------------------" << endl;
    }
}
