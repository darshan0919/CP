/*
    Darshan J Patel(Er.Strange0919)
    https://codeforces.com/profile/Er.Strange0919
    DA-IICT
    Gandhinagar
    INDIA
*/

/// Libraries
#include <bits/stdc++.h>
using namespace std;

/// Data Types
#define ll long long
#define ld long double
#define D double
#define S string
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ve vector
#define vi ve<int>
#define vll ve<ll>
#define vvl ve<vll>
#define vD ve<D>
#define vld ve<ld>
#define vc ve<c>
#define vs ve<S>
#define vb ve<bool>
#define vpi ve<pi>
#define vpll ve<pll>

/// Others
#define rdld rdlld()
#define rdd rdl()
#define rds rdstr()
#define prec(x, d) cout << fixed << setprecision(d) << x << endl
#define pout(x) cout << x << endl
#define out(x)         \
    cout << x << endl; \
    return 0;
#define print(...) db(#__VA_ARGS__, __VA_ARGS__)
#define println(...) dbln(#__VA_ARGS__, __VA_ARGS__)
#define re return
#define endl '\n'
#define no cout << "NO\n"
#define yes cout << "YES\n"

/// LOOPs
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORI(i, a, b) for (ll i = a; i < b; i++)
#define nFOR(i, a, b) for (i = a; i >= b; i--)
#define nFORI(i, a, b) for (ll i = a; i >= b; i--)
#define times(i, t) for (int i = 0; i < t; i++)
#define MEM(a, x) memset(a, x, sizeof(a))

/// Library Functions
#define _ones(a) __builtin_popcount(a)

/// STL
#define all(x) x.begin(), x.end()
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
#define umap unordered_map
#define minQ(x) priority_queue<x, vector<x>, greater<x>>
#define maxQ(x) priority_queue<x, vector<x>, less<x>>
#define lb(a, x) lower_bound(all(a), x) - a.begin()
#define ub(a, x) upper_bound(all(a), x) - a.begin()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define lower(x) transform(all(x), x.begin(), ::tolower)
#define upper(x) transform(all(x), x.begin(), ::toupper)
#define findx(a, x) (a.find(x) != a.end())
#define rand(v) random_shuffle(all(v))

#define THYNK                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define BEFORE MySolution::precalculation();
#define READING ;
#define SOLUTION MySolution::solve(CASE);
#define SOLUTIONS \
    ll t = rdd;   \
    times(CASE, t) SOLUTION;
#define TATAA return 0;

#define sim template <class T

/// Variable length parameters
sim > void db(const char *X, T h) { cout << h << ' '; }
sim, class... TT > void db(const char *X, T h, TT... a)
{
    while (*X != ',')
        *X++;
    cout << h << ' ';
    db(X + 1, a...);
}
sim > void dbln(const char *X, T h) { cout << h << '\n'; }
sim, class... TT > void dbln(const char *X, T h, TT... a)
{
    while (*X != ',')
        *X++;
    cout << h << ' ';
    dbln(X + 1, a...);
}

// Overloading in-built library methods.
/// Inputs
sim > istream &operator>>(istream &in, ve<T> &v)
{
    for (T &e : v)
        in >> e;
    re in;
}
sim > istream &operator>>(istream &in, ve<ve<T>> &v)
{
    for (ve<T> &e : v)
        for (T &ee : e)
            in >> ee;
    re in;
}
sim, class Ta > istream &operator>>(istream &in, pair<T, Ta> &v)
{
    in >> v.ff >> v.ss;
    re in;
}

/// Output
sim > ostream &operator<<(ostream &ot, const ve<T> &v)
{
    for (T e : v)
        ot << e << ' ';
    re ot;
}
sim > ostream &operator<<(ostream &ot, const ve<ve<T>> &v)
{
    for (ve<T> e : v)
        ot << e << endl;
    re ot;
}
sim, class Ta > ostream &operator<<(ostream &ot, const pair<T, Ta> &v)
{
    ot << v.ff << ' ' << v.ss << endl;
    re ot;
}
sim, class Ta > ostream &operator<<(ostream &ot, const ve<pair<T, Ta>> &v)
{
    for (auto &e : v)
        ot << e.ff << ' ' << e.ss << '\n';
    re ot;
}
sim > ostream &operator<<(ostream &ot, const set<T> &v)
{
    for (T &x : v)
        ot << x << ' ';
    re ot;
}
sim, class Ta > ostream &operator<<(ostream &ot, const map<T, Ta> &v)
{
    for (auto &x : v)
        ot << x.ff << ' ' << x.ss << endl;
    re ot;
}

/// Declaring Constants
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const double PI = 3.14159265358979323846;
const double eps = 1e-9;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

/// Global Attributes

/// Methods
ld rdlld()
{
    ld x;
    cin >> x;
    re x;
}
ll rdl()
{
    ll x;
    cin >> x;
    re x;
}
S rdstr()
{
    S s;
    cin >> s;
    re s;
}
sim > bool inrange(T l, T x, T r) { return (l <= x && x <= r); }

vll check(S s)
{
    ll i, c = 0;
    vll v(s.size(), 0);
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            c++;
        else
            c--;
        if (c == 0)
            v[i] = 1;
    }
    return v;
}

bool palindrome(S s)
{
    int i, n = s.size();
    for (i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}

class MySolution
{
public:
    static void precalculation()
    {
    }
    static int solve(ll CASE)
    {
        ll i, n = rdd;
        S a = rds, b = rds;
        vll v = check(a);

        TATAA
    }
};

int32_t main() <% THYNK BEFORE READING SOLUTIONS TATAA %>
