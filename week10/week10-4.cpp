#include <iostream>
#include <string>
using namespace std;

class cat{
public:
    string name;
    cat(string _name){ ///物件建構子 constructor (左邊沒有void)
        name= _name;
    } ///沒有return值
    void print(){
        cout<<"My name is "<<name<<".\n";
    }
};

int main()
{
    cat cat1("張三"),cat2("李四");
    cat1.print();
    cat2.print();
}
