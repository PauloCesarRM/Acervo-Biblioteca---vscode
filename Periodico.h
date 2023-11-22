#ifndef PERIODICO_H
#define PERIODICO_H

#include "Biblioteca.h"		//OBS: NÃO RODOU SEM INCLUIR A BIBLIOTECA NESSE .h, MAS NO LIVRO.h NÃO TEM ESSE INCLUDE

class Periodico : public Biblioteca{	

	//ATRIBUTOS DA CLASSE PERIODICO
	protected:
	string editora;
	int issn;
		
	
	public:
	Periodico(string titulo, string autor, int ano, string editora, int issn);
	Periodico();
	~Periodico();
	
	
	string getEditora();
	int getIssn();
	
	void setEditora(string editora);
	void setIssn(int issn);
	
	virtual void imprimirPeriodico();
};
#endif

