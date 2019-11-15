/** 
  * File:     main.cpp 
  * Authors:   O. Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition fonctions
  */

#include "Hotel.h"
#include "Client.h"
#include "Date.h"
#include "Reservation.h"
#include "Chambre.h"
#include "header.h"

bool dateValide(Date t_date){
	int jours_par_mois[12]    ={31,28,31,30,31,30,31,31,30,31,30,31}; //jours de chaque mois
	int jours_par_mois_bis[12]={31,29,31,30,31,30,31,31,30,31,30,31}; //jours de chaque mois dans une annee bisestile

	if(t_date.getYear()%4==0){ //on verifie si l'annee est bisextile ou pas
		if(t_date.getDay()<=jours_par_mois_bis[t_date.getMonth()-1]) //on verifie si le jours est bien infieur ou egal au nombre de jours dans le mois de cette date
			return true;
		else
			return false;
	}
	else{
		if(t_date.getDay()<=jours_par_mois[t_date.getMonth()-1])
			return true;
		else
			return false;
	}
}