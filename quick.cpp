#include <iostream>
using namespace std;
int partition(int *arr,int start, int end){
    int count = 0;
    int pivot = arr[start];
    for(int i = start; i<= end; i++){
        if(arr[i]<pivot) count++;
    }
    int pi = start+count;
    int i = start;
    int j = end;
    swap(arr[start],arr[pi]);
    while(i<pi && j>pi){
        if(arr[i]<pivot) i++;
        if(arr[j]>pivot) j--;
        else swap(arr[i],arr[j]);
    }
    return pi;
}
void quickSort(int *arr,int start,int end){
    if(start >= end) return;
    int party = partition(arr,start,end);
    quickSort(arr,start,party-1);
    quickSort(arr,party+1,end);
}
int main(){
    int arr[8] = {8,12,6,5,28,3,2,1};
    quickSort(arr,0,7);
    for(int i = 0; i < 8; i++) cout << arr[i] << " ";

}