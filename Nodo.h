#ifndef PRACTICA1LENGUAJES_NODO_H
#define PRACTICA1LENGUAJES_NODO_H
#include <iostream>
#include <string>


class Nodo {
public:
    static int numNodos;

    static string eventoAnt;

    static int datoA;

    string evento;

    string cientifico;

    int datos;

    Nodo* PtrFuturo;

    Nodo* PtrPasado;


    Nodo();

    Nodo( Nodo* n);

    int datoNodo( );

    Nodo* enlaceNodoPasado( );

    Nodo* enlaceNodoFuturo( );

    void ponerEnlacePasado(Nodo* pasado);
    void ponerEnlaceFuturo(Nodo* futuro);


};


#endif //PRACTICA1LENGUAJES_NODO_H
