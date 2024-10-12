#include <iostream>
using namespace std;
struct Controle_eletrodomesticos
{
    string nomes_eletro;
    float potencia;
    float tempo_ativo;
    float tempo_dias;
    float resultado;
   float calculo()
   {
        return tempo_ativo * tempo_dias * (potencia/1000);
   }
};

int main()
{ 
  Controle_eletrodomesticos produtos[5];
  float resultado = 0;
  int i = 0;

  do
  {
    cout << "Digite o nome do produo: " << endl;
    cin.ignore();
    getline(cin, produtos[i].nomes_eletro);

    cout << "Digite a potencia do produto em Watts: ";
    cin >> produtos[i].potencia;

    cout << "Digite o tempo ativo durante o dia em horas:"<< endl;
    cin >> produtos[i].tempo_ativo;

    cout <<"Por quantos dias esse produto foi ultilizado?" << endl;
    cin >> produtos[i].tempo_dias;
    resultado += produtos[i].calculo();
    i++;
  }while(i < 5);
  cout << "O consumo total de todos os produtos e de:" << resultado <<"kWh";
}
