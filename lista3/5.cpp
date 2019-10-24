#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    arquivo.open("questao2.txt",ios::in);

    int valor;
    vector <int> vetor;

    cout<<"valores inteiros: ";

    while(arquivo>>valor){
        vetor.push_back(valor);
    }
    
    sort(vetor.begin(), vetor.end());

    cout<<"Menor valor: "<<vetor[0]<<endl;
    cout<<"Maior valor: "<<vetor[vetor.size()-1]<<endl;
    
    for ( int i = 0 ; i <vetor. size (); i++) {
        cout << " O número: " << vetor[i] << " se repete " << count(vetor. begin (), vetor. end (), vetor[i]) << " vezes. " << endl ;
    }
    arquivo.close();
    return 0;
}