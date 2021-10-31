/*
B. Update Files
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Berland State University has received a new update for the operating system. Initially it is installed only on the 1-st computer.

Update files should be copied to all n computers. The computers are not connected to the internet, so the only way to transfer update files from one computer to another is to copy them using a patch cable (a cable connecting two computers directly). Only one patch cable can be connected to a computer at a time. Thus, from any computer where the update files are installed, they can be copied to some other computer in exactly one hour.

Your task is to find the minimum number of hours required to copy the update files to all n computers if there are only k patch cables in Berland State University.

Input
The first line contains a single integer t (1≤t≤105) — the number of test cases.

Each test case consists of a single line that contains two integers n and k (1≤k≤n≤1018) — the number of computers and the number of patch cables.

Output
For each test case print one integer — the minimum number of hours required to copy the update files to all n computers.

Example
inputCopy
4
8 3
6 6
7 1
1 1
outputCopy
4
3
6
0
Note
Let's consider the test cases of the example:

n=8, k=3:
during the first hour, we copy the update files from the computer 1 to the computer 2;
during the second hour, we copy the update files from the computer 1 to the computer 3, and from the computer 2 to the computer 4;
during the third hour, we copy the update files from the computer 1 to the computer 5, from the computer 2 to the computer 6, and from the computer 3 to the computer 7;
during the fourth hour, we copy the update files from the computer 2 to the computer 8.
n=6, k=6:
during the first hour, we copy the update files from the computer 1 to the computer 2;
during the second hour, we copy the update files from the computer 1 to the computer 3, and from the computer 2 to the computer 4;
during the third hour, we copy the update files from the computer 1 to the computer 5, and from the computer 2 to the computer 6.
n=7, k=1:
during the first hour, we copy the update files from the computer 1 to the computer 2;
during the second hour, we copy the update files from the computer 1 to the computer 3;
during the third hour, we copy the update files from the computer 1 to the computer 4;
during the fourth hour, we copy the update files from the computer 4 to the computer 5;
during the fifth hour, we copy the update files from the computer 4 to the computer 6;
during the sixth hour, we copy the update files from the computer 3 to the computer 7.
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
	ll n, k;
	cin >> n >> k;
	ll p = 1, ans = 0;
	while (p <= k) {
		if (p >= n) {
			cout << ans;
			return;
		}
		p *= 2, ans++;
	}
	cout << ans + (n - p + k - 1) / k;
}


 
