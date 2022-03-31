#include <iostream>
using namespace std;
int partition(int *arr,int start, int end){
    int pivot = arr[start];
    int count  = 0;
    for(int i = start+1; i <= end; i++){
        if(arr[i] < pivot) count++;
    }
    int pid = start+count;
    swap(arr[start],arr[pid]);
    int i = start;
    int j = end;
    while(i < pid && j > pid){
        if(arr[i] < pivot) i++;
        if(arr[j] > pivot) j++;
        else swap(arr[i],arr[j]);

    }
    return pid;
}
void quickSort(int *arr, int start,int end){
    if(start>=end) return;
    int pi = partition(arr,start,end);
    quickSort(arr,start,pi-1);
    quickSort(arr,pi+1,end);
}
int main(){
    int arr[7] = {7,6,5,3,4,2,1};
    quickSort(arr,0,6);
    for(int i = 0; i < 7; i++) cout << arr[i] << " ";
}