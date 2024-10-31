  #include "eisen.h"

  int main() {
    ei_matrix myMatrix;
    file_manager manager;
    std::cout << SEPARADOR_GRANDE << BOASVINDAS;

    bool parar = false;

    while (parar == false){
      int escolha = 0;
      std::cout << SEPARADOR_PEQUENO << PAINEL << SEPARADOR_PEQUENO;
      std::cin >> escolha;
      std::string nome_aux;

      switch (escolha){
        case 1:
          
          myMatrix.show_matrix();
          break;

        case 2:
          
          myMatrix.criar_cartao();
          break;

        case 4: 

          myMatrix.excluir_cartao();
          break;

        case 3:

          myMatrix.concluir_cartao();
          break;

        case 5:
        
          myMatrix.show_finished();
          break;

        default:
          manager.salvar_estado_atual(myMatrix);
          parar = true;
          break;

        }
      }

    return 0;
  }
