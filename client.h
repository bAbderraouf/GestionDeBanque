#ifndef client
#define client

#include<iostream>
#include <string>
#include <fstream>
#include "compte.h"  // chq client peut avoir un compte


using namespace std;

class Client
{
private:

    int Id_client;
    string Nom;
    string Prenom;
    string Profession;
    string Num_tel;
    Compte *TableauDeComptes;   



public:
    Client(); // constructeur par default
    Client(int  , string  , string  , string , string );
    ~Client();

    // ajouter/modifier(info_client)/supprimer/chercher(par id) un client
    void ajouter_client();  //
    void modifier_info_client();
    void supprimer_client();

    
};

#endif