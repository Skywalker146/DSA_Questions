#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int ans= (sizeof(arr)/sizeof(int));
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<ans<<endl;
    
    arr.push_back(6);
    arr.push_back(8);

    //print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" "<<endl;
    }

    vector<int> brr(10,-1);

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}