#include <iostream>
#include <math.h>//biblioteca de matematica
using namespace std;

int main(){
    int a=5,b=2;

    //int soma= a+b;
    //cout <<soma << endl;
    cout << "soma: " << a+b << endl;

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;
    
    int c= 10, d= 5;
    int mult =a*b;
    cout << "Multiplicacao: " << mult <<endl;

    int restodiv = a%b;
    cout << "divisao resto: " << restodiv <<endl;

    int quocdiv =a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    float div = a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a,b); //a^b
    cout << "Potencia: " << pot << endl;

    //Incremento eDecremento
    cout << " a antigo:  "<< a << endl;
    //a=a+1;
    //a+=1;
    //a++;
    //a=a-1;
    //a-=1;
    //a--;
    
    a+=1;
    cout << " a novo:  " << a << endl;


    return 0;
}