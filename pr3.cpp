#include <iostream>
using namespace std;
int main(){
	long long int n=2,max=0;
	long long int num=600851475143;
	while(num>0){
		if(num%n!=0){
			n++;
		}
		else{
			max=n;
			num/=n;
			if(num==1){
				cout<<max;
				return 0;
			}
		}
	}
	//cout<<n<<endl;
}