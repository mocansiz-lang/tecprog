#include "ExTestadorDeCaixa.h"
#include "Caixa.h"
#include <iostream>

using namespace std;

void ExTestadorDeCaixa::executar()
{
    float l, a, p;

    Caixa caixa1;
    Caixa caixa2;

    cout << "Caixa 1" << endl;

    cout << "Largura: ";
    cin >> l;
    caixa1.setLargura(l);

    cout << "Altura: ";
    cin >> a;
    caixa1.setAltura(a);

    cout << "Profundidade: ";
    cin >> p;
    caixa1.setProfundidade(p);


    cout << "\nCaixa 2" << endl;

    cout << "Largura: ";
    cin >> l;
    caixa2.setLargura(l);

    cout << "Altura: ";
    cin >> a;
    caixa2.setAltura(a);

    cout << "Profundidade: ";
    cin >> p;
    caixa2.setProfundidade(p);



    cout << "Caixa 1:" << endl;
    cout << "Area externa: " << caixa1.calcularAreaExt() << endl;
    cout << "Volume: " << caixa1.calcularVolume() << endl;

    cout << "\nCaixa 2:" << endl;
    cout << "Area externa: " << caixa2.calcularAreaExt() << endl;
    cout << "Volume: " << caixa2.calcularVolume() << endl;
}
