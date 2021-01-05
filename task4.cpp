#include<iostream>
using namespace std;

/*A palindrome is a string of characters (a word, phrase, or sentence) that is the same regardless
of whether you read it forward or backward such as civic, kayak, 1001 etc. 
Implement a recursive function that checks whether the given sequence of characters is a palindrome or not.
Return true if it is, false otherwise.*/


bool palindrome(char word[], int start_index, int end_index,int size) {
	/*if string is empty then it is considered as palindrom*/
	if (size == 0)
		return true;
	else
	{
		/*string has only one character so also palindrome*/
		if (start_index == end_index)
			return true;

		/*if last and start characters do not match false*/
		else if (word[start_index] != word[end_index])
			return false;

        /*recursive case:  recur for remaining sunstring.*/
		else if(start_index <= end_index )
		  return palindrome(word, start_index +1 , end_index - 1,size);
	}
}

int main() {
	char word1[]= "fatima";
	int size = strlen(word1);
	cout << "checking if word \""<<word1<<"\" is a palindrom ???????????? \n";
	if (palindrome(word1,0,size-1,size)) {
		cout << "yess.......... given string is a palindrome\n\n";
	}
	else
		cout<<"Noo .............. given word is not a palindrome\n\n";
}