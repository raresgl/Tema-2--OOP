//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_COMPONENTE_H
#define TEMA2_RARES_COMPONENTE_H
using namespace std;
class Componenta
{
private:

public:

};

class Frane:public Componenta
{
private:
    bool placuta_fata_uzata;        // auto moto
    bool placuta_spate_uzata;       // auto moto
    bool disc_uzat_1;               // auto moto
    bool disc_uzat_2;               // auto moto
    bool disc_uzat_3;               // auto
    bool disc_uzat_4;               // auto
    bool lant_tocit;                // bi
    bool lant_lipsa;                // bi
    bool defectiune_capitala;
public:
    void set_defectiune_capitala(bool val)
    {
        defectiune_capitala = val;
//        return citire_problema("Avem defectiune capitala la frane: ", defectiune_capitala);
    }
    void set_placuta_fata_uzata(bool val)
    {
        placuta_fata_uzata = val;
//        return citire_problema("Placuta fata este uzata: ",placuta_fata_uzata);
    }
    void set_placuta_spate_uzata(bool val)
    {
        placuta_spate_uzata = val;
//        return citire_problema("Placuta spate este uzata: ", placuta_spate_uzata);

    }

    void set_disc_uzat_1(bool val)
    {
        disc_uzat_1 = val;
//        return citire_problema("Discul 1 este uzat: ", disc_uzat_1);
    }
    void set_disc_uzat_2(bool val)
    {
        disc_uzat_2 = val;
//        return citire_problema("Discul 1 este uzat: ", disc_uzat_1);
    }
    void set_disc_uzat_3(bool val)
    {
        disc_uzat_3 = val;
//        return citire_problema("Discul 1 este uzat: ", disc_uzat_1);
    }
    void set_disc_uzat_4(bool val)
    {
        disc_uzat_4 = val;
//        return citire_problema("Discul 1 este uzat: ", disc_uzat_1);
    }
    void set_lant_lipsa(bool val)
    {
        lant_lipsa = val;
//        return citire_problema("Lantul la bicicleta lipseste: ", lant_lipsa);
    }
    void set_lant_tocit(bool val)
    {
        lant_tocit = val;
//        return citire_problema("Lantul la bicicleta este tocit: ", lant_tocit);
    }

    friend class Automobil;
    friend class Motocicleta;
    friend class Bicicleta;
};
class Motor:public Componenta
{
private:
    bool nivel_ulei_scazut;             // auto moto
    bool carburator_murdar;             // auto
    bool motor_topit;                   // auto moto
public:
    void set_nivel_ulei_scazut(bool val)
    {
        nivel_ulei_scazut = val;

    }
    void set_carburator_murdar(bool val)
    {
        carburator_murdar = val;

    }
    void set_motor_topit(bool val)
    {
        motor_topit = val;

    }
    friend class Automobil;
    friend class Motocicleta;
};
class Directie:public Componenta
{
private:
    bool ghidon_stramb;                 // bi moto
    bool roata_stramba;                 // bi moto auto
    bool defectiune_capitala;
public:
    void set_defectiune_capitala(bool val)
    {
        defectiune_capitala = val;

    }
    void set_ghidon_stramb(bool val)
    {
        ghidon_stramb = val;

    }
    void set_roata_stramba(bool val)
    {
        roata_stramba = val;

    }
    friend class Bicicleta;
    friend class Motocicleta;
    friend class Automobil;
};
class Noxe:public Componenta
{
private:
    bool veh_arde_ulei;             // auto moto
    bool veh_anterior_an_2000;      // moto auto
public:
    void set_veh_arde_ulei(bool val)
    {
        veh_arde_ulei = val;

    }
    void set_veh_anterior_an_2000(bool val)
    {
        veh_anterior_an_2000 = val;

    }
    friend class Automobil;
    friend class Motocicleta;
};
class Caroserie:public Componenta
{
private:
    bool caroserie_corodata_rugina;
    bool caroserie_stramba; // 1 - foarte stramba, 0 - fiecare componenta in parte
    bool aripa_stanga_stramba;
    bool aripa_dreapta_stramba;
    bool aripa_fata_stramba;
    bool aripa_spate_stramba;
    bool bara_stramba;
    bool capota_stramba;
public:
    void set_caroserie_corodata_rugina(bool val)
    {
        caroserie_corodata_rugina = val;
    }
    void set_caroserie_stramba(bool val)
    {
        caroserie_stramba = val;
    }
    void set_aripa_stanga_stramba(bool val)
    {
        aripa_stanga_stramba = val;
    }
    void set_aripa_dreapta_stramba(bool val)
    {
        aripa_dreapta_stramba = val;
    }
    void set_aripa_fata_stramba(bool val)
    {
        aripa_fata_stramba = val;
    }
    void set_aripa_spate_stramba(bool val)
    {
        aripa_spate_stramba = val;
    }
    void set_bara_stramba(bool val)
    {
        bara_stramba = val;
    }
    void set_capota_stramba(bool val)
    {
        capota_stramba = val;
    }
    friend class Automobil;
};



#endif //TEMA2_RARES_COMPONENTE_H
