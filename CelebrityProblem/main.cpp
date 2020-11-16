#include <bits/stdc++.h>
using namespace std;

//In this Matrix, if i knows j then Matrix[i][j] = 1, Else 0

bool  Matrix[5][5] = {{0, 0, 1, 0, 1},

                      {0, 1, 1, 0, 0},

                      {0, 0, 0, 0, 0},

                      {1, 0, 1, 0, 0},

                      {0, 0, 1, 1, 0}
};

//n is number of persons
int n=5;
//Function to find the id of celebrity
int FindCelebId(int A, int B){
    //Finding celebity
    while(A < B){
        if(Matrix[A][B]){
            A++;
            FindCelebId(A,B);
        }
        else{
            B--;
            FindCelebId(A,B);
        }
    }

    //Check celebrity conditions, If A is celebrity, All members should know A and A should not know anyone
    for (int i = 0; i < n; i++){
       if ((i != A) && (Matrix[A][i] || !Matrix[i][A])) return -1;
    }
    return A;
}

int main(){
    int x = FindCelebId(0,n-1);
    if(x == -1) cout<<"No Celebrity found";
    else cout<<"Celebrity id is: "<<x;
    return 0;
}
