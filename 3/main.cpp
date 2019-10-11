#include <iostream>
#include "questao3.h"

using namespace std;

int main(){
    Conta Conta1;
    Conta Conta2;

    float saldo1;
    float saldo2;
cout << "informe o saldo da conta1: ";
cin >> saldo1;

Conta conta1(saldo1);

    cout<<"Cliente 1:";
  
    Conta1.fazerDeposito();
    Conta1.fazerSaque();
    Conta1.mostrarSaldo();

cout << "informe o saldo da conta 2: ";
cin >> saldo2;
Conta conta2(saldo2);

    cout<<"Cliente 2:";

    Conta2.fazerDeposito();
    Conta2.fazerSaque();
    Conta2.mostrarSaldo();

    return 0;
}