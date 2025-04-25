#include "Ksiazka.h"

Ksiazka::Ksiazka( std::string m_autor,  std::string m_tytul){
    autor=m_autor;
    tytul=m_tytul;
}
std::string Ksiazka::getAutor()  {
    return autor;
}

std::string Ksiazka::getTytul()  {
    return tytul;
}