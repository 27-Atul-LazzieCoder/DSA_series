#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]> max){
            max =arr[i];
        }
    }
    return max;
}

//second method...
int getMin(int arr[], int size){
    
    int minNum = INT_MAX;
    for(int i=0; i<size; i++){
        minNum = min(minNum,arr[i]);
    }
    return minNum;
}

int main(){
    int size;
    cout<< "enter the size of array";
    cin>>size;
    int arr[100];
    cout<<"the maximum number in an array: "<< getMax(arr,size);
    cout<<"the minimum number in an array: "<< getMin(arr,size);
    return 0;
}