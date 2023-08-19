
#include <iostream>
using namespace std;
int fat(int x){
    int fatorial=1;
    for (int i=1; i<=x; i++)
    fatorial*=i;
    return fatorial;
}

int main(){
    int n;
    while (true){
    cout <<"informe um numero inteiro positivo!\n";
    cin>> n;
    if (n< 0){
        cout<<"o numero informado e negativo!\n";
    }else{
        break;   
}    
}
    int valorfat = fat(n);
    cout<<" o valor do fatorial  "<< n << " e: " << valorfat <<endl;
    return 0;

}