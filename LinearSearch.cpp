#include <iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linearSearch(int arr[], int  size , int k){
    print(arr,size);
    //base case
    if (size == 0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }

    else{
        bool remaningPart = linearSearch(arr+1,size-1,k);
        return remaningPart;
    }
}

int main(){
    int arr[5]={8,59,77,66,85};
    int size=5;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    bool ans = linearSearch(arr, size, key);

    if (ans){
        cout <<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }


}