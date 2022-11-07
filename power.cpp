#include<iostream>
using namespace std;

int power(int n){

    //Base case
    if (n==0)
         return 1;


    //recursive relation
    int smallerProb =power(n-1);
    int biggerProb = 2*smallerProb;

    return biggerProb; 
}
int main(){

    int n;
    cin >> n ;

    int ans = power(n);

    cout<< ans << endl;
    return 0;
}