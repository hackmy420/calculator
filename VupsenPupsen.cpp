/*
D. Vupsen, Pupsen and 0
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vupsen and Pupsen were gifted an integer array. Since Vupsen doesn't like the number 0, he threw away all numbers equal to 0 from the array. As a result, he got an array a of length n.

Pupsen, on the contrary, likes the number 0 and he got upset when he saw the array without zeroes. To cheer Pupsen up, Vupsen decided to come up with another array b of length n such that ∑ni=1ai⋅bi=0. Since Vupsen doesn't like number 0, the array b must not contain numbers equal to 0. Also, the numbers in that array must not be huge, so the sum of their absolute values cannot exceed 109. Please help Vupsen to find any such array b!

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases. The next 2⋅t lines contain the description of test cases. The description of each test case consists of two lines.

The first line of each test case contains a single integer n (2≤n≤105) — the length of the array.

The second line contains n integers a1,a2,…,an (−104≤ai≤104, ai≠0) — the elements of the array a.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case print n integers b1,b2,…,bn — elements of the array b (|b1|+|b2|+…+|bn|≤109, bi≠0, ∑ni=1ai⋅bi=0).

It can be shown that the answer always exists.

Example
inputCopy
3
2
5 5
5
5 -2 10 -9 4
7
1 2 3 4 5 6 7
outputCopy
1 -1
-1 5 1 -1 -1
-10 2 2 -3 5 -1 -1
Note
In the first test case, 5⋅1+5⋅(−1)=5−5=0. You could also print 3 −3, for example, since 5⋅3+5⋅(−3)=15−15=0
In the second test case, 5⋅(−1)+(−2)⋅5+10⋅1+(−9)⋅(−1)+4⋅(−1)=−5−10+10+9−4=0.


*/
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define ff                   first
#define ss                   second
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forrr(i,b,a) for(ll i=b;i>=a;i--)
#define forrrr(i,a,b,k) for(ll i=a;i<b;i=i+k)
#define graph          vector<vector<ll>>
#define sz(v) v.size()
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<string>      vs;
typedef vector<double>      vd;
typedef vector<pii>         vpii;
typedef vector<pll>         vpll;
typedef pair< ll, pll>      plll;
typedef queue<ll>           qll;
typedef vector<plll>      vplll;
typedef  vector<set<ll>>   vsll;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<ll, vll>             mvll;
typedef  map<vll, ll>             mvlll;
typedef  map<char, ll>           mcl;
typedef map<pair<ll, ll>, ll>  mplll;
typedef  unordered_map<char, ll>           umcl;
typedef  unordered_map< ll, char>           umlc;
typedef  unordered_map< ll, ld>           umld;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
typedef priority_queue<ll, vector<ll>, greater<ll>> prq;
const ll MOD = 1000000007;
const ll modx = 998244353;
ld PI = 3.1415926535897;
const ll N = 200010;
void solve();
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output1.txt", "w", stdout);
#endif
	ll t ; cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
ll ceils(ll x, ll y) {
	return x / y + ((x % y) != 0);
}
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}


ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;

}
ll powmod(ll x, ll y) {
	ll res = 1;
	for (ll i = 0; i < y; i++) {
		res = res * x % MOD;
	}
	return res;
}
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (ll i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
bool COMP(pll l, pll r) {
	return l.ss < r.ss;
}
ll kadanesAlgo(vll a)
{
	ll n = a.size();

	ll currMax = 0;
	ll mx = INT_MIN;

	foi(n)
	{
		currMax += a[i];

		if (currMax <= a[i])
		{
			currMax = a[i];
		}

		mx = max(currMax, mx);
	}
	return mx;
}
ll ask(ll x, ll y, ll n) {
	cout << "?" << " ";
	foi(n - 1) {
		cout << x << " ";
	}
	cout << y << endl;
	ll s;
	cin >> s;
	return s;
}
ll binpow(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
bool is_sorted(vector<ll>a) {
	ll x = 0;
	for (ll i = 0; i < a.size() - 1; i++) {
		if (a[i] < a[i + 1])
			x++;
	}
	return x == a.size() - 1;
}
bool check(string a, string b) {
	ll n = a.size(), m = b.size();
	if (a < b) {
		return true;
	}
	if (a > b) {
		return false;
	}
	foi(a.size()) {
		if (a[i] > b[i]) {
			return false;
		}
		else if (a[i] < b[i]) {
			return true;
		}
	}
	return false;
}
bool isSubSequence(string a, string b, ll m, ll n) {
	ll j = 0;
	for (ll i = 0; i < n and j < m; i++)
		if (a[j] == b[i])
			j++;
	return (j == m);
}
void solve() {
	ll n;
	cin >> n;
	vll a(n, 0), b;
	foi(n) {
		cin >> a[i];
	}
	foi(n / 2 - 1) {
		b.pb(a[2 * i + 1]), b.pb(-a[2 * i]);
	}
	if (n & 1) {
		if (a[n - 3] + a[n - 2]) {
			b.pb(-a[n - 1]), b.pb(-a[n - 1]), b.pb(a[n - 3] + a[n - 2]);
		}
		else if (a[n - 2] + a[n - 1]) {
			b.pb(a[n - 2] + a[n - 1]), b.pb(-a[n - 3]), b.pb(-a[n - 3]);
		}
		else {
			b.pb(-a[n - 2]), b.pb(a[n - 3] + a[n - 1]), b.pb(-a[n - 2]);
		}
	}
	else {
		b.pb(a[n - 1]), b.pb(-a[n - 2]);
	}
	foi(n) {
		cout << b[i] << " ";
	}
}


 
