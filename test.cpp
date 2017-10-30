#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int t, a[100001], b[100001], x, n, seg[400004];
int update(int pos, int node, int x, int y) {
    if (y < pos || pos < x)return seg[node];
    if (x == y)return seg[node] = 1;
    int mid = (x + y) >> 1;
    return seg[node] = update(pos, node * 2, x, mid) + update(pos, node * 2 + 1, mid + 1, y);
}
int query(int lo, int hi, int node, int x, int y) {
    if (y < lo || hi < x)return 0;
    if (lo <= x&&y <= hi)return seg[node];
    int mid = (x + y) >> 1;
    return query(lo, hi, node * 2, x, mid) + query(lo, hi, node * 2 + 1, mid + 1, y);
}
int main() {
    scanf("%d", &t);
    while (t--) {
        memset(seg, 0, sizeof(seg));
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &x);
            a[x] = i;
        }
        for (int i = 1; i <= n; i++) {
            scanf("%d", &x);
            b[i] = a[x];
        }
        long long r = 0;
        for (int i = 1; i <= n; i++) {
            r += (long long)(b[i] - 1 - query(1, b[i], 1, 1, n));
            update(b[i], 1, 1, n);
        }
        printf("%lld\n", r);
    }
    return 0;
}
