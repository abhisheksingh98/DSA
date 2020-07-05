//Question
// Given a positive integer B denoting the base of a right angled isosceles triangle. Find the maximum number of squares of size 2×2 units that can fit in it.

// Input:
// First line of input contains an integer T denoting number of test cases. For each test case, there exists one line containing integer B ie-base of right angled isosceles triangle.

// Output:
// For each test case, print the maximum number of squares that can be fit into the triangle.

#include<iostream>
using namespace std;

//length of base, we can construct length / 2 squares. Since each square is of 2 units, same would be the case of height, there is no need to calculate that again.

// So, for each level of given length we can construct “(length-2)/2” squares. This gives us a base of “(length-2)”

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