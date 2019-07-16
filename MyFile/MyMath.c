int MyIntPow(int a,int b)
{
	int l=1;
	if(b==0)
	{
		return 1;
	}
	else
	{
		for(int i=1;i<=b;i++)
		{
			l=l*a;
		}
		return l;
	}
	
}