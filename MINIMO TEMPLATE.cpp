#include <iostream>
using namespace std;
template <typename Y>
#define MIN(a,b) (((a)<(b)) ? a : b)

Y minimo(Y x, Y z){
	if (x<z){
		return x;
	}
	else{
		return z;
	}
}


int main() {
	cout << minimo<char>('c','d') << endl;
	cout << minimo<int>(3,6) << endl;
	cout << minimo<float>(3.5,3.7) << endl << endl;
	
	cout << MIN('c','d') << endl;
	cout << MIN(3,4) << endl;
	cout << MIN(3.5,3.9) << endl << endl;
	
	cout << minimo<char>(3,9) << endl;
	cout << minimo<char>(4,9) << endl;
	cout << minimo<char>(5,9) << endl;
	cout << minimo<char>(6,9) << endl;
	return 0;
}

