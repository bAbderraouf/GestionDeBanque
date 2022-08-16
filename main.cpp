#include "compte.h"
#include "client.h"
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
         cout << choix;

    } while (choix != 4);

    return 0;
}
