#include "questao2.h"

Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);
}

void Data::setMes(int m){
    mes=m;
    if(m>12||m<1){mes==1;} 
}
void Data::setDia(int d){
   dia=d;
}
void Data::setAno(int a){
    ano=a;
}
int Data::getMes(){
     return mes;}

int Data::getDia(){
    return dia;}

int Data::getAno(){
     return ano;}


void Data::motrarDados(){
    cout<<endl<<dia<<"/"<<mes<<"/"<<ano;
}


