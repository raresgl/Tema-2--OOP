//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_AUTOMOBIL_H
#define TEMA2_RARES_AUTOMOBIL_H
#include "componente.h"
#include "vehicul.h"
using namespace std;
class Automobil: public Vehicul
{
private:
    Frane frane;
    Motor motor;
    Directie directie;
    Noxe noxe;
    Caroserie caroserie;
public:
    Automobil()
        :Vehicul()
    {
    citeste_probleme();
    }
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
        // Caroserie
        citeste_caroserie();
    }
    void citeste_frane()
    {
        citire_problema("Avem defectiune capitala la frane: ", frane.defectiune_capitala);
        if(frane.defectiune_capitala)
            return;
        citire_problema("Placuta fata este uzata: ",frane.placuta_fata_uzata);
        citire_problema("Placuta spate este uzata: ", frane.placuta_spate_uzata);
        citire_problema("Discul rotii fata-stanga este uzat: ", frane.disc_uzat_1);
        citire_problema("Discul rotii fata-dreapta este uzat: ", frane.disc_uzat_2);
        citire_problema("Discul rotii spate-stanga este uzat: ", frane.disc_uzat_3);
        citire_problema("Discul rotii spate-dreapta este uzat: ", frane.disc_uzat_4);
    }
    void citeste_motor()
    {
        citire_problema("Nivelul uleiului este scazut: ", motor.nivel_ulei_scazut);
        citire_problema("Carburatorul este murdar: ", motor.carburator_murdar);
        citire_problema("Motorul este topit: ", motor.motor_topit);
    }
    void citeste_directie()
    {
        citire_problema("Avem defectiune capitala la directia vehiculului: ", directie.defectiune_capitala);
        if(directie.defectiune_capitala)
            return;
        citire_problema("Directia rotilor este stramba: ", directie.roata_stramba);
    }
    void citeste_noxe()
    {
        citire_problema("Vehiculul arde ulei: ", noxe.veh_arde_ulei);
        citire_problema("Vehiculul este fabricat anterior anului 2000: ", noxe.veh_anterior_an_2000);
    }
    void citeste_caroserie()
    {
        citire_problema("Caroseria este corodata de rugina: ", caroserie.caroserie_corodata_rugina);
        citire_problema("Caroseria este foarte foarte FOARTE stramba: ", caroserie.caroserie_stramba);
        if(caroserie.caroserie_stramba)
            return;
        citire_problema("Aripa stanga este stramba: ", caroserie.aripa_stanga_stramba);
        citire_problema("Aripa dreapta este stramba: ", caroserie.aripa_dreapta_stramba);
        citire_problema("Aripa din fata este stramba: ", caroserie.aripa_fata_stramba);
        citire_problema("Aripa din fata este stramba: ", caroserie.aripa_spate_stramba);
        citire_problema("Bara este stramba: ", caroserie.bara_stramba);
        citire_problema("Capota este stramba: ", caroserie.capota_stramba);
    }
    Automobil& operator=(const Automobil& ob)
    {

    }
    void Traumatizare()
    {

        cout << "0 - EXIT\n"
                "1 - Uzeaza placuta fata\n"
                "2 - Uzeaza placuta spate\n"
                "3 - Uzeaza disc roata fata-stanga\n"
                "4 - Uzeaza disc roata fata-dreapta\n"
                "5 - Uzeaza disc roata spate-stanga\n"
                "6 - Uzeaza disc roata spate-dreapta\n"
                "7 - Murdareste carburator\n"
                "8 - Scade nivelul uleiului\n"
                "9 - Topeste motorul\n"
                "10 - Stramba directia rotilor\n"
                "11 - Incepe sa arzi ulei\n"
                "12 - Stramba caroseria pe componente\n"
                "13 - Stramba caroseria complet\n";
        cout << "Ce doresti sa traumatizezi la masina noastra? :(" << endl;
        int n=1111, k=1111;
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
                    frane.set_disc_uzat_3(true);
                    cout << "Done" << endl;
                    break;
                case 6:
                    frane.set_disc_uzat_4(true);
                    cout << "Done" << endl;
                    break;
                case 7:
                    motor.set_carburator_murdar(true);
                    cout << "Done" << endl;
                    break;
                case 8:
                    motor.set_nivel_ulei_scazut(true);
                    cout << "Done" << endl;
                    break;
                case 9:
                    motor.set_motor_topit(true);
                    cout << "Done" << endl;
                    break;
                case 10:
                    directie.set_roata_stramba(true);
                    cout << "Done" << endl;
                    break;
                case 11:
                    noxe.set_veh_arde_ulei(true);
                    cout << "Done" << endl;
                    break;
                case 12:
                    cout << "Ai ales sa strambi caroseria pe componente.";
                    if(caroserie.caroserie_stramba)
                        cout << "Caroseria este foarte foarte FOARTE stramba. Nu putem interveni! " << endl;
                        break;
                    k = 0;
                    cout << "0 - EXIT\n"
                            "1 - Stramba aripa stanga\n"
                            "2 - Stramba aripa dreapta\n"
                            "3 - Stramba aripa fata\n"
                            "4 - Stramba aripa spate\n"
                            "5 - Stramba bara\n"
                            "6 - Stramba capota\n";
                    while(k != 0)
                    {
                        cout << "k= ";
                        cin >> k;
                        switch(k)
                        {
                            case 1:
                                caroserie.set_aripa_stanga_stramba(true);
                                cout << "Done. " << endl;
                                break;
                            case 2:
                                caroserie.set_aripa_dreapta_stramba(true);
                                cout << "Done. " << endl;
                                break;
                            case 3:
                                caroserie.set_aripa_fata_stramba(true);
                                cout << "Done. " << endl;
                                break;
                            case 4:
                                caroserie.set_aripa_spate_stramba(true);
                                cout << "Done. " << endl;
                                break;
                            case 5:
                                caroserie.set_bara_stramba(true);
                                cout << "Done. " << endl;
                                break;
                            case 6:
                                caroserie.set_capota_stramba(true);
                                cout << "Done. " << endl;
                                break;
                        }
                    }
                    break;
                case 13:
                    caroserie.set_caroserie_stramba(true);
                    cout << "Done" << endl;
                    break;
            }
        }
    }
    int Calculeaza_Devizul(Atelier *atelier)
    {
        int deviz = 0;

        // Frane
        deviz+=calculeaza_deviz_frane(atelier);
        // Directie
        deviz+=calculeaza_deviz_directie(atelier);
        // Motor
        deviz+=calculeaza_deviz_motor(atelier);
        // Noxe
        deviz+=calculeaza_deviz_noxe(atelier);
        // Caroserie
        deviz+=calculeaza_deviz_caroserie(atelier);
        return deviz;
    }
    int calculeaza_deviz_frane(Atelier *atelier)
    {
        int deviz = 0;
        if(frane.defectiune_capitala)
            return 0;
        deviz += (frane.disc_uzat_1 ? 1 : 0) * atelier->get_pret_disc_uzat_1();
        deviz += (frane.disc_uzat_2 ? 1 : 0) * atelier->get_pret_disc_uzat_2();
        deviz +=(frane.disc_uzat_3 ? 1 : 0) * atelier->get_pret_disc_uzat_3();
        deviz +=(frane.disc_uzat_4 ? 1 : 0) * atelier->get_pret_disc_uzat_4();
        deviz +=(frane.placuta_spate_uzata ? 1 : 0) * atelier->get_pret_placuta_fata_uzata();
        deviz +=(frane.placuta_fata_uzata ? 1 : 0) * atelier->get_pret_placuta_spate_uzata();
        return deviz;
    }
    int calculeaza_deviz_directie(Atelier *atelier)
    {
        int deviz = 0;
        if(directie.defectiune_capitala)
            return 0;
        deviz += (directie.roata_stramba ? 1 : 0) * atelier->get_pret_roata_stramba();
        return deviz;
    }
    int calculeaza_deviz_motor(Atelier *atelier)
    {
        int deviz = 0;
        deviz += (motor.carburator_murdar ? 1 : 0) * atelier->get_pret_carburator_murdar();
        deviz += (motor.motor_topit ? 1 : 0) * atelier->get_pret_ulei();
        deviz +=(motor.nivel_ulei_scazut ? 1 : 0) * atelier->get_pret_ulei();
        return deviz;
    }
    int calculeaza_deviz_noxe(Atelier *atelier)
    {
        int deviz = 0;
        deviz += (noxe.veh_arde_ulei ? 1 : 0) * atelier->get_pret_veh_arde_ulei();
        deviz += (noxe.veh_anterior_an_2000 ? 1 : 0) * atelier->get_pret_veh_anterior_an_2000();
        return deviz;
    }
    int calculeaza_deviz_caroserie(Atelier *atelier)
    {
        int deviz = 0;
        deviz += (caroserie.caroserie_corodata_rugina ? 1 : 0) * atelier->get_pret_caroserie_corodata_rugina();
        if(caroserie.caroserie_stramba)
            deviz += atelier->get_pret_caroserie_stramba();
        deviz += (caroserie.bara_stramba ? 1 : 0) * atelier->get_pret_bara_stramba();
        deviz +=(caroserie.aripa_spate_stramba ? 1 : 0) * atelier->get_pret_aripa_stanga_stramba();
        deviz +=(caroserie.aripa_fata_stramba ? 1 : 0) * atelier->get_pret_aripa_fata_stramba();
        deviz +=(caroserie.aripa_dreapta_stramba ? 1 : 0) * atelier->get_pret_aripa_dreapta_stramba();
        deviz +=(caroserie.aripa_stanga_stramba ? 1 : 0) * atelier->get_pret_aripa_stanga_stramba();
        deviz +=(caroserie.capota_stramba ? 1 : 0) * atelier->get_pret_capota_stramba();
        return deviz;
    }

    friend ostream& operator<<(ostream &out, Automobil &a)
    {
        out << a.Calculeaza_Devizul(a.get_atelier());
        return out;
    }
    friend istream& operator>>(istream &in, Automobil &a)
    {
        a.citeste_probleme();
    }
};


#endif //TEMA2_RARES_AUTOMOBIL_H
