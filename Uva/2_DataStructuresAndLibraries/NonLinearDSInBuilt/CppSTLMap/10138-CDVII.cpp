#include <bits/stdc++.h>
using namespace std;


stringstream ss;

int time_calc(int mon, int day, int hour, int min) {
	return mon*31*24*60 + day*24*60 + hour*60 + min;
}
int main() {
	int t;
	string number_plate;
	string time_stamp;
	int month;
	int day;
	int hour;
	int minute;
	string behavior;
	int kilometer;
	string inp; 
	getline(cin, inp);
	ss.str("");
	ss.clear();
	ss.str(inp);
	ss >> t;
	getline(cin, inp);
	while(t--) {
		getline(cin, inp);
		ss.str("");
		ss.clear();
		ss.str(inp);
		vector <int> tariff_24(24);
		for (int i = 0; i < 24; i++) {
			ss >> tariff_24[i];
		}
		map <string, map <int, vector<int> > > event;
		while (getline(cin, inp)) {
			if (inp == "") {
				break;
			}
			ss.str("");
			ss.clear();
			ss.str(inp);
			ss >> number_plate >> time_stamp >> behavior >> kilometer;
			month = (time_stamp[0] - 48) * 10 + (time_stamp[1] - 48);
			day = (time_stamp[3] - 48) * 10 + (time_stamp[4] - 48);
			hour = (time_stamp[6] - 48) * 10 + (time_stamp[7] - 48);
			minute = (time_stamp[9] - 48) * 10 + (time_stamp[10] - 48);
			if (behavior[1] == 'n' || behavior[1] == 'N') {
				event[number_plate][time_calc(month, day, hour, minute)] = {0, kilometer, tariff_24[hour]};
			} else if (behavior[1] == 'x' || behavior[1] == 'X') {
				event[number_plate][time_calc(month, day, hour, minute)] = {1, kilometer};
			}
		}
		for (auto i:event) {
			double cost = 0.0;
			int current_rate = 0;
			int kimi1 = 0;
			int kimi2 = 0;
			bool begin_flag = false;
			bool control_flag = false;
			for (auto j:i.second) {
				if (j.second[0] == 0) {
					begin_flag = true;
					current_rate = j.second[2];
					kimi1 = j.second[1];
				} else if (j.second[0] == 1 && begin_flag == true) {
					begin_flag = false;
					kimi2 = j.second[1];
					cost += 1 + (double)(abs(kimi1 - kimi2)*current_rate)/100.0;
					control_flag = true;
				}
			}
			if (control_flag) {
				cout << i.first << " $" << fixed << setprecision(2) << 2 + cost << endl;
			}
		}
		if (t > 0) {
			cout << endl;
		}

	}
	return 0;
}