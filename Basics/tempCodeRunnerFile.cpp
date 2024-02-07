   for (int i = 0; i < size;i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5] = {2, 3, 4, 1, 5};
    int min=findMin(arr, 5);
    cout << "Minimum Value: " << min << endl;
}