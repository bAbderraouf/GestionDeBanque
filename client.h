#ifndef client
#define client

#include <iostream>
#include <string>
#include <fstream>
#include "compte.h"  // chq client peut avoir un compte




class Client
{
	private:

	    int Id_client;
	    std::string Nom;
	    std::string Prenom;
	    std::string Profession;
	    std::string Num_tel;
	   // Compte *TableauDeComptes;   



	public:
	    Client(); // constructeur par default
	    Client(int  , std::string  , std::string  , std::string , std::string );
	    ~Client();

	    // ajouter/modifier(info_client)/supprimer/chercher(par id) un client
	    void ajouter_client();  //
	    void modifier_info_client();
	    void supprimer_client();
	    
    
};

#endif
