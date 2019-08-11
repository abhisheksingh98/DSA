#include<iostream>
using namespace std;
int main(){
  string str;
  cout<<"enter the string : ";
  // We'll use getline to also include strings with whitespaces
  getline(cin,str);
  for(int i = str.length()-1;i>=0;i--){
    cout<<str[i];
  }
  return 0;
}
