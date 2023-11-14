#include "Biblioteca.h"

#include <iostream>
#include <string>

using namespace std;

class Livro : public Biblioteca{


    //Atributos da classe Livro
    protected:
    string editora;
    string isbn;
    int paginas;
    string edicao;


        public:
        //construtor e destrutor
        Livro(string titulo, string autor, int ano, string editora, string isbn, int paginas, string edicao);
        Livro();
        ~Livro();
        

        string getEditora();
        string getIsbn();
        int getPaginas();
        string getEdicao();

        void setEditora(string editora);
        void setIsbn(string isbn);
        void setPaginas(int paginas);
        void setEdicao(string edicao);

};
