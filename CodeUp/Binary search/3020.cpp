#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

struct mypair {
	int num;
	int idx;
	
	bool operator<(const struct mypair &rhs) const
	{
		return num < rhs.num;
	}
};


int bs(struct mypair data[],int size,int find);

int main()
{
	struct mypair* data;
	int* arr;
	int* tmp;
	int num;
	int yy;
	int n;
	int m;
	int i,j;
	int xx;
	
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	data = (mypair*)malloc(sizeof(mypair)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		data[i].idx = i;
		data[i].num = arr[i];
	}
	
	sort(data,data+n);
	
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&num);	
		printf("%d ",bs(data,n,num));
	}
	
	return 0;
}

int bs(struct mypair data[],int size,int find)
{
	int low = 0;
	int mid;
	int high = size-1;
	
	while(low <= high)
	{
		mid = (high+low)/2;
		if(data[mid].num > find) high = mid-1;
		else if(data[mid].num < find) low = mid+1;
		else return data[mid].idx+1;
	}
	
	return -1;
}
