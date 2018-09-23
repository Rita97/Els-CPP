
#include<iostream>

using namespace std;

int main()
{

/*felítam mind a két ciklust.A for ciklussal kezdtem mert az nekem könnyebb volt.A for ciklusban észre vehető h minden adat 
a kiíratáson kívül a paraméter listában van, hogy mettől induljon h meddig menjen illetve ,hogy mindig növekedjen.ezt nem nekünk
kell megadni magától tudni fogja.**/

for(int i=0;i<10;i++){
std::cout << i ;
}
std::cout <<endl;

/*while ciklusban már más a helyzet az adatok egy része a paraméter listán kivül van, mint a kiindulási érték. azt is észre
vettem ,hogy ha nem írjuk bele az "i++-t" végtelenszer kezd el lefutni a ciklus. a" while" ciklus akkor fut le ha igaz az adott
álításom.*/

int i=0;
while (i<10)
{
std::cout << i;
i++;
}
    return 0;
}
