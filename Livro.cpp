#include "Livro.h"
//Colocar essa condição em todo .cpp

#ifndef LIVRO_H
#define LIVRO_H

    Livro::Livro(string titulo, string autor, int ano, string editora, string isbn, int paginas, string edicao){
    }

    Livro::~Livro(){
    }



    string Livro::getEditora(){
        return editora;
    }
    string Livro::getIsbn(){
        return isbn;
    }
    int Livro::getPaginas(){
        return paginas;
    }
    string Livro::getEdicao(){
        return edicao;
    }

    void Livro::setEditora(string editora){
        this->editora = editora;
    }
    void Livro::setIsbn(string isbn){
        this->isbn = isbn;
    }
    void Livro::setPaginas(int paginas){
        this->paginas = paginas;
    }
    void Livro::setEdicao(string edicao){
        this->edicao = edicao;
    }



#endif
