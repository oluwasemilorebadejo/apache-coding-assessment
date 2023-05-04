int fn_recursive(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    return fn_recursive(n-3) + fn_recursive(n-2);
}
