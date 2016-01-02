#include <iostream>
using namespace std;

int main()
{
	int T;                  // setting up number of test cases
	cin >> T;
	long int *Ot = NULL;    // creating output dynamic array with T slots
	Ot = new long int[T];
	int m;                  // real code begins here with T iterations
	for (m=0;m<T;m++)
	{
	int Q;                  // creating a dynamic array for answerkey of questions 
	cin >> Q;
	char *q= NULL;
	q = new char[Q];
	int i;
	for(i=0;i<Q;i++)        
	{
	  cin >> q[i];       
	}
	char *a= NULL;           // creating a dynamic array for answer actually given to questions 
	a = new char[Q];
	int j;
	for(j=0;j<Q;j++)
	{
	  cin >> a[j];
	}
	long int *p=NULL;          // entering the prize money corresponding to correct answers
	p = new long int[Q+1];
	int k;
	for(k=0;k<=Q;k++)
	{
	  cin >> p[k];
	}
	int n;                     // finding out the correctness of answers
	long int z=0;
	for (n=0;n<Q;n++)
	{
		if (a[n]==q[n])
	{
		z=z+1;               // counting of number of correct responses
	}
	}
	if (z==Q)           // if all answers are correct
        {
        Ot[m]=p[z];
        break;
        }  
        long int max;         // finding the maximum prize money that can be won with given answers
        int f;
        max=p[0];
        for (f=0;f<z+1;f++)
        {
        if(p[f] > max)
        {
            max=p[f];
        }
        }
        Ot[m]=max;
	}
	int b;                    // outputing the results for all test cases
	for (b=0;b<T;b++)
	{
	cout << Ot[b]<<endl;
	}
	return 0;
}
	
