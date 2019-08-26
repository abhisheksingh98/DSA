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
  for(int i=0;i<R;i++){
    cout<<a[i][j];<<" ";
  }
  }
  }
    
    
    void spiralPrint(int a[][10], int R, int C){
  int startRow =0, endRow = R-1, startCol= 0, endCol = C-1;

  while(startRow<=endRow&& startCol<=endCol){
    //Print startrow first
    for(int j=startCol;j<=endCol;j++){
      cout<<a[startRow][j]<<" ";
    }
    startRow++;

    for(int i=startRow;i<=endRow;i++){
      cout<<a[i][endCol]<<" ";
    }
    endCol--;
//Print endRow - make sure it is printed if endrow>startrow
  if(endRow>startRow) {

  for(int j=endCol;j>=startCol;j--){
    cout<<a[endRow][j]<<" ";
  }
  endRow--;
  }
  //Print startcol
  if(startCol<endCol){
    
  for(int i = endRow;i>=startRow;i--){
    cout<<a[i][startCol]<<" ";
  }
  startCol++;
  }

}
}

    
    int main(){
    int a[][10], R,C;
      cin>>R>>C;
      wavePrint(a,R,C);
      spiralPrint(a,R,C);
    }
