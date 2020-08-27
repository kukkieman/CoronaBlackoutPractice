#include <bits/stdc++.h>

using namespace std;

void KnapsackGreedy(int w[], int p[], int W, int n){
    for(int i=0; i<n; i++)
        x[i]=0;
    int weight=0;
    for(int i=0; i<n; i++){
        if(weight+w[i] =< W){
            x[i]=1;
            weight+=w[i];
        }else{
            x[i]=(W-weight)/w[i];
            weight=W;
            break;
        }
    }
    return x;
}

int main(){
    cout << "Hello world!" << endl;
    return 0;
}
