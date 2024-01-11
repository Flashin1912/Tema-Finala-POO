#ifndef INAMIC_H
#define INAMIC_H
#include <bits/stdc++.h>
#include "eroare_viata.h"
#include "eroare_atac.h"

class Inamic
{
private:
    int viata, atac;
public:
    Inamic();
    Inamic(int hp, int dmg);
    int getAtac() throw(eroareAtac);
    int getViata();
    virtual void vorbeste();
    void takeDmg(int dmgAmm) throw(eroareViata);
    ~Inamic();
};

#endif