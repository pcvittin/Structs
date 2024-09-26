#include <iostream>
#include <string>
using namespace std;

struct Lista_de_Alunos
{
    string nomes[5];
    int matricula[5];
    string curso[5];
};
void print(Lista_de_Alunos* ptr)
{
  int i;
  for(i = 0;i < 5; i++)
  {
    cout << ptr->nomes[i]<<"\t";
    cout << ptr->matricula[i]<<"\t";
    cout << ptr->curso[i]<<"\t"<<endl;
  }
}

int main()
{
    Lista_de_Alunos lda;
    Lista_de_Alunos *ptr = &lda;
    int i = 0;
    do
    {
        cout <<"Digite o nome do aluno: "<<endl;
        getline(cin, ptr->nomes[i]);
        cout <<"Digite o numero da matricula: "<<endl;
        cin >> ptr->matricula[i];
        cout <<"Digite o curso do aluno: "<<endl;
        cin.ignore();
        getline(cin, ptr->curso[i]);
        i++;
    }while(i != 5);
    print(ptr);
    return 0;
}
