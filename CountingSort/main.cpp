#include <iostream>

using namespace std;

int main(){

    //General inputs from user
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n], sortedArr[n];
    cout<<"Array Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sortedArr[i]=0;
    }

    //Find max element from arr
    int max=arr[0];
    for(int i=1; i<n; i++) if(max<arr[i]) max=arr[i];

    //Init countArr with 0
    int m = max+1;
    int countArr[m];
    for(int i=0; i<m; i++) countArr[i]=0;

    //Update countArr and add adjacent cumulative sums
    for(int i=0; i<n; i++) countArr[arr[i]]++;
    for(int i=1; i<m; i++) countArr[i]+=countArr[i-1];

    //Init and fill sortedArr
    for(int i=n-1; i>=0; i--){
        sortedArr[countArr[arr[i]]-1]=arr[i];
        countArr[arr[i]]--;
    }

    //Print sortedArr
    cout<<"\nSortedArray: ";
    for(int i=0; i<n; i++) cout<<sortedArr[i]<<" ";

    return 0;
}
