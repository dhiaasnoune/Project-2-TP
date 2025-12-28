#include <stdio.h>

int main() {
    int n, i;
    int arrival[10], burst[10], finish[10], total_time[10], wait_time[10];
    float avg_total = 0, avg_wait = 0;
    printf("project nember 2 \n");
    printf("this project Created by:\n asnoune mohamed dhia eddine \n mohamed dia eddine ben djazia\n");
    printf("\n");
    printf("Enter number of tasks (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nTask %d:\n", i + 1);
        printf("Enter arrival time: ");
        scanf("%d", &arrival[i]);
        printf("Enter burst time: ");
        scanf("%d", &burst[i]);
    }

    for(i = 0; i < n; i++) {
        if (i == 0) {
            finish[i] = arrival[i] + burst[i];
        } else {
            if (arrival[i] > finish[i-1])
                finish[i] = arrival[i] + burst[i];
            else
                finish[i] = finish[i-1] + burst[i];
        }

        total_time[i] = finish[i] - arrival[i];
        wait_time[i] = total_time[i] - burst[i];

        avg_total += total_time[i];
        avg_wait += wait_time[i];
    }
    printf("Task\tArrival\tDuration\tFinishes\tTotal Time\tWait Time\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t\t%d\t\t%d\t\t%d\n", 
                i+1, arrival[i], burst[i], finish[i], total_time[i], wait_time[i]);
    }
    printf("\nAverage Total Time: %.2f", avg_total / n);
    printf("\nAverage Wait Time: %.2f\n", avg_wait / n);

    return 0;
}
    