#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> table;
    table[9977431]=9;
    table[4433997]=4;
    cout<<table[9977431]<<"\n";
    cout<<table[4433997]<<"\n";
}
