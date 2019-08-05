#include<iostream>
using namespace std;
int factorial(int num){
  int ans=1;
  for(int i=1;i<=num;i++){
    ans = ans*i;
  }
  return ans;
}
int main(){
  int n,r;
  cin>>n>>r;
  int nfact = factorial(n);
  int rfact = factorial(r);
  int nrfact = factorial(n-r);
  int ans = nfact/(rfact*nrfact);
  cout<<ans;
}
