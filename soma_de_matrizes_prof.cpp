#include<iostream>
using namespace std;

int main(){
    int l, c;
    cout<< "Qual a quantidade de linhas?\n";
    cin>> l;
    cout<< "Qual a quantidade de colunas?\n";
    cin >> c;

    float matriz1[l][c],matriz2[l][c];
    cout << "Digte abaixo os elementos da matiz 1:\n";
    for (int i=0 ; i<l ; i++){
        for(int j=0 ;j<c ; j++){
            cout <<"Digite o elemento da linha "<< i+1 <<",coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite abaixo os elementos da matriz 2: \n ";
    for (int i=0; i<l ;i++){
        for (int j=0 ;j<c ; j++){
            cout <<"Digite o elemeto da linha "<< i+1 << " coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float somamatriz[l][c];
    for (int i= 0; i<l ; i++){
        for(int j=0 ; j<c ; j++){
            somamatriz[i][j] = matriz1[i][j] +matriz2[i][j];
        }
    }
        cout<< "A soma entre as duas matrizes e: \n";
         
        for (int i=0 ;i<l ;i++){
            for(int j=0; j<c ; j++){
                cout<< somamatriz[i][j]<< " ";
                
            }
        cout << endl;

        }



    return 0;
}