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
		std::cin>>nom>>prenom;*/
		ListeClient.push_back(Client(i+1,/*nom,prenom,*/"AAA","Aaa"));	
	}


	for(int i=0; i<5; i++){
		/*std::cout<<"NOM et Prénom du client : ";
		std::cin>>nom>>" ">>prenom;*/
		ListeClient[i].affichageClient();	
	}

	Hotel Hotello("123456","Le Lux","Dijon",ListeChambre);

	//************************************************************************************************

	int d_day, d_month, d_year, f_day, f_month, f_year;

	std::cout<<"Date d'arrivée du client (ex: 20 10 2021) : ";
	std::cin>>d_day>>d_month>>d_year;
	Date debut(d_day, d_month, d_year);

	std::cout<<"Date de départ du client (ex: 21 10 2021) : ";
	std::cin>>f_day>>f_month>>f_year;
	Date fin(f_day, f_month, f_year);


	//***********************************************************************************************

	if(f_year-d_year<0){
		std::cout<<"erreur de dates";
	}
	else if(f_year-d_year==0){
		if(f_month-d_month<0){
		std::cout<<"erreur de dates";
		}
		else if (f_month-d_month==0){
			if(f_day-d_day<=0){
			std::cout<<"erreur de dates";
			}
		}	
	}
	
	return 0;
}