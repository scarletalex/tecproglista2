#include <iostream>
#include "questao3.h"

using namespace std;

int main(){
    Conta Conta1;
    Conta Conta2;


    float si=0;
    
    cout<<"Digite seu saldo inicial:";
    cin>>si;

    Conta1 Conta(si);
    Conta2 Conta(si);


    cout<<"Cliente 1:";
  
    Conta1.fazerDeposito();
    Conta1.fazerSaque();
    Conta1.mostrarSaldo();

    cout<<"Cliente 2:";

    Conta2.fazerDeposito();
    Conta2.fazerSaque();
    Conta2.mostrarSaldo();

    return 0;
}