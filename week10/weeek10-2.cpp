#include <iostream>
using namespace std;
class cat{
public:
    void print(){
        cout<<"I am a cat, meow meow\n";
    }
};

class dog{
public:
    void print(){
        cout<<"I am a dog, woof woof\n";
    }
};

int main()
{
    cat cat1,cat2;
    dog dog1,dog2;
    cat1.print();
    cat2.print();
    dog1.print();
    dog2.print();
}
