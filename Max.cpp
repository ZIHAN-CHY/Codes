#include<bits/stdc++.h>
using namespace std;

int maxii(int arr[],int n){
    int maxi=arr[0];
    for(int i=0 ; i<n; i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}


int main(){
    int arr[100]={2,3,4,5,6,7,1};
    cout << maxii(arr,7) << endl;;
}