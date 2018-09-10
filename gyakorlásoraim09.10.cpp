#include <iostream>
using namespace std;
double sum(int szam){
    int eredmeny=0;
    for(int i=1;i<szam+1;i++){
        eredmeny=eredmeny+i;
    }
    return eredmeny;
}
double sumatlag(int vegso){
    return sum(vegso)/vegso;
 
}

double sum(int kezdo, int vegso){
    int eredmeny=0;
    for(int i=kezdo;i<vegso+1;i++){
        eredmeny=eredmeny+i;
    }
    return eredmeny;
}   
  double sumatlag(int kezdo, int vegso) {
      return sum(kezdo,vegso)/((vegso-kezdo)+1);
  } 
  void piramis(int novekvo ){


    for(int i=1; i<novekvo+1;i++){
        
        for (int j=1; j<i+1; j++){
        
            cout<<j;
        }
        cout <<   endl;
    }
    
}

int main()
{
   std::cout << sumatlag(6) << std::endl;
   std::cout << sumatlag(7,8) << std::endl;
piramis(3);
    return 0;
}
