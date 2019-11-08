/** 
  * File:     main_Chambre.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Client Chambre
  */

#include <iostream>
#include "Chambre.h"

int main(){
	Chambre Chambre1(1,32);
	std::cout<<"Votre chambre est une chambre de type "<<Chambre1.getType()<<" avec ID = "<<Chambre1.getId()<<"et avec un prix de "<<Chambre1.getPrixParNuit()<<" euros."<<std::endl;
	Chambre1.setPrixParNuit(17);
	std::cout<<"Le nouveaux prix est de "<<Chambre1.getPrixParNuit()<<" euros"<<std::endl;

	return 0;
}