#include <iostream>
#include<math.h>
 using namespace std;

 main(){
        int nota1, nota2,nota3;
        int mclasse=5;
        
        cout<<"qual foi a nota primeira nota\n";
        cin >> nota1;
        cout<<"qual foi a segunda nota?\n";
        cin>> nota2;
        cout <<"qual foi a sua terceira nota ?\n";
        cin>>nota3;
        
        float media=(nota1+nota2+nota3)/(float)3;
        
        cout<<"a media sua foi: "<<media <<" e a media da classe e: " <<mclasse <<endl;
        (media>=5)?cout<<"sua media esta dentro da media da classe\n" :cout<< "sua media esta abaixo da media!\n";
    return 0;
}