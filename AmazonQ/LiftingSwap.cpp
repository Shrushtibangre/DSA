// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> plates(n);
//     for (int i = 0; i < n; i++) cin >> plates[i];

//     // find min and max position
//     int minPos = 0, maxPos = 0;
//     for (int i = 0; i < n; i++) {
//         if (plates[i] < plates[minPos]) minPos = i;
//         if (plates[i] > plates[maxPos]) maxPos = i;
//     }

//     int moves = minPos + (n - 1 - maxPos);

//     // अगर minPos > maxPos है, तो 1 move बच जाएगा
//     if (minPos > maxPos) moves--;

//     cout << moves << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> 

int minMovesToGoodEquipment(std::vector<int>& plates) {
    int n = plates.size();
    if (n <= 1) {
        return 0; 
    }
    auto it_min = std::min_element(plates.begin(), plates.end());
    int idx_min_val = std::distance(plates.begin(), it_min); 

    int max_val = plates[0];
    int idx_max_val = 0;
    for (int i = 0; i < n; ++i) {
        if (plates[i] >= max_val) { 
            max_val = plates[i];
            idx_max_val = i;
        }
    }
    int swaps = idx_min_val;

   
    if (idx_max_val < idx_min_val) {
        
        swaps += (n - 1 - idx_max_val - 1); 
    } else {
       
        swaps += (n - 1 - idx_max_val);
    }

    return swaps;
}

int main() {
    // Example from the problem: plates = [3, 2, 1]
    std::vector<int> plates1 = {3, 2, 1};
    std::cout << "Minimum moves for {3, 2, 1}: " << minMovesToGoodEquipment(plates1) << std::endl; // Expected: 3

    // Another example: plates = [5, 6, 1, 3] from a similar GFG problem for testing
    std::vector<int> plates2 = {5, 6, 1, 3};
    std::cout << "Minimum moves for {5, 6, 1, 3}: " << minMovesToGoodEquipment(plates2) << std::endl; // Expected: 2 (1 to move 1 to front, 1 to move 6 to end)
    
    // Example where min is already at front
    std::vector<int> plates3 = {1, 5, 2, 8};
    std::cout << "Minimum moves for {1, 5, 2, 8}: " << minMovesToGoodEquipment(plates3) << std::endl; // Expected: 0

    // Example where max is already at end
    std::vector<int> plates4 = {5, 2, 1, 8};
    std::cout << "Minimum moves for {5, 2, 1, 8}: " << minMovesToGoodEquipment(plates4) << std::endl; // Expected: 2 (move 1 to front from index 2)

    // Example with only two elements
    std::vector<int> plates5 = {5, 1};
    std::cout << "Minimum moves for {5, 1}: " << minMovesToGoodEquipment(plates5) << std::endl; // Expected: 1 (move 1 to front)

    return 0;
}
