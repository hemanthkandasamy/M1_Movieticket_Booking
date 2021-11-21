seat=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seat+i)=(int *)calloc(101,sizeof(int ));
	int x;
	while(x!=5)
	{
		choice=choice1();
		switch(choice)
		{
			case 1:
				price=changeprize(price);
				break;
			case 2:
				details();
				break;	
			case 3:	
				slection=movie();
				reservation(seat[slection-1],price,slection);	
				count++;
				break;
			case 4:
				slection=cmovie();	
				cancel(seat[slection-1]);	
				break;
			case 5:
				x=5;
				break;
