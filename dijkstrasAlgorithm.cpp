#include <iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(void)
{
	vector< vector< pair< int,int > > > v={{{2,6},{1,8}},
											{{3,5},{5,9}},
											{{4,8}},
											{},
											{},
											{{7,6}},
											{},
											{{6,6}}};

	int visit[8]={0},previous[8];
	int distance[8];
	distance[0]=0;
	previous[0]=-1;
	for (int i = 1; i < 8; ++i)
	{
		distance[i]=INT_MAX;
		previous[i]=-1;
	}













	stack< pair < int ,int > > s;
	s.push({0,0});
	while(!s.empty())
	{
		pair< int ,int> temp= s.top(),it;
		s.pop();
		visit[temp.first]=1;
		int len=v[temp.first].size();
		for(int i=0;i<len;i++)
		{
			it=v[temp.first][i];
			s.push(it);
			if(it.second+distance[temp.first]<distance[it.first]); 
			{
				distance[it.first]=it.second+distance[temp.first];
				previous[it.first]=temp.first;
			}

		}
	}									
	for(int i=0;i<8;i++)
	{
		cout<<"The distance from 0 -> ";
		cout<<i;
		cout<<" is ";
		cout<<distance[i]<<endl;
	}
	return 0;
}