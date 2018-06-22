/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Szemely{
    string nev;
    int eletkor;
    
    public:
    
    Szemely(){}
    Szemely(string _nev, int _eletkor){
        nev=_nev;
        eletkor=_eletkor;
    }
    
    string getNev(){
        return nev;
    }
    int getEletkor(){
        return eletkor;
    }
    void setNev(string ujnev){
        nev=ujnev;
    }
    void setEletkor(int ujeletkor){
        eletkor=ujeletkor;
    }
    void toString(){
        std::cout << getNev() << std::endl;
        std::cout << getEletkor() << std::endl;
    }
};

class Szamla{
    Szemely tulaj;
    int egyenleg;
    
    public:
    
   
    Szamla(string _nev, int _eletkor, int _egyenleg){
        tulaj.setNev(_nev);
        tulaj.setEletkor(_eletkor);
      egyenleg=_egyenleg;
    }
    
 void in(int befizetett){
     egyenleg=befizetett+egyenleg;
 }
 bool out(int kivett){
     egyenleg=egyenleg-kivett;
     return true;
 }
  int getEgyenleg(){
        return egyenleg;
    }
  
    void toString(){
        std::cout << getEgyenleg() << std::endl;
    }
};


int main()
{

    return 0;
}
