#include "eisen.h"
#include <iostream>
#include <fstream>


void file_manager::salvar_estado_atual(ei_matrix matrix) {
    std::ofstream arquivo(ARQUIVO);  // Abre o arquivo para salvar o estado

    if (arquivo.is_open()) {

        std::string estado = matrix.q_do.return_quarter();
        estado += "\n" + matrix.q_schedule.return_quarter();
        estado += "\n" + matrix.q_delegate.return_quarter();
        estado += "\n" + matrix.q_delete.return_quarter();
        estado += "\n" + matrix.return_finished();
        
        arquivo << estado;
        
        arquivo.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo para salvar o estado!" << std::endl;
    }
}

void file_manager::carregar_estado(){
    
}

void file_manager::reiniciar_estado(){
    std::ofstream arquivo(ARQUIVO, std::ios::trunc);  // Abre o arquivo em modo truncamento
    if (arquivo.is_open()) {
        arquivo.close();  // Fecha o arquivo logo em seguida
    }
}