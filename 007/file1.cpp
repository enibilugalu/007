#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout << "vvedite kolichestvo elementov massiva: " << endl;
	cin >> n;
	int* arr = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "summa elementov: " << sum;
	delete[] arr;
	arr = nullptr;
	return 0;
}