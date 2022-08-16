#include "menu.h"

// premiere fonction de choix

int premierChoix(void)
{
    int choix = 0;

    std::cout << "\n\n---------------------\nFaites votre choix (de 1 a 4):\n";
    std::cout << "1.Gestion des clients.\n2.Gestion des comptes.\n3.Gestion des opperations sur comptes\n4.Quitter.\n..";
    std::cin >> choix;

    return choix;
}

//

void gestionDesClients(Client *nouveau)
{
    int choix_1 = 0;

    system("clear");
    cout << "---Gestion des clients---\n";
    // ajouter/modifier(info_client)/supprimer/chercher(par id) un client

    cout << "\n\n---------------------\nFaites votre choix (de 1 a 5):\n";
    cout << "1.Ajouter nouveau client.\n2.Modifier info client.\n3.Supprimer client.\n4.Chercher un client\n5.Quitter.\n..";
    cin >> choix_1;

    switch (choix_1)
    {
        case 1:
        {
            cout << "\n---Ajouter nouveau client---\n";
            nouveau->ajouter_client();
            break;
        }
        case 2:
        {
            // modifier_info_client();
            cout << "\n---Modifier infos client---\n";
            break;
        }
        case 3:
        {
            // supprimer_client();
            cout << "\n---Supprimer client---\n";
            break;
        }
        case 4:
        {
            cout << "\n---chercher un client---\n";
            // chercher_client() ;
            break;
        }
        case 5:
        {
            cout << "---Quitter---\n";
            break;
        }

        default:
        {
            cout << "\nchoix invalid..\nveuillez reprendre.\n";
            break;
        }
    }
}

//

void gestionDesComptes(Compte* nouveau_cmpte)
{
    int choix_2 = 0;

    system("clear");
    cout << "---Gestion des comptes---\n";
    cout << "1.Créer un nouveau compte via id_client.\n2.Consulter Solde.\n3.Fermer son compte\n..";
    // creer compte pour un client donné(via id_client)
    // consulter son solde
    //  ou fermer son compte
    
    std::cin >> choix_2;

    switch (choix_2)
    {
        case 1:
        {
            nouveau_cmpte->creer_compte();
            break;
        }
        case 2:
        {
            nouveau_cmpte->consulter_solde();
            break;
        }
        case 3 : 
        {
        	//fermer_compter(); 
        	break;
        }
        default:
        {
            cout << "\nchoix invalid..\nveuillez reprendre.\n";
            break;
        }
    }
}


//

void gestionDesOperations(Compte* nouveau_cmpte)
{

    int choix_3 = 0;
    system("clear");
    cout << "---Gestion des oppertations---\n";
    // retirer ou verser un montant
    cout << "1.Retrait.\n2.Depot.\n..";
    std::cin >> choix_3;
    
    switch (choix_3)
    {
        case 1:
        {
            nouveau_cmpte->retrait();
            break;
        }
        case 2:
        {
            nouveau_cmpte->depot();
            break;
        }
        default:
        {
            cout << "\nchoix invalid..\nveuillez reprendre.\n";
            break;
        }
    }
}


//

void switchChoix(int choix , Client* nouveau , Compte* nouveau_cmpte ){
    
        switch (choix)
        {
            case 1:
            {
                gestionDesClients(nouveau);
                break;
            }
            case 2:
            {
                gestionDesComptes(nouveau_cmpte);
                break;
            }
            case 3:
            {
                gestionDesOperations(nouveau_cmpte);
                break;
            }
            case 4:
            {
                system("clear");
                cout << "---Quitter---\n";
                break;
            }
            default:
            {
                cout << "\nchoix invalid..\nveuillez reprendre.\n";
                break;
            }
        }
}
