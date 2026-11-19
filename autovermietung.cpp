#include "autovermietung.h"

autovermietung::autovermietung() //leer weil in diesem konstruktor noch nichts gemacht werden muss, die arbeit beginnt in dialog()
{

}

void autovermietung::dialog()
{
    fahrzeuge.push_back(new mietwagen());   //new mietwagen erzeugt einen neuen mietwagen bsp mietwagen* m= new mietwagen; mit push back wird
                                            //dieses neue objekt in den vector gelegt
    int auswahl;    //der benutzer soll später 1/2/3/0 eingeben also brauchen wir eine variable

    do  //do while schleife weil das menü mindestens einmal angezeigt werden soll , danach wird geprüft ob der benutzer 0 eingegeben hat
    {
        cout << endl;
        cout << "1: Fahrzeug mieten" << endl;       //das sind alles die menüpunkte aus der aufgabenstellung
        cout << "2: Fahrt anzeiegen" << endl;
        cout << "3: Alle Fahrten anzeigen" << endl;
        cout << "0: Programm beenden" << endl;

        cin >> auswahl; //Jetzt speichert der computer die eingabe der variable um dann den menüpunkt auszugeben

        switch (auswahl)    //switch weil wir mehrere möglichkeiten haben
        {
        case 1: //Hier wird eine neue fahrt angelegt
        {
            int nummer; // diese werte gibt der benutzer ein
            string kunde;
            int ab;
            int bis;

            cout << "Buchungsnummer? ";
            cin >> nummer;                  //liest die nummer ein

            cout << "Kunde? ";
            cin >> kunde;

            cout << "Abholdatum? ";
            cin >> ab;

            cout << "Abgabedatum? ";
            cin >> bis;

            fahrt f(nummer, kunde,  ab, bis);   //jetzt wird ein neues fahrt objekt erzeugt, kennen wir vom konstruktor alle vier
            //§werte werden an konstruktor übergegen

            fahrzeuge[0]->anmieten(f); //wichtig: nimm das erste fahrzeug im vector fahrzeuge ohne punkt weil der zeiger gespeichert wird
                                        //anmieten(f) : jetzt wird die fahrt an den mietwagen übergeben dieser speicehrt sie im fahrtenbuch
            break;

        }
        case 2:
        {
            int nummer;

            cout << "Buchungsnummer? ";
            cin >> nummer;

            fahrzeuge[0]->fahrtAnzeigen(nummer); //hier wird nach einer nummer gesucht;die eigentliche suche passiert in der Klasse Mietwagen;
            //die Autovermietung sagt nur "Lieber Mietwagen, zeig bitte diese Fahrt an."

            break;
            }

        case 3:
                fahrzeuge[0]->alleFahrtenAnzeigen(); //das selbe Prinzip, nicht die Autovermietung kennt alle Fahrten, sondern Mietwagen
            break;

        case 0:
            break;

        default:
            cout << "Falsche Eingabe!" << endl; //wenn benutzer zb 7 schreibt kommt diese meldung
        }

    }  while (auswahl != 0);
}










