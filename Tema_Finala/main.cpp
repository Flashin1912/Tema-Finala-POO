
#include <iostream>
#include <memory>
#include "joc.h"
#include "manager.h"

Manager* Manager::instance = nullptr;

int main()
{
    Manager* manager = Manager::getInstance();

    return 0;
}