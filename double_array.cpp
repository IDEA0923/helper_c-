//двумерные мвссивы 
#include <iostream>
using namespace std;
int main(){
    int a [10][10];//объявление двумерного массива 
    // как его использовать :
    a [3][5] = 10;
    cout<<a[3][5]<<endl;
    //вообще массив может быть n-мерный 
    //пример
    int b [19][20][40][50];
    b[3][5][6][7] = 10;
    cout<<b[3][5][6][7]<<endl;
    return 0;
}