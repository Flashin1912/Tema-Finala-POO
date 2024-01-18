#include "joc.h"

Joc::Joc()
{  
    inamici.push_back(CreareInamic::creaza("mic"));
    inamici.push_back(CreareInamic::creaza("mediu"));
    inamici.push_back(CreareInamic::creaza("mare"));
    pozitie = new Date<int>(105, 36);
    viteza = new Date<float>(0.5f, 1.0f);
    
}

void Joc::start()
{
    std::cout << "Jocul a inceput!" << std::endl;
    std::cout << "Pozitia inamicilor este: " << pozitie->getA() << " " << pozitie->getB() << std::endl;
    std::cout << "Viteza grupului de inamici este: " << viteza->getA() << " " << viteza->getB() << std::endl;
    for(int i = 0; i < inamici.size(); i++)
    {
        if (inamici[i]->getType() == 1)
        {
            ((Mic*)inamici[i])->vorbeste();
        }   else if(inamici[i]->getType() == 2){
            ((Mediu*)inamici[i])->vorbeste();
        }   else if(inamici[i]->getType() == 3){
            ((Mare*)inamici[i])->vorbeste();
        }
    }
}

void Joc::lista()
{
    std::cout << "Inamicii sunt:" << std::endl;
    std::string tipuri[3] = {"mic", "mediu", "mare"};
    for(int i = 0; i < inamici.size(); i++)
    {
        std::cout << "Inamic " << i+1 << " este "<< tipuri[(inamici[i]->getType())-1] << " si are " << inamici[i]->getAtac() << " atac si " << inamici[i]->getViata() << " viata." << std::endl;
    }
}

Joc::~Joc()
{
    delete pozitie;
    delete viteza;
    for(int i = 0; i < inamici.size(); i++)
    {
        delete inamici[i];
    }
}