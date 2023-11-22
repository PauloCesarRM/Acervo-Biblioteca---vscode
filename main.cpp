#include <iostream>
#include <locale>

#include "Biblioteca.h"
#include "Livro.h"
#include "Periodico.h"
#include "Revista.h"
#include "Jornal.h"
#include "TrabalhoDeConclusao.h"
#include "Tese.h"
#include "Dissertacao.h"

int main(){

    Biblioteca *biblioteca = new Biblioteca;

    biblioteca->setAno(2014);
    biblioteca->setAutor("AUTOR");
    biblioteca->setTitulo("OBRA");
	
    cout << "ANO: " << biblioteca->getAno() << " --- AUTOR: " << biblioteca->getAutor();
    cout << " --- TITULO: " << biblioteca->getTitulo();
    
    
    //TESTANDO CLASSE LIVRO
    Livro *livro = new Livro("", "", 0, "", "", 0, "");		
    livro->setEditora("EditoraPPP");
    livro->setIsbn("ISBN123");
    livro->setPaginas(300);
    livro->setEdicao("1ª Edicao");
    
    cout << endl << endl << "EDITORA: " << livro->getEditora() << " --- ISBN: " << livro->getIsbn() << " --- Nº de paginas: " << livro->getPaginas() << " --- Edicao: " << livro->getEdicao();



	//TESTANDO PERIODICO
	Periodico *periodico = new Periodico("","",0,"",0);
	periodico->setEditora("Editora do Periodico");
	periodico->setIssn(12345678);
	
	cout << endl << endl << "EDITORA: " << periodico->getEditora() << " --- ISSN: " << periodico->getIssn();

    //TESTANDO REVISTA
    Revista *revista = new Revista("","",0,"","");
    revista->setAssunto("Assunto da Revista");
    revista->setEdicao("Edicao da Revista");
	
    cout << endl << endl << "ASSUNTO: " << revista->getAssunto() << " --- EDICAO: " << revista->getEdicao();


    //TESTANDO JORNAL
    Jornal *jornal = new Jornal("","",0,"",0,"");
    jornal->setCidade("Cidade do Jornal");
    

    cout << endl << endl << "CIDADE: " << jornal->getCidade();
    

    //TESTANDO TRABALHO DE CONCLUSAO

    TrabalhoDeConclusao *trabalhoDeConclusao = new TrabalhoDeConclusao("","",0,"","","");
    trabalhoDeConclusao->setOrientador("Orientador do Trabalho de Conclusao");
    trabalhoDeConclusao->setDataDefesa("01/01/2023");
    trabalhoDeConclusao->setTema("Tema Do trabalho de Conclusao");

    cout << endl << endl << "ORIENTADOR: " << trabalhoDeConclusao->getOrientador() << " --- DATA DA DEFESA: " << trabalhoDeConclusao->getDataDefesa();
    cout << " --- TEMA: " << trabalhoDeConclusao->getTema();
	

    //TESTANDO TESE
    Tese *tese = new Tese("","",0,"","","","");
    tese->setUniversidade("Universidade da Tese");
	
    cout << endl << endl << "UNIVERSIDADE: " << tese->getUniversidade();


    //TESTANDO DISSERTACAO
    Dissertacao *dissertacao = new Dissertacao("","",0,"","","","","");
    dissertacao->setDepartamento("Departamento da Dissertacao");
    dissertacao->setMetodologia("Metodologia da Dissertacao");
	
    cout << endl << endl << "DEPARTAMENTO: " << dissertacao->getDepartamento() << " --- METODOLOGIA: " << dissertacao->getMetodologia();


    delete biblioteca;
    delete livro;
    delete periodico;
    delete revista;
    delete jornal;
    delete trabalhoDeConclusao;
    delete tese;
    delete dissertacao;


    return 0;
    
}
