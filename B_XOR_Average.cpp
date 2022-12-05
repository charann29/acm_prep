
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin>>num;
	if(num&1){
	    for(int i=0; i<num; i++)
	    cout<<1<<" ";
	    cout<<endl;
	}
	else{
	    for(int i=0; i<num-2; i++)
	    cout<<2<<" ";
	    cout<<1<<" "<<3<<endl;
	}
	}
	return 0;
}