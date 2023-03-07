#include<bits/stdc++.h>
using namespace std;

int cntDistinct(string str){
    map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count.size();
}

// Driver Code
int main()
{
	string str ;
	int n; cin >> n;
	cin.ignore();
	cin >> str;
	cout << cntDistinct(str);

	return 0;
}
