int euc_lnko (int a, int b)
{
    int tmp;
    if(a<0) a=-a;
    if(b<0) b=-b;

    while (b>0)
    {
        tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}
