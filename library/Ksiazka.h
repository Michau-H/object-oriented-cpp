#ifndef KSIAZKA_H 
#define KSIAZKA_H
#include <string>

class Ksiazka {
    private:
        std::string autor, tytul;
    public:
        Ksiazka( std::string m_autor,  std::string m_tytul);
        std::string getAutor();
        std::string getTytul();
};
#endif