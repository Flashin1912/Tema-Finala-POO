#ifndef MEDIU_H
#define MEDIU_H
#include <bits/stdc++.h>
#include "Inamic.h"

class Mediu: public Inamic
{
    private:
    int minioni;

    public:
    Mediu(int minioni);
    void vorbeste() override;
};

#endif