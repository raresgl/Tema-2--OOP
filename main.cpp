#include <iostream>
#include <string>
#include <exception>
using namespace std;
#include "atelier.h"
#include "vehicul.h"
#include "automobil.h"
#include "bicicleta.h"
#include "motocicleta.h"
int main()
{
    Client_atelier client = Client_atelier::Autovehicul;
    Atelier atelier(client);
    Automobil a;
    a.Traumatizare();
    a.Calculeaza_Devizul(&atelier);
}
