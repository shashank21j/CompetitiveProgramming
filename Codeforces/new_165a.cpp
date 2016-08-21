#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin>>n;
    vector < pair<int,int> > coordinates(n);
    vector < pair<int,int> > y_coordinates(n);
    for (int i=0;i<n;i++) {
        cin>>coordinates[i].first;
        cin>>coordinates[i].second;
        y_coordinates[i].first = coordinates[i].second;
        y_coordinates[i].second = coordinates[i].first;
    }
    sort(coordinates.begin(),coordinates.end());
    sort(y_coordinates.begin(),y_coordinates.end());

    vector < pair<int,int> > x_iter;
    vector < pair<int,int> > y_iter;
    for (int i=1;i<n-1;i++) {
        if (coordinates[i].first == coordinates[i-1].first && coordinates[i].first == coordinates[i+1].first) {
            vector <int> temp(3);
            temp[0] = coordinates[i-1].second;
            temp[1] = coordinates[i].second;
            temp[2] = coordinates[i+1].second;
            sort(temp.begin(),temp.end());
            if (temp[1]>temp[0] && temp[1]<temp[2]) {
                x_iter.push_back(make_pair(coordinates[i].first,temp[1]));
            }
        }
    }
    for (int i=1;i<n-1;i++) {
        if (y_coordinates[i].first == y_coordinates[i-1].first && y_coordinates[i].first == y_coordinates[i+1].first) {
            vector <int> temp(3);
            temp[0] = y_coordinates[i-1].second;
            temp[1] = y_coordinates[i].second;
            temp[2] = y_coordinates[i+1].second;
            sort(temp.begin(),temp.end());
            if (temp[1]>temp[0] && temp[1]<temp[2]) {
                y_iter.push_back(make_pair(temp[1],y_coordinates[i].first));
            }
        }
    }
//  cout<<"Printing X"<<endl;
    int count = 0;
    for (int i=0;i<x_iter.size();i++) {
    //  cout<<x_iter[i].first<<" "<<x_iter[i].second<<endl;
        if (find (y_iter.begin(),y_iter.end(),x_iter[i]) != y_iter.end()) {
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}