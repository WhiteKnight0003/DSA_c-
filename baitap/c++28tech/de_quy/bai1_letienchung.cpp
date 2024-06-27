#include<stdio.h>
#include<stdlib.h>
#include"string.h"
#define tien_chung main 

typedef struct {
	char socancuoc[20];
	char hoten[20];
	char phong;
	int luong;
} nhanvien;
void nhapds(char tentep[], int *n, nhanvien *&nv){
	FILE *f=fopen("input.in","r");
	if(f==NULL){
		puts("loi doc tep");
		return ;
	}
	fscanf(f,"%dn",n);
	nv=(nhanvien*)malloc(sizeof(nhanvien)*(*n));;
	for(int i=0;i<*n;i++){
		fgets(nv[i].socancuoc,20,f);
		fgets(nv[i].hoten,20,f);
		fscanf(f,"%s\n%d\n",&nv[i].phong,&nv[i].luong);
	}
	fclose(f);
}
void tinhluong(int n, nhanvien *nv, FILE *f){
	int s[3]={0};
	for(int i=0;i<n;i++){
		if(strcmp("A",nv[i].phong)==0)
			s[0]+=nv[i].luong;
		else if(strcmp('B',nv[i].phong)==0)
			s[1]+=nv[i].luong;
		else if(strcmp('A',nv[i].phong)==0)
			s[2]+=nv[i].luong;
	}
	printf("Luong cua cac phong A, B , C lan luot la :\n luong_phong[A]= %d\nluong_phong[b] = %d\nluong_phong[C]c= %d",s[0],s[1],s[2]);
}

tien_chung(){
	char filename [50];
	int n;
	nhanvien *nv;
	FILE *f;
	nhapds(filename,&n,nv);
}