///�n�Ʋ�string��iostream cin cout
#include <iostream>
#include <string>
using namespace std; ///�ҥH���ᤣ�μgstd::string or std::cin std::cout
int main()
{
    string s;
    cout<<"�п�J�@�ӫܪ����r��A�������n���Ů�: ";
    cin>>s;
    cout<<"�r��"<<s<<"�r�ꪺ����"<<s.length()<<"\n";
    for(int i=0;i<s.length();i++){
        cout<<i<<":"<<s[i]<<endl; ///endl�p�gL�N�O"\n"
    }
}
