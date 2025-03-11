

/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

X. The maximum path-sum
time limit per test1 second
memory limit per test256 megabytes
Given a matrix A
 of size N
*M
. Print the maximum sum of numbers that can be obtained when you take a path from A1,1
 to AN,M
.

If you stay in Ai,j
 you can only go to :

Ai+1,j
 if and only if i≤N
Ai,j+1
 if and only if j≤M
Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and M
 (1≤N,M≤10)
 N
 donates number of rows and M
 donates number of columns.

Next N
 lines each of them will contain M
 numbers (−105≤Ai,j≤105)
.

Output
Print the maximum sum of numbers can be obtained.

Example
InputCopy
3 3
5 2 4
1 3 5
9 2 7
OutputCopy
24


*/