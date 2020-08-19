#include <bits/stdc++.h>
using namespace std;
const int N=6;

struct Activity{
    int s, f;
};

bool sortAct(Activity a1, Activity a2){
    return (a1.f < a2.f);
}

void printAct(Activity arr[], int N){
    sort(arr, arr+N, sortAct);
    cout<<"Activities Selected:\n";
    int i=0;
    cout<<"("<<arr[i].s<<","<<arr[i].f<<")\n";
    for(int j=0; j<N; j++){
        if(arr[j].s>=arr[i].f){
            cout<<"("<<arr[j].s<<","<<arr[j].f<<")\n";
            i=j;
        }
    }
}

int main(){
    Activity arr[N];
    for(int i=0; i<N; i++){
        cout<<"Enter start and finish times for Activity "<<i+1<<": ";
        cin>>arr[i].s>>arr[i].f;
    }
    printAct(arr,N);
    return 0;
}
