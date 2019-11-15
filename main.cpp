/** 
  * File:     main_hotel.cpp 
  * Author:   O. Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Client hotel
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
	double prix;
	std::vector<Chambre> ListeChambre;

	for(int i=0; i<10; i++){
		if(types[i]==0)
			prix=100;
		else if(types[i]==1)
			prix=125;
		else
			prix=210;

		ListeChambre.push_back(Chambre(i+1,prix,types[i]));	
	}

	Hotel Hotello("123456","Le Lux","Dijon",ListeChambre);

	return 0;
}