#include "Principal.h"
#include <iostream>
using namespace std;

Principal::Principal() {

}

Principal::~Principal() {

}

void Principal::PerguntaHorario()
{
    int horaentrada, minutoentrada;
    int horasaida, minutosaida;

    cout << "hora de entrada: ";
    cin >> horaentrada;

    cout << "minuto de entrada: ";
    cin >> minutoentrada;

    cout << "hora de saida: ";
    cin >> horasaida;

    cout << "minuto de saida: ";
    cin >> minutosaida;

    entrada = Horario(horaentrada, minutoentrada);
    saida   = Horario(horasaida, minutosaida);

    if (!entrada.GetValidade() || !saida.GetValidade())
    {
        cout << "Horario invalido." << endl;
        return;
    }

    int intervalo = entrada.CalculaIntervalo(saida);

    cout << "Intervalo = " << intervalo << " minutos" << endl;

}
float Principal::CalculaCusto() {
  float custo;
  int intervalo = entrada.CalculaIntervalo(saida);

  if (intervalo < 3 * 60)
    custo = 4.5;
  else if (intervalo >= 3 * 60 && intervalo <= 12 * 60 )
    custo = 4.5 + ((intervalo - 3 * 60 ) / 15) * 0.75;
  else
    custo = 33.0;

  return custo;
}

void Principal::Executar() {
  PerguntaHorario();
  cout << "O custo foi de R$" << CalculaCusto() << endl;
}
