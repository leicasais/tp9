#ifndef lib_h
    #define lib_h

    //Includes:
    #include <stdio.h>
    #include <stdint.h>

    //Defines:
    #define BIT_1 1
    #define OFF_ON(p_bit,num_bit) ((((p_bit)>>(num_bit)) & BIT_1)?0:(BIT_1<<(num_bit)))//Si el Bit esta apagado en el lugar num_bit, le suma el numero equivalente a ese lugar prendido
    
    
    //var compratidas: 
    typdef struct {
    uint8_t b;//Guarda primero, en la menor direccion b (independientemente del endinnes)
    uint8_t a;
    }registro_t;

    typedef union{
        registro_t registro;
        uint16_t d;
    }puerto_t;



    //Prototipos de fun:
    void bitset(void **p_puerto,int num_bit, int size);

#endif

