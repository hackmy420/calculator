/*
C. Di-visible Confusion
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
YouKn0wWho has an integer sequence a1,a2,…,an. He will perform the following operation until the sequence becomes empty: select an index i such that 1≤i≤|a| and ai is not divisible by (i+1), and erase this element from the sequence. Here |a| is the length of sequence a at the moment of operation. Note that the sequence a changes and the next operation is performed on this changed sequence.

For example, if a=[3,5,4,5], then he can select i=2, because a2=5 is not divisible by i+1=3. After this operation the sequence is [3,4,5].

Help YouKn0wWho determine if it is possible to erase the whole sequence using the aforementioned operation.

Input
The first line contains a single integer t (1≤t≤10000)  — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤105).

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).

It is guaranteed that the sum of n over all test cases doesn't exceed 3⋅105.

Output
For each test case, print "YES" (without quotes) if it is possible to erase the whole sequence using the aforementioned operation, print "NO" (without quotes) otherwise. You can print each letter in any register (upper or lower).

Example
inputCopy
5
3
1 2 3
1
2
2
7 7
10
384836991 191890310 576823355 782177068 404011431 818008580 954291757 160449218 155374934 840594328
8
6 69 696 69696 696969 6969696 69696969 696969696
outputCopy
YES
NO
YES
YES
NO
Note
In the first test case, YouKn0wWho can perform the following operations (the erased elements are underlined): [1,2–,3]→[1–,3]→[3–]→[].
In the second test case, it is impossible to erase the sequence as i can only be 1, and when i=1, a1=2 is divisible by i+1=2.

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
ll power(ll n, ll x) {
	ll ans = 1;
	foi(n) {
		ans *= x;
	}
	return ans;
}
void solve() {
	ll n;
	cin >> n;
	vll a(n, 0);
	foi(n) {
		cin >> a[i];
	}
	while (a.size()) {
		ll idx = a.size() - 1;
		while (idx > -1 and a[idx] % (idx + 2) == 0) {
			idx--;
		}
		if (idx < 0) {
			cout << "No";
			return;
		}
		a.erase(a.begin() + idx);
	}
	cout << "Yes";
}


 
