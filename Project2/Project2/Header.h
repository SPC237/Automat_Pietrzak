#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>


class automat {

private:
    double srodki = 0.0; // zmienna przechowujaca srodki
    std::string koniec;      // zmienna obslugojaca wyjscie z petli while
    int moneta;        // zmienna obslugujaca wybor monet jakie zostana dodane do srodkow (switch case)
    int wybor;        // zmienna obslugujaca wybor numeru produktu
    int i;           // iterator po ktorym chodza pentle
public:
    void karta();           // funkcja obslugujaca platnosc karta
    void oferta();          // funkcja odpowiedzialna za wyswietlanie oferty
    void wybieranie();      //funkcja odpowiedzialna za wybieranie produktu do kupna
    double reszta();
};


#endif // FUNKCJE_H_INCLUDED