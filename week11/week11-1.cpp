///使用Hash Map, Hash Set，不能直接在CodeBlocks使用，因為是C++ 2021
///seting-compiler 加入C++11就行
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> table;
    table[9977341] = 9;
    table[4433997] = 4;
    cout<<table[9977341]<<endl;
    cout<<table[4433997]<<endl;
}
