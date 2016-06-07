#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int> > compressor(vector <pair<int,int> > hand) {
	map <int,int> h_val;
	for (int i = 0;i<5;i++) {
		h_val[hand[i].first] += 1;
	}
	vector <pair<int,int> >vals;
	for (auto it:h_val) {
		vals.push_back(make_pair(it.second,it.first));
	}
	sort(vals.begin(), vals.end());
	return vals;
}
bool is_flush(vector <pair<int,int > > hand) {
	int clr = hand[0].second;
	for (int i = 0;i<5;i++) {
		if (clr != hand[i].second) {
			return false;
		}
	}
	return true;
}
bool is_straight(vector <pair<int,int > > hand) {
	vector<int> num(5);
	for (int i = 0;i<5;i++) {
		num[i] = hand[i].first;
	}
	sort(num.begin(), num.end());
	int wheel = 0;
	if (num[4] == 14) {
		wheel = 1;
		for (int i = 0;i<4;i++) {
			if (num[i] != 2+i) {
				wheel = 0;
				break;
			}
		}
	}

	if (wheel == 1) return true;
	int base = num[0];
	for (int i = 0;i<5;i++) {
		if (base != num[i]) {
			return false;
		}
		base++;
	}
	return true;
}

int check_level(vector <pair<int,int > > h1, vector <pair<int,int > > h2) {
	vector<int> num1(5);
	vector<int> num2(5);
	for (int i = 0;i<5;i++) {
		num1[i] = h1[i].first;
		num2[i] = h2[i].first;
	}
	sort(num1.begin(), num1.end());
	sort(num2.begin(), num2.end());
	int p1_level = 999,p2_level = 999;
	if (is_flush(h1) && is_straight(h1)) p1_level = 1;
	if (is_flush(h2) && is_straight(h2)) p2_level = 1;
	if (p1_level == 1 && p2_level != 1) return 1;
	else if (p2_level == 1 && p1_level != 1) return 2;
	else if (p1_level == 1 && p2_level == 1) {
		if (num1[4] > num2[4]) return 1;
		else if (num1[4] < num2[4]) return 2;
		else return 3;
	}

	vector <pair<int,int> > vals1 = compressor(h1);
	vector <pair<int,int> > vals2 = compressor(h2);
	int len1 = vals1.size();
	int len2 = vals2.size();
	if (vals1[len1-1].first == 4) p1_level = 2;
	if (vals2[len2-1].first == 4) p2_level = 2;
	if (p1_level == 2 && p2_level != 2) return 1;
	else if (p2_level == 2 && p1_level != 2) return 2;
	else if (p1_level == 2 && p2_level == 2) {
		for (int i = len1-1;i>=0;i--) {
			if (vals1[i].second > vals2[i].second) return 1;
			else if (vals1[i].second < vals2[i].second) return 2;
		}
		return 3;
	}

	if (vals1[len1-1].first == 3 && vals1[len1-2].first==2) p1_level = 3;
	if (vals2[len2-1].first == 3 && vals2[len2-2].first==2) p2_level = 3;
	if (p1_level == 3 && p2_level != 3) return 1;
	else if (p2_level == 3 && p1_level != 3) return 2;
	else if (p1_level == 3 && p2_level == 3) {
		for (int i = len1-1;i>=0;i--) {
			if (vals1[i].second > vals2[i].second) return 1;
			else if (vals1[i].second < vals2[i].second) return 2;
		}
		return 3;
	}	


	if (is_flush(h1)) p1_level = 4;
	if (is_flush(h2)) p2_level = 4;
	if (p1_level == 4 && p2_level != 4) return 1;
	else if (p2_level == 4 && p1_level != 4) return 2;
	else if (p1_level == 4 && p2_level == 4) {
		for (int i = 4;i>=0;i--) {
			if (num1[i] > num2[i]) return 1;
			else if (num1[i] < num2[i]) return 2;
		}
		return 3;
	}

	if (is_straight(h1)) p1_level = 5;
	if (is_straight(h2)) p2_level = 5;
	if (p1_level == 5 && p2_level != 5) return 1;
	else if (p2_level == 5 && p1_level != 5) return 2;
	else if (p1_level == 5 && p2_level == 5) {
		if (num1[4]>num2[4]) return 1;
		else if (num1[4] < num2[4]) return 2;
		else return 3;
	}
	
	if (vals1[len1-1].first == 3) p1_level = 6;
	if (vals2[len2-1].first == 3) p2_level = 6;
	if (p1_level == 6 && p2_level != 6) return 1;
	else if (p2_level == 6 && p1_level != 6) return 2;
	else if (p1_level == 6 && p2_level == 6) {
		for (int i = len1-1;i>=0;i--) {
			if (vals1[i].second > vals2[i].second) return 1;
			else if (vals1[i].second < vals2[i].second) return 2;
		}
		return 3;
	}

	if (vals1[len1-1].first == 2 && vals1[len1-2].first==2) p1_level = 7;
	if (vals2[len2-1].first == 2 && vals2[len2-2].first==2) p2_level = 7;
	if (p1_level == 7 && p2_level != 7) return 1;
	else if (p2_level == 7 && p1_level != 7) return 2;
	else if (p1_level == 7 && p2_level == 7) {
		for (int i = len1-1;i>=0;i--) {
			if (vals1[i].second > vals2[i].second) return 1;
			else if (vals1[i].second < vals2[i].second) return 2;
		}
		return 3;
	}	

	if (vals1[len1-1].first == 2) p1_level = 8;
	if (vals2[len2-1].first == 2) p2_level = 8;
	if (p1_level == 8 && p2_level != 8) return 1;
	else if (p2_level == 8 && p1_level != 8) return 2;
	else if (p1_level == 8 && p2_level == 8) {
		for (int i = len1-1;i>=0;i--) {
			if (vals1[i].second > vals2[i].second) return 1;
			else if (vals1[i].second < vals2[i].second) return 2;
		}
		return 3;
	}	
	for (int i = len1-1;i>=0;i--) {
		if (vals1[i].second > vals2[i].second) return 1;
		else if (vals1[i].second < vals2[i].second) return 2;
	}
	return 3;
}


int main() {
	char s[30];
	int n;
	cin>>n;
	while (n--)	{
		getline(cin,s);
		vector < pair<int,int> > player1;
		vector < pair<int,int> > player2;
		int val,suit;
		int p1_level = 0,p2_level = 0;
		bool p1_flush,p2_flush;
		bool p1_straight,p2_straight;
		for (int i = 0;i<30;i++) {
			if (s[i] == 'A') val = 14;
			else if (s[i] == 'K') val = 13;
			else if (s[i] == 'Q') val = 12;
			else if (s[i] == 'J') val = 11;
			else if (s[i] == 'T') val = 10;
			else val = s[i] - 48;
			if (s[i+1] == 'C') suit = 1;
			else if (s[i+1] == 'H') suit = 2;
			else if (s[i+1] == 'D') suit = 3;
			else if (s[i+1] == 'S') suit = 4;
			if (i<15) player1.push_back(make_pair(val,suit)); 
			else player2.push_back(make_pair(val,suit)); 
			i+=2;
		}
		int win = check_level(player1,player2);
		if (win == 2) cout<<"White wins."<<endl;
		else if (win == 1) cout<<"Black wins."<<endl;
		else cout<<"Tie."<<endl;
	}
	return 0;

}
