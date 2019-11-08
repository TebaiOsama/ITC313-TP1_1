/** 
  * File:     Date.cpp
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Date
  */

#include "Date.h"
#include <string> 
#include <sstream>


Date::Date(int t_day, int t_month, int t_year){
	m_day=t_day;
	m_month=t_month;
	m_year=t_year;
}

std::string Date::toString(){
		std::stringstream ss_day, ss_month, ss_year;
		ss_day << m_day;
		ss_month << m_month;
		ss_year << m_year;
		std::string stringDate = ss_day.str() + "/" + ss_month.str() + "/" + ss_year.str();
		return stringDate;
}

std::string Date::getDate(){
	return toString();
}

void Date::setDay(int t_day){
	m_day=t_day;
}
void Date::setMonth(int t_month){
	m_month=t_month;
}
void Date::setYear(int t_year){
	m_year=t_year;
}

void Date::setDate(int t_day, int t_month, int t_year){
	m_day=t_day;
	m_month=t_month;
	m_year=t_year;
}

int Date::getDay(){
	return m_day;
}

int Date::getMonth(){
	return m_month;
}

int Date::getYear(){
	return m_year;
}
