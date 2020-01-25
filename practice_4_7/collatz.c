void collatz(int number)
{
    while(number>1)
    {
        printf("%d ", number);
        if(number%2==0)
        {
            number/=2;
        }
        else
        {
            number=number*3+1;
        }
    }
}
