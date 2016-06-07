#include <bits/stdc++.h>
using namespace std;
int main () {
	int m,n;
	int wall_cost;
	int bumper_count;
	int x_pos, y_pos, val, cost;
	int ball_points;
	int total_points = 0;
	scanf("%d %d",&m, &n);
	scanf("%d",&wall_cost);
	scanf("%d",&bumper_count);
	vector < vector<int> > grid(n, vector <int> (m,0));
	vector < vector<int> > grid_val(n, vector <int> (m,0));
	vector < vector<int> > grid_cost(n, vector <int> (m,0));
	for (int i = 0;i<bumper_count;i++) {
		scanf("%d %d %d %d",&x_pos,&y_pos,&val,&cost);
		x_pos-=1;y_pos-=1;
		grid[y_pos][x_pos] = 1;
		grid_val[y_pos][x_pos] = val;
		grid_cost[y_pos][x_pos] = cost;
	}
	while (scanf("%d",&x_pos)!=EOF) {
		scanf("%d %d %d",&y_pos,&val,&cost);
		x_pos-=1;y_pos-=1;
		ball_points = 0;
		while(1) {
			if (val == 0) {
				if (x_pos < m - 2 && grid[y_pos][x_pos+1]==0) {
					x_pos+=1;
					cost-=1;
				}
				else if (x_pos == m-2){
					val=3;
					cost -= wall_cost;
					cost -= 1;
				}
				else if (grid[y_pos][x_pos+1]!=0) {
					val=3;
					cost -=1;
					if (cost > 0) {
						ball_points += grid_val[y_pos][x_pos+1];
						cost -= grid_cost[y_pos][x_pos+1];
					}
				}
			}
			else if (val == 1) {
				if (y_pos < n - 2 && grid[y_pos+1][x_pos]==0) {
					y_pos+=1;
					cost-=1;
				}
				else if (y_pos == n-2){
					val=0;
					cost -= wall_cost;
					cost -= 1;
				}
				else if (grid[y_pos+1][x_pos]!=0) {
					val=0;
					cost -= 1;
					if (cost > 0) {
						ball_points += grid_val[y_pos+1][x_pos];
						cost -= grid_cost[y_pos+1][x_pos];
					}
				}
			}
			else if (val == 2) {
				if (x_pos > 1 && grid[y_pos][x_pos-1]==0) {
					x_pos-=1;
					cost-=1;
				}
				else if (x_pos == 1){
					val=1;
					cost -= wall_cost;
					cost -= 1;
				}
				else if (grid[y_pos][x_pos-1]!=0) {
					val=1;
					cost -= 1;
					if (cost > 0) {
						ball_points += grid_val[y_pos][x_pos-1];
						cost -= grid_cost[y_pos][x_pos-1];
					}
				}
			}
			else if (val == 3) {
				if (y_pos > 1 && grid[y_pos-1][x_pos]==0) {
					y_pos-=1;
					cost-=1;
				}
				else if (y_pos == 1){
					val=2;
					cost -= wall_cost;
					cost -= 1;
				}
				else if (grid[y_pos-1][x_pos]!=0) {
					val=2;
					cost -= 1;
					if (cost > 0) {
						ball_points += grid_val[y_pos-1][x_pos];
						cost -= grid_cost[y_pos-1][x_pos];
					}
				}
			}
			if (cost<=0) {
				printf("%d\n",ball_points);
				total_points+=ball_points;
				break;
			}
		}
	}
	printf("%d\n",total_points);
	return 0;
}