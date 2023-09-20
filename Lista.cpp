//
// Created by baron
//
#include <iostream>
#include <string>
#include "Lista.h"

using namespace std;





Lista::Lista() {
    this->head = nullptr;
}
void Lista::insert(){
    Nodo *node = new Nodo();
    node->PtrFuturo = this->head;
    if (this->head != nullptr)
    {
        this->head->PtrPasado = node;
    }
    this->head = node;
}
void Lista:: display()
{
    if (this->head == nullptr){
        std::cout << "La lista está vacía" << std::endl;
    }

    else{
        cout << "Total de eventos: " << Nodo::numNodos<< endl;
        cout << " Elementos de la lista:" << endl;
        Nodo *temp = this->head;
        while (temp != nullptr)
        {
            cout << "[" << temp->datos<< "|"<< temp->cientifico <<"|"<< temp->evento << "]->";
            temp = temp->PtrFuturo;
        }
        cout << "[NULL]";
    }
}
