#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Receita{
  string nome;
  string ingredientes[20];
  int num_ingredientes;
  void imprime(string nome, string ingredientes[])
  {
    int i;
    cout << nome << ':' << endl;
    for(i = 0; i < num_ingredientes; i++)
     {
        cout << ingredientes[i] << ';' <<endl;
     }
  }   
};

int main()
{
    char letra;
    int i, j = 0;
    Receita buscar;
    Receita comida[5];
    Receita R1, R2, R3, R4, R5;
    for(i = 0; i < 5; i++)
    {
        cout << "Digite o nome da "<< i+1 <<"º receita:" << endl;
        getline(cin, comida[i].nome);
        cin.ignore();
        do{
          cout << "Digite os ingredientes: "<< endl;
          getline(cin, comida[i].ingredientes[j]);
          cin.ignore();
          j++;
          cout << "Aperte 'X' para encerrar a digitação, ou qualquer tecla para continuar" << endl;
          letra = getchar();
          cin.ignore();
        }while(letra != 'X');
        buscar.num_ingredientes = j;
        j = 0;
    }
    letra = 0;
    do
    {
      cout <<"Digite o nome da receita que deseja ver: " << endl;
      getline(cin, buscar.nome);
    for (i = 0; i < 5; i++)
    {
     if (buscar.nome == comida[i].nome)
      {
        buscar.imprime(comida[i].nome, comida[i].ingredientes);
      }
    }
    cout << "Precione 'X' para encerrar o programa";
    letra = getchar();
    i++;
    } while (letra != 'X');
  return 0;
}