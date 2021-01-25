#include <iostream>

const int HOUR_PER_DAY = 24;
const int MINUTE_PER_HOUR = 60;
const int SECOND_PER_MINUTE = 60;

int main(){
	using namespace std;
	long long isec;
	int d, h, m, s;
	
	cout << "Enter the number of seconds:";
	cin >> isec;
	
	s = isec % SECOND_PER_MINUTE;
	m = (isec / SECOND_PER_MINUTE) % MINUTE_PER_HOUR;
	h = (isec / (SECOND_PER_MINUTE * MINUTE_PER_HOUR)) % HOUR_PER_DAY;
	d = isec / (SECOND_PER_MINUTE * MINUTE_PER_HOUR * HOUR_PER_DAY);
	
	cout << isec << " seconds = " 
		 << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds\n";
		 
	return 0; 
}
