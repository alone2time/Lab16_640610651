#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a, &b, &c, &d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d) {
	int *x[] = {a, b, c, d};
	int idx_p = rand() % 4, idx_s = rand() % 4;
	while (idx_s == idx_p) {idx_s = rand() % 4;}
	int t = *x[idx_p];
	*x[idx_p] = *x[idx_s];
	*x[idx_s] = t;
}