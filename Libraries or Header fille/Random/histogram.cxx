#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

void print_histogram(const vector<int> &counts, double lo, double hi, int total, int max_bar_width = 50)
{
    int bins = counts.size();
    double width = (hi - lo) / bins;
    int max_count = *max_element(counts.begin(), counts.end());

    for (int i = 0; i < bins; ++i)
    {
        double b_lo = lo + i * width;
        double b_hi = lo + (i + 1) * width;
        // scale bar length
        int bar_len = max_count == 0 ? 0 : (int)round((double)counts[i] / max_count * max_bar_width);
        cout << setw(7) << fixed << setprecision(2) << b_lo << " to "
             << setw(7) << fixed << setprecision(2) << b_hi << " | ";
        for (int j = 0; j < bar_len; ++j)
            cout << '*';
        // show counts at end
        cout << " (" << counts[i] << ")\n";
    }
}

int main()
{
    // parameters
    const int N = 100;   // number of samples
    const int BINS = 10; // number of buckets
    const double MEAN = 0.0;
    const double STDDEV = 1.0;

    // random normal generator
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<> dist(MEAN, STDDEV);

    // generate samples
    vector<double> samples;
    samples.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        samples.push_back(dist(gen));
    }

    // decide histogram range: use min/max with small padding
    double lo = *min_element(samples.begin(), samples.end());
    double hi = *max_element(samples.begin(), samples.end());
    if (lo == hi)
    { // degenerate case
        lo -= 0.5;
        hi += 0.5;
    }
    // add small padding so extreme values don't sit on boundary
    double pad = (hi - lo) * 0.05;
    lo -= pad;
    hi += pad;

    // prepare counts
    vector<int> counts(BINS, 0);
    double bin_width = (hi - lo) / BINS;
    for (double v : samples)
    {
        int idx = (int)floor((v - lo) / bin_width);
        if (idx < 0)
            idx = 0;
        if (idx >= BINS)
            idx = BINS - 1;
        counts[idx]++;
    }

    // print summary and histogram
    cout << "Generated " << N << " samples from N(" << MEAN << "," << STDDEV << ")\n";
    cout << "Range used for histogram: [" << lo << ", " << hi << "]\n\n";
    print_histogram(counts, lo, hi, N);

    return 0;
}