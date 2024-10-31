#include "eisen.h"


card::card(const std::string& nome_card) : nome_card(nome_card){}

std::string card::getNome() const {
    return nome_card;
}

void card::setNome(std::string nome){
    nome_card = nome;
}