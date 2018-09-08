
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
class Epulet
{
  int ablak;
  int terulet;
    public:Epulet (int a, int t)
  {
    ablak = a;
    terulet = t;
  }
  int getAblak ()
  {
    return ablak;
  }
  int getTerulet ()
  {
    return terulet;
  }
  void setAblak(int ujablak)
  {
    ablak=ujablak;
  }
  void setTerulet(int ujterulet)
  {
    terulet = ujterulet;
  }
  void toString ()
  {
    std::cout << getAblak () << std::endl;
    std::cout << getTerulet () << std::endl;
  }
};
class Haz:public Epulet
{
  int szoba;
  int ajtok;

public:
  Haz (int a, int t, int sz, int aj):Epulet (a, t){
      szoba=sz;
      ajtok=aj;
  }
  int getSzoba(){
      return szoba; 
  }
  int getAjtok(){
      return ajtok;
  }
    void setSzoba(int ujszoba){
        szoba=ujszoba;
    }
    void setAjtok(int ujajtok){
        ajtok=ujajtok;
    } 
    void toString(){
        std::cout << getAjtok() << std::endl;
        std::cout << getSzoba() << std::endl;
    }
};
class Garazs:public Epulet
{
 int parkolohely;

public:
  Garazs (int a, int t, int p):Epulet (a, t){
      parkolohely=p;
  }
  int getParkolohely(){
      return parkolohely ;
  }
    void setParkolohely(int ujparkolohely){
        parkolohely=ujparkolohely;
 
 }
    void toString(){
        std::cout << getParkolohely() << std::endl;
    }
};
int main ()
{
  return 0;
}
