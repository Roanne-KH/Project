#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
   // char name [10];
    //char *Name;
    char a;
} ali;

struct student *pali;
int main()
{
    /*  typedef  struct student
    {
     int id;
     char name [10];
     char *Name;
    } student;

    student me;
    me .id =0;

      // me.name [0]='r';

      me .name[0] ='a';
       me .name[1] ='l';
        me .name[2] ='i';



        me.Name ="ali ali ali";

    printf(" id =%d \t",me.id);
    printf(" name =%c \t",me.name[0]);
    printf(" name =%c \t",me.Name);


    */

  /*  ali.id =1;
    pali= & ali;
    //pali ->ali.name="ali ali";
    printf("name : %s ", ali.name);

    pali ->id=10;
    printf("name : %d ", ali.id);

    */

     printf("size : %d ", sizeof(ali));
    printf("size : %d ",sizeof(struct student));





    return 0;
}
