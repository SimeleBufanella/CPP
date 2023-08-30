#include <iostream>
#include "mia_lib.h"
#include <memory>
#include <thread>
#include <chrono>
using namespace std;




int main(){

    start:
    system("clear");
    aCapo();
    int divisori = 0;
    bool finito = false;
    int input_utente;
    cout<<"Quale numero vuoi sapere se è primo: ";
    cin>>input_utente; 


    if(input_utente%2==0 && input_utente>2){
        cout<<input_utente<<" non è primo, è pari!";

        goto start;
    }

    else{
        scrivi("Calcolo...");
        aCapo();
    }
    
    while (!finito) {
    int contatore = 1;

    for (contatore = 1; contatore <= input_utente; contatore++) {
        int resto = input_utente % contatore;

        if (resto == 0) {
            divisori++;
        }
    }

    if (contatore > input_utente) {
        finito = true;
    }
}
    if(divisori==2){
        cout<<input_utente<< " è primo!";
    }
    else{
        cout<<input_utente<< " non è primo!";
    }
    

    aCapo();
    this_thread::sleep_for(chrono::seconds(2));
    
    goto start;
   
    return 0;
}




/* $ g++ primi.cpp
$ ./a.out
Hello World */