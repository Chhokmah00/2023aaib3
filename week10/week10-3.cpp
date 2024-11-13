#include <iostream>
#include <string>
using namespace std;
class cat{
public:
    string name;
    void print(){
        cout<<"I am a cat,My name is "<<name<<".\n";
    }
};

int main()
{
    cat cat1,cat2;
    cat1.name="張三";
    cat1.print();
    cat2.name="李四";
    cat2.print();
}
