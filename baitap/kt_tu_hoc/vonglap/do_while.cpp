#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int random_num;
    
    do {
        random_num = rand() % (4 + 1 - 0) + 0;
        cout << random_num << endl;
    } while (random_num != 4);
    
    cout << "end";
    return 0;
}
