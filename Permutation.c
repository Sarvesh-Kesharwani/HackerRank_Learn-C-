#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *track;

void Swap(char *a,char *b)
{
  char *temp;
  temp=a;
  a=b;
  b=temp;
}

int next_permutation(int n, char **s)
{
  if(n==2)
  {
    if(s[0]==s[1])
      return 0;
    else
    {
      Swap(s[0],s[1]);
      return 1;
    }
  }

int i;
  for(i=track[n-2-1];i<n;)
  {
    track[n-2-1]++;

    if(s[0] != s[i])
    {
      Swap(s[0],s[i]);
    }
      next_permutation(n-1,s++);
  }
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
/////////////////////////////////////
  track = calloc(n-2,sizeof(int));
/////////////////////////////////////
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
