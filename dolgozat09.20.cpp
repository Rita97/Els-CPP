#include <iostream>
using namespace std;

int hatvany(int szam, int kitevo){
int eredmeny=1;
for(int i=0;i<kitevo;i++){
    eredmeny=eredmeny*szam;
}
return eredmeny;
}
void fpiramis(int meret){
    for(int i=meret; i>0;i--){
        for (int j=i; j>0; j--){
            cout<<j;
        }
        std::cout << endl;
    }
}
int fibonacci(int n)
{   

    if (n == 0)
    {
        return 0;
    }   
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
void fibonacciKiir(int meret){
    for(int i=1;i<meret+1;i++){
        std::cout << fibonacci(i) << "\t";
    }
}
int main()
{
std::cout<< hatvany (3,5) <<std::endl;
fpiramis(7);
std::cout << fibonacci(6) << std::endl;
 fibonacciKiir(5);
    return 0;
}
