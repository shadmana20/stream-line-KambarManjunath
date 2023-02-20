#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX    32768
#define MIN   -32768
#define BMS_DATA 50
#define BUFFER_SIZE 100


void ReadFromConsoleAndStore(void)
{
    char buffers[BMS_DATA][BUFFER_SIZE];
    int i;
    FILE *output_file;

    //printf("Enter %d strings, one per line:\n", NUM_BUFFERS);
    for (i = 0; i < BMS_DATA; i++) {
        fgets(buffers[i], BUFFER_SIZE, stdin);
        // Remove newline character from buffer
        buffers[i][strcspn(buffers[i], "\n")] = '\0';
    }
	
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    //printf("Read %d strings:\n", NUM_BUFFERS);
    for (i = 0; i < BMS_DATA; i++) {
        fprintf(output_file, "%s\n", buffers[i]);
         printf("%s\n", buffers[i]);
    }

    
}

int getMax(int arr[])
{
    int max = MIN;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
    
}

int getMin(int arr[])
{
    int min = MAX;
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
void main()
{
    ReadFromConsoleAndStore();
}
