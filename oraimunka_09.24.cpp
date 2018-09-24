#include <iostream>
#define TOMBMERET 20
using namespace std;

int tomb[TOMBMERET];
void tombkiir(){
for(int index=0;index<TOMBMERET;index++){
    cout<<tomb[index]<< endl;
}
}

void teddbe(int hova, int mit){
    tomb[hova]=mit;

}

int veddki(int honnan){
    return tomb[honnan];




}



int main()
{

tombkiir();
for(int index=0;index<TOMBMERET;index++){
   teddbe(index,index);
}
tombkiir();
cout<<veddki(4)<<endl;

    return 0;
}
