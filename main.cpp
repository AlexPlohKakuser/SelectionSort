#include <iostream>
#include <vector>

using namespace std;




uint8_t SelectionMin(vector<uint8_t> *Arr,uint8_t Index){
    uint8_t Min=(*Arr)[Index];
    uint8_t MinInd=Index;
    for (uint8_t i=Index;i<(*Arr).size();i++){
        if ((*Arr)[i]<Min){
            Min=(*Arr)[i];
            MinInd=i;
            };
    }
    return MinInd;
}
void selectionSort(vector<uint8_t> *Arr){
    uint8_t S;
    for (uint8_t i=0;i<(*Arr).size();i++){
        S=SelectionMin(Arr, i);
        (*Arr).emplace((*Arr).cbegin()+S, (*Arr)[i]);
    }
}
int main(){
    vector<uint8_t> Array = {9,8,7,6,5,4,3,2,1};
    for (uint8_t i = 0; i< Array.size(); i++)
        cout << Array[i] << " ";
    cout << '\n';
    selectionSort(&Array);
    for (uint8_t i = 0; i< Array.size(); i++)
        cout << Array[i] << " ";
}

