#include<iostream>
using namespace std;

float potencia(float x,int y){
    float pot=1;
    int cont=1;
    while(cont<=y){
        pot=pot*x; //pot*=x
        cont++;
    }
    return pot;

}
    int main(){
        float b;
        int e;
        while(1){ 
        cout<<"digite a base (numero real):\n";
        cin>>b;
        cout<<"Digete o expoente (numero natural):\n";
        cin>> e;
        float respot=potencia(b,e);
        cout<<"o resultado de "<< b << " elevado a "<< e << " e igual a "<< respot << endl;
    int q;
    cout << "deigite 1 se quiser calcular outra potencia e 0 se nao quiser\n";
    cin >> q;
    if (q==0){
        break;

    }
    }

return 0;
}