#include <iostream>
#include <string>

using namespace std;


template < class T, int N>
class mysequence {
	T memblock[N - 1];
public:
	void setmenber(int x, T value) {
		memblock[x] = value;
	}
		T getmember(int x) {
			return memblock[x - 1];
		}
};


int main() {
		mysequence<int, 5> myints;
		mysequence <double, 5> myfloats;
		myints.setmenber(0, 100);
		myints.setmenber(3, 3.1416);
		cout << myints.getmember(1) << '\n';
		cout << myfloats.getmember(4) << '\n';
		return 0;
}
