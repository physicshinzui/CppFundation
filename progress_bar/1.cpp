#include <stdio.h>
#include <unistd.h>

int main()
{
        char chars[] = {'-', '\\', '|', '/'};
        unsigned int i;

        int n_frames{100};
        for (int i{0}; i < n_frames ; ++i) {
                double progress = double(i)/n_frames * 100.0;
                printf("%c %f%%\r", chars[i % sizeof(chars)], progress);
                fflush(stdout);
                usleep(200000);
        }

        return 0;
}