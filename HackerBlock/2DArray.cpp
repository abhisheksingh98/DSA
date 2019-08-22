// Wave Print
// Spiral Print 
// Staircase Search

#include<iostream>
using namespace std;

void wavePrint(int a[][10],int R, int C){

  //Iterate over Columns
  for(int j=0;j<C;j++){
  
  //check for odd and even columns
  if(j&1){
  //odd columns
  for(int i=R-1;i>=0;i--){
  cout<<a[i][j]<< " ";
  }
  else {
  //even columns
  for(int i=0;
