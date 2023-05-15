#include <iostream>

using namespace std;

long long confuse(int N, int K, long long* A) {
    long long max = A[0];
    long long min = A[0];
    long long sum = 0;
    for (long long i = 1; i < N; i++)
    {
        min = min > A[i] ? A[i] : min;
        max = max < A[i] ? A[i] : max;
    }
    return max - min;
}

int main()
{
    int N, K;
    cin >> N >> K;
    long long* A = new long long[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << confuse(N, K, A);
}
