#include "client.h"

using namespace std;
//----------------
// constructeur par default
Client::Client()
{

    Id_client = 0;
    Nom = "NomToBeDefined";
    Prenom = "PrenomToBeDefined";
    Profession = "ProfessionToBeDefined";
    Num_tel = "Num_telToBeDefined";
    TableauDeComptes = NULL;  
    TableauDeComptes = new Compte();

    // creation du fichier text contenant la liste des clients
    
    ofstream mesClients;
    mesClients.open("mesClients.txt", ios::app); // ios::app (ecrire a la fin du fichier)
    
    // ecrire sur le fichier
    mesClients << "Id_client" << "\t" << "Nom" << "\t" << "Prenom" << "\t" << "Profession" << "\t" << "Num_tel" << endl;
    mesClients.close();
}
//----------------
// 2eme constructeur
Client::Client(int _Id_client, string _Nom, string _Prenom, string _Profession, string _Num_tel)
{
    Id_client = _Id_client;
    Nom = _Nom;
    Prenom = _Prenom;
    Profession = _Profession;
    Num_tel = _Num_tel;
    TableauDeComptes = NULL; 
    TableauDeComptes = new Compte();
}

//----------------
// destructeur
Client::~Client()
{
    delete TableauDeComptes;  // liberer la case memoire
}

//----------------

void Client::ajouter_client()
{

    cout << "\n----ajout d'un nouveau client-----\n";

    ofstream mesClients;
    mesClients.open("mesClients.txt", ios::app); // ios::app (ecrire a la fin du fichier)

    cout << "Id_client : " << endl;
    cin >> Id_client;
    cout << "Nom : " << endl;
    cin >> Nom;
    cout << "Prenom : " << endl;
    cin >> Prenom;
    cout << "Profession : " << endl;
    cin >> Profession;
    cout << "Num_tel : " << endl;
    cin >> Num_tel;
    
    // ecrire sur le fichier
    mesClients << Id_client << "\t" << Nom << "\t" << Prenom << "\t" << Profession << "\t" << Num_tel << endl;

    mesClients.close();
}

//----------------

void Client::modifier_info_client(){

}


//----------------

void Client::supprimer_client(){

}