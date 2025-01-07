
#include <iostream>
using namespace std;

#include "Timer.h"
#include <thread>
#include <chrono>

void Timer::startTimer(int minutes) {

	int seconds = minutes * 60;

	cout << "\nYour timer for " << minutes << " minutes has been set.\n \n";

	while (seconds > 0) {

		

		cout << "\r" << string(50, ' ') << "\r";

		cout << "Time remaining: " << seconds / 60 << " minutes " << seconds % 60 << " seconds." << flush;

		seconds -= 1;
	
		this_thread::sleep_for(chrono::seconds(1));

	}

	cout << "\r" << string(50, ' ') << "\r";

	cout << "\nTime's up!\n \n" << endl;
	
}