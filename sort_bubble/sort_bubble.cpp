#include <iostream>
#include <Windows.h>
using namespace std;
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <time.h>

 class Timer {
	 clock_t start_time;
 public:
	  float get_time  () const  {
		  return ((clock() - start_time) / (float)CLOCKS_PER_SEC);
	 }
	  void reset () {
		  start_time = clock () ;
	  }
	  Timer () {
		  reset ();
	  }
 };

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
	Timer timer;
	int N = 1;
	for  (int i=0;i<4;++i) {
		N *= 10;
		std::cout <<N<<": ";
		std::vector<int> p(N);
		for (int i=0;i<N;++i) {
			p[i]=rand()%255;
		}
		std::vector<int> u=p;

		timer.reset() ;
		std::sort(p.begin(),p.end());
		std::cout << timer.get_time() << "s    " ;
		
		timer.reset () ;
		bubble_sort<int>(u);
		std::cout << timer.get_time() << "s" << std::endl;
	}

	//print<int>(p);

	system ("pause");
}