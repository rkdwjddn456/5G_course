#include <stdio.h>

int main()
{
    int framescore[9+1][2+1] ={0, };  // using +1 is for no using index 0
    int framescore10[3+1] = {0, };
    
    int scores[10+1] ={0, };
    
    //1~9frame game
    for(int i=1; i<=9 ;++i)
    {
        //first bow
        printf("%d frame 1st bow:",i);
        scanf("%d",&framescore[i][1]);
        
        //(i-1) frame : spare --> find i-1 frame score
        if(framescore[i-1][1]!= 10 && framescore[i-1][1] + framescore[i-1][2] == 10 && i>=2)
        {
            scores[i-1] = scores[i-2]+ 10 + framescore[i][1];
            printf("#frame : %d score : %d\n",i-1,scores[i-1]);
        }
        //(i-2) frame : strike (i-1) frame : strike ---> find i-2 frmae score
        else if(framescore[i-2][1] == 10 && framescore[i-1][1] ==10 && i>=3)
        {
            scores[i-2] = scores[i-3] + 10 + 10 + framescore[i][1];
            printf("#frame : %d score : %d\n",i-2,scores[i-2]);
        }
        //second bow <---- first bow != 10
        
        if(framescore[i][1] != 10)
        {
            printf("%d frame 2nd bow",i);
            scanf("%d",&framescore[i][2]);
                    
            //(i-1) frame : strike --> find i-1 frame score
            if(framescore[i-1][1] == 10 && i>=2)
            {
                scores[i-1] = scores[i-2] + 10 + framescore[i][1] + framescore[i][2];
                printf("#frame : %d score: %d\n",i-1,scores[i-1]);
            } 
            // i frame : strike X , spare X --> find i frame score
            if(framescore[i][1] + framescore[i][2] < 10)
            {
                scores[i] = scores[i-1] + framescore[i][1] + framescore[i][2];
                printf("#frame : %d score : %d\n",i,scores[i]);               
            }
        }
    }
    
    // 10 frame game
    printf("10 frame 1st bow : ");
    scanf("%d", &framescore10[1]);
    
    if(framescore[9][1] != 10 && framescore[9][1] + framescore[9][2] == 10)
    {
        scores[9] = scores[8] + 10 + framescore[9][1];
        printf("#frame : %d score : %d\n",9,scores[9]);
    }
    else if(framescore[8][1] == 10 && framescore[9][1] == 10)
    {
        scores[8] = scores[7] + 10 + 10 + framescore[9][1];
        printf("#frame : %d score : %d\n",8,scores[8]);
    }
    printf("10 frame 2nd bow : ");
    scanf("%d", &framescore10[2]);
    
    if(framescore[9][1] == 10)
    {
        scores[9] = scores[8] + 10 + framescore10[1] + framescore10[2];
        printf("#frame : %d score : %d\n",9,scores[9]);
    }
    if(framescore10[1] + framescore10[2] < 10)
    {
        scores[10] = scores[9] + framescore10[1] + framescore10[2];
        printf("#frame : %d score : %d\n",10,scores[10]);
    }
    //if(framescore10[1] == 10 || framescore10[1] + framescore10[2] == 10)
    if(framescore10[1] + framescore10[2] >=10)
    {
        printf("10 frame 3rd bow :");
        scanf("%d", &framescore10[3]);
        
        scores[10] = scores[9] + framescore10[1] + framescore10[2] + framescore10[3];
        printf("#frame : %d score : %d\n",10,scores[10]);
    }
    return 0;
}
