    #include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;
    
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    
    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
