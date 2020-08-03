#include <iostream>
#include <sstream>
using namespace std;
bool isPallin(unsigned int num){
	stringstream ss;
	ss<<num;
	string s;
	ss>>s;
	for(int i=0;i<(s.length())/2;i++){
		if(s[i]!=s[s.length()-i-1]) return false;
	}
	return true;
}
int main(){
	
	int n1=999;
	while(true){
		int n2=999;
		while(n2>900){
			if(isPallin(n1*n2)){
				cout<<n1*n2//<<endl<<n1<<endl<<n2;
				return 0;
			}
			n2-=2;
		}
		n1-=2;
	}
}