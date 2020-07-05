#include<iostream>
using namespace std;

int base(int b){
    int ans = 0;
    while(b>2){
        ans+=(b-2)/2;
        b-=2;
    }
    return ans;
}

int main()
 {
    int t,b;
    cin>>t;
    while(t--){
        cin>>b;
        cout<<base(b)<<endl;
    }
	return 0;
}