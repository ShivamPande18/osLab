//round robin

#include<stdio.h>

int main(){
int proCnt = 4;
int arrTime[4] = {0,5,3,7};
int exeTime[4] = {8,4,9,16};
int curProInd = 0;
int tick =0;
int rrInd=0;
int def =1;
while(tick<37)
{
	if(tick>=arrTime[rrInd] && exeTime[rrInd]>0)
	{
		if(exeTime[rrInd]>=3) def = 3;
		else def = exeTime[rrInd];
		
		exeTime[rrInd]-=def;
	printf("%d*%d\n",tick,rrInd);
		tick+=def;
	}
	def=0;
	rrInd++;
	if(rrInd>3) rrInd = 0;
}

return 0;
}
