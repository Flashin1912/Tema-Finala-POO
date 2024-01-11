#ifndef MARE_H
#define MARE_H
#include <bits/stdc++.h>
#include "Inamic.h"

class Mare: public Inamic
{
    private:
    int furie;

    public:
    Mare(int furie);
    void vorbeste() override;
};

#endif