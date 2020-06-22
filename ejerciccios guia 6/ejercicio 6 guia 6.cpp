#include <iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
void cuenta(int Vec[],int t,int n){
	int x=0;
	int l;
	for (int i=0;i<t;i++){
		if (n==Vec[i]){
			x++;
			l=Vec[i];
		}
	}
	cout<<"el numero"<<setw(3)<<l<<"se repite"<<setw(2)<<x<<"veces"<<endl;
}
void elimina(int Vec[],int t, int n){
	for(int i=0;i<t;i++){
		if(n==Vec[i]){
			Vec[i]=0;
		}
	}
}

int main()
{
	int Vec[10];
	srand(time(0));
	int x,n;
	for(int i=0;i<10;i++){
		Vec[i]=1 +rand() % 15;
		
	}
	for (int i=0; i<10;i++){
		cout<<Vec[i]<<"";
		
	} cout<<endl;
	
	for(int i=0; i<10;i++){
		n=Vec[1];
		if(n!=0){
			cuenta(Vec,10,n);
			elimina(Vec,10,n);
		}
	}
	return 0;
}

