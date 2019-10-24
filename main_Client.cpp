/** 
  * File:     main_Client.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Client class
  */


#include <iostream>
#include "Client.h"
#include <string>

int main(){
	Client Client1(1, "Marc", "Jesus");
	std::cout<<Client1.getNom();
	Client1.setNom("HEY");
	std::cout<<Client1.getNom();	
		
	return 0;
}
