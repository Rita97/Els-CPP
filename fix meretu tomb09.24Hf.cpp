#include <iostream>
#define TOMBMERET 10
using namespace std;

int tomb[TOMBMERET];

void paros(int i){
    for(i=0;i<TOMBMERET;i++){
   /*     if(i%2==0){
            std::cout << i ;
        }
    }
    cout<< endl;
}
void tab(int j){
for(int j=0;j<TOMBMERET;j++){
    cout<< j ;
    std::cout << "\t";
}
}
int main()
{

paros(5);
tab(8);

    return 0;
}

/*FUTNI FUT CSAK NEM TUDOM HOGY EZ A JÓ MEGOLDÁS-E./*

#include <iostream>
#define TOMBMERET 10
using namespace std;

char tomb[TOMBMERET];
void kiir(){
for(int i=0;i<TOMBMERET;i++){
    cout<<tomb[i]<< endl;
}
}
int main()
{

kiir();


    return 0;
}


