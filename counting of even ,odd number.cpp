#include <iostream>
using namespace std;
int main(){
	int n;
	int counteven=0;
	int countodd=0;
	for(int i=1; i<=10; i++){
		cout<<"Enter a  number n :";
		cin>>n;
		if(n%2==0)
		counteven++;
		else
		countodd++;
	}
	cout<<"There are "<<counteven<<" even numbers"<<endl;
	cout<<"There are "<<countodd<<" odd number ";
      return 0;	
}
