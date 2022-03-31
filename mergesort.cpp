#include <iostream>
using namespace std;
void merge(int *arr,int start, int end){
    int mid = (start+end)/2;
    int len1 = mid-start+1;
    int len2 = end-mid;
    int *first  = new int[len1];
    int *second  = new int[len2];
    int k = start;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }
    int l = mid+1;
    for(int j = 0; j < len2; j++){
        second[j] = arr[l++];
    }
    int a = 0;
    int b = 0;
    int c = start;
    while(a < len1 && b < len2){
        if(first[a]<second[b]) arr[c++] = first[a++];
        else arr[c++] = second[b++];
    }
    while(a<len1) arr[c++] = first[a++];
    while(b<len2) arr[c++] = second[b++];
}
void mergeSort(int *arr,int start, int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    int arr[12] = {12,11,10,9,8,7,6,5,4,3,2,1};
    mergeSort(arr,0,11);
    for(int i = 0; i < 12; i++) cout << arr[i] << " ";
}