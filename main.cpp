#include "client.h"
#include "compte.h"
#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

int main()
{

    int choix = 0;
    Client nouveau;
    Compte nouveau_cmpte;

    do
    {
        choix = premierChoix();
       
        switchChoix(choix , &nouveau , &nouveau_cmpte );

    } while (choix != 4);

    return 0;
}
