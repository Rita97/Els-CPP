TUDOM, HOGY NEM EZ A MEGOLDÁS DE NEM SIKERÜLT RÁJÖNNÖM, HOGY HOGYAN KELL MEGOLDANI A FELADATOKAT .
KICSIT PROBÁLKOZTAM AZÉRT.


#include <iostream>
using namespace std;

int sum(int szam){
    int atlag=0;
    for(int i=1;i<3;i++){
        atlag=atlag+szam;
    }
    return atlag;
}

void piramis(int novekvo ){


    for(int i=1; i<novekvo+1;i++){
        
        for (int j=i; j>0; j--){
        
            cout<<j;
        }
        cout <<   endl;
    }
    
}
int main()
{
std::cout << sum(3) << std::endl;
 piramis(3);
    return 0;
}
