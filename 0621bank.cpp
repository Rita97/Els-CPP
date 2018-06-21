/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
    int id;
    
    public:
    Person(){}
    Person(string _name, int _age, int _id){
        name=_name;
        age=_age;
        id=_id;
        
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getId(){
        return id;
    }
    void setName(string newname){
        name=newname;
    }
    void setAge(int newage){
        age=newage;
    }
    void setId(int newid){
        id=newid;
    }
    void toString(){
        std::cout << getName() << std::endl;
        std::cout << getAge() << std::endl;
        std::cout << getId() << std::endl;
    }
};

class Accunt{
    Person owner;
    int amount;
    
    public:
    
    Accunt(string _name, int _age, int _id, int _amount){
        owner.setName(_name);
        owner.setAge(_age);
        owner.setId(_id);
        amount=_amount;
    }
    void in(int betett){
        amount=betett+amount;
    }
    bool out(int kivett){
        amount=amount-kivett;
        return true;
    }
    int getAmount(){
        return amount;
    }
    void toString(){
        std::cout << owner.getName() << std::endl;
        std::cout << owner.getAge() << std::endl;
        std::cout << owner.getId() << std::endl;
        std::cout << getAmount() << std::endl;
    }
};



int main()
{
    Accunt a("Rita",21,12365478,5000);
    a.toString();
    return 0;
}
