#include<stdio.h>
int main()
{
	int math=45,chem=34,phy=66,eng=89,history=56,total;
	float per;
	total=math+chem+phy+eng+history;
	per=(total/500.0)*100;
	printf("total and percentage of 5 subject is %d &%d",total,per);
	return 0;
}