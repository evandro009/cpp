#include<iostream>
 using namespace std;

 int main(){
    //Alocacao estatica!
   // int vet[4];
   // vet[0]=5;
   // vet[1]=10;
   // vet[2]=15;
    
    //cout << vet[2] << endl;
    //cout << vet[1] << endl;
    //cout << vet[0] << endl;

    //usando as chaves para inserir os valores
   // int vet1[4]= {2,4,6,8};
   // cout << vet1 [2]<< endl;

   // cout <<"[";
   // for (int i=0 ; i<4 ; i++){
     //   cout << vet1[i] <<",";
    //}
    //cout <<"]"<<endl;

    // tamanho do vetor
    //int x =sizeof(vet);
    //int y =sizeof(int);
     //   cout <<"Tamanho de inteiro: "<< y << endl;
     //   cout << "Quantidade de elementos do vetor: "<< x <<endl;



    //Alocaçao dinamica
    int tamanho;
    cout <<"Digite o tamnaho do vetor! "<<endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    //usuario inserindo os valores dentro do vetor
    for (int i=0; i<tamanho ; i++){
        cout << "digite os elementos  "<< i+1 << " do vetor: " << endl;
        cin  >> vetor[i];
    }
    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i]<< " ";

    }
        cout << endl;
    //limpando a memoria 
    delete []vetor;
    return 0;
 }
