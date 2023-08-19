#include <iostream>

using namespace std;


int main(){
    float nota1, nota2;
    cout << "informe a sua nota1\n";
    cin >> nota1;
    cout << "informe a nota2\n";
    cin >> nota2;
    float media=(nota1+nota2)/2;
    cout << "media= " << media << endl;

    //if (media >= 5){
    //cout << "Aluno aprovado\n";
    //}
    //Comparacao : igual ==, diferente: !=,


    if (media >= 5){
      //  cout <<"aluno aprovado\n";
   } else {
   // cout <<"aluno repovado\n";
   }

    //0-2.5 d , 2.5- 5 c , 5-7.5 b ,7.5-10 a
    if (media < 2.5){
        cout <<"nota Final: D\n";
    } else if (media < 5 ){
        cout << "Nota Final: C\n";
    } else if (media <7.5){
        cout << "Nota Final: B\n";
    } else {
       // cout << " Parabens Sua nota e: A\n";
    }
        //operadores logicos: E: && , OU: || , Não: !

        float freq;
        cout << "Qual e a frequencia do aluno?\n";
        cin >> freq;

       // if (media  >=5 && freq >=75){
       //     cout <<"aluno Aprovado!\n";
       //} else{
       //      cout << "aluno reprovado!\n";
       // }

       // if (media > 5 || freq > 75){
       //     cout <<"aluno reprovado!\n";
       // } else {
       //    cout <<"aluno aprovado!\n";
       // }

    //Operador Ternario
    (media >= 5 && freq >=75 ) ? cout <<"Aprovado\n" : cout << "aluno reprovado!\n";



    return 0;
}