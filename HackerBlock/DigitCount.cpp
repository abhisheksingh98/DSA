#include<iostream>
using namespace std; 
 
int countDigits(int n, int a) 
{    
    int c = 0; 
    while (n > 0) { 

        if (n % 10 == a) 
            c++; 
        n = n / 10; 
    } 
         return c; 
} 

int main() 
{     
    int N,D;  
cin>>N>>D;
      
    cout<<countDigits(N,D); 
    return 0; 
}
