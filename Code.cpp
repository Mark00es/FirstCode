#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
void opciones() {
    cout << "Welcome to Cato's Bank" << endl;
    cout << "Choose an option" << endl;
    cout << "1. Create new account" << endl;
    cout << "2. Make a deposit" << endl;
    cout << "3. Make a withdrawal" << endl;
    cout << "4. Show all accounts" <<endl;
    cout << "5. exit" << endl;
}
void menu(){
    int option, cant, num;
    string name;    
    switch (option)
    {
    case 1:        
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter first amount: "<<endl;
        cin>>cant;
        break;
    case 2:
        cout<<"Enter your account: "<<endl;
        cin>>num;        
        break;
    default:
        break;
    }
}
int main(){
    opciones();
}