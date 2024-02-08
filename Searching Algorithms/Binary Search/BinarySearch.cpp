#include <iostream>
using namespace std;

int binarySearch (int arr[],int size,int key ){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start<=end){
        if (key==arr[mid]){
            cout << "found line 11"<<endl;
            return mid;
        }

        if (key>arr[mid]){
            cout << "found line 16" << endl;
            start = mid + 1;
        }
        else if (key<arr[mid]){
            cout << "found line 20" << endl;
            end = mid - 1;
        }
        cout << "found line 23" << endl;
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arrEven[6]={4,6,8,10,12,14};
    int arrOdd[5]={4,6,8,9,11};

    int evenSearch = binarySearch(arrEven, 6, 14);
    int oddSearch = binarySearch(arrOdd, 5, 9);
    cout << evenSearch << endl;
    cout << oddSearch << endl;
}