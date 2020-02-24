#include <iostream>
using namespace std;

int main(){
    size_t size1, size2, ind1 = 0, ind2 = 0;
    cout << "Enter first array size:\n";
    cin >> size1;
    cout << "Enter second array size:\n";
    cin >> size2;
    int arr1[size1], arr2[size2];

    while(ind1 < size1 && ind2 < size2){//Initialization of arrays.
        if(ind1 < size1){
            arr1[ind1] = ind1;
            ++ind1;
        }
        if(ind2 < size2){
            arr2[ind2] = ind2;
            ++ind2;
        }
    }

    for(size_t ind = 0; ind < size1 || ind < size2; ++ind){//To compare arrays.
        if(arr1[ind] < arr2[ind]){
            cout << "first array less than second\n";
            return 0;
        }else if(arr1[ind] < arr2[ind]){
            cout << "second array less than first\n";
            return 0;
        }
    }

    if(size1 < size2)
        cout << "first array less than second\n";
    else if(size1 > size2)
        cout << "second array less than first\n";
    else cout << "arrays equal";
    return 0;
}
