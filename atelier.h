//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_ATELIER_H
#define TEMA2_RARES_ATELIER_H
using namespace std;
enum class Client_atelier
{
    Motocicleta,
    Bicicleta,
    Autovehicul
};

class Atelier
{
private:
    //Frane
    int pret_placuta_fata_uzata;
    int pret_placuta_spate_uzata;
    int pret_disc_uzat_1;
    int pret_disc_uzat_2;
    int pret_disc_uzat_3;
    int pret_disc_uzat_4;
    int pret_lant_tocit;
    int pret_lant_lipsa;
    //Motor
    int pret_ulei;
    int pret_carburator_murdar;
    //Directie
    int pret_ghidon_stramb;
    int pret_roata_stramba;
    //Noxe
    int pret_veh_arde_ulei;
    int pret_veh_anterior_an_2000;
    //Caroserie
    int pret_caroserie_corodata_rugina;
    int pret_caroserie_stramba;
    int pret_aripa_stanga_stramba;
    int pret_aripa_dreapta_stramba;
    int pret_aripa_fata_stramba;
    int pret_aripa_spate_stramba;
    int pret_bara_stramba;
    int pret_capota_stramba;

    int citire_pret(const string &text, int &var)
    {
        try
        {
            int r;
            cout << text;
            if(!(cin >> r))
                throw "eroare de citire";
            else
            {
                var = r;
                return var;
            }
        }
        catch (const string &e)
        {
            cerr << e;
        }
    }
public:
    //Frane
    int get_pret_placuta_fata_uzata()
    {
        return pret_placuta_fata_uzata;
    }
    int get_pret_placuta_spate_uzata()
    {
        return pret_placuta_spate_uzata;
    }
    int get_pret_disc_uzat_1()
    {
        return pret_disc_uzat_1;
    }
    int get_pret_disc_uzat_2()
    {
        return pret_disc_uzat_2;
    }
    int get_pret_disc_uzat_3()
    {
        return pret_disc_uzat_3;
    }
    int get_pret_disc_uzat_4()
    {
        return pret_disc_uzat_4;
    }
    int get_pret_lant_tocit()
    {
        return pret_lant_tocit;
    }
    int get_pret_lant_lipsa()
    {
        return pret_lant_lipsa;
    }
    //Motor
    int get_pret_ulei()
    {
        return pret_ulei;
    }
    int get_pret_carburator_murdar()
    {
        return get_pret_carburator_murdar();
    }
    //Directie
    int get_pret_ghidon_stramb()
    {
        return pret_ghidon_stramb;
    }
    int get_pret_roata_stramba()
    {
        return pret_roata_stramba;
    }
    //Noxe
    int get_pret_veh_arde_ulei()
    {
        return pret_veh_arde_ulei;
    }
    int get_pret_veh_anterior_an_2000()
    {
        return pret_veh_anterior_an_2000;
    }
    //Caroserie
    int get_pret_caroserie_corodata_rugina()
    {
        return pret_caroserie_corodata_rugina;
    }
    int get_pret_caroserie_stramba()
    {
        return pret_caroserie_stramba;
    }
    int get_pret_aripa_stanga_stramba()
    {
        return pret_aripa_stanga_stramba;
    }
    int get_pret_aripa_dreapta_stramba()
    {
        return pret_aripa_dreapta_stramba;
    }
    int get_pret_aripa_fata_stramba()
    {
        return pret_aripa_fata_stramba;
    }
    int get_pret_aripa_spate_stramba()
    {
        return pret_aripa_spate_stramba;
    }
    int get_pret_bara_stramba()
    {
        return pret_bara_stramba;
    }
    int get_pret_capota_stramba()
    {
        return pret_capota_stramba;
    }

