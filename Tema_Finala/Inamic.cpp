#include "Inamic.h"
#include <bits/stdc++.h>


Inamic::Inamic()
{
    this->atac = 0;
    this->viata = 0;
    this->tip = 1;
}

Inamic::Inamic(int hp, int dmg, int type)
{
    this->atac = hp;
    this->viata = dmg;
    this->tip = type;
}

int Inamic::getType()
{
    return this->tip;
}

int Inamic::getAtac() throw(eroareAtac) 
{
    if(atac <= 0)
    throw eroareAtac("Atacul nu a fost initializat!");
    return this->atac;
}

int Inamic::getViata()
{
    return this->viata;
}

void Inamic::takeDmg(int dmgAmm) throw(eroareViata)
{
    if(viata <= 0)
    throw eroareViata("Inamicul este deja mort!");
    this->viata-=dmgAmm;
}

Inamic::~Inamic() {}
void Inamic::vorbeste() {}