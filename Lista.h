//
// Created by baron
//

#ifndef PRACTICA1LENGUAJES_LISTA_H
#define PRACTICA1LENGUAJES_LISTA_H
#include <iostream>
#include <string>
#include "Nodo.h"
using namespace std;

class Lista {
public: Nodo *head;
    Lista();
    void insert();
    void display();
    const char *cout;
    int endl;
};

#endif //PRACTICA1LENGUAJES_LISTA_H
