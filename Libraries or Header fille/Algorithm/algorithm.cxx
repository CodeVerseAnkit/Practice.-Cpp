#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> // accumulate, inner_product, etc.
using namespace std;

int main()
{
    vector<int> v = {5, 1, 3, 4, 2, 2, 3};

    cout << "Original: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n\n";

    // --- Searching ---
    cout << "Find 3: " << (find(v.begin(), v.end(), 3) != v.end() ? "Yes" : "No") << "\n";
    sort(v.begin(), v.end()); // for binary_search
    cout << "Binary search 4: " << (binary_search(v.begin(), v.end(), 4) ? "Yes" : "No") << "\n";
    cout << "Count of 2: " << count(v.begin(), v.end(), 2) << "\n\n";

    // --- Sorting & Rearranging ---
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n";

    rotate(v.begin(), v.begin() + 2, v.end()); // rotate first 2 to end
    cout << "Rotated: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n";

    next_permutation(v.begin(), v.end());
    cout << "Next permutation: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n\n";

    // --- Min/Max ---
    cout << "Min element: " << *min_element(v.begin(), v.end()) << "\n";
    cout << "Max element: " << *max_element(v.begin(), v.end()) << "\n\n";

    // --- Modifying ---
    vector<int> copyV(7);
    copy(v.begin(), v.end(), copyV.begin());
    cout << "Copied: ";
    for (int x : copyV)
        cout << x << " ";
    cout << "\n";

    fill(copyV.begin(), copyV.end(), 9);
    cout << "Filled with 9: ";
    for (int x : copyV)
        cout << x << " ";
    cout << "\n";

    replace(v.begin(), v.end(), 3, 99);
    cout << "Replace 3 with 99: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n";

    transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });
    cout << "Transform (*2): ";
    for (int x : v)
        cout << x << " ";
    cout << "\n\n";

    // --- Unique / Remove ---
    v.push_back(99);
    v.push_back(99);
    cout << "With duplicates: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n";

    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    cout << "After unique: ";
    for (int x : v)
        cout << x << " ";
    cout << "\n\n";

    // --- Numeric (from <numeric>) ---
    vector<int> nums = {1, 2, 3, 4};
    cout << "Accumulate (sum): " << accumulate(nums.begin(), nums.end(), 0) << "\n";
    cout << "Inner product: " << inner_product(nums.begin(), nums.end(), nums.begin(), 0) << "\n";

    vector<int> prefix(4);
    partial_sum(nums.begin(), nums.end(), prefix.begin());
    cout << "Partial sum: ";
    for (int x : prefix)
        cout << x << " ";
    cout << "\n";

    vector<int> diff(4);
    adjacent_difference(nums.begin(), nums.end(), diff.begin());
    cout << "Adjacent difference: ";
    for (int x : diff)
        cout << x << " ";
    cout << "\n";

    return 0;
}