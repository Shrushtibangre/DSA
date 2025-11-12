
#include <bits/stdc++.h>
using namespace std;

int getServedBuildings(vector<int> &buildingCount, vector<int> &routerLocation, vector<int> &routerRange)
{
    int n = buildingCount.size();
    int m = routerLocation.size();
    vector<long long> diff(n + 2, 0);

    // Apply difference array updates
    for (int j = 0; j < m; j++)
    {
        int loc = routerLocation[j] - 1; // converting to 0-index
        int range = routerRange[j];

        int left = max(0, loc - range);
        int right = min(n - 1, loc + range);

        diff[left] += 1;
        if (right + 1 < n)
            diff[right + 1] -= 1;
    }
    // Prefix sum to get coverage
    vector<long long> coverage(n, 0); // Vector<int> coverage(n,0);
    long long curr = 0;               // int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += diff[i];
        coverage[i] = curr;
    }
    // Count served buildings
    int served = 0;
    for (int i = 0; i < n; i++)
    {
        if (coverage[i] >= buildingCount[i])
        { served++; }
    }
    return served;
}

int main() {
    // Example input
    vector<int> buildingCount = {1, 2, 1, 2, 2};
    vector<int> routerLocation = {3, 1};
    vector<int> routerRange = {1, 2};

    cout <<"Number of served buildings: "<< getServedBuildings(buildingCount, routerLocation, routerRange) << endl;
    // Expected output: 3
    return 0;
}
