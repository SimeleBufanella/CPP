#include <iostream>
#include "mia_lib.h"
#include <time.h>
#include <unistd.h>
#include <thread>
#include <chrono>


using namespace std;


class Macchina{

    private:
    string title;
   
    public:
    int rpm, vel;
    int pos = 0;
    char gear;
    bool accensione = false;
    

    

    

    
    Macchina (string modello){
        setTitle(modello);
    }

    void setTitle(string a){
        title = a;
    }
    string getTitle(string a)
    {
        return title;
    }


    void vediStato(){
        cout<<endl<<accensione;
    }
    void accendi(){
        
        accensione = true;
        rpm = 1000;
        vel = 0;
        gear = 'n';
        vediStato();

    }

    void spegni(){

        accensione = false;
        rpm = 0;
        vel = 0;
        gear = '/';
        vediStato();

    }


    void muovi_avanti()
    {   
        pos = pos + 10;
        
    }

    void muovi_indietro()
    {
        pos = pos - 10;

    }

    void movimento(){

        accensione = true;
        char direzione;
        do{
        cin >> direzione;
        
            if (direzione == 'w')
            {
            muovi_avanti();
            }
            else if (direzione == 's')
            {
            muovi_indietro();
            }
        }while(direzione !='t');
    
    cout<<endl;
    scrivi("Posizione attuale: ");
    cout<<pos;
    }

    int accel(int marcia){
        accensione = true;
        cout<<"Inserisci Marcia: ";
        cin>>marcia;

        rpm = 1000 * marcia;
        vel = rpm/1000;

        cout<<endl<<vel<<endl;
        return vel;
    }

    void freq(){
        
        usleep(1000000);
    
    }
};

void loadingBar(){

    int a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t");

    for (int i = 0; i<26;i++){
        printf("%c",a);
    }

    printf("\r");
    printf("\t\t\t\t");

    for (int i = 0; i<26;i++){
        printf("%c",b);
    }
    usleep(1000000);
}


int main(){

    loadingBar();
    
    scrivi("Premi t per fermarti, w per andare avanti, s per andare indietro.");
    cout<<endl;

    char alfa[256];
    cin>>alfa;
    



    Macchina autom_uno("Toyota");
    autom_uno.accendi();


    int input_utente;
    int *cavallo;
    char *point = alfa;
    cavallo = &input_utente;
    //cout<<cavallo<<"1 "<<endl;
    cout<<point<<"1333 "<<endl;

    scrivi("Maremma");
    usleep(2000000);


    int pos = 0;
    char direzione;
    do{
        cin >> direzione;
        
            if (direzione == 'w')
            {
            pos = pos + 10;
            }
            else if (direzione == 's')
            {
            pos = pos - 10;
            }
        }while(direzione !='t');
    
    cout<<endl;
    scrivi("Posizione attuale: ");
    cout<<pos;
    
    cout<<endl<<alfa;
   
    return 0;
}



