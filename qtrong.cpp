#include<bits/stdc++.h>
using namespace std;

int n=0;
int ncat =0; // global var
int ndog =0;

int getcat(){
	return ncat;
}

class animal{
    public:
    	string id, color;
	    float weight;
	    int year;

	   	animal(){
	   	id = color ="";
	   	weight=0;
	   	year=0;
	    }
        virtual void speak(){
    		//cout<<"keu"<<endl;
    	}
    	virtual ~animal(){}; // hàm ảo
};

class cat : public animal{
	public :
	  cat(): animal(){
	  	ncat++;
	  }
	  ~cat(){
	  	--ncat;
	  };
	  void  speak(){
	  	cout<<"meo meo"<<endl;
	  }
	  int getCat(){
	  	 return ncat; 
	  }
};

class dog : public animal{
	public :
	dog(): animal(){
	  	ndog++;
	  }
     int getDog(){
	  	 return ndog; 
	  }
	void speak(){
		cout<<"gau gau"<<endl;
	}
	~dog(){
		--ndog;
	};
}; 


int main(){
	//cat c;// cấp phát tĩnh - k xóa được 
	//c.speak();
	//dog d;
	//d.speak();
	animal *c1 = new cat();  // gọi đối tượng lớp cha - xóa bằng delete
	// new - delete : 1 cặp

	/* -> lop cha */
	//c1->speak();
	//animal *d1 = new dog;
	//d1->speak();

    //cout << "so meo hien tai: \n";
	//cout<< c.getCat()<<endl;
	//cout << "so dog hien tai: \n";
	//cout<<d.getDog()<<endl;

    cout<<"Test1"<<endl;
    //delete c1 moi dung 
	delete[] c1;
	cout<<"Test2"<<endl;
	c1 = nullptr; //NULL

	//cout << "so meo hien tai sai khi xoa: \n";
	//cout<< c.getCat()<<endl;

	animal *c2 = new cat[5];
	cout<< getcat()<<endl; // để biến toàn cục để trả về 
	//delete c2 - xoa 1
	// delete[] - *c
	delete[] c2; // xóa full
	c2 = nullptr;
	cout<< getcat()<<endl;
	return 0;
}

