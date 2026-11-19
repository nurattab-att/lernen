#include "autovermietung.h" //"..."= eigene datei "<...>"= c++ bibliothek

using namespace std;

int main()  //startpunkt jedes normalen c++ programms
{
    autovermietung a; //Autovermietung ist der datentyp bzw die klasse; a ist der name des objekts wie zb int name

    a.dialog(); // d.h. rufe beim objekt a die methode dialog() auf; a ist das objekt . ist der zugriffsoperator für ein normales objekt;
   //dialog() ist die methode die ausgeführt werden soll; die zeile sagt "Nimm das objekt a und führe seine methode dialog aus:"
    //was passiert in dialog(): das programm springt in void AUtovermietung::dialog(); dort wird ein menü erzeugt und angezeigt, benutzeriengaben
    //verarbeitet, eine fahrt erstellt oder angezeigt; erst wenn der benutzer 0 wählt geht das programm in die main.cpp zurück
    return 0;
}
