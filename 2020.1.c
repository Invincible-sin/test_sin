/*�ַ�����R��L�Ĳ�  
ȫ��R:ֻ��Ҫ1 
ȫ��L:������ 
R����L:ֻ��Ҫ1
R����L:ֻ��Ҫ2 
L����R:
for(i=1;i<2E5;i++)//����������� 
			if(numr*i>numl+1)
				break;
*/   
#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,t,numl=0,numr=0,K=0;
	int ans[1000];
	char a[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		numl=0,numr=0;
		scanf("%s",a);
		for(j=0;j<1000;j++)
			if(a[j]=='R')
				numr++;
			else if(a[j]=='L')
				numl++;
			else
				break;
	//	printf("numl=%d,numr=%d\n",numl,numr);
		for(j=1;j<2E5;j++)//
			if(numl==0)//ֻ��R��dΪ1 
				{j=1;break;}
			else if(numr*j>numl)//R�ĸ�����d����L�ĸ��� 
				break;
		//printf("d=%d\n",j);
		ans[K++]=j;		
	}
	for(i=0;i<t;i++)
	printf("%d\n",ans[i]);
}
