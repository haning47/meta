#include<iostream>
using namespace std;
void visit( int[],void (*)(int[]));//�ѼƬO��� visit(�}�C�A���)
void a(int[]);
int main(){
    int maze[]={5,4,3,2,1};
    visit(maze,a); //�Nmaze�}�C�ǵ�visit�A�éI�sa���
}

void a(int maze[]) {
    for(int i=0;i<5;i++) cout <<maze[i]<<" ";
    printf("\n");

}
void visit(int mz[],void (*take)(int[])) {
      take(mz); //�I�sa��ơA�N�J�ѼƬ�mz
}
