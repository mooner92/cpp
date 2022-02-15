#include <iostream>
#include <cstring>

using namespace std;

double area(int r){
    return 3.14*r*r;
}

char name[11] = {};


int letters = strlen("kimchi");

int main(){
    int n=3;
    cout << area(n) << '\n' << letters; // 글자의 개수인 6이 출력됨
    cin >> name;
    cout << "name is" << name;
}