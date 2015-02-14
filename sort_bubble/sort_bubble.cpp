#include <iostream>
#include <Windows.h>
using namespace std;
#include <stdlib.h>
#include <vector>
template <typename T>
void bubble_sort (std::vector<T> &p) {
	for (size_t i=0;i<p.size();++i) {
		for (size_t j=0;j<p.size()-1-i;++j) {
			if (p[j]>p[j+1]) {
				std::swap(p[j],p[j+1]);
			}
		}
	}
}

template<typename T> 
void print ( const std::vector <T> &p) {
	for (size_t i=0;i<p.size();++i) {
		cout<<p[i]<<' ';
	}
}

int main () {
	int N;
	cout<<"N=";
	cin>>N;
	 std::vector<int> p(N);
	for (int i=0;i<N;++i) {
		p[i]=rand()%255;
	}

	bubble_sort<int>(p);

	print<int>(p);

	system ("pause");
}