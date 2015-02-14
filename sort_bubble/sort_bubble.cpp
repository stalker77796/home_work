#include <iostream>
#include <Windows.h>
using namespace std;
#include <stdlib.h>

void bubble_sort (int *a,int n) {
	for (int i=0;i<n-1;++i) {
		for (int j=0;j<n-1;++j) {
			if (a[j]>a[j+1]) {
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
}

void print (int *a,int n) {
	for (int i=0;i<n;++i) {
		cout<<a[i]<<' ';
	}
}

int main () {
	int N;
	cout<<"N=";
	cin>>N;
	int *a=new int [N];
	for (int i=0;i<N;++i) {
		a[i]=rand()%255;
	}

	bubble_sort (a,N);

	print (a,N);

	system ("pause");
}