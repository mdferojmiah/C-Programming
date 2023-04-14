#include <stdio.h>
int main()
{
    int start_hour, start_minute, end_hour, end_minute, play_time;
    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);

    play_time = ((end_hour*60) + end_minute) - ((start_hour*60) + start_minute);

    if(play_time <= 0)
        play_time += 24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", play_time/60, play_time%60);

    return 0;
}
