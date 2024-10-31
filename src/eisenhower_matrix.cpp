#include "eisen.h"

ei_matrix::ei_matrix() : q_do("DO"), q_schedule("SCHEDULE"), q_delegate("DELEGATE"), q_delete("DELETE") {}

bool ei_matrix::show_matrix() {
    q_do.show_quarter();
    q_schedule.show_quarter();
    q_delegate.show_quarter();
    q_delete.show_quarter();

    return true;
}

void ei_matrix::criar_cartao(){
    std::string nome_aux;
    int quadrante_aux;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Escolha um nome: ";
    std::getline(std::cin, nome_aux);
    std::cout << "Escolha um quadrante: \n 1 - DO \n 2 - SCHEDULE \n 3 - DELEGATE \n 4 - DELETE" << std::endl;
    std::cin >> quadrante_aux;

    switch (quadrante_aux)
    {
    case 1:
        q_do.add_card_deck(card(nome_aux));
        break;
    case 2:
        q_schedule.add_card_deck(card(nome_aux));
        break;
    case 3:
        q_delegate.add_card_deck(card(nome_aux));
        break;
    case 4:
        q_delete.add_card_deck(card(nome_aux));
        break;    
    default:    
        std::cout << "Erro, escolha um quadrante válido!" << std::endl;
        break;
    }

}


  void ei_matrix::show_finished(){
    std::cout << "TAREFAS FINALIZADAS" << std::endl;
    for (const auto& carta : finished) {
        std::string aux = carta.getNome();
        std::cout << "- " << carta.getNome() << std::endl;
    }
  }

   std::string ei_matrix::return_finished(){
    std::string aux;
    for (const auto& carta : finished) {
        aux += carta.getNome() + "|";
    }
    return aux;
  }

  void ei_matrix::add_to_finished(card card){
    finished.push_back(card);
  }

  void ei_matrix::excluir_cartao(){
    int choose;
    std::string nome_aux;

    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Escolha um quadrante: \n 1 - DO \n 2 - SCHEDULE \n 3 - DELEGATE \n 4 - DELETE" << std::endl;
    std::cin >> choose;
    std::cout << "Escolha um nome: ";
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (choose){
      case 1:
        q_do.show_quarter();
              std::getline(std::cin, nome_aux);
              q_do.delete_card_deck(card(nome_aux));
              break;
            case 2:
              q_schedule.show_quarter();
              std::getline(std::cin, nome_aux);
    q_schedule.delete_card_deck(card(nome_aux));
              break;
            case 3:
              q_delegate.show_quarter();
              std::getline(std::cin, nome_aux);
              q_delegate.delete_card_deck(card(nome_aux));
              break;
            case 4:
              q_delete.show_quarter();
              std::getline(std::cin, nome_aux);
              q_delete.delete_card_deck(card(nome_aux));
              break;    
            default:    
              std::cout << "Erro, escolha um quadrante válido!" << std::endl;
              break;
          }
  }

  void ei_matrix::concluir_cartao(){
    int choose;
    std::string nome_aux;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



    std::cout << "Escolha um quadrante: \n 1 - DO \n 2 - SCHEDULE \n 3 - DELEGATE \n 4 - DELETE" << std::endl;
    std::cin >> choose;
    std::cout << "Escolha um nome: ";
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



    switch (choose){
      case 1:
        q_do.show_quarter();
        std::getline(std::cin, nome_aux);
        q_do.delete_card_deck(card(nome_aux));
        add_to_finished(card(nome_aux));
        break;
      case 2:
        q_schedule.show_quarter();
        std::getline(std::cin, nome_aux);
        q_schedule.delete_card_deck(card(nome_aux));
        add_to_finished(card(nome_aux));
        break;
      case 3:
        q_delegate.show_quarter();
        std::getline(std::cin, nome_aux);
        q_delegate.delete_card_deck(card(nome_aux));
        add_to_finished(card(nome_aux));
        break;
      case 4:
        q_delete.show_quarter();
        std::getline(std::cin, nome_aux);
        q_delete.delete_card_deck(card(nome_aux));
        add_to_finished(card(nome_aux));
        break;    
      default:    
        std::cout << "Erro, escolha um quadrante válido!" << std::endl;
        break;
      }       
  }