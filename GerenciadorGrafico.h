#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdlib.h>
#include <iostream>

#define W_ALTURA 720
#define W_LARGURA 1020
#define NOME_JOGO "placehoderlmao"
#define MAX_FPS 60

class Ente;

class GerenciadorGrafico
{
private:
    sf::RenderWindow* window;

public:
    GerenciadorGrafico();
    ~GerenciadorGrafico();

    void desenharEnte(Ente* pE);

    sf::RenderWindow* getWindow() { return window; }



};
