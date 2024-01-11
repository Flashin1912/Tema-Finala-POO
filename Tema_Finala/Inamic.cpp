#include "Inamic.h"
#include <bits/stdc++.h>


Inamic::Inamic()
{
    this->atac = 0;
    this->viata = 0;
}

Inamic::Inamic(int hp, int dmg)
{
    this->atac = hp;
    this->viata = dmg;
}

int Inamic::getAtac()
{
    if(atac <= 0)
    throw eroareAtac("Atacul nu a fost initializat!");
    return this->atac;
}

int Inamic::getViata()
{
    return this->viata;
}

void Inamic::takeDmg(int dmgAmm)
{
    if(viata <= 0)
    throw eroareViata("Inamicul este deja mort!");
    this->viata-=dmgAmm;
}