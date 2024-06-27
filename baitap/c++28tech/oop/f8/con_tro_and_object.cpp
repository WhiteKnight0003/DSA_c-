#include<bits/stdc++.h>
using namespace std;

typedef struct{
	char ht[30],truong[3];
	float diem;
}thisinh;

void tinhtrungbinh(thisinh *ts, int n,FILE *f){
	int n1=0 , n2=0, n3=0, n4=0;
	float a[5];
	a[1]=a[2]=a[3]=a[4]=0;
	for(int i=0;i<n;i++){
		if(strcmp(ts[i].truong,"A1")==0){
			a[1]+=ts[i].diem;
			n1++;
		}
		else if(strcmp(ts[i].truong,"A2")==0){
			a[2]+=ts[i].diem;
			n2++;
		}
		else if(strcmp(ts[i].truong,"A3")==0){
			a[3]+=ts[i].diem;
			n3++;
		}
		else if(strcmp(ts[i].truong,"A4")==0){
			a[4]+=ts[i].diem;
			n4++;
		}
	}

	sort(a+1,a+5);
	for(int i=0;i<n;i++)
		if(ts[i].diem == a[1])
	      cout<<"truong co diem thap nhat la : "<<ts[i].truong<<endl;
    

	if(n1==0)
		fprintf(f,"truong A1 khong tham gia cuoc thi\n");
	else fprintf(f,"tong diem cua truong A1 la : %.2f\n",a[1]);

	if(n2==0)
		fprintf(f,"truong A2 khong tham gia cuoc thi\n");
	else fprintf(f,"tong diem cua truong A2 la : %.2f\n",a[2]);

	if(n3==0)
		fprintf(f,"truong A3 khong tham gia cuoc thi\n");
	else fprintf(f,"tong diem cua truong A3 la : %.2f\n",a[3]);

	if(n4==0)
		fprintf(f,"truong A4 khong tham gia cuoc thi\n");
	else fprintf(f,"tong diem cua truong A4 la : %.2f\n",a[4]);


}

void timkiem(thisinh *ts, int n){
	char ho[10];
	cout<<"nhap vao ho ten can tim kiem : ";
	gets(ho);

	for(int i=0;i<n;i++)
	   if(strncmp(ts[i].ht,ho,3)==0)
		 cout<<"diem cua thi sinh vua nhap la : "<<ts[i].diem<<endl;
}

int main(){
	FILE *in,*out;
	in=fopen("ffff.txt","r");
	if(in == NULL)
		cout<<"loi doc tep !";
	int n;
	fscanf(in,"%d\n",&n);

	thisinh *ts = (thisinh*)malloc(sizeof(thisinh)*(n));
	for(int i=0;i<n;i++){
		fgets(ts[i].ht,30,in);
		fgets(ts[i].truong,3,in);
		fscanf(in,"%f\n",&ts[i].diem);
	}
	fclose(in);

	out=fopen("sss.txt","w");
	tinhtrungbinh(ts,n,out);	
	fclose(out);
	timkiem(ts,n);
	return 0;
}