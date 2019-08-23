#include<iostream>
#include<time.h>
#include<string>
using namespace std;
string checkNum(int,int);

int main()
{
	srand(time(0));
	int numran,numIN,loopcount = 0;
	numran = rand() % 10 + 1;
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";
	do {
		loopcount += 1;
		cout << "Guess the number (1 to 10):";
		cin >> numIN;
		cout << checkNum(numran, numIN) << endl;
	} while (numran != numIN);
	cout << "The secret number is " << numran << endl;
	cout << "You made " << loopcount << " guesses\n";
	return(0);
}
string checkNum(int a,int b)
{
	string chek;
	if (a < b) {
		chek = "The secret number is lower";
	}
	else if(a > b) {
		chek = "The secret number is higher";
	}
	else {
		chek = "Congratulations!";
	}
	return(chek);
}