#include "eisen.h"


quarter::quarter(const std::string& nome) : nome(nome) {}

std::string quarter::getNome() const {
  return nome;
}

void quarter::add_card_deck(card my_card){
    deck.push_back(my_card);
}

std::string quarter::show_deck(){
    for (const auto& carta : deck) {
        std::string aux = carta.getNome();
        if(aux[0] != '#'){
            std::cout << "- " << carta.getNome() << std::endl;
        }
    }

    return "";
}

std::string quarter::show_quarter(){
    std::cout << std::endl << getNome() << std::endl;
    std::cout << show_deck() << std::endl;

    return "";
}

void quarter::delete_card_deck(card my_card){
    std::string aux;

    for (auto& carta : deck) {
        if (carta.getNome() == my_card.getNome()){
            aux = carta.getNome();
            aux = "#" + aux;
            carta.setNome(aux);
        }
    }
}

std::string quarter::return_quarter(){
    std::string aux;
    
    for (auto& carta : deck){
        aux += carta.getNome() + "|";
    }

    return aux;
}