#ifndef CREAREINAMIC_H
#define CREAREINAMIC_H
#include "Inamic.h"
#include "mic.h"
#include "mediu.h"
#include "mare.h"

class CreareInamic 
{
public:
    static Inamic* creaza(std::string tip) 
    {
        if (tip == "mic") {
            return new Mic(30);
        } else if (tip == "mediu") {
            return new Mediu(6);
        } else if (tip == "mare") {
            return new Mare(50);
        }
        return nullptr;
    }
};

#endif