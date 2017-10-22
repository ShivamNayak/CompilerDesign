int x;
int main(int argc)
{
	int c,a;
	a = 10;
	switch(c){
		case 1:
			a = a + a;
			break;
		case 2:
			a = a - a;
		case 3:
			a = a * a;
		default:
			a = a - a;
	}
	if (a > c)
	{
		int x = 50;
		for (int i = 0; i < 10; ++i)
		{
			if (i)
			{
				i = i + 10;
			}
			else{
				i = i - 2;
				int j;
				switch(i){
					case 1:
						j = j - 5;
					case 2:
						j = j + 6;
					case 3:
						j = j - 3;
					default:
						j = 0;
				}
			}
		}
	}
}