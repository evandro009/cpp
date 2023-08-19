#include <iostream>
using namespace std;
int main(){
    int inteiro;
    inteiro = 5.2;
    cout << inteiro << endl; 

    float real;
    real = 5.2;
    cout << real << endl;
    
    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool boleano;
    boleano = false;
    cout << boleano << endl;

    char letra;
    letra = 'bola';
    cout << letra << endl;
    
    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "qual é a sua idade?: " << endl;
    cin  >> idade;
    cout << "Idade " << idade<<" ,voce esta ficando velho hein " << endl;



    return 0;
}