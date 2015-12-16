#include <iostream>
#include <fstream>
#include <string>
#include "pizzamain.h"
#include "admin.h"
#include "rendelo.h"
#include "szakacs.h"

using namespace std;

namespace Error {void hiba (string error){
    cerr << error << endl;
    }
}

string login(){
    string username = "";
    string password = "";

    cout << "\nFelhasznalonev:  ";
    cin >> username;
    cout << "Jelszo:  ";
    cin >> password;

    if ( (username == "Admin" && password == "admin") ||
         (username == "Felhasznalo" && password == "1234") ||
         (username == "Rendelo" && password == "1234") ||
         (username == "Szakacs" && password == "1234")
         ){
        cout << "\nSuccessful Login\n\n";
        return username;
    }
    else {
        cout << "\n\tIncorrect username or password!\n";
        cout << "\tPlease try to login again.\n";
        return "";
    }
}


int main(){
    Admin * adminuser = new Admin("adminuser","adminjelszo",1984,"Margit",1);
    Rendelo * rendelouser = new Rendelo("rendelouser","jelszo",1985,"Bela",3);
    Szakacs * szakacsuser = new Szakacs("szakacsuser","jelszo",1986,"Pityu",2);

    string username = "";
    int option = 0;

    cout << "\n\t------------------------------------------------";
    cout << "\n\tUdvozoljuk webshopunkban! Lepjen be alabb...\n";
    cout << "\t------------------------------------------------\n";

    do{
        username = login();
    } while (username == "");

    if (username == "Admin")
    {
        cout << "\n  Please select option.\n";
        cout << " ***********************";
        cout << "\n *  1. Add Pizza       *";
        cout << "\n *  2. Add Szakacs     *";
        cout << "\n *  3. Delete Pizza    *";
        cout << "\n *  4. Delete Szakacs  *";
        cout << "\n *  5. Edit Pizza      *";
        cout << "\n *  6. List All Pizza  *";
        cout << "\n *  7. Log Out         *";
        cout << "\n ***********************\n\n";
    }
    cout << "  Option:  ";
    cin >> option;
    cout <<"\n";

    if (option == 6)
    {
        try{
            ifstream pizzak;
            pizzak.open("pizzak.txt");
            char output[100];
            if (!pizzak.is_open()) throw "Nincs meg a fajl!";

                while (!pizzak.eof())
                {
                    pizzak >> output;
                    cout <<"  " << output << endl;
                }
                cout <<"\n";

            pizzak.close();
       }catch(char const *error){Error::hiba(error);}
    }
    return 0;
}
