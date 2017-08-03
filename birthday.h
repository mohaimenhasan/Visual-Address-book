/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   birthday.h
 * Author: mohai
 *
 * Created on August 2, 2017, 6:23 PM
 */

#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <stdio.h>
#include <cstdlib>
#include <string>
using namespace std;

class birthday
{
private:
	int birth_day;
	int birth_month;
	int birth_year;
public:
	birthday();
	birthday(int b_day, int b_month, int b_year);
	~birthday();
	void default_bday();
	void add_birthday(birthday* dateofBirth);
	
};

#endif /* BIRTHDAY_H */

