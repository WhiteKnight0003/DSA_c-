#include<bits/stdc++.h>
/*
int main(){
	FILE *fp;
	int n;
	float *x,*y;
	fp=fopen("same.txt","r");
	fscanf(fp,"%d\n",&n);
	x=(float*) malloc(sizeof(float)*n);
	y=(float*) malloc(sizeof(float)*n);
	for(int i=0;i<n;i++){
		fscanf(fp,"%f%f\n",&x[i],&y[i]);
		printf("(%.1f, %.1f) ", x[i],y[i]);
	}
	fclose(fp);
}
*/
/* đọc đa thức 

int main(){
	FILE *fp;
	int n;
	float *x;
	fp=fopen("same.txt","r");
	fscanf(fp,"%d\n",&n);
	x=(float*) malloc(sizeof(float)*n);
	for(int i=0;i<=n;i++){
		fscanf(fp,"%f\n",&x[i]);
		printf("%.1f^%d ",x[i],n-i);
	}
	fclose(fp);
}

// đọc chuỗi 
int main(){
	FILE *fp;
	char c[101];
	fp=fopen("same.txt", "r");
	fscanf(fp,"%c\n",&c);
	
}


*/


