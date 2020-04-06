#include <iostream>

using namespace std;

int main(){

    //General inputs from user
    cout<<"Enter length of rod: ";
    int m;
    cin>>m;
    cout<<"Enter total number of entries for cost: ";
    int n;
    cin>>n;
    int cost[n];
    cout<<"Enter cost: ";
    for(int i=0; i<n; i++) cin>>cost[i];

    //Init profit to 0
    int profit[m+1];
    for(int i=0; i<=m; i++) profit[i]=0;

    //Maximize profit
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            profit[i]=max(profit[i], cost[j-1]+profit[i-j]);
        }
    }

    //Print profit
    cout<<"\Maximum profit is "<<profit[m];

    return 0;
}
