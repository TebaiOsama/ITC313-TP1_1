/** 
  * File:     main_Reservation.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Class Reservation
  */

#include <iostream>
#include "Reservation.h"
#include "Date.h"

int main(void){
	Date debut(12,10,2019);
	Date fin(23,2,2020);
	Reservation Joestar(2, debut, fin, "Hotel Generique", 45, 5, 50);
	std::cout<<"L'ID Reservation est "<<Joestar.getId()<<" avec duree de sejour de "<<Joestar.getSejour()<<" jours, avec un montant totale de "<<Joestar.montantTotal(30)<<" euros." <<std::endl;
	Date correction(21,1,2019);
	Joestar.setDateSejour(correction,fin);
	std::cout<<"La nouvelle duree de sejour est de "<<Joestar.getSejour()<<" jours."<<std::endl;
	return 0;
}