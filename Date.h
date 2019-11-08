/** 
  * File:     Date.h 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Date
  */

#ifndef _Date_h
#define _Date_h

#include <string>

class Date{
	public:
		Date(int t_day=1, int t_month=1, int t_year=1900); //constructeur
		std::string toString(); //fonction pour avoir la date sous forme de string
		std::string getDate(); //getter de la date
		void setDay(int t_day); //setter du jour
		void setMonth(int t_month); //setter du mois
		void setYear(int t_year); //setter de l'année
		void setDate(int t_day, int t_month, int t_year); //setter de la date complete
		int getDay(); //getter du jour
		int getMonth(); //getter du mois
		int getYear(); //getter de l'année
		
	private:
		int m_day;
		int m_month;
		int m_year;
};

#endif

