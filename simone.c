#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 10
#define EXT_FACTOR 2

int* extendArray(int* array, int size, int newSize);

int main()
{
    int* values;
    int size = INIT_SIZE;

    values = (int*)calloc(size, sizeof(int));
    //

    int input;
    int index;

    index = 0;

    while(1){

        printf("inserisci un numero (-1 per terminare): ");
        scanf("%d", &input);

        if (input == -1){
            break;
        }

        if(index == size - 1){

            int newSize = size * EXT_FACTOR;
            values = extendArray(values, index, newSize);

            size = newSize;
        }

        values[index] = input;
        index++;

    }

    printf("Elementi dell'array:\n");

    for (int i = 0; i < size; i++) {

        printf("%d ", values[i]);
    }

    printf("\n");
    free(values);

    return 0;
}

int* extendArray(int* array, int size, int newSize){

    int* newArray = (int*)calloc(newSize, sizeof(int));

    if (newArray == NULL){

        printf("mem alloc error.");
        exit(1);
    }

    for (int i = 0; i < size; i++){
        newArray[i] = array[i];
    }

    free(array);

    return newArray;
}
