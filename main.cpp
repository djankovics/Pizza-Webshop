#include <iostream>
#include <string>
#include "pizzamain.h"

using namespace std;

string login(){
    string username = "";
    string password = "";
    //bool loginSuccess = false;
    //int option = 0;

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
    else
    {
        cout << "\n\tIncorrect username or password!\n";
        cout << "\tPlease try to login again.\n";
        return "";
    }
}


int main(){

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
    return 0;
}
