

#include <iostream>
using namespace std;

#include "Task.h"



Task::Task(string name) : name(name), completed(false) {}

string Task::getName() const {

	return name;

}


bool Task::isCompleted() const {

	return completed;

}

void Task::markCompleted() {

	completed = true;

}

void TaskList::addTask(const string& taskName) {

	tasks.push_back(Task(taskName));


}

void TaskList::displayTasks() const {

	cout << "\nYour Tasks:" << endl;
	for (const auto& task : tasks) {

		cout << (task.isCompleted() ? "\n[Completed] " : "\n[Pending] ") << task.getName() << endl;
	}


}
