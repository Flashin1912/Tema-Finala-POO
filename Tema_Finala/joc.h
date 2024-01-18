#ifndef JOC_H
#define JOC_H
#include <iostream>
#include <memory>
#include "Inamic.h"
#include "mic.h"
#include "mediu.h"
#include "mare.h"
#include "creareInamic.h"
#include "dateInamic.h"
#include "mecanici.h"


class Joc
{
    public:
        Joc();
        virtual ~Joc();
        void start();
        void lista();
    private:
        Date<int> *pozitie;
        Date<float> *viteza;
        std::vector<Inamic*> inamici;
};

#endif