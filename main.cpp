#include <iostream>
#include <random>
#include "Lista.h"
#include "Lista.cpp"
#include "Nodo.cpp"
#include <cstdlib>
#include <ctime>

int rand();
int main() {
    const auto NULL;
    srand (time(NULL));

    int numRand = rand() % 23  + 3;
    Lista *puntero = new Lista();
    int n;
    for (int i=0; i<=n; i++){
        puntero->insert();

    }
    puntero->display();
    return 0;
}

int rand() {
    return 0;
}
