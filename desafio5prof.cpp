#include <iostream>

using namespace std;

main(){
    
    int idade;
    float renda;
    while(1){
    cout << "Qual e a sua idade? \n";
    cin >> idade;
    cout << "Qual e a sua renda? \n";
    cin >> renda;
    
    if (idade >=21 && renda < 1200){
        cout << "Voce esta apto a participar!\n";
    } else{
        cout << "Voce nao pode participar!\n";
    }
    
    int q;
    cout << "Digite 1 se quiser continuar ou 0 para parar!\n";
    cin >> q;
    if(q==0){
        break;
    }

    } 

    return 0;
}