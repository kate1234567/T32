/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: katew
 *
 * Created on 1 апреля 2019 г., 20:46
 */

#include <stdio.h>
#include <stdlib.h>

int F( int x)
{
    int a;
    int sum;
    a=x%10;
    x=x/10;
    sum=a+(x%10);
    return sum;
}   
    int M(int* mas, int SIZE)
    {
        int i;
        int j;
        int a=mas[0];
        int max=1;
        int x;
        for(j=0; j<SIZE-1; j++)
        {
        x= 1;
        for(i=j+1; i<SIZE; i++)
        {
            if(mas[j]==mas[i])
                x=x+1;
            if(x>max && mas[j]>mas[i])
            {
                max=x;
                a=mas[j];
            }     
        }
        
       }
    
        return a;
    }    


int main(int argc, char** argv) {
    int* MAS;
    int* mas;
    int N;
    int i;
    int c;
    
    scanf("%i", &N);
    MAS=(int*)malloc(sizeof(int)*N);
    
    for(i=0;i<N;i++)
    {
        scanf("%i", &MAS[i]);
    }

    for(i=0;i<N;i++)
    {
        mas[i]=F(MAS[i]);
    }
    
    
    c=M(mas,N);
    printf("\n%i", c);
    //printf("HEllo!");
    
    return (EXIT_SUCCESS);
}

