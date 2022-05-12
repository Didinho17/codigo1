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
  int nota;
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
aluno1.setnota1(100);
  aluno1.setnota2(80);
  aluno2.setnota1(100);
  aluno2.setnota2(80);
  cout<<aluno1.getnota1()<<"\n";
  cout<<aluno1.getnota2()<<"\n";
  cout<<aluno2.getnota1()<<"\n";
  cout<<aluno2.getnota2()<<"\n";
    return 0;
}
int Aluno::getnota1(){
  return nota1;
}
int Aluno:: getnota2(){
  return nota1;
}

void Aluno:: setnota1(int n1){
  nota1=n1;
}
void Aluno:: setnota2(int n2){
  nota2=n2;
}
