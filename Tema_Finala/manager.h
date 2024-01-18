#ifndef MANAGER_H
#define MANAGER_H
#include "joc.h"

class Manager 
{
private:
    static Manager* instance;
    std::unique_ptr<Joc> runda;
    Manager() 
    {
        runda = std::make_unique<Joc>();
        runda->start();
        runda->lista();
    }

public:
    static Manager* getInstance() 
    {
        if (!instance)
            instance = new Manager();
        return instance;
    }
};

#endif