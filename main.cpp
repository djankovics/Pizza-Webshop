#include <iostream>
#include <fstream>
#include <string>
#include "pizzamain.h"
#include "admin.h"
#include "rendelo.h"
#include "rendeles.h"
#include "szakacs.h"
#include "pizzak.h"
#include <ctime>

using namespace std;

namespace Error {void hiba (string error){
    cerr << error << endl;
    }
}

string login(){
    string username = "";
    string password = "";

    cout << "\n Felhasznalonev:  ";
    cin >> username;
    if(username == "*"){
            exit(0);
        }
    cout << " Jelszo:  ";
    cin >> password;

    if ( (username == "Admin" && password == "admin") ||
         //(username == "Felhasznalo" && password == "1234") ||
         (username == "Rendelo" && password == "1234") ||
         (username == "Szakacs" && password == "1234")
         ){
        cout << "\n Successful Login\n\n";
        return username;
    }
    else {
        cout << "\n\tIncorrect username or password!\n";
        cout << "\tPlease try to login again.\n";
        return "";
    }
}


int main(){

    PizzaMain * pizzaprogram = new PizzaMain;
    Pizzak * pizzak = new Pizzak;

    Admin * adminuser = new Admin("adminuser","adminjelszo",1984,"Margit",1);
    Rendelo * rendelouser = new Rendelo("rendelouser","jelszo",1985,"Bela",3);
    Szakacs * szakacsuser = new Szakacs("szakacsuser","jelszo",1986,"Pityu",2);

    string username = "";
    int option = 0;

    cout << "\n\t------------------------------------------------";
    cout << "\n\tUdvozoljuk webshopunkban! Lepjen be alabb...\n";
    cout << "\t------------------------------------------------\n";
do{
    do{
        username = login();
    } while (username == "");

    do{
    if (username == "Admin")
    {
        cout << "\n  Please select option.\n";
        cout << " ***********************";
        cout << "\n *  1. Add Pizza       *";
        // cout << "\n *  2. Add Szakacs     *";
        // cout << "\n *  3. Delete Pizza    *";
        // cout << "\n *  4. Delete Szakacs  *";
        // cout << "\n *  5. Edit Pizza      *";
        cout << "\n *  6. List All Pizza  *";
        cout << "\n *  7. Log Out         *";
        cout << "\n *  8. List all users  *";
        cout << "\n ***********************\n\n";
    }


    if (username == "Rendelo")
    {
        cout << "\n  Please select option.\n";
        cout << " ***********************";
        cout << "\n *  6. List All Pizza  *";
        cout << "\n *  7. Log Out         *";
        cout << "\n *  9. Pizza Rendeles  *";
        // cout << "\n *  10. List Rendeles  *";
        cout << "\n ***********************\n\n";
    }

    if (username == "Szakacs")
    {
        cout << "\n  Please select option.\n";
        cout << " ***********************";
        cout << "\n *  1. Add Pizza       *";
        // cout << "\n *  3. Delete Pizza    *";
        // cout << "\n *  5. Edit Pizza      *";
        cout << "\n *  6. List All Pizza  *";
        cout << "\n *  7. Log Out         *";
        // cout << "\n *  8. List all users  *";
        cout << "\n * 11. List Rendelesek *";
        // cout << "\n * 12. Delete Rendeles *";
        cout << "\n ***********************\n\n";
    }


    bool OK = false;
    do{
        cout << "  Option:  ";
        cin >> option;
        if ( (username == "Szakacs" && option == 2) ||
             (username == "Szakacs" && option == 4) ||
             (username == "Szakacs" && option == 9) ||
             (username == "Szakacs" && option == 10)
             ){
            cout << "\n  Ehhez a menuponthoz nincs elegendo jogosultsagod\n\n";
            } else
        {
            OK = true;
        }
    } while (OK == false);

//    PizzaMain clrscr;
//    clrscr.clrscr();
    PizzaMain::clrscr();
    cout <<"\n";


    if (option == 1)
    {
        try {
            ofstream pizzak;
            pizzak.open ("pizzak.txt", ios_base::app);
            string addPizza = "";
            cout << "  Pizza neve:  ";
            cin >> addPizza;
            pizzak << "\n" << addPizza;
            cout << "\n  Uj pizza felveve a kinalatba.\n\n";
            pizzak.close();
        }catch(char const *error){Error::hiba(error);}
    }

    else if (option == 2)
    {

    }

    else if (option == 3)
    {

    }

    else if (option == 4)
    {

    }

    else if (option == 5)
    {

    }

    else if (option == 6)
    {
        try
        {
            pizzak->listAllPizza();
        }catch(char const *error){Error::hiba(error);}
    }

    else if (option == 8)
    {
        try {
                pizzaprogram->felhasznalokatkiir();
            } catch(char const *error){Error::hiba(error);}
        }
    else if (option == 9)
    {

        time_t currentTime;
          struct tm *localTime;

          time( &currentTime );                   // Get the current time
          localTime = localtime( &currentTime );  // Convert the current time to the local time

          int Day    = localTime->tm_mday;
          int Month  = localTime->tm_mon + 1;
          int Year   = localTime->tm_year + 1900;
          int Hour   = localTime->tm_hour;
          int Min    = localTime->tm_min;
          int Sec    = localTime->tm_sec;


        time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );


        string valasztottPizzaNeve;
        pizzak->listAllPizza();
        cout << "Melyik pizzat valasztod?  ";
        cin >> valasztottPizzaNeve;
        Pizza * valasztottPizza =new Pizza(valasztottPizzaNeve);
        Rendeles * megrendeles = new Rendeles(username,valasztottPizza);
        try {
            ofstream rendelesek;
            rendelesek.open ("rendelesek.txt", ios_base::app);
            rendelesek << valasztottPizzaNeve << "_" << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  now->tm_mday << "_" << Hour << ":" << Min << ":" << Sec << endl;
            cout << "\n  Rendeles felveve.\n\n";
            rendelesek.close();
        }catch(char const *error){Error::hiba(error);}
    }
    else if (option == 10)
    {

    }
    else if (option == 11)
    {
        ifstream rendelesek;
        rendelesek.open("rendelesek.txt");
        char output[100] = "";
        if (!rendelesek.is_open()) throw "Nincs meg a rendeleseket tartalmazo fajl!";
        while (!rendelesek.eof())
        {
            rendelesek >> output;
            cout <<"  " << output << endl;
        }
        cout <<"\n";
        rendelesek.close();
    }
    else if (option == 12)
    {

    }
    } while (option != 7);
} while (username != "*");
    return 0;
}
