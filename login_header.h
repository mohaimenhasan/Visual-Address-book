/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   login_header.h
 * Author: mohai
 *
 * Created on August 1, 2017, 7:17 AM
 */

#ifndef LOGIN_HEADER_H
#define LOGIN_HEADER_H
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <birthday.h>

using namespace std;

//class for login info

class login{
private:
    string user_name;
    string user_password; 
    birthday user_birthday; 
public:
    login();
    ~login();
    login(string input_name, string password);
    login(string input_name, string password, birthday input_birth);
    void change_username(string changed_name);
    void change_userpass(string changed_pass);

};

#endif /* LOGIN_HEADER_H */

