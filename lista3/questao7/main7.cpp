#include  <iostream>
#include  "questao7.h"
#include  "funcao.h"

using namespace std;

int  main () {

    vector <int> valor;
    vector <DadosSensor> dados;

    ordenarVetor (valor);

    extremosVetor (valor);

    contarElementos (valor, dados);

    for(int i=0;i<dados.size();i++){ 
        dados[i].printDados();}

    return  0 ;
}