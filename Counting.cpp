//Tail Recursion
#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0){
        return ;
    }

    cout << n <<endl;

    //Recursive Relation
    print(n-1);
}

int main(){
    int n;
    cin >> n;

    cout<<endl;
    print (n);

    return 0;
}

/*
# HEAD RECURSION

#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0){
        return ;
    }

    
    //Recursive Relation
    print(n-1);

    cout << n <<endl;

}

int main(){
    int n;
    cin >> n;

    cout<<endl;
    print (n);

    return 0;
}*/