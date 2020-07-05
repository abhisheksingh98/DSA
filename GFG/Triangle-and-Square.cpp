//Question
// Given a positive integer B denoting the base of a right angled isosceles triangle. Find the maximum number of squares of size 2×2 units that can fit in it.

// Input:
// First line of input contains an integer T denoting number of test cases. For each test case, there exists one line containing integer B ie-base of right angled isosceles triangle.

// Output:
// For each test case, print the maximum number of squares that can be fit into the triangle.

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