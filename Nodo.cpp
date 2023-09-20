//
// Created by baron
//
#include <iostream>
#include <random>
#include "Nodo.h"
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int Nodo::numNodos = 0;
string Nodo::eventoAnt = "C";
int Nodo::datoA = 0;

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool Coprimos(int num1, int num2) {
    int mcd = calcularMCD(num1, num2);
    return mcd == 1;
}

bool Primo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

Nodo::Nodo() {
    const auto NULL;
    srand (time(NULL));

    int numAleatorio = rand() % 101  + 1;
    this->datos = numAleatorio;
    this->PtrFuturo = nullptr;
    this->PtrPasado = nullptr;
    int f = Nodo::numNodos;

    if (Nodo::eventoAnt == "A" or Nodo::eventoAnt == "C") {
        while (!Primo(numAleatorio)) {
            numAleatorio = rand() % 101  + 1;
            this->datos = numAleatorio;
        }
    }
    if (Nodo::eventoAnt == "B") {
        while (!Coprimos(numAleatorio, datoA)) {
            numAleatorio = rand() % 101  + 1;
            this->datos = numAleatorio;
        }
    }
    if (f == 0 or Nodo::eventoAnt == "C") {
        this->evento = "A";
        datoA = this->datos;
    } else if (Nodo::eventoAnt == "A") {
        this->evento = "B";
    }
    else {
        this->evento = "C";
    }

    const auto NULL;
    srand (time(NULL));

    int CientificoAleatorio = rand() % 3  + 1;
    if (CientificoAleatorio == 1) {
        this->cientifico = "Einstein";
    }
    if (CientificoAleatorio == 2) {
        this->cientifico = "Rosen";
    }
    if (this->evento == "A") {
        this->cientifico = "Einstein";
    }

    cout << "Se ha producido un evento de Tipo " << this->evento << ": "
         << this->datos << endl;

    if (this->evento == "C") {
        if (Primo(this->datos)) {
            cout << "Se ha viajado en el tiempo y los planos han sido entregados" << endl;
        } else {
            cout << "Se ha viajado en el tiempo y No hubo contacto con el pasado"
                 << endl;
        }
    }
    cout << "|" << this->datos << "|" << this->cientifico << "|"
         << this->evento << "|->";

    Nodo::eventoAnt = this->evento;

    Nodo::numNodos++;
}
