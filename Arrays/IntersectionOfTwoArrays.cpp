#include <iostream>
#include <vector>

using namespace std;

int findInterSection(int arr1[],int size1,int arr2[],int size2){
    std::vector<int> arr;
    for (int i = 0; i < size1;i++){
        int element = arr1[i];
        for (int j = i + 1; i < size2;i++){
            if (element==arr2[j]){
                arr.push_back(element);
                arr2[j] = INT_MIN;
            }
        }
    }
}

    int
    main()
{
    int arr1[5] = { 1, 2, 3, 4, 5};
    int arr2[3] = { 3, 5, 9};
    findInterSection(arr1, 5, arr2, 3);
}