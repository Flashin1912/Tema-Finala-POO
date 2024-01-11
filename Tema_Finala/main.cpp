
#include <iostream>
#include <memory>
#include "Inamic.h"
#include "mic.h"
#include "mediu.h"
#include "mare.h"
#include "manager.h"
#include "creareInamic.h"
#include "dateInamic.h"
#include "mecanici.h"

int main()
{
    //Singleton
    Manager* ManagerJoc = Manager::getInstance();//instnata in care se afla jocul(starea globala, nivel, pause/resume)

    //Metoda Factory
    Inamic* InamicMic = CreareInamic::creaza("mic");
    Inamic* InamicMediu = CreareInamic::creaza("mediu");
    Inamic* InamicMare = CreareInamic::creaza("mare");//creem inamici

    //Clasa template
    Date<int> pozitie(105, 36);//coordonate ale unui inamic pe harta
    Date<float> viteza(0.5f, 1.0f);//viteza pe axele x si y

    //Fucntie template
    int maxAtac = max(15, 30);
    double maxViata = max(70.0, 40.5); //calculam ce inamic are viata si atacul mai mari, folosind mecanicile jocului

    Mic m(30);
    Mediu med(5);
    Mare M(40);
    m.vorbeste();
    med.vorbeste();
    M.vorbeste();
    std::cout << ((Inamic)m).getViata() << std::endl;
    try {
        med.takeDmg(5);
    } catch(eroareViata v) {
        std::cout << v.what() << std::endl;
    }
    std::unique_ptr <Mic> m2(new Mic(35));
    m2->vorbeste();

    delete InamicMic;
    delete InamicMediu;
    delete InamicMare;

    return 0;
}