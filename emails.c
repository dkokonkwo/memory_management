#include <stdio.h>
#include <stdlib.h>
// max length of email address
#define MAX_LENGTH 100 
/**
 * m_cohort - creates array to store email addresses
 * @n: max number of strings to store
 */
 
char *m_cohort(int *n)
{
    int i;
    // POINTERS TO STRINGS MEMORY ALLOCATION
    char **emails = (char **) malloc(n * sizeof(char *));
    
    // ALLOCATING MEMORY FOR EACH STRING
    for (i = 0; i <= n; ++i)
    {
        emails[i] = (char *) malloc(MAX_LENGTH * sizeof(char));
    }
    
    // INPUT EMAIL ADDRESSES IF NECESSARY
    for (i = 0; i < n; ++i)
    {
        printf("enter email address %d: ", i + 1);
        scanf("%s", emails[i]);
    }
    
    // SHRINKING ARRAY DOWN TO STORE 6 EMAIL ADDRESSES
    for (i = 6; i < 10; ++i)
    {
        free(emails[i]);
    }
    
    // FREEING THE ARRAY AFTER USE
    free(emails);
}
