# gestionDeBanque
Un petit code basique pour simuler la gestion des clients et comptes dans une banque, ce code touche a des notions diverses en C++ (Classes, association de classes, pointeurs, allocation dynamique, lecture et ecriture sur un fichier  ...).

Ce code a été fait pour répondre a une demande d'étudiants lors de la realisation d'un projet universitaire (cahier de charge du projet ci dessous).


![projet_banque](https://user-images.githubusercontent.com/87968764/184623895-c3b033e2-601e-4a45-8b80-35510efdfc03.jpg)


Client
	int    id_client.
	string nom.
	string prenom
	string profession
	string num_tel

compte 
	int    id_compte
	int    id_client
	double solde
	string dateDouverture (str)

menu
	1.gestion des clients
		1.1. ajouter un client
		1.2. modifier info client
		1.3. supprimer un client
		1.4. cherchier client par id
	2.gestion des comptes
		2.1. creer un compte pour un client via id
		2.2. consulter solde
		2.3. fermer compte
	3.gestion des opérations
		3.1. retirer
		3.2. verser un montant
	4.quitter

