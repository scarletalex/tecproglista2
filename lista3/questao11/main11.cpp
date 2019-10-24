#include  <iostream>
#include  "questao11.h"
#include  "funcao.h"
#include <iomanip>

using namespace std;

int  main () {

    vector <int> vetor;
    vector <DadosSensor> dados;

    ordenarVetor (vetor);

    extremosVetor (vetor);

    contarElementos (vetor, dados);
    
    entrada(dados);

    pesquisarVetor(vetor);

    cout<< " Valor " << setw (20) << " Frequência " << endl << endl; 
    for(int i=0;i<10;i++){ 
        dados[i].printDados();}

    return  0 ;
}