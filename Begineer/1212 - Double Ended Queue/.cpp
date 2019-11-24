#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;
class MyDeque{

    int Mydec[500],frnt,rear,len;

public:
    MyDeque(int len){
        frnt=-1;
        rear=-1;
        this->len=len;

    }
    bool isEmpty(){
        return (frnt==-1);

    }

    bool isFull(){
        return (frnt==(rear+1)%len);
    }
    void pushFront(int val){

       /* if(isFull()){
            printf("The queue is full\n");
            return;
        }*/
        if(frnt==-1){
            frnt=rear=0;
        }
        else if(frnt==0)frnt=len-1;

        else frnt --;

        Mydec[frnt]=val;

    }
    void pushRear(int val){
        /*if(isFull()){
             printf("The queue is full\n");
             return;
        }*/
        if(frnt==-1){
            frnt=rear=0;
        }
        else rear=(rear+1)%len;

        Mydec[rear]=val;

    }

    int getFront(){
       /* if(isEmpty()){
             printf("The queue is empty\n");
             return -1;
        }*/

        return Mydec[frnt];
    }

    int getRear(){
       /* if(isEmpty()){
             printf("The queue is empty\n");
             return -1;
        }*/

        return Mydec[rear];
    }

    void popFront(){
       /* if(isEmpty()){
             printf("The queue is empty\n");
             return;
        }*/
        if(frnt==rear)frnt=rear=-1;
        else frnt=(frnt+1)%len;
        return;
    }

    void popRear(){
       /* if(isEmpty()){
            printf("The queue is empty\n");
            return;
        }*/
        if(frnt==rear)frnt=rear=-1;
        else if(rear==0)rear=len-1;
        else rear--;

        return;
    }

};

int main()
{

   int a,b,c,m,n,test,val,t=0;

   cin>>test;
   string pushrear="pushRight",pushfront="pushLeft";
   string poprear="popRight",popfront="popLeft",tem;
   while(test--){
        scanf("%d %d",&m,&n);

        MyDeque dq(m);

        printf("Case %d:\n",++t);

        for(int i=0;i<n;i++){
            cin>>tem;

            if(tem==pushrear){
                scanf("%d",&val);

                if(dq.isFull()){
                    printf("The queue is full\n");
                }
                else{
                    printf("Pushed in right: %d\n",val);

                     dq.pushRear(val);
                }

            }
            else if(tem==pushfront){
                scanf("%d",&val);

                if(dq.isFull()) printf("The queue is full\n");
                else {
                        printf("Pushed in left: %d\n",val);
                        dq.pushFront(val);
                }
            }
            else if(tem==popfront){
                if(dq.isEmpty())printf("The queue is empty\n");
                else{
                    printf("Popped from left: %d\n",dq.getFront());
                }  dq.popFront();
            }
            else{
                if(dq.isEmpty()) printf("The queue is empty\n");

                else {
                        printf("Popped from right: %d\n",dq.getRear());
                        dq.popRear();

                }
            }
        }
   }
    //free();   //if pointer array
    return 0;
}
