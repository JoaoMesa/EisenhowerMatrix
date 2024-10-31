#include <iostream>
#include <string>
#include <vector>
#include <limits>

#ifndef EISEN
#define EISEN

#define SEPARADOR_GRANDE "\n=====================================\n"
#define SEPARADOR_PEQUENO "\n-------------------------------------\n"
#define ARQUIVO "save/save.txt"


#define BOASVINDAS "\n Bem vindo ao Eisen, o que deseja fazer \n"
#define PAINEL "\n1 - Ver a Matriz \n2 - Adicionar tarefa \n3 - Concluir tarefa \n4 - Excluir tarefa \n5 - Ver tarefas concluídas\n6 - Encerrar programa \n"



class card {
private:

std::string nome_card;

public:
  card(const std::string& nome_card);

  std::string getNome() const;
  void setNome(std::string nome);
};


class quarter {
private:
  std::string nome;
  std::vector<card> deck;

public:
  quarter(const std::string& nome);

  std::string getNome() const;

  void add_card_deck(card my_card);
  
  void delete_card_deck(card my_card);

  std::string show_deck();

  std::string show_quarter();

  std::string return_quarter();
};




class ei_matrix {
private:
  std::vector<card> finished;

public: 
  quarter q_do;
  quarter q_schedule;
  quarter q_delegate;
  quarter q_delete;

  ei_matrix();

  bool show_matrix();

  void criar_cartao();
  void excluir_cartao();
  void concluir_cartao();

  void show_finished();
  void add_to_finished(card card);
  std::string return_finished();
};

class file_manager{
  public:

  void salvar_estado_atual(ei_matrix matrix);
  void carregar_estado();
  void reiniciar_estado();
};



#endif