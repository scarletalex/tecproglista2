#ifndef QUESTAO7_H
#define QUESTAO7_H 
#include <iostream>   


using namespace std;

class DadosSensor{
private:
    int valor; 
    int frequencia;

public:
    DadosSensor(int v, int f);
    DadosSensor();
    int getValor();
    int getFrequencia();
    void printDados();
};
#endif