#include <stdio.h>
#include <stdlib.h>

void aCapo(){
    printf("\n");
}


int main()
{
    int i = 9;
    char c = 'a';

    int *pi;
    char *pc;

    printf("Char: %lu byte - int: %lu byte", sizeof(char), sizeof(int), sizeof(i));
    
    //ma quanto spazio occupano i puntatori?
    printf("\nPuntatore a Char: %lu byte - Puntatore a int: %lu byte", sizeof(char*), sizeof(int*));


    //creata lavariabile contatore, come la facciamo puntare all'indirizzo di memoria della variabile che ci interessa?

    pi=&i; // prendi l'inidirizzo di memoria dov'è contenuta la variabile i, ma ovviamente solo la prima cella. Ricorda che l'indirizzo è in esadecimale.
    pc = &c;

    //con %p stampi il puntatore
    printf("\nIndirizzo di memoria di i: %p - Indirizzo di memoria di c: %p", pi, pc);

    aCapo();


    //se invecevogliamo vedere COSA c'è nell'indirizzo di memoria, usiamo l'operatore asterisco. con l'indirizzo stampi il contenuto

    printf("Il valore di i: %d = %d", i, *pi);
    aCapo();
    printf("Il valore di c: %c = %c", c, *pc);
    aCapo();


    //e se volessi cambiare il valore del puntatore?
    i = 12;
    printf("Il valore di i: %d, il valore della cella puntata da pi: %d", i, *pi);
    aCapo();



    //modifichiamo il contenuto di i con il puntatore

    *pi = 18; // vai alla cella di memoria puntata da pi e cambia il contenuto di quella cella con 18 
    printf("Il valore di i: %d, il valore della cella puntata da pi: %d", i, *pi);
    aCapo();

    //INFATTI *pi = i sono UGUALI
    return 0;
}



/*
I puntatori sono indirizzi di memoria. Ogni cella di memoria ha 8 byte, ossia 1 bit. Appunto, ogni cella ha unindirizzo (URI)

Ogni variabile occupa un numero determinato di celle cosnecutive.
     il char occupa una cella
     l'int ne occupa quattro


I Puntatori, che sono loro volta messi in delle celle (4 celle), punteranno all'inidirzzo delle altre celle.

Se nella cella 202 ho una variabbile char
Nella cella xyz,...xyz+3, ho memorizzato l'indirizzo 202, ossia quello del char

Per gli int, il puntatore punta solo alla prima cella (anche se sono 4).


In un sistema a 32 bit, il puntatore è fatto di 4 celle
In un sistema a 64 bit, esso aarà 8 celle.

La dimensione di un puntatore è indipendente dal tipo che punta.

Ma come capisce quante celle leggere? Questo grazie al tipo di puntatore. Per questo dichiariamo un INT *NOME;
Proprio questo gli dice quante celle leggere. 


*/