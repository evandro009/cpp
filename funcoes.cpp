#include <iostream>
using namespace std;
void inscrever(){
    cout <<"Firme nos estudos!,\nvoce consegue\n";
}

    int somar(int &x,int y){// se eu colocar o ecomercial & na frente do x ou y ,este valor altera dentro do main
    int soma;
    soma = (x+y);
    x=30;
    return soma;
    int t;
    t=10;
}

int main(){
    int t;
    t=0;

inscrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout <<"imprima o valor de a atribuido pela e comercial & fora do main: " << a << endl;
    cout << "Soma: "<< s << endl;

    cout << "Valor de t e : "<< t << endl;
return 0;
}



