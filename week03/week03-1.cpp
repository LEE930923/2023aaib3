///考試題目:除惡務盡,但是無法執行
///因為 range-based for 迴圈必須在C++11(2011之後)才能用
///如果使用C++98(1998年版C++)會無法正確編譯,執行會出錯,迴圈出不來
///CodeBlocks 17.12裡Setting-Compiler勾選第2個
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(char c:s){
		if(c!='2') cout <<c;
	}
	cout<<"\n";
}
