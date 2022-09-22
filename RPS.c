#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int rps(){
    srand(time(NULL));
    return rand()%3;

}

int main(){
    int r,a;
    int p=0,c=0;
    char n[25];
    printf("****** ROCK PAPER SCISSORS *******\n");
    printf("Enter Player name :\n");
    gets(n);
    printf("Enter 0 for Rock. \n");
    printf("Enter 1 for Paper.\n");
    printf("Enter 2 for Scissors.\n");
    for(int i=0;i<3;i++){
        r=rps();
        printf("Your Input :");
        scanf("%d",&a);
        if(r==0){        //rock
            switch(a){
                case(0):   
                    break;
                case(1):
                    p=p+1;
                    break;
                case(2):    
                    c=c+1;
                    break;
            }
        }
        else if(r==1){     //paper
            switch(a){
                case(0):
                    c=c+1;
                    break;
                case(1):
                     break;
                case(2):
                    p=p+1;
                    break;

            }
        }
        else if(r==2){    //scissor
            switch(a){
                case(0):
                    p=p+1;
                    break;
                case(1):
                    c=c+1;
                    break;
                case(2):
                    break;

            }
        }
    }

    printf("Final Results -->\n");
    printf("%s : %d\n",n,p);
    printf("Computer : %d\n",c);
    if(p>c){
        printf("Winner : %s\n",n);

    }
    else if(c>p){
        printf("Winner : Computer\n");
    }
    else{
        printf("Draw!\n");
    }
}

    
