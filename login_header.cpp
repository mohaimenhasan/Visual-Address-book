/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "login_header.h"


login::login(){
    user_name = "Empty";
    user_password = "NULL"; 
    user_birthday.default();
}


login::login(string input_name, string password){
	user_name = input_name;
	user_password = password;
	user_birthday.default_bday();
}

login::~login(){
}

//check this in netbeans I am not sure if this really works
login::login(string input_name, string password, birthday input_birth){
	user_name = input_name;
	user_password = password;
	user_birthday.add_birthdate(input_birth);
}


void login::change_username(string changed_name){
	user_name = changed_name;
}
void login::change_userpass(string changed_pass){
	user_password = changed_pass;
}