#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Quantas familias voce quer calcular a media de gastos? "<<endl;
    cin>> num;
    float gastoFamilia[num];

    for(int i=0; i<num ; i++){
        cout<<"Digite os gastos da familia  "<< i+1 <<endl;
        cin>>gastoFamilia[i];
    }

    float media=0;
    for (int i=0; i < num; i++){
        media+=gastoFamilia[i]; 
    }
     media=media/num;
        cout << "media de gastos: "<< media <<endl;

    for (int i=0;i<num ;i++){
        if (gastoFamilia[i] < media){
            cout<<"a familia "<< i+1 << "tem gasto abaixo da media" << endl;

        }else if (gastoFamilia[i] == media){
            cout << "os gastos da familia " << i+1 << "esta na media " << endl;

        }cout << "os gastos da familia "<< i+1 << " tem gastos acima da media" <<endl;


    }
    return 0;
 }
