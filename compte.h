#ifndef compte
#define compte

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Compte
{
private:
    int Id_compte;
    int Id_client;
    double Solde;
    string Date_douverture;

public:
    Compte();
    Compte(int , int , double , string ); //
    ~Compte();  //

    void creer_compte();  //
    void consulter_solde(); //
    void fermer_compter();  //

    void retrait();  //
    void depot();    //
};

#endif