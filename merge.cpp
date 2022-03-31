#include <iostream>
using namespace std;
void merge(int *arr, int start, int end){
    int mid = (start+end)/2;
    int len1 = mid-start+1;
    int len2 = end-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = start;
    int i = 0;
    int j = 0;
    while(i < len1){
        first[i++] = arr[k++];
    }
    while(j < len2){
        second[j++] = arr[k++];
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
void mergeSort(int *arr, int start, int end){
    if(start >= end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    int arr[10] = {10,9,8,3,4,5,6,7,2,1};
    mergeSort(arr,0,9);
    for(int i = 0; i < 10; i++) cout << arr[i] << " ";
}