/*
Print the following pattern
*
**
***
****
*****
*/


#include<iostream>
using namespace std;

int main(){
  int i,j,n;
  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
      cout<<"*";
    }
      cout<<endl;
  }
return 0;
}



________________________________________________________________________________
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;

int main(){
  int i,j,n,k=1;
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<k<<" ";
      k++;
    }
    cout<<endl;
  }
}
