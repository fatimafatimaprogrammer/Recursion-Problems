#include<iostream>
using namespace std;

int factorial(int number) {
	cout << "calling to fact( " << number << " ) !!!!!!" << endl;
	/*basee case*/
	if (number == 0 || number == 1)
	{
		cout << "base case: \nfact(" << number << ") is " << 1 << endl;
		return 1;
	}
	/*recursive case*/
	else
	{
		int ans = number * factorial(number - 1);
		cout << "end of fact(" << number << "). Ans  is " << ans << endl << endl;
		return ans;
	}
}

int fibonacci(int num) {
	//cout << "calling to fib( " << num << " ) !!!" << endl;
	/*base case*/
	if (num == 1 || num == 0)
	{
		//cout << "base case: Ans is :" << 1 << endl;
		return 1;
	}
	/*recursive case*/
	else
	{
		int ans = fibonacci(num - 1) + fibonacci(num - 2);
		//cout << "End of fib(" << num << ") is : " << ans << endl << endl;
		return ans;
	}
}

/*int main() {

	int num = 0;
	//cout << "enter a non_negative number for calculating factorial : ";
	cout << "enter a number : ";
	cin >> num;
	//cout << "factorial of " << num << " is " << factorial(num)<<endl;
	cout << "\nfibonacci of : " << num << " is " << fibonacci(num)<<endl;
	cout << "\n-------------------------------------------------------------------\n";
	cout << "fib series upto " << num << " is : " << endl<<endl;
	for (int i = 0; i < num; i++) {
		cout << fibonacci(i)<<"  ";
	}
	cout << "\n-------------------------------------------------------------------\n";

}*/
