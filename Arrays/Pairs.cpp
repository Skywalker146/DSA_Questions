#include<iostream>

using namespace std;

void pairs(int arr[], int n){
    int tp=0;
    for(int i=0; i<n; i++){
        int curr=arr[i];
        for(int j=i+1; j<n; j++){
            cout<<"("<<curr<<" , "<<arr[j]<<")";
            cout<<endl;
            tp++;
            cout<<tp<<endl;
        }
    }
}

int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    pairs(arr,n);
    return 0;
}

