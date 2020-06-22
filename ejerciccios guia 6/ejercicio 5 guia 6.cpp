#include <iostream>
using namespace std;

int main()
{
	int valores[100];
	int num=0;
	
	for(int num=100; num>0;num--){
		
		if(num%2==1){
		
		if( valores[num]%2==0){
		valores[num]=num;
		cout<<valores[num]<<endl;
	}
	}
}
	
	
	
	
	return 0;
}
