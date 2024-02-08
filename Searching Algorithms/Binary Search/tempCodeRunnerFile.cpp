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
        else{
            cout << "found line 20" << endl;
            end = mid - 1;
        }
        cout << "found line 23" << endl;
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arrEven[6]={4,2,6,7,9,1};
    int arrOdd[6]={4,2,6,7,9};

    int evenSearch = binarySearch(arrEven, 6, 1);
    cout << evenSearch << endl;
}