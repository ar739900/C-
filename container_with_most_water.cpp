#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxArea = 0, left = 0, right = height.size() - 1;
    while (left < right) {
        maxArea = max(maxArea, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }
    return maxArea;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "The maximum amount of water is: " << maxArea(height) << endl;
    return 0;
}