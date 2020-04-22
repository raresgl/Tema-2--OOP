//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_BICICLETA_H
#define TEMA2_RARES_BICICLETA_H
#include "componente.h"
#include "vehicul.h"
using namespace std;
class Bicicleta: public Vehicul
{
private:
    Frane frane;
    Directie directie;
public:

    void citeste_probleme()
    {
        // Frane
        citeste_frane();
        // Directie
        citeste_directie();
    }
    void citeste_frane()
    {
        citire_problema("Avem defectiune capitala la frane: ", frane.defectiune_capitala);
        if(frane.defectiune_capitala)
            return;
        citire_problema("Lantul la bicicleta lipseste: ", frane.lant_lipsa);
        citire_problema("Lantul la bicicleta este tocit: ", frane.lant_tocit);
    }
    void citeste_directie()
    {
        citire_problema("Avem defectiune capitala la directia vehiculului: ", directie.defectiune_capitala);
        if(directie.defectiune_capitala)
            return;
        citire_problema("Directia rotilor este stramba: ", directie.roata_stramba);
        citire_problema("Ghidonul este stramb: ", directie.ghidon_stramb);
    }
    void Traumatizare() {

        cout << "0 - EXIT\n"
                "1 - Toceste lantul\n"
                "2 - Stramba ghidonul\n"
                "3 - Stramba directia rotilor\n";
        cout << "Ce doresti sa traumatizezi la bicicleta noastra? :(" << endl;
        int n=11111;
        while (n != 0) {
            cout << "n= ";
            cin >> n;
            switch (n) {
                case 1:
                    frane.set_lant_tocit(true);
                    cout << "Done" << endl;
                    break;
                case 2:
                    directie.set_ghidon_stramb(true);
                    cout << "Done" << endl;
                    break;
                case 3:
                    directie.set_roata_stramba(true);
                    cout << "Done" << endl;
                    break;
            }
        }
    }
};


#endif //TEMA2_RARES_BICICLETA_H
