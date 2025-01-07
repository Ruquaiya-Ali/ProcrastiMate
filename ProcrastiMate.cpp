// ProcrastiMate.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Timer.h"
#include "Task.h"
#include "Reminder.h"

using namespace std;


int main() {
	Timer timer;

	TaskList taskList;

	Reminder reminder;

	int choice;

	string taskName;

	int minutes;



	do {

		cout << "   ProcrastiMate App \n";

		cout << "=======================\n";

		cout << "1. Start a Timer.\n";

		cout << "2. Add a Task. \n";

		cout << "3. View your Tasks. \n";

		cout << "4. Set a Reminder. \n";

		cout << "5. Exit the Program. \n";

		cout << "\nChoose an option to get started.\n \n";

		cin >> choice;


		switch (choice) {

		case 1:
			cout << "\nEnter duration of the timer.\n \n";
			cin >> minutes;

			timer.startTimer(minutes);

			break;


		case 2:
			cout << "\nEnter task name you would like to add.\n \n";

			cin.ignore();

			getline(cin, taskName);

			taskList.addTask(taskName);

			cout << taskName << " has been added to your Task List. \n";

			break;


		case 3:
			taskList.displayTasks();
			break;


		case 4:
			cout << "\nEnter the task name for reminder: \n";

			cin.ignore();

			getline(cin, taskName);

			cout << "\nEnter timer for when you want to be reminded of this task.\n";

			cin >> minutes;

			reminder.setReminder(taskName, minutes);

			break;


		case 5:
			cout << "\nExiting the program, Goodbye.\n";

			break;


		default:

			cout << "\nSorry, that was an invalid choice. Please try again and only select an option from 1 to 5.\n";


		}


	} while (choice != 5);

	
	return 0;

}
