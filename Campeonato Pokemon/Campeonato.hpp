#ifndef Campeonato_H
#define Campeonato_H
#include "Treinador.hpp"
#include <string>

class Campeonato{
    public:
    vector<Treinador*> _treinadores;

    void cadastrar_treinador(std::string nome);

    void cadastrar_pokemon_eletrico(int idt, string nome, string tipo_ataque, double forca_ataque, double potencia_raio);

    void cadastrar_pokemon_aquatico(int idt, string nome, string tipo_ataque, double forca_ataque, double litros_jato);

    void cadastrar_pokemon_explosivo(int idt, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao);

    void imprimir_informacoes_treinador(int idt);

    void executar_batalha(int idt1, int idpk1, int idt2, int idpk2);
};

#endif