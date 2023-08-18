#include	<iostream>
#include	<fstream>
#include	<cstdlib>
#include	<cstdio>
#include	<ctime>
#include	"BST.h"
#include    "Student.h"

using namespace std;

bool readFile(const char *, BST *);
int menu();

int main() {
	do {
		switch (menu()) {

		case 1: // Read data to BST

			system("pause");
			system("cls");
			break;

		case 2: // Print deepest nodes

			system("pause");
			system("cls");
			break;

		case 3: // Display student

			system("pause");
			system("cls");
			break;

		case 4: // Clone Subtree

			system("pause");
			system("cls");
			break;

		case 5: // Print Level Nodes

			system("pause");
			system("cls");
			break;

		case 6: // Print Path

			system("pause");
			system("cls");
			break;

		case 7: // Exit
			return 0;
		}
	} while (1);
}


int menu() {
	int option;

	cout << "-------------------------------------" << endl;
	cout << "                MENU" << endl;
	cout << "-------------------------------------" << endl;
	cout << "1. Read data to BST" << endl
		<< "2. Print deepest nodes" << endl
		<< "3. Display student" << endl
		<< "4. Clone Subtree" << endl
		<< "5. Print Level Nodes" << endl
		<< "6. Print Path" << endl
		<< "7. Exit" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Please input your option (1-7): ";
	cin >> option;

	while (cin.fail()) { // input validation
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Not an integer! Enter again: ";
		cin >> option;
	}

	while (option < 1 || option > 7) { // input validation
		cout << "Out of range! Enter again: ";
		cin >> option;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Not an integer! Enter again: ";
			cin >> option;
		}
	}
	return option;
}