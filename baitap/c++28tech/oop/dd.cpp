#include<bits/stdc++.h>
using namespace std;

void docfile(FILE *f, int *n,int *m, float a[], float b[]){
	fscanf(f,"%d%d\n",n,m);
	a = (float*)malloc(sizeof(float)*(*n));
	b = (float*)malloc(sizeof(float)*(*m));
	for(int i=0;i< *n;i++)
		fscanf(f,"%f ",&a[i]);
	for(int j=0;j<*m; j++)
		fscanf(f,"%f ",&b[j]);
	fclose(f);
}

void indathuc(int n, int m , float a[], float b[]){
	 for(int i=0;i<n;i++)
	 	cout<<a[i]<<" ";
	 cout<<endl;
	  for(int i=0;i<m;i++)
	 	cout<<b[i]<<" ";
	 cout<<endl;
}
void infile(int n, int m , float *a, float *b, float d1, float d2){
		float P=0, Q=0;
		for(int i=0;i<n;i++)
			P+=a[i]*pow(d1,i);
		for(int i=0;i<m;i++)
			Q+=a[i]*pow(d2,i);
		if(P-Q <0) cout<< "Khong ton tai gia tri S"<<endl;
		else{
		   float S = sqrt(P-Q);
		   cout<<S<<endl;
	}
}
int main(){
	int m, n;
	float a[100], b[100];

	FILE *in = fopen("eeee.txt", "r");
	docfile(in,&n,&m,a,b);
	indathuc(n,m,a,b);
	float d1, d2;
	cout<<"Nhap vao d1, d2 : "; 
	cin>>d1>>d2;
	infile(n,m,a,b,d1,d2);
	return 0;
}