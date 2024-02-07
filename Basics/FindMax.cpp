#include <iostream>
using namespace std;


int findMax(int arr[],int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {99, 2, 1, 992, 6};
    int max = findMax(arr, 5);
    cout << max<<endl;
}