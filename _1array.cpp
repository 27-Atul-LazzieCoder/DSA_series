// insert array values
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>> size;
    int arr[100];
    // to take input from user
    for(int i=0; i<size ; i++){
        cin>> arr[i];
    }
    // to print the user input
    for(int i=0; i<size; i++ ){
        cout<<"The Value at index "<<i<<" is : "<<arr[i]<<endl;
    }

}
