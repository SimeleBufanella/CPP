#include <stdio.h>
#include <stdlib.h>


void printArray(int a[], int dim)
{
    printf("\n\t[ ");

    for(int i = 0; i<dim; ++i)
        printf("%d", a[i]);

    printf("] \n\n");
}

int main() {

    //array statico 
  int a[]= {1,2,3,4,5};
  int dimA = 5;


  printf("Array statico di %d elementi:", dimA);
  printArray(a, dimA);
  

  //array dinamico

  // MALLOC(numByte),


  int numElem= 10;
  int *p;

   
    p = (int*) malloc(numElem * sizeof(int));  // Corrected malloc syntax
    for(int i = 0; i<numElem;++i)
    {
        p[i] = 1; 
    }
    printf("Array dinamico con malloc: ");
    printArray(p, numElem);
  

  //calloc calloc(NumElem, dimSingolo);
  
    p = (int*) calloc(numElem, sizeof(int));  // Corrected malloc syntax
    for(int i = 0; i<numElem;++i)
    {
        p[i] = 1; 
    }
    printf("Array dinamico con calloc: ");
    printArray(p, numElem);
  

    //realloc realloc(arrDinam, NewNumByte);

    numElem = 15;

   // p = (int*) realloc(p, numElem * sizeof(int));
    for(int i = 0; i<7;++i)
    {
        p[i] = 1; 
    }
    printf("Dimensione modificata con realloc: ");
    printArray(p, 7);




    //FREE free(arrDinamico);



    free(p); //questo array non mi serve più, e queste celle sono riutilizzabili


    //array con elementi x

    int dim;

    printf("\nQuanti elementi vuoi?");
    scanf("%d", &dim);
    
    int array[dim];
    
    for(int i=0;i<dim;i++){
        array[i]=i;
    }

    printArray(array,dim);
  return 0;
}