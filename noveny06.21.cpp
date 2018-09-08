/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Noveny{
    int meret;
   public : 
   
    Noveny(int m){
        meret=m;
    }
    int getMeret(){
        return meret;
    }
    void setMeret(int ujmeret){
        meret=ujmeret;
    }
    void toString(){
        std::cout << getMeret() << std::endl;
    }
};

class Zoldseg : public Noveny{
    int csipfoka;
    
  public:
  
    Zoldseg(int m,int cs): Noveny(m){
        csipfoka=cs;
    }
    
    int getCsipfoka(){
        return csipfoka;
    }
    void setCsipfoka(int ujcsipfoka){
        csipfoka=ujcsipfoka;
    }
    void toString(){
        std::cout << getCsipfoka() << std::endl;
    }
};

class Gyumolcs : public Noveny{
    int edfoka;
    public:
    
    Gyumolcs(int m, int ed): Noveny(m){
        edfoka=ed;
    }
    
    int getEdfoka(){
        return edfoka;
    }
    void setEdfoka(int ujedfoka){
        edfoka=ujedfoka;
    }
    void toString(){
        std::cout << getEdfoka() << std::endl;
    }
};


class Paprika :public Zoldseg{
    string szin;
    
    public:
    
    Paprika(int m, int cs,string sz): Zoldseg(m,cs){
        szin=sz;
    }
    
    string getSzin(){
        return szin;
    }
    void setSzin(string ujszin){
        szin=ujszin;
    }
    void toString(){
        std::cout << getSzin() << std::endl;
    }
};

class Hagyma : public Zoldseg{
    int reteg;
    
    public:
    
    Hagyma(int m, int cs, int r) : Zoldseg(m, cs){
        reteg=r;
    }
    
    int getReteg(){
        return reteg;
    }
    void setreteg(int ujreteg){
        reteg=ujreteg;
    }
    void toString(){
        std::cout << getReteg() << std::endl;
    }
};

class Meggy : public Gyumolcs{
    bool magozott;
    
    public:
    
    Meggy(int m, int ed, bool mag): Gyumolcs(m, ed){
        magozott=mag;
    
    }
    
    int getMagozott(){
        return magozott;
    }
    void setMagozott(int ujmagozott){
        magozott=ujmagozott;
    }
    void toString(){
        std::cout << getMagozott() << std::endl;
    }
};

class Korte :public Gyumolcs{
    bool erette;
    
    public:
    
    Korte(int m, int ed, bool er) : Gyumolcs(m, ed){
        erette=er;
    
    }
    
    int getErette(){
        return erette;
    }
    void setErette(int ujerette){
        erette=ujerette;
    }
    void toString(){
        std::cout << getErette() << std::endl;
    }
};

int main()
{
   Noveny m(2);
   m.toString();
   Zoldseg cs(3,5);
   cs.toString();
   Paprika sz(5,2,"piros");
   sz.toString();
   Hagyma r(20,3,6);
   r.toString();
   Meggy mag(2,5,7);
   mag.toString();
   Korte er(1,3,4);
   er.toString();

    return 0;
}
