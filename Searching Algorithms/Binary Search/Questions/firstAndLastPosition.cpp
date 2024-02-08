#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int answer = -1;

    while (start<=end){
        if (key==arr[mid]){
            answer = mid;
            end = mid - 1;
        }

        else if(key> arr[mid])
            start = mid + 1; 
        else if (key<arr[mid])
            end = mid - 1;
        mid = (start + end) / 2;
    }
    return answer;
}

int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int answer = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            answer = mid;
            end = mid + 1;
        }

        else if (key > arr[mid])
            start = mid + 1;
        else if (key < arr[mid])
            end = mid - 1;
        mid = (start + end) / 2;
    }
    return answer;
}

int main(){
    int arrOdd[5] = {3,3,3,5,6};
    int arrEven[6] = {3, 5, 7, 9, 11,13};
    int leftOccurence = firstOccurence(arrOdd, 5, 3);
    int rightOccurrence = lastOccurence(arrOdd, 5, 3);
    cout << leftOccurence << endl;
    cout << rightOccurrence << endl;
}