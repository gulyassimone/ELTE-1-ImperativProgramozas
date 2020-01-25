int palindrom(int number)
{
    int t=number;
    int r=0;
    while(t>0)
    {
        r*=10;
        r+=t%10;
        t/=10;
    }
    return r==number?1:0;
}
