#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T; cin>>T;
    int B,W,X,Y,Z;

    for(int test=0;test<T;test++){
        cin>>B>>W>>X>>Y>>Z;
        int score=0;
        //W개의 흰 공+흰 상자, 검은상자 X점, 흰 상자 Y점, 반대 색 공 넣어져있으면 Z점
        // if(Z>X && Z>Y)
        // {
        //     if(B>=W)
        //     {
        //         score+=Z*W*2 + (B-W)*X;
        //     }
        //     else
        //     {
        //         score+=Z*B*2 + (W-B)*Y;
        //     }
        // }
        // else
        // {        
        //     if(X>Y){
        //         if(Y>Z)
        //         {
        //             //X>Y>Z
        //             score+=B*X + W*Y;
        //         }
        //         else
        //         {
        //             //X>Z>Y
        //             if(X>=Z+Y){score+=B*X + W*Y;}
        //             else{score+= (Z+Y);}
        //         }
        //     }
        //     else{
        //         if(X>Z)
        //         {
        //             //Y>X>Z
        //             score+=B*X + W*Y;
        //         }
        //         else{
        //             //Y>Z>X

        //         }
        //     }

        // }
        score+= max(B*X+W*Y, B>W ? Z*W*2+(B-W)*X : Z*B*2+(W-B)*Y);
        cout<<score<<endl;
    }
    return 0;
}