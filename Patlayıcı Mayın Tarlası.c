#include<stdio.h>
#include<string.h>
#include <conio.h>
int puan=10;
struct mayins
{
    char ptip[8][8];
    int ptesir;
    int tespit;
}alan[8][8],alan2[8][8];
int main()
{
	basla(alan);
	system("pause");
	return 0;
}
void basla(struct mayins alan[8][8])//oyun ilklendirilir rastgele mayýnlar atanýr.
{
	int i,j,r=0,r2=0,sr,st;
	char *gtips;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			strcpy(alan[i][j].ptip,"#");
			alan[i][j].ptesir=0;
			alan[i][j].tespit=0;
			strcpy(alan2[i][j].ptip,"#");
		}
    }
    srand(time(0));
    while(r<2)
    {
    	sr=rand()%8;
    	st=rand()%8;
    	gtips=alan[sr][st].ptip;
    	if(*gtips=='#')
    	{
    	    strcpy(alan[sr][st].ptip,"M");
    	    alan[sr][st].ptesir=2;
		    alan[sr][st].tespit=0;
		    printf("MMMMM===SATIR=%d SUTUN=%d\n",sr,st);
	        r++;
	        r2++;
		}
		else
		{
			if(r2==0)
			{
				r=0;
			}
			else if(r2==1)
			{
				r=1;
			}
		}
	}
	r=0;
	while(r<2)
    {
    	sr=rand()%8;
    	st=rand()%8;
    	gtips=alan[sr][st].ptip;
    	if(*gtips=='#')
    	{
    	    strcpy(alan[sr][st].ptip,"D");
    	    alan[sr][st].ptesir=4;
		    alan[sr][st].tespit=0;
		    printf("DDDDD===SATIR=%d SUTUN=%d\n",sr,st);
	        r++;
	        r2++;
		}
		else
		{
			if(r2==0)
			{
				r=0;
			}
			else if(r2==1)
			{
				r=1;
			}
		}
	}
	r=0;
	while(r<2)
    {
    	sr=rand()%8;
    	st=rand()%8;
    	gtips=alan[sr][st].ptip;
    	if(*gtips=='#')
    	{
    	    strcpy(alan[sr][st].ptip,"R");
    	    alan[sr][st].ptesir=6;
		    alan[sr][st].tespit=0;
		    printf("RRRRR===SATIR=%d SUTUN=%d\n",sr,st);
	        r++;
	        r2++;
		}
		else
		{
			if(r2==0)
			{
				r=0;
			}
			else if(r2==1)
			{
				r=1;
			}
		}
	}
	r=0;
    while(r<2)
    {
    	sr=rand()%8;
    	st=rand()%8;
    	gtips=alan[sr][st].ptip;
    	if(*gtips=='#')
    	{
    	    strcpy(alan[sr][st].ptip,"A");
    	    alan[sr][st].ptesir=8;
		    alan[sr][st].tespit=0;
		    printf("AAAAA===SATIR=%d SUTUN=%d\n",sr,st);
	        r++;
	        r2++;
		}
		else
		{
			if(r2==0)
			{
				r=0;
			}
			else if(r2==1)
			{
				r=1;
			}
		}
	}
	r=0;
    while(r<1)
    {
    	sr=rand()%8;
    	st=rand()%8;
    	gtips=alan[sr][st].ptip;
    	if(*gtips=='#')
    	{
    	    strcpy(alan[sr][st].ptip,"N");
    	    alan[sr][st].ptesir=10;
		    alan[sr][st].tespit=0;
		    printf("NNNNN===SATIR=%d SUTUN=%d\n",sr,st);
	        r++;
	        r2++;
		}
		else
		{
		   r=0;
		}
	}
	printf("\n");
	mayingoster(alan2);
	printf("Can=%d\n",puan);
	patla(alan,alan2);
}
void patla(struct mayins alan[8][8],struct mayins alan2[8][8])//Hamle yapýlýr
{
	int o,v;
	char *ptip;
	int *ptes;
	int y;
	while(puan>0)
	{
		printf("0-7 Arasi Satir gir=");
	 	scanf("%d",&v);
		printf("0-7 Arasi Sutun gir=");
		scanf("%d",&o);
		ptip=alan[v][o].ptip;
		ptes=alan[v][o].tespit;
		if(*ptip=='M')
		{
			if(ptes==0)
			{
		        strcpy(alan2[v][o].ptip,"M");
		        alan[v][o].tespit=1;
		        puans(alan,v,o,puan);
		        printf("\n");
		        printf("Can=%d\n",puan);
			}
			else
			{
				printf("Bomba Patladildi\n");
			}
		}
		else if(*ptip=='D')
		{
	        if(ptes==0)
			{
		        strcpy(alan2[v][o].ptip,"D");
		        alan[v][o].tespit=1;
		        puans(alan,v,o,puan);
		        printf("\n");
		        printf("Can=%d\n",puan);
			}
			else
			{
				printf("Bomba Patladildi\n");
			}
		}
		else if(*ptip=='R')
		{
			if(ptes==0)
			{
		        strcpy(alan2[v][o].ptip,"R");
		        alan[v][o].tespit=1;
		        puans(alan,v,o,puan);
		        printf("\n");
		        printf("Can=%d\n",puan);
			}
			else
			{
				printf("Bomba Patladildi\n");
			}
		}
		else if(*ptip=='A')
		{
			if(ptes==0)
			{
		        strcpy(alan2[v][o].ptip,"A");
		        alan[v][o].tespit=1;
		        puans(alan,v,o,puan);
		        printf("\n");
		        printf("Can=%d\n",puan);
			}
			else
			{
				printf("Bomba Patladildi\n");
			}
		}
		else if(*ptip=='N')
		{
		    if(ptes==0)
			{
		        strcpy(alan2[v][o].ptip,"N");
		        alan[v][o].tespit=1;
		        puans(alan,v,o,puan);
		        printf("\n");
		        printf("Can=%d\n",puan);
			}
			else
			{
				printf("Bomba Patladildi\n");
			}
		}
		else
		{
			tara(v,o,alan2,alan);
			printf("\n");
			printf("Can=%d\n",puan);
		}
		mayingoster(alan2);
		y=tamamlama(alan2);
		if(y==1)
		{
			break;
		}
	}
	if(y==1)
	{
		mayingoster(alan2);
		printf("Oyunu kazandin!\n");
	}
	else
	{
		printf("Oyunu Kaybettin\n");
	}
}
void puans(struct mayins alan[8][8],int v,int o)//Puaný günceller
{
	int *pts;
	pts=&(alan[v][o].ptesir);
	puan=puan-*pts;
}
void tara(int v,int o,struct mayins alan2[8][8],struct mayins alan[8][8])//Komþularý tarar
{
	char *ttip;
	ttip=alan[v][o].ptip;
	strcpy(alan2[v][o].ptip,"-");
	if(v==0&&o==0)
	{
		ttip=alan[v][o+1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v][o+1].ptip,"-");
		}
		ttip=alan[v+1][o].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v+1][o].ptip,"-");
		}
		ttip=alan[v+1][o+1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v+1][o+1].ptip,"-");
		}
	}
	else if(v==7&&o==0)
	{
		ttip=alan[v-1][o].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v-1][o].ptip,"-");
		}
		ttip=alan[v][o+1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v][o+1].ptip,"-");
		}
		ttip=alan[v-1][o+1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v-1][o+1].ptip,"-");
		}
	}
	else if(v==0&&o==7)
	{
		ttip=alan[v][o-1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v][o-1].ptip,"-");
		}
		ttip=alan[v+1][o].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v+1][o].ptip,"-");
		}
		ttip=alan[v+1][o-1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v+1][o-1].ptip,"-");
		}
	}
	else if(v==7&&o==7)
	{
		ttip=alan[v-1][o].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v-1][o].ptip,"-");
		}
		ttip=alan[v][o-1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v][o-1].ptip,"-");
		}
		ttip=alan[v-1][o-1].ptip;
		if(*ttip=='#')
		{
			strcpy(alan2[v-1][o-1].ptip,"-");
		}
	}
	else
	{
		if(o==0)
		{
			ttip=alan[v-1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o].ptip,"-");
			}
			ttip=alan[v-1][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o+1].ptip,"-");
			}
			ttip=alan[v][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v][o+1].ptip,"-");
			}
			ttip=alan[v+1][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o+1].ptip,"-");
			}
			ttip=alan[v+1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o].ptip,"-");
			}
		}
		else if(o==7)
		{
			ttip=alan[v-1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o].ptip,"-");
			}
			ttip=alan[v-1][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o-1].ptip,"-");
			}
			ttip=alan[v][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v][o-1].ptip,"-");
			}
			ttip=alan[v+1][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o-1].ptip,"-");
			}
			ttip=alan[v+1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o].ptip,"-");
			}
		}
		else
		{
			ttip=alan[v-1][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o-1].ptip,"-");
			}
			ttip=alan[v-1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o].ptip,"-");
			}
			ttip=alan[v-1][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v-1][o+1].ptip,"-");
			}
			ttip=alan[v][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v][o-1].ptip,"-");
			}
			ttip=alan[v+1][o-1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o-1].ptip,"-");
			}
			ttip=alan[v+1][o].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o].ptip,"-");
			}
			ttip=alan[v+1][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v+1][o+1].ptip,"-");
			}
			ttip=alan[v][o+1].ptip;
			if(*ttip=='#')
			{
				strcpy(alan2[v][o+1].ptip,"-");
			}
		}
	}
}
void mayingoster(struct mayins alan2[8][8])//Mayýn Tarlasýný ekrana yazar
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%s ",alan2[i][j].ptip);
		}
		printf("\n");
	}
	printf("\n");
}
int tamamlama(struct mayins alan2[8][8])//Tüm karelerin açýlýp açýlmadýðýný kontrol eder
{
	int m,n,sayac;
	char *ttips;
	for(m=0;m<8;m++)
	{
		for(n=0;n<8;n++)
		{
			ttips=alan2[m][n].ptip;
			if(*ttips=='-')
			{
				sayac++;
			}
		}
	}
	if(sayac==55)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
