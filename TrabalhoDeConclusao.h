#include "Biblioteca.h"

#ifndef TRABALHODECONCLUSAO_H
#define TRABALHODECONCLUSAO_H

class TrabalhoDeConclusao : public Biblioteca{

    protected:
    string orientador;
    string dataDefesa;
    string tema;



	public:
    	
		//Construtor personalizado
    	TrabalhoDeConclusao(string titulo, string autor, int ano, string orientador, string dataDefesa, string tema);
		// Construtor padrão
    	TrabalhoDeConclusao();
		//Destrutor
		~TrabalhoDeConclusao();
	

    string getOrientador();
    string getDataDefesa();
    string getTema();

    void setOrientador(string orientador);
    void setDataDefesa(string dataDefesa);
    void setTema(string tema);
    
    virtual void imprimirTrabalhoDeConclusao();
    
};

#endif

