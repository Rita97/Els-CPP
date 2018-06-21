/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Evoeszkoz{
    int meret;
    string anyag;
    
    public :
     Evoeszkoz(){}
    Evoeszkoz(int m, string a ){
      meret=m;
      anyag=a;
    }
    int getMeret(){
        return meret;
    }
    string getAnyag(){
        return anyag;
    }
    void setMeret(int ujmeret){
        meret=ujmeret;
    }
    void setAnyag(string ujanyag){
        anyag=ujanyag;
        
    }
    void toString(){
        std::cout << getMeret() << std::endl;
        std::cout << getAnyag() << std::endl;
    }
};

class Kanal : public Evoeszkoz{
    int melyseg;
    
    public :
    Kanal(int m, string a, int mely) : Evoeszkoz(m,a){
        melyseg=mely;
        
    }
    int getMelyseg(){
        return melyseg;
    }
  
    void setMelyseg(int ujmelyseg){
        melyseg=ujmelyseg;
    }
   
    void toString(){
        std::cout << getMeret() << std::endl;
        std::cout << getAnyag() << std::endl;
        std::cout << getMelyseg() << std::endl;
      
    }
};

class Villa : public Evoeszkoz{
    int hegyesseg;
    
    public :
    Villa(int m, string a, int h) : Evoeszkoz(m,a){
        hegyesseg=h;
        
    }
    int getHegyesseg(){
        return hegyesseg;
    }
  
    void setHegyesseg(int ujhegyesseg){
        hegyesseg=ujhegyesseg;
    }
   
    void toString(){
         std::cout << getMeret() << std::endl;
        std::cout << getAnyag() << std::endl;
      std::cout << getHegyesseg() << std::endl; 
    }
};

class Kes : public Evoeszkoz{
    int elesseg;
    
    public :
    Kes(int m, string a, int e) : Evoeszkoz(m,a){
        elesseg=e;
        
    }
    int getElesseg(){
        return elesseg;
    }
  
    void setElesseg(int ujelesseg){
        elesseg=ujelesseg;
    }
   
    void toString(){
        std::cout << getMeret() << std::endl;
        std::cout << getAnyag() << std::endl;
      std::cout << getElesseg() << std::endl; 
    }
};

 class Fiok{
     int darab;
     Evoeszkoz evoeszkoz;
     
     public :
     
     Fiok(int d, int m){
         darab=d;
        evoeszkoz.setMeret(m);
     }
    
 };
 
int main()
{
   Evoeszkoz m(2,"ezust");
   m.toString();
 
 Kanal mely(3,"vas", 5);
 m.toString();
   
 mely.toString();
 Villa h(9,"ezust",6);
 h.toString();
 Kes e(2,"vas",1);
 e.toString();
 
 Evoeszkoz g(5,"vas");
 Fiok(1,2);

    return 0;
}
