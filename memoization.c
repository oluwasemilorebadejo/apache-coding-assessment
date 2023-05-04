int memoization_helper(int n, int *memo)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    if (memo[n] != -1)
        return memo[n];
    
    memo[n] = memoization_helper(n-3, memo) + memoization_helper(n-2, memo);
    
    return memo[n];
}

int fn_memoization(int n)
{
    int memo[n+1];
    memset(memo, -1, sizeof(memo));
    
    return memoization_helper(n, memo);
}
