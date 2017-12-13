#include <iostream>
#include <vector>

using namespace std;

int part(vector<int>& a, int low, int high) {
    int pivot = a[high];

    int i=low-1;

    for (int j=low; j <= high-1; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quicksort(vector<int>& a, int low, int high) {
    if (low < high) {
        int pi = part(a, low, high);

        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}
int main()
{
    vector<int> v = {7,9,2,5,3,4,8,1,6};
    quicksort(v,0,v.size()-1);
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}
