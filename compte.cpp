#include "compte.h"


using namespace std;

// constructeur par default
Compte::Compte()
{
    Id_client = 0;
    Id_compte = 0;
    Solde = 0;
    Date_douverture = "01/01/1901";
}

// constructeur
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
    
    int id_client = 0;
    int id_compte = 0;
    double solde = 0;
    string date_douverture = "01/01/1901";

    cout << "\n----ajout d'un nouveau client-----\n";

    ofstream mesComptes;
    mesComptes.open("mesComptes.txt", ios::app); // ios::app (ecrire a la fin du fichier)

    cout << "Id_client : " << endl;
    cin >> id_client;
    cout << "id_compte : " << endl;
    cin >> id_compte;
    cout << "solde : " << endl;
    cin >> solde;
    cout << "date_douverture : " << endl;
    cin >> date_douverture;
    
    // ecrire sur le fichier
    mesComptes << id_client << "\t" << id_compte << "\t" << solde << "\t" << date_douverture << endl;
    mesComptes.close();
}
