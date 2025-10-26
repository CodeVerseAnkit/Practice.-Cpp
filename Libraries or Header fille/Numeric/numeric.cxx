#include <iostream>
#include <vector>
#include <numeric> // <-- Important header
#include <functional>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // 1. accumulate → sum
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Accumulate (sum): " << sum << endl;

    // 2. accumulate → product (custom op)
    int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Accumulate (product): " << product << endl;

    // 3. inner_product → dot product (v • v)
    int dot = inner_product(v.begin(), v.end(), v.begin(), 0);
    cout << "Inner Product (dot product with itself): " << dot << endl;

    // 4. partial_sum → running totals
    vector<int> prefix(v.size());
    partial_sum(v.begin(), v.end(), prefix.begin());
    cout << "Partial Sum (prefix totals): ";
    for (int x : prefix)
        cout << x << " ";
    cout << endl;

    // 5. adjacent_difference → consecutive diffs
    vector<int> diff(v.size());
    adjacent_difference(v.begin(), v.end(), diff.begin());
    cout << "Adjacent Difference: ";
    for (int x : diff)
        cout << x << " ";
    cout << endl;

    // ---- C++17 Algorithms ----
    // 6. reduce (like accumulate but parallel friendly)
    int sum_reduce = reduce(v.begin(), v.end());
    cout << "Reduce (sum): " << sum_reduce << endl;

    // 7. inclusive_scan → prefix sum
    vector<int> incl(v.size());
    inclusive_scan(v.begin(), v.end(), incl.begin());
    cout << "Inclusive Scan: ";
    for (int x : incl)
        cout << x << " ";
    cout << endl;

    // 8. exclusive_scan → prefix sum excluding current element
    vector<int> excl(v.size());
    exclusive_scan(v.begin(), v.end(), excl.begin(), 0);
    cout << "Exclusive Scan: ";
    for (int x : excl)
        cout << x << " ";
    cout << endl;

    // 9. transform_reduce → sum of squares
    int sum_of_squares = transform_reduce(v.begin(), v.end(), v.begin(), 0);
    cout << "Transform Reduce (sum of squares): " << sum_of_squares << endl;

    // 10. transform_inclusive_scan → prefix sum of squares
    vector<int> incl_sq(v.size());
    transform_inclusive_scan(v.begin(), v.end(), incl_sq.begin(),
                             plus<>(), [](int x) { return x * x; });
    cout << "Transform Inclusive Scan (squares): ";
    for (int x : incl_sq)
        cout << x << " ";
    cout << endl;

    // 11. transform_exclusive_scan → prefix sum of squares excl.
    vector<int> excl_sq(v.size());
    transform_exclusive_scan(v.begin(), v.end(), excl_sq.begin(), 0,
                             plus<>(), [](int x) { return x * x; });
    cout << "Transform Exclusive Scan (squares): ";
    for (int x : excl_sq)
        cout << x << " ";
    cout << endl;

    return 0;
}