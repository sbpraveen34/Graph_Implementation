#include <iostream>
#include <vector>
template <class T>
class graph
{
	vector<T> node;
	vector< vector<int> > edge;
	int size;
	graph( int n)     // n is number of nodes.
	{
		size=n;
	}
	void insert(int u, int v, int weight)
	{
		if(u <= n && v <= n)
		{
			
};
