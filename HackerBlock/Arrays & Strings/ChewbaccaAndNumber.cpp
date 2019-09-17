#include<bits/stdc++.h>
using namespace std;

int main(){


	int i,j,k,len,n,sum,count;
	string str;

	cin >> str;

	i=0;

	if(str[i]=='9'){
		i++;
	}

	for(;i<str.length();i++){
		int digit = str[i]-'0';
		if(digit>=5){
			digit=9-digit;
			str[i]=digit+'0';
		}
	}
	cout << str << endl;

	return 0;
}