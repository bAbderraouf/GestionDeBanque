#ifndef menu
#define menu

#include <iostream>
#include "client.h"

int premierChoix(void);

void gestionDesClients(Client*);

void gestionDesComptes(Compte*);

void gestionDesOperations(Compte*);

void switchChoix(int choix , Client* , Compte* );

#endif