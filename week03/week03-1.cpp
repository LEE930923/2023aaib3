///�Ҹ��D��:���c�Ⱥ�,���O�L�k����
///�]�� range-based for �j�饲���bC++11(2011����)�~���
///�p�G�ϥ�C++98(1998�~��C++)�|�L�k���T�sĶ,����|�X��,�j��X����
///CodeBlocks 17.12��Setting-Compiler�Ŀ��2��
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
