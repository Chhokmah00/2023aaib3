#include <iostream>
#include <string>
using namespace std;

class cat{
public:
    string name;
    cat(string _name){ ///����غc�l constructor (����S��void)
        name= _name;
    } ///�S��return��
    void print(){
        cout<<"My name is "<<name<<".\n";
    }
};

int main()
{
    cat cat1("�i�T"),cat2("���|");
    cat1.print();
    cat2.print();
}
