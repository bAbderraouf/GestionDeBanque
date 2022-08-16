#ifndef compte
#define compte

#include <iostream>
#include <string>
#include <fstream>





class Compte
{
	private:
	    int Id_compte;
	    int Id_client;
	    double Solde;
	    std::string Date_douverture;

	public:
	    Compte();
	    Compte(int , int , double , std::string ); //
	    ~Compte();  //

	    void creer_compte();  //
	    void consulter_solde(); //
	    void fermer_compter();  //

	    void retrait();  //
	    void depot();    //
	    
	    // creation d'un nouveau compte
	    int getNewIdCompte();
	    std::string getDateAujourdui();
};


bool verfierIdClient(int id);

#endif
