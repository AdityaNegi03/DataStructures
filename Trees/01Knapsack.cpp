#include <bits.stdc++.h>

using namespace std;

int t[100][100];

int main()
{
    memset(t,-1,sizeOf(t));
}


int knapsack(int wt[], int val[], int w, int n)
{
  if(w==0||n==0)
  return 0;

  if(t[n][w]!=-1)
  return t[n][w];

  if(wt[n]<=w)
  return t[n][w]= max(val[n]+knapsack(wt,val,w-wt[n],n-1),knapsack(wt,val,w-wt[n],n-1));
  if(wt[n]>w)
  return t[n][w]=knapsack(wt,val,w-wt[n],n-1);
}