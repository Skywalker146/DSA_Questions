#include<iostream>

using namespace std;

    void countt(int arr[], int size){
        int numZero=0;
        int numOne=0;
        for(int i=0; i<size; i++){
            if(arr[i]==0){
                numZero++;
            }
            if(arr[i]==1){
                numOne++;
            }
        }

        cout<<"total number of ones:="<<numOne<<endl;
        cout<<"total number of zeroes:="<<numZero<<endl;
    }
int main()
{
    int arr[15]={1,2,1,1,1,0,0,0,0,1,1,0,1,0,1};
    int size=15;
    countt(arr,size);
    return 0;
}
