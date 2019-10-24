#include  <iostream>
#include  "questao8.h"
#include  "funcao.h"

using namespace std;

int  main () {

    vector <int> vetor;
    vector <DadosSensor> dados;

    ordenarVetor (vetor);

    extremosVetor (vetor);

    contarElementos (vetor, dados);

    for(int i=0;i<dados.size();i++){ 
        dados[i].printDados();}

    return  0 ;
}