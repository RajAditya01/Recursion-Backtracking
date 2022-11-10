#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){

    cout << "call recived for " << str << endl;

    //base case
    if (i>j)
        return;

    //1case solve karo
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str , i , j);
}

int main(){

    string name = "Aditya";
    cout<<endl;

    reverse (name, 0, name.length()-1);
    cout<<endl;

    cout << name << endl;

    return 0;

}