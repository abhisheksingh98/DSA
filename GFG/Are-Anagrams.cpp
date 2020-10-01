#include<iostream>
using namespace std;

bool areAnagrams(string &s1, string &s2){
    int count[256];
    for(int j=0;j<256;j++){
        count[j]= 0;
        int i;
        
        int n = min(s1.length(),s2.length());
        int m = max(s1.length(),s2.length());
        if(n!=m) return false;
        
        for(i=0;i<n;i++){
            count[s1[i]]++;
            count[s2[i]]--;
        }
        
        for(i=0;i<256;i++){
            if(count[i]) return false;
        }
            return true;
    }
}

int main()
 {
	//code
	int t;
	cin>>t;
	string s1,s2;
	while(t--){
	    cin>>s1>>s2;
	    if(areAnagrams(s1,s2)){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}