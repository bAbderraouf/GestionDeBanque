banque : main.o client.o compte.o menu.o
	g++ -o banque main.o compte.o menu.o

main.o :  main.c
	g++ -o main.o -c main.c

client.o : client.c
	g++ -o client.o -c client.c

compte.o : compte.c
	g++ -o compte.o -c compte.c

menu.o : menu.c
	g++ -o menu.o -c menu.c
	

