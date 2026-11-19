#ifndef AUTOVERMIETUNG_H
#define AUTOVERMIETUNG_H

#include <vector>
#include "mietwagen.h" //weil wir gleich den mietwagen vector nutzen der compiler muss wissen was mietwagen überhaupt ist

using namespace std;

class autovermietung
{
private:
    vector<mietwagen*> fahrzeuge; //steht so in der aufgabenstellung und autovermietung besitzt mehrere fahrzeuge also brauchen wir liste
    //der stern bedeutet ZEIGER; brauchen wir weil die mietwagen später mit new mietwagen() erzeugt werden und new liefert immer ein zeiger zurück
public:
    autovermietung();

    void dialog();
};

#endif // AUTOVERMIETUNG_H
