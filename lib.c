#include "lib.h"

void bitset(void **pp_puerto,int num_bit, int size){//Admite puertos con 1 byte o 2 bytes
    if (size==1){
        uint8_t *p=(uint8_t*)*pp_puerto;
        *p+=OFF_ON(*p,num_bit);
    }
    else if (size==2){
        uint16_t *p=(uint16_t*)*pp_puerto;
        *p+=OFF_ON(*p,num_bit);
    }
    else{
        printf("No se admiten puertos que no sean de 1 byte o 2 bytes\n");
        *pp_puerto=NULL;
    }    
    
}

