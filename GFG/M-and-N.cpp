#include <bits/stdc++.h> 
using namespace std;

int sum(int m,int n){
    int sum = m+n;
    string m1 = to_string(m);
    string n1 = to_string(n);
    string sum1 = to_string(sum);
    if(sum1.size()==n1.size()){
        return n;
    }
    else return sum;
    
}

int main()
 {
	int t, m, n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    cout<<sum(m,n)<<endl;
	}
	return 0;
}

//--------------------------------------------------------------------------
//Another Approach

using namespace std;

int num(int a)
{
    int count=0;
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    return count;
}

int main() {
	int t=0;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m;
	    cin>>n;
	    if(num(n)==num(m+n))
	    {
	        cout<<n<<endl;
	    }
	    else
	    {
	        cout<<m+n<<endl;
	    }
	}
	return 0;
}