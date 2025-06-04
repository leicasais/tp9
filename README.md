# tp9
Ej 5 entregable del tp 8
Parte 1: 
Se pide escribir una librería que permita emular el funcionamiento de los puertos A, B y D. 
A y B son dos puertos de 8 bits, configurables tanto de entrada como de salida. D tiene 16 bits y es simplemente un alias para los puertos A y B juntos, siendo el B el menos significativo.
Crear las siguientes funciones o macros: bitSet, bitClr, bitToggle, bitGet,
maskOn, maskOff, maskToggle, utilizables para todos los puertos definidos
anteriormente.
• bitSet: Dado un puerto y un número de bit, debe cambiar su estado a 1.
• bitClr: Dado un puerto y un número de bit, debe cambiar su estado a 0.
• bitGet: Dado un puerto y un número de bit, debe devolver su valor.
• bitToggle: Dado un puerto y un número de bit, debe cambiar al estado 
opuesto en el que está (si está en 0 pasar a 1, y si está en 1 pasar a 0).
• maskOn: Dado un puerto y una máscara, debe prender todos aquellos bits que
estén prendidos en la máscara, sin cambiar el estado de los restantes. Por
ejemplo, dado el puerto A, que originalmente se encuentra en el estado 0x01,
al aplicarle la máscara 0x0A, el resultado será 0xB.
• maskOff: Dado un puerto y una máscara, debe apagar todos aquellos bits que
estén prendidos en la máscara, sin cambiar el estado de los restantes. Por
ejemplo, dado el puerto A, que originalmente se encuentra en el estado 0x0A,
al aplicarle la máscara 0x02, el resultado será 0x08.
• maskToggle: Dado un puerto y una máscara, debe cambiar el estado de todos
aquellos bits que estén prendidos en la máscara al opuesto, sin cambiar el
estado de los restantes. Por ejemplo, dado el puerto A, que originalmente se
encuentra en el estado 0x02, al aplicarle la máscara 0x03, el resultado será
0x01.
El contenido de los puertos debe almacenarse en una variable estática dentro del
archivo fuente de la librería. El usuario debe poder leer y escribir en los puertos
solamente utilizando las funciones definidas.