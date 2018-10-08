#include <stdio.h>
int main()
{
    int choice;
    int width;
    int height;
    int type;

    while(1)
        {
            printf("1. Rectangle\n");
            printf("2. Vertical Triangle\n");
            printf("3.Exit\n");
            printf("=>");
            scanf("%d",&choice);
            if(choice==3)break;
            switch(choice)
            {
            case 1:
                printf("enter height:");
                scanf("%d",&height);
                printf("enter width:");
                scanf("%d",&width);
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==1||i==height||j==1||j==width)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("enter height:");
                scanf("%d",&height);
                printf("enter type:");
                scanf("%d",&type);
                if(type==1){
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=i;j++){
                        if(i==1||i==height||j==1||j==i)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                  }
                }
                 else if(type==2){
                for(int i=height;i>=1;i--){
                    for(int j=1;j<=height;j++){
                        if(i==1||j==height||j==i)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                  }
                }
                else if(type==3){
                for(int i=1;i<=height;i++){
                    for(int j=height;j>=1;j--){
                        if(i==1||j==height||j==i)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                  }
                }
                else if(type==4){
                for(int i=height;i>=1;i--){
                    for(int j=height;j>=1;j--){
                        if(i==height||j==1||j==i)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                  }
                }
                break;
            }
        }




}
