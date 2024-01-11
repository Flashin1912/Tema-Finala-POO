#ifndef MIC_H
#define MIC_H
#include <bits/stdc++.h>
#include "Inamic.h"

class Mic: public Inamic
{
    private:
    int mana;

    public:
    Mic(int mana);
    void vorbeste() override;
};

#endif