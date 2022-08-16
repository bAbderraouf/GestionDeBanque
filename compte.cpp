#include "compte.h"
#include <stdio.h>
#include <stdlib.h>


using namespace std;

// constructeur par default
Compte::Compte()
{
    Id_client = 0;
    Id_compte = 0;
    Solde = 0;
    Date_douverture = "01/01/1901";
    
}

// constructeur  (a enlever : doit etre fait automatiquements)
Compte::Compte(int _Id_compte, int _Id_client, double _Solde, string _Date_douverture){

    Id_compte = _Id_compte ;
    Id_client = _Id_client;
    Solde = _Solde ;
    Date_douverture = _Date_douverture;

}

//destructeur
Compte::~Compte(){

}


//

int Compte::getNewIdCompte()
{
	Id_compte++;
	
	return Id_compte;	
}

//

string Compte::getDateAujourdui()
{	
	string dateAujourdui = "01/01/1901"; 
	return dateAujourdui; // a calculer après

}

//

void Compte::retrait()
{   
    double somme = 0;
    cout<< "\ncombien voulez vous retirer ?\n";
    cin >> somme ;
    // calcul du nouveau solde restant
    Solde = Solde - somme;
    cout<<"vous avez retiré "<<somme << "euros.\n";
}

void Compte::depot()
{
    double somme = 0;
    cout<< "\ncombien voulez vous deposer ?\n";
    cin >> somme;
    // calcul du nouveau solde
    Solde = Solde + somme;
    cout<<"vous avez deposé "<<somme << "euros.\n";
}

/*
    int Id_compte;
    int Id_client;
    double Solde;
    string Date_douverture;
*/

void Compte::consulter_solde(){

        cout << "\n\n---consultation----\n";
        cout << "Id_compte : " << Id_compte << endl;
        cout << "Id_client : " << Id_client << endl;
        cout << "Solde : " << Solde << "euros." << endl;
        cout << "Date_douverture : " << Date_douverture << endl;

}


void Compte::fermer_compter(){

}

void Compte::creer_compte(){


    cout << "\n----ajout d'un nouveau compte-----\n";
    cout << "\nVeuillez fournir l'ID du client en question ...\n";
    
    cout << "Id_client : " << endl;
    cin >> Id_client;
    
    
    // check si id_client existe dans la liste des client enregistré
    bool clientEnregistree = false;
    clientEnregistree = verfierIdClient(Id_client) ; 
    
    
    
    // client deja enregistrée dans la banque 
    if (clientEnregistree)
    { 
	    cout << "\nLe client est bien enregistré... Création du compte..\n";
	    cout << "id_compte : " << endl;
	    Id_compte = getNewIdCompte();    // s'incrimente automatiquement
	    Solde = 0 ;				// le compte se crée vide
	    Date_douverture = getDateAujourdui();
	    
	    // ouvrir un fichier en ecriture 
	    ofstream mesComptes;
	    mesComptes.open("mesComptes.txt", ios::app); // ios::app (ecrire a la fin du fichier)
	    
	    // ecrire sur le fichier
	    mesComptes << Id_client << "\t" << Id_compte << "\t" << Solde << "\t" << Date_douverture << endl;
	    mesComptes.close();
	    
	    cout << "\nLe compte a été enregistré avec sucess.\n";
     }
     else
     {
     	cout << "\nLe client en question n'est pas enregistré, veuillez d'abords vous enregistrer avant de créer un compte, merci.\n";
     }
}


//--------------- verifier si le client est enregistré ou non -----------

 bool verfierIdClient(int id)
 {
 
 	bool enregistree = false;
 	
 	// créer un flux de lecture 
 	ifstream mesClients;
 	mesClients.open("mesClients.txt");
 	
 	
 	if(mesClients)
 	{	
 		string ligne;
 		char c;
 		int id_lu =0;
 		
 		// positionner le curseur au debut du fichier
 		mesClients.seekg(0 , ios::beg);
 
 		while(getline(mesClients , ligne))
 		{	
 			
 			c = ligne[0];
 			id_lu = c - '0' ;         	// convertir le mot (1 seul caracter numerique) en int;
 			
 			if(id_lu == id)
 			{	
 				// client trouvé
				enregistree = true;
				break;		
 			}
 		}
 	
 	}
 	else
 	{
 		cout << "\nErreur : Aucun client n'a été enregistré, veuillez en enregistrer un svp .. \n";
 		enregistree = false;
 	}
 	
 	
 	return enregistree;
 
 }
