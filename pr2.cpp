#include <iostream>
#include <vector>
using namespace std;
int main(){
	unsigned int f[100000];
	f[0]=0;
	f[1]=1;
	unsigned int i=1,sum=0;
	while(f[i]<=4000000){
		++i;
		f[i]=f[i-1]+f[i-2];
		if(f[i]%2==0){
			//cout<<f[i]<<endl;
			sum+=f[i];
		}
	}
	cout<<sum<<endl;
}