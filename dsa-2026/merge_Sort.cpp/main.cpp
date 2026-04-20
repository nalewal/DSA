#include<bits/stdc++.h>
using namespace std;
void merge(vector <int> &arr, int str, int end ){
    int mid = str + ( end - str )/2;
    int len1 = mid - str +1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // copy values
    int mainArrayIndex = str;
    for ( int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
        
    }
  mainArrayIndex = mid+1;
    for( int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }
    //merge two sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex = str;
    while (index1 < len1 && index2 < len2){
        if( first[index1] < second[index2] ){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while ( index1 < len1 ){
        arr[mainArrayIndex++] = first[index1++];
    }
    while ( index2 < len2 ){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}
void merge_sort(vector <int> &arr, int str, int end){
    //base Case
    if( str >= end ) {
        return;
    }
    int mid = str + ( end - str )/2;
    // left part sort
    merge_sort(arr,str,mid);
    //rigth part sort
    merge_sort(arr,mid+1,end);
    // merge the arrays
    merge(arr,str,end);
}
void mergeSort(vector < int > & arr, int n) {
    int str = 0;
    int end = n-1;
    merge_sort(arr,str,end);
    
    // Write your code here.
}
int main(){
    vector<int> arr;
    
    int n=10;
    for ( int i=0; i<n; i++){
        cin >> arr[i];
    }
    mergeSort(arr,n);
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}