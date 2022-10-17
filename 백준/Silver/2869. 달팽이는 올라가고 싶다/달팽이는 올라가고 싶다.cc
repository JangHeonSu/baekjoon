#include <cstdio>

int main()
{
	int A, B, V,count=0;
	int i, t, k;
	scanf("%d %d %d", &A, &B, &V);
	
	t = V / (A - B);
	if ((V % (A - B)) == 0)
	{
		while (1) {
			if ((A - B) * (t-1) + B < V)
			{
				printf("%d", t);
				break;
			}
			else if ((A - B) * (t-1) + B > V)
			{
				t -= 1;
			}
			else
			{
				printf("%d", t - 1);
				break;
			}
		}
	}
	else 
	{
		while (1) {
			if ((A - B) * t + B < V)
			{
				printf("%d", t+1);
				break;
			}
			else if ((A - B) * t + B > V)
			{
				t -= 1;
			}
			else
			{
				printf("%d", t );
				break;
			}
		}
	}

	return 0;
}
