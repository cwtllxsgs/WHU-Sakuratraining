https://www.jisuanke.com/course/10572/587955
#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int cal(int l, int r, int x)
{
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] == x) {
            return 1;
        }
        if (a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    while (m--) {
        int x;
        scanf("%d", &x);
        if (cal(0, n - 1, x)) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
}

---
https://www.jisuanke.com/course/10572/587956
#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int cal(int l, int r, int x) {
    if (a[r] < x) {
        return -1;
    }
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] >= x) {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }
    return a[res];
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    while (m--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", cal(0, n - 1, x));
    }
    return 0;
}

---
https://www.jisuanke.com/course/10572/587957

#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int cal(int l, int r, int x) {
    if (a[r] <= x) {
        return -1;
    }
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] > x) {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }
    return a[res];
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    while (m--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", cal(0, n - 1, x));
    }
    return 0;
}

---

https://www.jisuanke.com/course/10572/587958

#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int ok(int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] == x) {
            return 1;
        }
        if (a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return 0;
}

int calL(int l, int r, int x) {
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] >= x) {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }
    return res;
}
int calR(int l, int r, int x) {
    if (a[r] <= x) {
        return r + 1;
    }
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] > x) {
            r = mid - 1;
            res = mid;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(a[0]), cmp);


    while (m--) {
        int x;
        scanf("%d", &x);
        if (!ok(0, n - 1, x)) {
            puts("0");
        } else {
            printf("%d\n", calR(0, n - 1, x) - calL(0, n - 1, x));
        }
    }
    return 0;
}
---

https://www.jisuanke.com/course/10572/587959

#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int cal(int l, int r, int x) {
    if (a[l] > x) {
        return -1;
    }
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
            res = mid;
        }
    }
    return a[res];
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    while (m--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", cal(0, n - 1, x));
    }
    return 0;
}

---

https://www.jisuanke.com/course/10572/587960

#include <stdio.h>

int cmp(const void *xx, const void *yy)
{
    int *x = (int*)xx;
    int *y = (int*)yy;
    return *x - *y;
}
int a[100009];

int cal(int l, int r, int x) {
    if (a[l] >= x) {
        return -1;
    }
    int res = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (a[mid] >= x) {
            r = mid - 1;
        } else {
            l = mid + 1;
            res = mid;
        }
    }
    return a[res];
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    while (m--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", cal(0, n - 1, x));
    }
    return 0;
}

---

https://www.jisuanke.com/course/10572/587961

#include<stdio.h>
#include<math.h>

#define N 1000009
char p[N]; // 压内存

void init()
{
    memset(p, 1, sizeof p);
    for (int i = 2; i * i < N; i ++) {
        if (p[i]) {
            for (int j = i * i; j < N; j += i) {
                p[j] = 0;
            }
        }
    }
}


int main()
{
    init();
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (p[n - 2]) {
            printf("2 %d\n", n - 2);
        } else {
            for (int i = 3; i <= n; i += 2) {
                if (p[i] && p[n - i]) {
                    printf("%d %d\n", i, n - i);
                    break;
                }
            }
        }
    }
}

---

https://www.jisuanke.com/course/10572/587964

#include <stdio.h>
#include <string.h>
struct node {
    char id[30];
    int age;
    int num;
};
struct node a[110];
int cmp(const struct node x, const struct node y)
{
    if (x.age >= 60 && y.age >= 60) {
        if (x.age != y.age) {
            return x.age > y.age;
        }
        return x.num < y.num;
    }
    if (x.age < 60 && y.age < 60) {
        return x.num < y.num;
    }
    return x.age > y.age;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", a[i].id, &a[i].age);
        a[i].num = i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!cmp(a[i], a[j])) {
                struct node tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", a[i].id);
    }
}

---

https://www.jisuanke.com/course/10572/587970

#include <stdio.h>

int a[1000006];

int main()
{
    freopen("max.in", "r", stdin);
    freopen("max.out", "w", stdout);
    long long n;
    scanf("%lld", &n);
    long long sum = -1e18;
    long long ma = -1e18;
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        if (sum < 0) {
            sum = x;
        } else {
            sum += x;
        }
        ma = ma > sum ? ma : sum;
    }
    printf("%lld\n", ma);
    return 0;
}

---

矩阵螺旋输出

#include <stdio.h>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
//          r  d   l  u
int inf = 0x3f3f3f3f;

int main() {
    int a[110][110];
    for (int i = 0; i < 110; i++) {
        for (int j = 0; j < 110; j++) {
            a[i][j] = inf;
        }
    }
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int dir = 0, cnt = 0;
    int x = 1, y = 1;
    printf("%d", a[x][y]);
    a[x][y] = inf;
    while (1) {
        if (a[x + dx[dir]][y + dy[dir]] == inf) {
            dir++;
            dir %= 4;
            continue;
        }
        x += dx[dir];
        y += dy[dir];
        printf(" %d", a[x][y]);
        a[x][y] = inf;
        cnt++;
        if (cnt == n * m - 1) {
            break;
        }
    }
    return 0;
}



