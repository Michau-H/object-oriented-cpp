#include <iostream>
#include <fstream>
#include "FileParser.h"
#include "CarReport.h"

int main() {
    std::vector <CarReport> kierowcy;
    std::string plik;
    std::fstream zapis("wynik.txt");
    for(int i=1; i<8; i++){
        plik="dane"+std::to_string(i)+".dat";
        FileParser a(plik);
        kierowcy = a.NextPerson();
        std::cout<<"Analiza pliku: " << plik << std::endl;
        zapis<<"Analiza pliku: " << plik << std::endl;
        for(int j=0; j<kierowcy.size(); j++){
            std::cout<<kierowcy.at(j).getKierowca();
            zapis<<kierowcy.at(j).getKierowca();
            try {
                std::cout<<" zasieg: " <<kierowcy.at(j).getRange()<<std::endl;
                zapis<<" zasieg: " <<kierowcy.at(j).getRange()<<std::endl;
            }catch(const std::exception& w){
                std::cout<<": "<<w.what()<<std::endl;
                zapis<<": "<<w.what()<<std::endl;
            }
        }
        kierowcy.clear();
        std::cout<<std::endl;
        zapis<<std::endl;
    }
    zapis.close();
    return 0;
}
