/*
C. Bricks and Bags
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n bricks numbered from 1 to n. Brick i has a weight of ai.

Pak Chanek has 3 bags numbered from 1 to 3 that are initially empty. For each brick, Pak Chanek must put it into one of the bags. After this, each bag must contain at least one brick.

After Pak Chanek distributes the bricks, Bu Dengklek will take exactly one brick from each bag. Let wj be the weight of the brick Bu Dengklek takes from bag j. The score is calculated as |w1−w2|+|w2−w3|, where |x| denotes the absolute value of x.

It is known that Bu Dengklek will take the bricks in such a way that minimises the score. What is the maximum possible final score if Pak Chanek distributes the bricks optimally?

Input
Each test contains multiple test cases. The first line contains an integer t (1≤t≤2⋅104) — the number of test cases. The following lines contain the description of each test case.

The first line of each test case contains an integer n (3≤n≤2⋅105) — the number of bricks.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the weights of the bricks.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, output a line containing an integer representing the maximum possible final score if Pak Chanek distributes the bricks optimally.

Example
inputCopy
3
5
3 1 5 2 3
4
17 8 19 45
8
265 265 265 265 265 265 265 265
outputCopy
6
63
0
Note
In the first test case, one way of achieving a final score of 6 is to do the following:

Put bricks 1, 4, and 5 into bag 1.
Put brick 3 into bag 2.
Put brick 2 into bag 3.
If Pak Chanek distributes the bricks that way, a way Bu Dengklek can take the bricks is:

Take brick 5 from bag 1.
Take brick 3 from bag 2.
Take brick 2 from bag 3.
The score is |a5−a3|+|a3−a2|=|3−5|+|5−1|=6. It can be shown that Bu Dengklek cannot get a smaller score from this distribution.

It can be shown that there is no other distribution that results in a final score bigger than 6.


*/
