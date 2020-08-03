#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	unsigned int res;
	res=(n*(n+1)*(n-1)*(3*n+2))/12;
	cout<<res<<endl;
}