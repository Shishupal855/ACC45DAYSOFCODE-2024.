#include <stdio.h>
int main(void) {
int t,n,i,j;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
int s[n],min;
char v[n+1];
for(j=0;j<n;j++){
scanf("%d",&s[j]);}
min=101;
scanf("%s",v);
for(j=0;j<n;j++){
if(v[j]=='0'){
if(s[j]<min){
min=s[j];}}}
printf("%d\n",min);
	}
	return 0;
}