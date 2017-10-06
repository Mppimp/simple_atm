//
//  main.cpp
//  ATM
//
//  Created by Pepe on 8/29/17.
//  Copyright © 2017 Pepe. All rights reserved.
//

#include "std_lib_facilities.h"

int main() {

    
    

double balance = 0.0;
bool access_granted = false;

// Login Info
string const username = "victor";
string const password = "password";
    
    bool user_nm = false;
    bool pass_wrd = false;
//=====================================================
  
    
    // Login
    // Starts over if variable is false
    while (access_granted == false)
    {
    cout << "Wellcome to Well's Fargo ATM " << '\n'
        << "Account Username: " << endl;
    string request_username = "victor";             // Enter Username
    getline(cin,request_username);
        if (request_username == username) {
            cout << "Correct Username" << endl;     //Corerect Username
            user_nm = true;
        }
        else {
            cout << "Wrong Username" << endl;       // Wrong Password
            user_nm = false;
        }
        
        
    cout << "Account Password: " << endl;
    string request_password = "password";           // Enter Password
    getline(cin,request_password);
        if (request_password == password) {
            cout << "Correct Password" << endl;     // Correct Password
            pass_wrd = true;
        }
        else {
            cout << "Wrong password" << endl;       // wrong password
            pass_wrd = false;
        }
        
        
    //==================================================================
        
    
    // loads atm and shows balance
        if (user_nm && pass_wrd == true)
        {
            cout << "Alright, Your current balance is:" << endl
            << balance << endl;
            access_granted = true;
        }
        
        
    // home
    string option = "cancel";
        
    while (access_granted == true) {
        
        cout << "Would you like to withdraw or deposit? (Cancel)"<< endl;
        getline(cin,option);
        
        double cash = 0;
        //double cash_ = std::stod(cash);
        //double char_of_cash = cash.length();
        /*
        if (char_of_cash <= 9) {                       // checks if there are too many digits
            cout << "Sorry, you placed too many digiits!" << endl;
        }
        */
        
        
        if(option == "deposit")                     // Deposit Option
        {
            cout << "How much money would you like to deposit?" << endl;
            cin >> cash;
            double new_deposit_balance = balance + cash;
            
            cout << "You placed: $ " << cash << endl << "Your New Balance is: $ " << new_deposit_balance << endl;
            
            
            balance = new_deposit_balance;  // Stores transaction made
            
            
        }
        
        if(option == "withdraw")                    // Withdraw Option
        {
            cout << "How much money would you like to withdraw?" << endl;
            cin >> cash;
            double new_witdraw_balance = balance - cash;
            
           
            if(balance <= 0)                // Checks if you have enough money to withdraw
            {
                cout << "You don't have: $ " << cash << endl;
            }
            else
            {
                cout << "You toke: $ " << cash << endl << "Your New Balance is: $ "<< new_witdraw_balance << endl;
                balance = new_witdraw_balance;   // Stores transaction made
            }
        }
        
        if(option == "cancel")
        {
            cout << "Ok, bye" << endl;
            access_granted = false;
        }
    }

}

}
