#pragma once

using namespace std;

#include <string>
#include <vector>



class Task {

public:

	Task(string name);

	string getName() const;

	bool isCompleted() const;

	void markCompleted();
	
private: 

	string name;
	bool completed;

};


class TaskList {

public:

	void addTask(const string& taskName);
	void displayTasks() const;

private:

	vector<Task> tasks;


};