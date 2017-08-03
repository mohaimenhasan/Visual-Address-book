/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <birthday.h>

/*
Default day of birth has been set ot January 1, 1500. Constructor does the same thing as default function
Default function changes the date to the default day of birth
Default function can also be used for handling exceptions
*/

birthday::birthday(){
	birth_day = 1;
	birth_month = 1;
	birth_year = 1500;
}

// The ususal go to constructor

birthday::birthday(int b_day, int b_month, int b_year){
	birth_year = b_year;
	birth_day = b_day;
	birth_month = b_month;
}

//  The usual go to destructor 

birthday::~birthday(){

}
void birthday::default_bday(){
	birth_year = 1;
	birth_month = 1;
	birth_month = 1500;

}

// use NetBeans to confirm the use of the class properly
// use a pointer to point to the right thing

void birthday::add_birthday(birthday* dateofBirth){
    birth_day = dateofBirth->birth_day;
    birth_month = dateofBirth->birth_month;
    birth_year = dateofBirth->birth_year;
}