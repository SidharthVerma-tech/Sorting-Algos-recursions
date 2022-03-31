#include <iostream>
using namespace std;
int partition(int *arr,int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1; i <= end;i++){
        if(arr[i]<pivot) count++;
    }
    int pivotIndex = start+count;
    swap(arr[pivotIndex],arr[start]);
    int i = start;
    int j = end;
    while(i < pivotIndex && j  > pivotIndex){
        if(arr[i] < pivot) i++;
        if(arr[j]> pivot) j--;
        else swap(arr[i],arr[j]);
    }
    return pivotIndex;
}
void quickSort(int *arr,int start, int end){
    if(start>=end) return;
    int partitionIndex = partition(arr,start,end);
    quickSort(arr,start,partitionIndex-1);
    quickSort(arr,partitionIndex+1,end);
}
int main(){
    int arr[15] = {5,2,10,3,4,1,7,6,9,8,21,100,32,43,187};
    quickSort(arr,0,14);
    for(int i = 0; i < 15; i++) cout << arr[i] << " ";
}


