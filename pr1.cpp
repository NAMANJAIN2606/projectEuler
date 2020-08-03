#include <iostream>
using namespace std;
int target=999;
unsigned int sumDiv(int n){
	int p=target/n;
	return n*(p*(p+1))/2;
}
int main(){
	cout<<sumDiv(3)+sumDiv(5)-sumDiv(15)<<endl;	
}