#include<iostream>
#include<vector>
#include<stack>
#include<stdlib.h>
#include<fstream>
#include<time.h>

#define M 50000

using namespace std;

class node
{
public:
node *link;
node();
unsigned long long int data;
};


class hash
{
	public:
	node *A[M];
	hash()
	{
		unsigned long long int j;
		for(j=0; j<M; j++)
		{
            //A[j]->link=new node;
			A[j]=new node;
		}
	}

	void insert(unsigned long long int key);

	node* search(unsigned long long int key);
	void del(unsigned long long int key);
};

