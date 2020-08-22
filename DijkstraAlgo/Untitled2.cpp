/*#include <bits/stdc++.h>
#define n 9
using namespace std;

int findDistance(int arr[], bool binarr[]){
	int min=INT_MAX, l;
	for (int v = 0; v < n; v++){
		if (binarr[v] == false && arr[v] <= min){
			min=arr[v];
			l=v;
		}
	}
	return l;
}

int printSolution(int arr[])
{
	printf("VERTEX\tDISTANCE\n");
	for(int i=0; i<n; i++) cout<<"\n    "<<i<<"\t"<<arr[i];
}

void dijkstra(int graph[n][n], int s) {
	int arr[n];
	bool binarr[n];
	for (int i = 0; i < n; i++)
		arr[i] = INT_MAX, binarr[i] = false;
	arr[s] = 0;
	for (int count = 0; count < n - 1; count++) {
		int u = findDistance(arr, binarr);
		binarr[u] = true;
		for (int v = 0; v < n; v++)
			if (!binarr[v] && graph[u][v] && arr[u] != INT_MAX
				&& arr[u] + graph[u][v] < arr[v])
				arr[v] = arr[u] + graph[u][v];
	}
	printSolution(arr);
}

int main(){
	int graph[n][n] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	dijkstra(graph, 0);
	return 0;
}
*/
