#include <iostream>
 using namespace std;

 int main(){
    int numerofamilia;
    cout << "qual o numero de familias? " << endl;
    cin >> numerofamilia;
    float gastofamilia[numerofamilia];

    for (int i=0 ; i<numerofamilia ; i++){
        cout <<"Digite os gastos da familia " << i+1 << endl;
        cin >> gastofamilia[i];
    }
    float media=0;
    for (int i=0; i<numerofamilia ;i++){
        media+=gastofamilia[i];     

    }
    media=media/numerofamilia;
    cout << "media de gastos : " << media << endl;
    
    for (int i=0;i<numerofamilia ;i++){
        if (gastofamilia[i] < media){
            cout<<" a familia "<< i+1 << "tem gasto abaixo da media" << endl;

        }else if (gastofamilia[i] == media){
            cout << "os gastos da familia " << i+1 << "esta na media " << endl;

        }cout << "os gastos da familia "<< i+1 << "tem gastos acima da media" <<endl;


    }
    return 0;
 }