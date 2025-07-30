#include<stdio.h>
int main()
{
    int amount;
    int bank_notes[7]={100,50,20,10,5,2,1};
    int note_count[7]={0};
    
   // int new_amount=0;
    scanf("%d",&amount);
    printf("%d\n",amount);
    for(int i=0;i<7;i++)
    {
        if(amount>=bank_notes[i])
        {
            note_count[i]=amount/bank_notes[i];
            amount=amount%bank_notes[i];
        }
     printf("%d nota(s) de R$ %d,00\n",note_count[i],bank_notes[i]);
    }
   
           return 0;

    
}