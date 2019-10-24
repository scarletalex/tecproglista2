#include <iostream>  
#include "questao7.h"  

using namespace std;

DadosSensor::DadosSensor(){
    valor=0;
    frequencia=0;
}
DadosSensor::DadosSensor(int v,int f){
    valor=v;
    frequencia=f;
}

int DadosSensor::getValor(){
    return valor;
}
int DadosSensor::getFrequencia(){
    return frequencia;
}

void DadosSensor::printDados(){
    cout<<"O sensor tem valor: "<<valor<< " e frequência: "<<frequencia<< endl;
}
