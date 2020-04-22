//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_MOTOCICLETA_H
#define TEMA2_RARES_MOTOCICLETA_H
#include "componente.h"
#include "vehicul.h"
using namespace std;
class Motocicleta: public Vehicul
{
private:
    Frane frane;
    Motor motor;
    Directie directie;
    Noxe noxe;
public:
    void citeste_probleme()
    {
        // Frane
        citeste_frane();
        // Motor
        citeste_motor();
        // Directie
        citeste_directie();
        // Noxe
        citeste_noxe();
    }
    void citeste_frane()
    {
        citire_problema("Avem defectiune capitala la frane: ", frane.defectiune_capitala);
        if(frane.defectiune_capitala)
            return;
        citire_problema("Placuta fata este uzata: ",frane.placuta_fata_uzata);
        citire_problema("Placuta spate este uzata: ", frane.placuta_spate_uzata);
        citire_problema("Discul rotii fata este uzat: ", frane.disc_uzat_1);
        citire_problema("Discul rotii spate este uzat: ", frane.disc_uzat_2);
    }
    void citeste_motor()
    {
        citire_problema("Nivelul uleiului este scazut: ", motor.nivel_ulei_scazut);
        citire_problema("Motorul este topit: ", motor.motor_topit);
    }
    void citeste_directie()
    {
        citire_problema("Avem defectiune capitala la directia vehiculului: ", directie.defectiune_capitala);
        if(directie.defectiune_capitala)
            return;
        citire_problema("Directia rotilor este stramba: ", directie.roata_stramba);
        citire_problema("Ghidonul este stramb: ", directie.ghidon_stramb);
    }
    void citeste_noxe()
    {
        citire_problema("Vehiculul arde ulei: ", noxe.veh_arde_ulei);
        citire_problema("Vehiculul este fabricat anterior anului 2000: ", noxe.veh_anterior_an_2000);
    }
    Motocicleta& operator=(const Motocicleta& ob)
    {

    }
    void Traumatizare()
    {

        cout << "0 - EXIT\n"
                "1 - Uzeaza placuta fata\n"
                "2 - Uzeaza placuta spate\n"
                "3 - Uzeaza disc roata fata\n"
                "4 - Uzeaza disc roata spate\n"
                "5 - Scade nivelul uleiului\n"
                "6 - Topeste motorul\n"
                "7 - Stramba ghidonul\n"
                "8 - Stramba directia rotilor\n"
                "9 - Incepe sa arzi ulei\n";
        cout << "Ce doresti sa traumatizezi la motocicleta noastra? :(" << endl;
        int n=11111;
        while(n != 0)
        {
            cout << "n= "; cin >> n;
            switch(n)
            {
                case 1:
                    frane.set_placuta_fata_uzata(true);
                    cout << "Done" << endl;
                    break;
                case 2:
                    frane.set_placuta_spate_uzata(true);
                    cout << "Done" << endl;
                    break;
                case 3:
                    frane.set_disc_uzat_1(true);
                    cout << "Done" << endl;
                    break;
                case 4:
                    frane.set_disc_uzat_2(true);
                    cout << "Done" << endl;
                    break;
                case 5:
                    motor.set_nivel_ulei_scazut(true);
                    cout << "Done" << endl;
                    break;
                case 6:
                    motor.set_motor_topit(true);
                    cout << "Done" << endl;
                    break;
                case 7:
                    directie.set_ghidon_stramb(true);
                    cout << "Done" << endl;
                    break;
                case 8:
                    directie.set_roata_stramba(true);
                    cout << "Done" << endl;
                    break;
                case 9:
                    noxe.set_veh_arde_ulei(true);
                    cout << "Done" << endl;
                    break;
            }
        }
    }
};

#endif //TEMA2_RARES_MOTOCICLETA_H
