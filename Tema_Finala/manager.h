#ifndef MANAGER_H
#define MANAGER_H

class Manager 
{
private:
    static Manager* instance;

    Manager() {}

public:
    static Manager* getInstance() 
    {
        if (!instance)
            instance = new Manager();
        return instance;
    }
};
Manager* Manager::instance = 0;

#endif