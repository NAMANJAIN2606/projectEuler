#include <iostream>
using namespace std;
bool isPrime(long int n){
	if(n==2)
		return true;
	for(long int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int count=0,x;
	long int i=2,num;
	cin>>x;
	while(count<x){
		if(isPrime(i)){
			//cout<<i<<endl;
			num=i;
			count++;
		}
		i++;
	}
	cout<<num<<endl;
}