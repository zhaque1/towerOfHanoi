// towerOfhanoi.cpp : game repilication using the stack class
//

#include "stdafx.h"
#include <iostream>
#include <stack>

using namespace std;


int main()
{
	// creation of the 3 towers

	stack<int> tower1;
	stack<int> tower2;
	stack<int> tower3;

	// the number of discs

	int numOfDiscs;

	cout << "Welcome to Tower of Hanoi!" << endl;
	cout << "Your goal is get all the discs from tower 1 to tower 3, so at the end tower 3 is from smallest disc to the largest disc at the bottom." << endl;
	cout << "Its not that easy....." << endl;
	cout << "you cannot move a disc from one tower to another if that tower disc smaller than what you are moving" << endl; 
	cout << "lets begin....." << endl;
	cout << endl;

	cout << "how many discs do you want to play with? (gotta be atleast 3 discs):	";
	cin >> numOfDiscs;

	while(numOfDiscs < 3) {
		cout << "ERROR, needs to be atleast 3 discs..." << endl;
		cout << "how many discs do you want to play with? (gotta be atleast 3 discs)";
		cin >> numOfDiscs;

	}

	int size = numOfDiscs;


	for (int i = 0; i < size; i++) {

		tower1.push(numOfDiscs);
		--numOfDiscs;


	}
	
	

	for (int j = 0; j < tower1.size(); j++) {
		
		for (int l = 0; 0 < tower1.top(); l++)
		{
			cout << "X";
			tower1.pop();
		}

		cout << endl;
	
	}

	cout << "---------------" << endl;
	cout << "	Tower 1		" << endl;

	



    return 0;
}

