#include <stdio.h>

void memRep (char* base, int n) ;

int main (void) 
    {
        unsigned int i = 1 ;
        char* c = (char*) &i ;
        if (*c)
            printf ("Little Endian\n") ;
        else
            printf ("Big Endian\n") ;
        
        int k = 0x01234567 ;
        memRep ( (char *)&k, sizeof(k) ) ;
        getchar() ;
        return 0 ;
    }
    
void memRep (char* base, int n)
    {
        int i;
        for (i = 0; i < n; i++)
            printf ("%.2x ", base[i]) ;
        printf ("\n") ;
    }