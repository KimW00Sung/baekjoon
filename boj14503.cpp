#include <iostream>
using namespace std;

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};
int N,M;

struct Robot{
    int r,c,d;
};

Robot robot;
int answer=0;

bool checkBack(int **room){
    int backD;
    if(robot.d == NORTH || robot.d == SOUTH){
        backD = 2-robot.d;
    }
    else{
        backD = 4-robot.d;
    }
    int backR = robot.r + dr[backD];
    int backC = robot.c + dc[backD];

    if(room[backR][backC]==1){
        return false;
    }
    else{
        robot.r = backR;
        robot.c = backC;
        return true;
    }
}
void clean(int **room){
    if(room[robot.r][robot.c]==0){
        room[robot.r][robot.c] = -1;//cleaning complete
        answer++;
    }
    int nextD = robot.d;
    int nextR, nextC;
    bool cleanAble = false;

    for(int i=0;i<4;i++){
        nextD = (nextD + 3) %4;
        nextR = robot.r + dr[nextD];
        nextC = robot.c + dc[nextD];

        if(room[nextR][nextC] ==0){
            robot.r = nextR;
            robot.c = nextC;
            robot.d = nextD;

            cleanAble = true;
            break;
        }
    }

    if(!cleanAble){
        if(!checkBack(room)){
            return;
        }
    }
    clean(room);
}
int main(){
    cin>>N>>M;
    cin>>robot.r>>robot.c>>robot.d;

    int **room = new int*[N];
    for(int i=0;i<N;i++){
        room[i]=new int[M];
    }

    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            cin>>room[i][k];
        }
    }
   
    clean(room);
    cout<<answer<<endl;
    return 0;
}