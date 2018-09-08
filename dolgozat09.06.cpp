#include <stdio.h>
#include <iostream>
using namespace std;

class Noveny {
    int eletkor;
    int ontozesisurusseg;
    
    public:
Noveny(int e, int o){
    e=eletkor;
    o=ontozesisurusseg;
}
int getEletkor(){
    return eletkor;
}

}
int getOntozesisurusseg(){
    return ontozesisurusseg;
} 
void setEletkor(int ujeletkor){
    eletkor=ujeletkor;
}
void setOntozesisurusseg(int ujontozesisurusseg){
   ontozesisurusseg =ujontozesisurusseg;
}
void toString(){
    std::cout << getEletkor() << std::endl;
}
void toString(){
    std::cout << getOntozesisurusseg() << std::endl;
}
};



int main()
{
   int a=3;
   float b;
   
   for (int i=0; i<100;i++){
       std::cout << i ;
   }

    return 0;
}
