#include <iostream>

 using namespace std;

 int main(){
    float n1,n2,n3,medturma;
    cout <<"digite a nota 1:\n";
    cin>> n1;
    cout <<"digite a nota 2:\n";
    cin>> n2;
    cout<< "digite a nota 3:\n";
    cin>> n3;
    cout<<"qual  a media da turma:\n";
    cin>> medturma;
    
    float mediaaluno=(n1+n2+n3)/3;
    cout <<"a media final do aluno e "<< mediaaluno <<endl;

    if (mediaaluno< medturma){
        cout<<"o aluno esta abaixo da media !";
    } else if (mediaaluno ==medturma){
        cout<<"O aluno esta na media!";
    }else {
    cout <<"O aluno eta acima da media!";
    }



    return 0;
 }