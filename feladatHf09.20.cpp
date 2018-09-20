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
