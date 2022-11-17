#include<bits/stdc++.h>
using namespace std;
// we are using backtrack i.e. when we move to one place and further move to other place and 
// condition get false thn we move back on trtack to initial place
bool IsSafe(int** arr,int x,int y,int n){
// ** means dynamic memory ,x and y reprent position of each block/element ,n=size of 2d array
      if(x<n && y<n && arr[x][y]==1){
          return true;   // base condition
      }    
      return false; 
 }  // now we will make sol array
 bool ratInMaze(int** arr,int x,int y,int n,int** solarr){
     if(x==n-1 && y==n-1){
         solarr[x][y]=1; //base condition
         return true;
     }
     if(IsSafe(arr,x,y,n)){
         solarr[x][y]=1; // we will make all 1's at possible way
     // now recursively we will check whether there is possible to move right or left
     if(ratInMaze(arr,x+1,y,n,solarr)){
         return true;
     }
     if(ratInMaze(arr,x,y+1,n,solarr)){
         return true;
     }
//agar dono jgh me se kisi p vbi 1 ni aaya to hm backtrck chlejenge and will tak that pos=false
       solarr[x][y]=0; // backtrack
       return false; 
     }
     return false; //if no path we get
 }





int main(){

int n;
cin>>n;
int** arr=new int*[n]; // 2d array
for(int i=0;i<n;i++){
    arr[i]=new int[n]; //to allocate memory
}
//taking input from user
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         cin>>arr[i][j];
     }
    }   
    int *solarr=new int[n];
    for(int i=0;i<n;i++){
        solarr[i]=new int[n]; // to allocate memory
           for(int j=0;j<n;j++){
               solarr[i][j]=0; //initially take all sol '0' to avoid garbage value 
           }
    }
 // now make function call and print solarray
  if(ratInMaze(arr,0,0,n,solarr)){
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<solarr[i][j]<<" ";
          }cout<<endl;
      }
  }          
    
return 0;
}