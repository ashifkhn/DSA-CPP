#include <iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    int temp;
    for (int i = 0; i < size; i = i + 2)
    {
        if(i+1<size){
        // swap(arr[i],arr[i+1]);
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        }
    }
}
void printArray(int arr[],int size){
    for (int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7] = {1, 2, 3, 4, 5,6,9};
    swapAlternate(arr,7);
    printArray(arr,7);
}
