#include <iostream>
#include <locale>

#include "Biblioteca.h"
#include "Livro.h"

int main(){

    Biblioteca *biblioteca = new Biblioteca;

    biblioteca->setAno(2014);
    biblioteca->setAutor("AUTOR");
    biblioteca->setTitulo("OBRA");

    cout << "ANO: " << biblioteca->getAno() << " --- AUTOR: " << biblioteca->getAutor();
    cout << " --- TITULO: " << biblioteca->getTitulo();
    
    
    //TESTANDO CLASSE LIVRO
    Livro *livro = new Livro("", "", 0, "", "", 0, "");		//NÃO RODOU SEM INICIALIZAR O CONSTRUTOR
    livro->setEditora("EditoraPPP");
    livro->setIsbn("ISBN123");
    livro->setPaginas(300);
    livro->setEdicao("1ª Edicao");
    
    cout << endl << endl << "EDITORA: " << livro->getEditora() << " --- ISBN: " << livro->getIsbn() << " --- Nº de paginas: " << livro->getPaginas() << " --- Edicao: " << livro->getEdicao();


    delete biblioteca;
    delete livro;
    
    return 0;
    
}