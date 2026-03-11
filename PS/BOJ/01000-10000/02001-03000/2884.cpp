#include <iostream>
using namespace std;

int main() {
	int hour, minute;

	cin >> hour >> minute;
	if (minute - 45 < 0) {
		if (hour == 0) {
			hour = 23;
			minute = 60 - (45 - minute);
		}
	
		else {
			hour = hour - 1;
			minute = 60 - (45 - minute);
		}
	}

	else {
		minute = minute - 45;
	}

	cout << hour << " " << minute;

	return 0;
}