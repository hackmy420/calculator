/*
B. Jumbo Extra Cheese 2
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pak Chanek has n two-dimensional slices of cheese. The i-th slice of cheese can be represented as a rectangle of dimensions ai×bi. We want to arrange them on the two-dimensional plane such that:

Each edge of each cheese is parallel to either the x-axis or the y-axis.
The bottom edge of each cheese is a segment of the x-axis.
No two slices of cheese overlap, but their sides can touch.
They form one connected shape.
Note that we can arrange them in any order (the leftmost slice of cheese is not necessarily the first slice of cheese). Also note that we can rotate each slice of cheese in any way as long as all conditions still hold.

Find the minimum possible perimeter of the constructed shape.

Input
Each test contains multiple test cases. The first line contains an integer t (1≤t≤2⋅104) — the number of test cases. The following lines contain the description of each test case.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the number of slices of cheese Pak Chanek has.

The i-th of the next n lines of each test case contains two integers ai and bi (1≤ai,bi≤109) — the dimensions of the i-th slice of cheese.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, output a line containing an integer representing the minimum possible perimeter of the constructed shape.

Example
inputCopy
3
4
4 1
4 5
1 1
2 3
3
2 4
2 6
2 3
1
2 65
outputCopy
26
24
134
Note
In the first test case, a way of getting the minimum possible perimeter is to arrange the slices of cheese as follows.



We can calculate that the perimeter of the constructed shape is 2+5+1+1+1+1+3+1+5+1+2+3=26. It can be shown that we cannot get a smaller perimeter.

Consider the following invalid arrangement.



Even though the perimeter of the shape above is 24, it does not satisfy all conditions of the problem. The bottom edge of the 1×1 slice of cheese is not a segment of the x-axis.

In the second test case, a way of getting the minimum possible perimeter is to arrange the slices of cheese as follows.



We can calculate that the perimeter of the constructed shape is 2+2+2+3+2+3+2+2+2+4=24. It can be shown that we cannot get a smaller perimeter.
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
typedef vector<ld>          vld;
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
const ll mod = 998244353;
ld PI = 3.1415926535897;
void solve();
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input2.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output2.txt", "w", stdout);
#endif
	ll t; cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve() {
	ll n;
	cin >> n;
	ll mx = -1, s = 0;
	foi(n) {
		ll x, y;
		cin >> x >> y;
		s += min(x, y), mx = max({mx, x, y});
	}
	cout << 2 * (s + mx);
}
