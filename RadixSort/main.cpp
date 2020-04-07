#include <iostream>

using namespace std;

int main(){

    //General inputs from user
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Array Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Find max element from arr and no of digits
    int max=arr[0];
    int digitCount=0;
    for(int i=1; i<n; i++) if(max<arr[i]) max=arr[i];

    //Looping counting sort algorithm (Number of digits in max) times
    for(int k=1; max/k>0; k*=10){

        //Init countArr with 0
        int m=10;
        int sortedArr[n], countArr[m];
        for(int i=0; i<m; i++) countArr[i]=0;

        //Update countArr and add adjacent cumulative sums
        for(int i=0; i<n; i++) countArr[(arr[i]/k)%10]++;
        for(int i=1; i<m; i++) countArr[i]+=countArr[i-1];

        //Init and fill sortedArr
        for(int i=n-1; i>=0; i--) {
            sortedArr[countArr[(arr[i]/k)%10]-1]=arr[i];
            countArr[(arr[i]/k)%10]--;
        }

        for(int i=0; i<n; i++) arr[i]=sortedArr[i];
    }

    //Print sortedArr
    cout<<"\nSortedArray: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}
