#include<iostream>
using namespace std;

/*Implement a function that recursively searches a value in an array of size n.
If the value is found, the function should return the index number in which it is stored.
Otherwise, it should return -1 to show that it does not exist.*/

int recursive_search(int value, int array[], int array_size)
{
	cout << "searching for value at index: " << array_size -1<<endl;
	/*base case*/
	if (value == array[array_size-1])
	{
		cout << "value found !!!!!\nvalue " << value << " is at index : " << array_size - 1<<endl;
		return array_size - 1;
	}
	/*recursive case*/
	else
	{
		int ans = recursive_search(value, array, array_size - 1);
		if (ans >= array_size) {
			return -1;
		}
	}
}

/*int main() {
	int array[5] = { 10,11,12,13,14 };
	cout << "printing the array.......\n";
	for (int i = 0; i < 5; i++) {
		cout << "array[" << i << "] : " << array[i] << endl;
	}
	cout << "\nrecursively searching the value 13\n\n";
	cout << recursive_search(13, array, 5);
}*/
