#include <iostream>
#include <chrono>

using namespace std;

chrono::steady_clock::time_point time() {
	return chrono::steady_clock::now();
}

void firstLVL(int sequence) {
	
	cout << " ----first Level----" << endl;
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	long long* arr = new long long[n];

	arr[0] = 1;
	arr[1] = 2;

		for (int i = 2; i <= n; i++) 
			arr[i] = arr[i - 1] + arr[i - 2];

	cout << "sequence value= " << arr[n] << endl;
}


int main()
{
	auto start = time();
	int sequence = 0;
	firstLVL(sequence);
	cout << "wasted time:" << (time() - start).count() * 1e-10 << " seconds" << endl;
}
