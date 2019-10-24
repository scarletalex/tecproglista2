#include "f.h"
#define MAXVAL 500
#define MAIORVALOR 1000
#define START 0
#define DIFMODQUANT 1
#define MINFREQ 1

using namespace std;

void preencherArquivo(){

    int valor = START;
    int tamValores = START;

    ofstream arquivoS;

    arquivoS.open("L3Q7.txt");

    cout << "Informe os valores (- para parar): " << endl;
    
    while(cin >> valor){

        arquivoS << valor << endl;
        tamValores++;
    }

    srand(time(NULL));

    for(int i = START; i < MAXVAL - tamValores; i++){

        arquivoS << rand()%MAIORVALOR << endl;
    }

    arquivoS.close();
}

void preencherVetor(vector <int> &i){

    int ent = START;

    ifstream arquivoE;

    arquivoE.open("L3Q7.txt");

    while(arquivoE >> ent){

        i.push_back(ent);
    }

    arquivoE.close();
}

void ordenarVetor(vector <int> &i){

    sort(i.begin(), i.end());
}

void extremosVetor(vector <int> i){

    int menor = START;
    int maior = i.size() - DIFMODQUANT;

    cout << "Menor Valor: " << i[menor] << endl;
    cout << "Maior valor: " << i[maior] << endl;
}

void contarElementos(vector <int> i, vector <DadosSensor> &d){

    int freq = START;

    for(int cont = START; cont < MAIORVALOR; cont++){

        freq = count(i.begin(), i.end(), cont++);

        if(freq >= MINFREQ){

            d.push_back(DadosSensor(cont, freq));
        }
    }
}

void mostrarVetor(vector <int> i){

    cout << "Valores:";

    for(auto elemento : i){

        cout << " " << elemento ;
    }

    cout << endl;
}