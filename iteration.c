int fn_iterative(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    int fn_3 = 0;
    int fn_2 = 1;
    int fn_1 = 2;
    int fn = 0;
    
    for (int i = 3; i <= n; i++)
    {
        fn = fn_3 + fn_2;
        fn_3 = fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
    }
    
    return fn;
}
