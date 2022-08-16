all : banque

banque : main.o client.o compte.o menu.o tools.o
	g++ -o banque main.o client.o compte.o menu.o


client.o : client.cpp client.h
	g++ -c client.cpp
	
compte.o : compte.cpp compte.h 
	g++ -c compte.cpp
	

menu.o : menu.cpp menu.h
	g++ -c menu.cpp
	
main.o :  main.cpp client.h compte.h menu.h
	g++ -c main.cpp
	
clean_all : 
	rm -rf *.o
	rm -rf *.txt
	
clean : 
	rm -rf *.o


	
	

	

