//
// Created by rares on 4/22/2020.
//

#ifndef TEMA2_RARES_VEHICUL_H
#define TEMA2_RARES_VEHICUL_H
using namespace std;
class Vehicul
{
private:
    Atelier *atelier_asociat;

public:
    Vehicul()
    {

    }
    void set_atelier(Atelier *atelier)
    {
        atelier_asociat = atelier;
    }
    Atelier* get_atelier()
    {
        return atelier_asociat;
    }
    virtual void Traumatizare() = 0;        // pure virtual

    bool citire_problema(const string &text, bool &var)
    {
        try {
            string r;
            cout << text;
            cin >> r;
            if (r != "da" && r != "nu")
                throw "eroare de citire";
            else {
                var = (r == "da") ? true : false;
                return var;
            }
        }
        catch (const string &e)
        {
            cerr << e;
            return false;
        }
    }
    virtual int Calculeaza_Devizul(Atelier *atelier) = 0;
};

#endif //TEMA2_RARES_VEHICUL_H
