#include <stdio.h>
int nto(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
	int n,s=0,i=2;
	scanf("%d",&n);
	while(s<n){
		if(nto(i)){
			printf("%d\n",i);
			s++;
		}
		i++;
	}
}