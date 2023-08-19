  #include <iostream>

  using namespace std;

  int main(){
    int n;
    cout << "usuario coloque um numero  inteiro nao negativo\n";
    cin >> n;

  int soma = 0;
  int cont = 0;
  while(cont<=n){
  soma+=cont;
  cont++;
  }
  
  cout << "soma dos numeros de 0 ate  " << n <<" com o WHILE" << "= " << soma << endl;

  do{
  soma+=cont;
  cont++;
  } while (cont <= n);
  cout << "soma dos numeros de 0 ate  " << n <<" com o DO WHILE" << "= " << soma << endl;

  for (int j=1 ; j<=n ; j+=1){
  soma+=j;
  cout <<"teste do for\n";
  }
  cout << "a soma dos numeros de 0 ate " << n << " com  o FOR" << " = " << soma << endl;
  
return 0;
}
  

