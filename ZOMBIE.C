void main()
{
	int n,a[30],i,b[20],c=0,d=0,e=0,f[20],g=0;
	clrscr();
	printf("please enter the no of cretures,fatal eagle \n");
	scanf("%d",&n);
	printf("enter the assigned power of creatures that you have seen\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("final sorted order and final creatures \n");
	for(i=0;i<6;i++)
	{
		if(a[i] % 2 == 0)
		{

			printf("%d ",a[i]);
			b[c]=a[i];
			c++;
		}
	}
	for(i=0;i<c;i++)
	{
		d=d+b[i];
	}
	printf("%d ",d);

	for(i=0;i<6;i++)
	{
		if(a[i]% 2 == 1)
		{

			printf("%d ",a[i]);
			f[e]=a[i];
			e++;
		}
	}
	for(i=0;i<e;i++)
	{
		g=g+f[i];
	}
	printf("%d",g);
	getch();

}