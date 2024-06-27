#include<bits/stdc++.h>
using namespace std;

#define ll long long

class Job{
private:
	int JobId, Deadline, Profit;
public:
	Job(){
		JobId=Deadline=Profit=0;
	}
	friend istream& operator >> (istream &in,Job &a){
		in>>a.JobId>>a.Deadline>>a.Profit;
		return in;
	}
	int getJobId(){
		return JobId;
	}
	int getDeadline(){
		return Deadline;
	}
	int getProfit(){
		return Profit;
	}
};

bool cmp(Job a, Job b){
	return a.getProfit() > b.getProfit();
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		Job *a = new Job[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);

		bool visited[n];
		memset(visited, false, sizeof(visited));

		ll res=0, sum=0;
		// duyệt qua từng mốc time
		for(int i=0;i<=n-1;i++){
			// doi voi moi job thu i
			// xet cac moc time deadline -1 -> 0 
			for(int j=a[i].getDeadline()-1;j>=0;j--){
				if(visited[j]== false){
					visited[j] = true; // da co cong viec duoc thu hien
					sum+=a[i].getProfit();
					break;
				}
			}
		}

		
		for(int i=0;i<n;i++){
			if(visited[i]){
				++res;
			}
		}
		cout<<res<<" "<<sum<<endl;
	}
	return 0;
}

/// ý tưởng thuật toán là ban đầu thời gian bắt đầu công việc là 0 - đến cái giờ max 
/* ở test 1
1 4 20
2 1 10
3 1 40
4 1 30

mỗi công việc có thời gian hoàn thành là 1 giờ 
công việc 0 sẽ phải nộp hạn tại 1h tức công việc có Deadline 1 chỉ có thể chọn 1 lần còn công việc có deadline 4 chỉ có 1 lần nên t chọn luôn



ở test 2
1 2 100
2 1 19
3 2 27
4 1 25
5 1 15

sort lại 
1 2 100
3 2 27
4 1 25
2 1 19
5 1 15

công việc max ở đây có hạn deadline là 2 
- tối đa ta có thể chọn 2 công việc loại này và không chọn công việc 1 nếu nó Profit max
*/