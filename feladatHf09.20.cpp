#include <iostream>
using namespace std;
int paros(int i){
    for(i=0;i<20+1;i++){
        if(i%2==0){
            std::cout << i << std::endl;
        }
    }
}
void S(int szam){
    for(int i=1; i<(szam+1);i++){
        
        std::cout << "S" ;
    }
}

int main(){
    std::cout << "A program sikeresen lefutott" << std::endl;
paros(2);
S(6);


    return 0;
}
#include <iostream>
using namespace std;

void Szam(int szam){
    for(int i=1;i<szam+1; i++){
        for(int j=1;j<szam+1;j++ ){
          std::cout << "L" ;
        }
        std::cout << endl; 
    }
  
}
void Szamt(int szam){
    for(int i=1;i<szam+1; i++){
        for(int j=i;j<szam;j++ ){
          std::cout << "E" ;
        }
        std::cout << endl; 
    }
  
}

int main()
{
 
Szam(3);
Szamt(5);
    return 0;
}
