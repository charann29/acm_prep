
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int num,x;
    cin>>num>>x;
    int k =num/x;
    
    vector<int>v(num);
    
    vector<int>xa(num);
    for(int j =0;j<num;j++){
        xa[j]=j+1;
    }
    if(x!=num){
        v[num-1]=1;
        v[0]=x;
        for(int i =1;i<num-1;i++){
        if(i!=(x-1) )v[i]=i+1;
        v[x-1]=xa[num-1];
	    }
    }
    else{
        v[num-1]=1;
        v[0]=x;
        for(int i =1;i<num-1;i++)v[i]=i+1;

    }
    for(int i=0;i<num;i++)cout<<v[i]<<" ";
    cout<<endl;}
	return 0;
}