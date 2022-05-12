#include <iostream>
#include <string>
using namespace std;

class Aluno{

public:
string nome,matricula;
int getnota1();
int getnota2();

void setnota1(int n1);
void setnota2(int n2);


private:
int nota1,nota2;

}; 

int main() {
  int nota,n1[4];
    Aluno aluno1;
  Aluno aluno2;
  cout<<"aluno1 nome\n";
  cin>>aluno1.nome;
  cout<<"\naluno2 nome\n";
  cin>>aluno2.nome;
  cout<<"\naluno1 matricula\n";
  cin>>aluno1.matricula;
  cout<<"\naluno2 matricula\n";
  cin>>aluno2.matricula;
  for(int i=0;i<2;i++){
  	cout<<"Digite a nota 1 e 2 do aluno 1:";
  	cin>>n1[i];
  	cout<<endl;
  }
   for(int a=2;a<4;a++){
  	cout<<"Digite a nota 1 e 2 do aluno 2:";
  	cin>>n1[a];
  	cout<<endl;
  }
  aluno1.setnota1(n1[0]);
  aluno1.setnota2(n1[1]);
  aluno2.setnota1(n1[2]);
  aluno2.setnota2(n1[3]);
  cout<<"Aluno 1 nota1:\n"<<aluno1.getnota1()<<"\n";
  cout<<"Aluno 1 nota 2:\n"<<aluno1.getnota2()<<"\n";
  cout<<"Aluno 2 nota1:\n"<<aluno2.getnota1()<<"\n";
  cout<<"Aluno 1 nota 2:\n"<<aluno2.getnota2()<<"\n";
    return 0;
}
int Aluno::getnota1(){
  return nota1;
}
int Aluno:: getnota2(){
  return nota2;
}

void Aluno:: setnota1(int n1){
  nota1=n1;
}
void Aluno:: setnota2(int n2){
  nota2=n2;
}
