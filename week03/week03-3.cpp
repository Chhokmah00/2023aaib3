///要複習string及iostream cin cout
#include <iostream>
#include <string>
using namespace std; ///所以之後不用寫std::string or std::cin std::cout
int main()
{
    string s;
    cout<<"請輸入一個很長的字串，中間不要有空格: ";
    cin>>s;
    cout<<"字串"<<s<<"字串的長度"<<s.length()<<"\n";
    for(int i=0;i<s.length();i++){
        cout<<i<<":"<<s[i]<<endl; ///endl小寫L就是"\n"
    }
}
