#include<iostream>
using namespace std;

void printPairs(int arr[], int n){
     int tp=0;
    for(int i=0; i<n; i++){
       
        int start=i;
        for (int j = 0; j < n; j++)
        {
            int end=j;
            for(int k=start; k<=end; k++){
                cout<<arr[k]<<" ";
               
            }
             tp++;
            cout<<endl;
            
        }
        
    }
    
     cout<<tp;
        
}

int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    printPairs(arr,n);
    return 0;
}