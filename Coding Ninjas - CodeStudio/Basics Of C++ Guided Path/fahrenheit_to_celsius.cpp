#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int s, e, w;
    cin >> s;
    cin >> e;
    cin >> w;
    for(int i = s; i <= e; i += w) {
        float c = (i - 32) * 5 / 9;
        if(c < 0)
        	cout << i << " " << floor(c) << endl;
        else
            cout << i << " " << ceil(c) << endl;
    }
    return 0;
}