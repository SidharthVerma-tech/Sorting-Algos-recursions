#include <iostream>
using namespace std;
void selectionSort(int *arr, int start, int size){
    if(start>=size) return;
    int minIndex = start;
    for(int i = start+1; i < size; i++)
    {
        if(arr[i] < arr[minIndex]) minIndex = i;
    }
    swap(arr[minIndex],arr[start]);
    selectionSort(arr,start+1,size);

}
int main()
{
    int arr[6] = {6,5,4,3,2,1};
    selectionSort(arr,0,6);
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
}