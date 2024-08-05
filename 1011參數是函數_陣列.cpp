#include<iostream>
using namespace std;
void visit( int[],void (*)(int[]));//把计琌ㄧ计 visit(皚ㄧ计)
void a(int[]);
int main(){
    int maze[]={5,4,3,2,1};
    visit(maze,a); //盢maze皚肚倒visit㊣aㄧ计
}

void a(int maze[]) {
    for(int i=0;i<5;i++) cout <<maze[i]<<" ";
    printf("\n");

}
void visit(int mz[],void (*take)(int[])) {
      take(mz); //㊣aㄧ计把计mz
}
