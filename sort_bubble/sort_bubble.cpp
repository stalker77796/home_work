#include <iostream>
#include <Windows.h>
using namespace std;
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <time.h>

clock_t timer_start_time = 0;
#define reset_timer (timer_start_time = clock())
#define get_timer_time ((clock() - timer_start_time) / (float)CLOCKS_PER_SEC)

template <typename T>
void bubble_sort (std::vector<T> &p) {
	clock();
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
	int N = 1;
	for  (int i=0;i<4;++i) {
		N *= 10;
		std::cout <<N<<": ";
		std::vector<int> p(N);
		for (int i=0;i<N;++i) {
			p[i]=rand()%255;
		}
		std::vector<int> u=p;

		reset_timer;
		std::sort(p.begin(),p.end());
		std::cout << get_timer_time << "s    " ;
		
		reset_timer;
		bubble_sort<int>(u);
		std::cout << get_timer_time << "s" << std::endl;
	}

	//print<int>(p);

	system ("pause");
}