#include<stdio.h>

int DataBase(int i,char *user,char *pass){
   char *userData[] ={"Rifat","Jhon","Elric","pass1","pass2","pass3"};
   if((strcmp(user,userData[i-1])==0)&&(strcmp(pass,userData[i+2])==0)){
    return 1;
   }

}
int main()
{
    char user[10],pass[16];
    int correct,id;


    while(1){
            printf("ID:");
            scanf("%d",&id);
            printf("Name:");
            scanf("%s",user);
            printf("Pass-Word:");
            scanf("%s",pass);
            correct=DataBase(id,user,pass);

            if(correct == 1){
                    printf("you are in");
                    break;

            }
           printf("try again");
       }

}

