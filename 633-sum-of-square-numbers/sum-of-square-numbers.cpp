class Solution {
public:
    bool judgeSquareSum(int c) {
    long long b = static_cast<long long>(sqrt(c));
    for (long long a = 0; a <= b; a++) { 
        long long r = static_cast<long long>(c) - a * a;
        long long t = static_cast<long long>(sqrt(r));
        if (t * t == r) return true;
    }
    return false;
}
};