    Atelier(const Client_atelier &client)
    {
        cout << "Se initializeaza Atelierul nostru." << endl;
        cout << "Toate inputurile care se vor cere se vor completa cu valori numerice > 0" << endl;
        switch(client)
        {
            case Client_atelier::Motocicleta:
                cout << "Clientul de astazi este o motocicleta. Avem nevoie sa prezentam preturile noastre!" << endl;
                cout << "Departamentul Frane" << endl;
                citire_pret("Pret reparare placuta de fata: ",pret_placuta_fata_uzata);
                citire_pret("Pret reparare placuta de spate: ", pret_placuta_spate_uzata);
                citire_pret("Pret reparare disc roata fata", pret_disc_uzat_1);
                citire_pret("Pret reparare disc roata spate", pret_disc_uzat_2);
                cout << "Departamentul Motor" << endl;
                citire_pret("Pret schimbare ulei: ", pret_ulei);
                cout << "Departamentul Directie" << endl;
                citire_pret("Pret reparare ghidon stramb: ", pret_ghidon_stramb);
                citire_pret("Pret reparare roata stramba: ", pret_roata_stramba);
                cout << "Departamentul Noxe" << endl;
                citire_pret("Pret vehiculul nu arde ulei: ", pret_veh_arde_ulei);
                citire_pret("Pret vehicul fabricat anterior an 2000: ", pret_veh_anterior_an_2000);
                break;
            case Client_atelier::Bicicleta:
                cout << "Clientul de astazi este o bicicleta. Avem nevoie sa prezentam preturile noastre!" << endl;
                cout << "Departamentul Frane" << endl;
                citire_pret("Pret reparare lant tocit: ",pret_lant_tocit);
                citire_pret("Pret lant lipsa: ", pret_lant_lipsa);
                cout << "Departamentul Directie" << endl;
                citire_pret("Pret reparare ghidon stramb: ", pret_ghidon_stramb);
                citire_pret("Pret reparare roata stramba: ", pret_roata_stramba);
                break;
            case Client_atelier::Autovehicul:
                cout << "Clientul de astazi este un autovehicul. Avem nevoie sa actualizam preturile noastre!" << endl;
                cout << "Departamentul Frane" << endl;
                citire_pret("Pret reparare placuta de fata: ",pret_placuta_fata_uzata);
                citire_pret("Pret reparare placuta de spate: ", pret_placuta_spate_uzata);
                citire_pret("Pret reparare disc roata fata-stanga", pret_disc_uzat_1);
                citire_pret("Pret reparare disc roata fata-dreapta", pret_disc_uzat_2);
                citire_pret("Pret reparare disc roata spate-stanga", pret_disc_uzat_3);
                citire_pret("Pret reparare disc roata spate-dreapta", pret_disc_uzat_4);
                cout << "Departamentul Motor" << endl;
                citire_pret("Pret schimbare ulei: ", pret_ulei);
                citire_pret("Pret curatare carburator: ", pret_carburator_murdar);
                cout << "Departamentul Directie" << endl;
                citire_pret("Pret reparare roata stramba: ", pret_roata_stramba);
                cout << "Departamentul Noxe" << endl;
                citire_pret("Pret vehiculul nu arde ulei: ", pret_veh_arde_ulei);
                citire_pret("Pret vehicul fabricat anterior an 2000: ", pret_veh_anterior_an_2000);
                cout << "Departamentul Caroserie" << endl;
                citire_pret("Pret caroserie corodata de rugina: ", pret_caroserie_corodata_rugina);
                citire_pret("Pret caroserie stramba", pret_caroserie_stramba);
                citire_pret("Pret aripa stanga stramba", pret_aripa_stanga_stramba);
                citire_pret("Pret aripa dreapta stramba", pret_aripa_dreapta_stramba);
                citire_pret("Pret aripa fata stramba", pret_aripa_fata_stramba);
                citire_pret("Pret aripa spate stramba", pret_aripa_spate_stramba);
                citire_pret("Pret bara stramba", pret_bara_stramba);
                citire_pret("Pret capota stramba", pret_capota_stramba);
                break;
        }
        cout << "Interogarea s-a incheiat cu succes!" << endl;
    }
    friend class Vehicul;
};

#endif //TEMA2_RARES_ATELIER_H
