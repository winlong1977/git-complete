

#include <stdio.h>


typedef struct student{
    unsigned int id;
    char         name[100];
    unsigned int DOB;     /* Unix Epoch Time since 1970 */
    float        height;
    float        weight;
} TP_STUDENT;


int main(int argc, char* argv[])
{
   TP_STUDENT  me = { 1, "Leo Chu", 12345, 1.7, 63.5 };
   TP_STUDENT  clone = me;

   printf("id=%u, name=%s, DOB=%u, height=%.2fm, weight=%.2fkg\n",
          clone.id, clone.name, clone.DOB, clone.height, clone.weight);


   return 0;
}
