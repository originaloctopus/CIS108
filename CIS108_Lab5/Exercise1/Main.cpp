#include "MusicDB.h"
#include <string>
#include <iostream>

using namespace std;
//loop with menu and commands to add songs to DB, list songs in DB,
// save songs to db, display menu with help, exit program
int main() {
	
		
		string menu;
		{
			cout << "Add - Add a new song to the database\n";
			cout << "List - List the songs in the database\n";
			cout << "Save - Save the songs to the database\n";
			cout << "Help - Display the command menu\n";
			cout << "Exit - Exit this program\n";
		}

		do {
			cout << "Select a menu option: \n";
			string menuOption;
			cin >> menuOption;

			if (menuOption == "Add" || menuOption == "add")
			cout << "Add a new song to the database.\n";
			else if (menuOption == "List" || menuOption == "list")
			cout << "List songs from the database.\n";
			else if (menuOption == "Save" || menuOption == "save")
			cout << "Add a new song to the database.\n";
			if (menuOption == "Exit" || menuOption == "exit");
			cout << "Add a new song to the database.\n";

		} while (true);


};
