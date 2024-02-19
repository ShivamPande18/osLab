//sjf preemptive

#include<stdio.h>

int main(){
int proCnt = 4;
int arrTime[4] = {0,5,3,7};
int exeTime[4] = {8,4,9,16};
int curProInd = 0;
int minInd =0;

for(int tick=0;tick<37;tick++)
{
	minInd = -1;
	for(int i=0; i<4; i++)
	{
		if(minInd==-1)
		{
			if(tick>=arrTime[i] && exeTime[i]>0) minInd = i;
		}
		else
		{
			if(tick>=arrTime[i] && exeTime[i]>0 && exeTime[minInd]>exeTime[i]) minInd = i;
		}
	}
	exeTime[minInd]--;
	printf("%d->%d\n",minInd,tick); 
}

return 0;
}
