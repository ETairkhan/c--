#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int heights[100];
   
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    
    int min_diff = abs(heights[0] - heights[n - 1]); 
    int soldier1 = 1, soldier2 = n;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(heights[i] - heights[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            soldier1 = i + 1; 
            soldier2 = i + 2; 
        }
    }

    cout << soldier1 << " " << soldier2 << endl;
    
    return 0;
}
