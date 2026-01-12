#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long max_length_state(const char *signal, const unsigned long num_samples, const char state);


unsigned long count_rising_edge(const char *signal, const unsigned long num_samples)
{
    unsigned long count = signal[0];
    for (unsigned long i = 1; i < num_samples; i++)
    {
        if (signal[i-1] == 0 && signal[i] == 1)
        {
            count++;
        }
        }
    
    return count;
}

unsigned long max_length_high(const char *signal, const unsigned long num_samples)
{
    return max_length_state(signal, num_samples, 1);

}

unsigned long max_length_state(const char *signal, const unsigned long num_samples, const char state)
{
    unsigned long maxCount = 0;
    unsigned long count = 0;

    for (unsigned long i = 0; i < num_samples; i++)
    {
        count += signal[i] == state;
        maxCount = count > maxCount ? count : maxCount;
        count = signal[i] == 0 ? 0 : count;
    }
    return maxCount;

}

unsigned long max_length_low(const char *signal, const unsigned long num_samples)
{
    return max_length_state(signal, num_samples, 0);
}
void rle(const char *signal, const unsigned long num_samples)
{
    char state = signal[0];
    unsigned long count = 1;
    printf("%d", state);

    for (unsigned long i = 1; i < num_samples; i++)
    {
        if(signal[i-1] == signal[i])
        {
            count++;
        }
        else{
            printf("%lu", count);
            count = 1;
            state = 1 - state;
        }
    }
    printf("%lu", count);
}