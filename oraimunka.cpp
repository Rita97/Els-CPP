/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Ember{
    int kor;
    string nev;
    
    public:
    
    
    Ember(int k, string n){
        kor=k;
        nev=n;
    }
    
    int getKor(){
        return kor;
    }
    string getNev(){
        return nev;
    }
    
    void setKor(int ujkor){
        kor=ujkor;
    }
     void setnev(int ujnev){
        nev=ujnev;
    }
    
    void toString(){
        std::cout << getNev() << std::endl;
        std::cout << getKor() << std::endl;
    }
    
    
};


class Alkalmazot : public  Ember{
    int fizetes;
    
    public:
    
    
    Alkalmazot(int k,string n, int f):Ember(k,n){
        fizetes=f;
    }
      int getFizetes(){
        return fizetes;
      }
      
          void setFizetes(int ujfizetes){
        fizetes=ujfizetes;
    }
    void toString(){
        std::cout << getFizetes() << std::endl;
    }
};

class Tanulo: public  Ember{
    int diakszam;
    
    public:
    
    
    Tanulo(int k,string n, int d):Ember(k,n){
        diakszam=d;
    }
      int getDiakszam(){
        return diakszam;
      }
          void setDiakszam(int ujdiakszam){
        diakszam=ujdiakszam;
    }
    void toString(){
        std::cout << getDiakszam() << std::endl;
    }
};








int main()
{
   

    return 0;
}
