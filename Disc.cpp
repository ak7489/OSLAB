#include<iostream>
#include <cstdlib>
using namespace std;
int b[5] ;
	int o=0;
int main(){

	int head = 50;
	int a[]={44,55,66,77,88};
	
	for(int i=0;i<5;i++){
		 b[i] = abs(head-a[i]);
		 head = a[i];
	}
	for(int x=0;x<=5;x++){
		cout<<b[x]<<" ";
	}
	for(int y=0;y<5;y++){
		o = o+b[y] ;
		
	}
	cout<< o/5;
	return 0;
}
