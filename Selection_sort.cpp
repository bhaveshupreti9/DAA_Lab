#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>&arr,int n){
    if(n <= 1)return;
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])min = j;
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Unsorted array:\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
    selection_sort(arr,n);
    cout<<"\nSorted array:\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
    return 0;
}
