#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

class MedianCalculator {
private:
    priority_queue<int> left; 
    priority_queue<int, vector<int>, greater<int>> right; 

public:
    MedianCalculator() {}

    void addNum(int num) {
        if (left.empty() || num <= left.top()) {
            left.push(num);
        } else {
            right.push(num);
        }

       
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    float getMedian() {
        if (left.size() == right.size()) {
            return (left.top() + right.top()) / 2.0;
        }
        return left.top(); 
    }
};

int main() {
    int n;
    cin >> n;
    MedianCalculator mc;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -999999) {
            cout << fixed << setprecision(1) << mc.getMedian() << " ";
        } else {
            mc.addNum(x);
        }
    }
    return 0;
}
