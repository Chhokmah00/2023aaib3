#include <iostream>
#include <string>
using namespace std;

struct Node{
    int val;
};///都有分號結尾，C語言結構

class Cat{
public:
    string name;
};

int main()
{
    Cat cat1;
    cat1.name="uwu";
    Node node;
    node.val=1;
}
