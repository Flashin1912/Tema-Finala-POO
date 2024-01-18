#ifndef INAMIC_H
#define INAMIC_H
#include <bits/stdc++.h>
#include "eroare_viata.h"
#include "eroare_atac.h"

class Inamic
{
private:
    int viata, atac, tip;
public:
    Inamic();
    Inamic(int hp, int dmg, int type);
    int getAtac() throw(eroareAtac);
    int getViata();
    int getType();
    virtual void vorbeste();
    void takeDmg(int dmgAmm) throw(eroareViata);
    ~Inamic();
};

#endif