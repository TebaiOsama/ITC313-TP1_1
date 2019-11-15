/** 
  * File:     main.cpp 
  * Authors:   O. Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  main program
  */


#include "Hotel.h"
#include "Client.h"
#include "Date.h"
#include "Reservation.h"
#include "Chambre.h"

#include <iostream>
#include <vector>

int main(){
	int types[10]={0,0,0,1,1,1,1,1,2,2};
	std::string nom, prenom;
	std::vector<Chambre> ListeChambre;
	std::vector<Client> ListeClient;

	for(int i=0; i<10; i++){
		ListeChambre.push_back(Chambre(i+1,types[i]==0?100:types[i]==1?125:210,types[i]));	//types[i]==0?100 veux dire if(types[i]==0){prix=100} 
	}


	for(int i=0; i<16; i++){
		/*std::cout<<"NOM et Prénom du client : ";
		std::cin>>nom>>" ">>prenom;*/
		ListeClient.push_back(Client(i+1,/*nom,prenom,*/"AAA","Aaa"));	
	}



	Hotel Hotello("123456","Le Lux","Dijon",ListeChambre);

	return 0;
}