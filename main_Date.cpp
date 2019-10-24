/** 
  * File:     main_Date.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Date class
  */

#include <iostream>
#include "Date.h"
#include <string>

int main(){
	Date anniv(17,5,1999);
	std::cout<<anniv.getDate()<<std::endl;
	
	Date Vide;
	std::cout<<Vide.getDate()<<std::endl;
	
	return 0;
}
