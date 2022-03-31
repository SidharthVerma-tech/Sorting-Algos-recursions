#include <iostream>
using namespace std;
void bubbleSort(int *arr, int size){
    if(size==0) return;
    for(int i = 1; i < size; i++)
    {
        if(arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
    }
    bubbleSort(arr,size-1);
}
int main(){
    int arr[6] = {6,5,4,3,2,1};
    bubbleSort(arr,6);
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
}