#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>

int a, b, c, bet, betmoney;
int playermoney = 1000, dearmoney = 1000;

void showtoscreen()
{
    std::cout << "下面介紹賭博規則:\n";
    std::cout << "*************************************************************\n";
    std::cout << "莊家(及賭場老闆)和玩家(及玩家)各有1000元寶作為提示資金\n";
    std::cout << "閒家下注的方式有三種：\n";
    std::cout << "(1) 買大     (2)買小    (3)買豹子\n";
    std::cout << "下面逐一介紹這三種方式的不同:\n\n";
    std::cout << "買大: 如果閒家所擲的三枚骰子的點數之和大於11，則閒家贏，否則莊家贏\n";
    std::cout << "買小:如果閒家所擲的三枚骰子的點數之和小於11，則閒家贏，否則莊家贏\n";
    std::cout << "買豹子:如果閒家所擲出的三枚骰子點數相等，則閒家贏，否則莊家贏\n";
    std::cout << "買大和買小的賠率都為2，即輸家一下注元寶的兩倍賠給贏家，買豹子的賠率是10\n";
    std::cout << "閒家和下注的元寶數必須在10到100元寶之間\n";
    std::cout << "閒家可隨時按q鍵結束賭博，否則繼續進行，直到一方的元寶輸完為止\n";
    std::cout << "遊戲規則介紹完畢\n";
    std::cout << "祝你玩得愉快\n";
}

int Getbet()
{
    int bettype;
    std::cout << "\n請選擇下注方式";
    std::cout << "1.買大  2.買小  3.買豹子\n";
    std::cout << "請下注:";
    scanf("%d",&bettype);
    if((bettype==1)||(bettype==2)||(bettype==3))
    {
        return bettype;
    }
    else
    {
        return 1;
    }
}

int getAmount()
{
    int betmoney;
    std::cout << "你要壓多少元寶，最少10個，最多100個.";
    scanf("%d",&betmoney);
    if(betmoney<10)
    {
        return 10;
    }
    if(betmoney>100)
    {
        return 100;
    }
    return betmoney;
}

void Throw()
{
    std::cout << "歡迎體驗賭博機，按鍵盤任意鍵擲出骰子\n";
    getchar();
    srand(time(0));
    bool done = false;
    while(!done)
    {
        srand(time(NULL));
        a=(rand() % 6) + 1;
        b=(rand() % 6) + 1;
        system("cls");
        c=(rand() % 6) + 1;
        std::cout << "骰子在轉動:..................按鍵盤上的任意鍵來終止轉動\n";
        std::cout << "第一粒骰子:%d\n第二粒骰子:%d\n第三例骰子:%d\n" << a << b << c;
    }
    getchar();
}

int judge(int a,int b,int c)
{
    if(a==b&&a==c)
    {
        return 3;
    }
    if(a + b + c>11)
    {
        return 1;
    }
    if(a + b + c<11)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void moneycale()
{
    if(judge(a,b,c)==3)
    {
        betmoney=betmoney*10;
        if(bet==3)
        {
            playermoney =betmoney;
            dearmoney-=betmoney;
            std::cout << "豹子，10賠率，玩家贏了%d,玩家還有%d元寶，莊家還剩%d元寶\n" << betmoney << playermoney << dearmoney;
        }
        else
        {
            playermoney-=betmoney;
            dearmoney =betmoney;
            std::cout << "豹子，10賠率，玩家輸了%d,玩家還剩%d元寶，莊家還有%d元寶\n" << betmoney << playermoney << dearmoney;
        }
    }
    else if(judge(a,b,c)==2)
    {
        betmoney=betmoney*2;
        if(bet==2)
        {
            playermoney =betmoney;
            dearmoney-=betmoney;
            std::cout << "小，2賠率，玩家贏了%d,玩家還有%d元寶，莊家還剩%d元寶\n" << betmoney << playermoney << dearmoney;
        }
        else
        {
            playermoney-=betmoney;
            dearmoney =betmoney;
            std::cout << "小，2賠率，玩家輸了%d,玩家還剩%d元寶，莊家還有%d元寶\n" << betmoney << playermoney << dearmoney;
        }
    }
    else if(judge(a,b,c)==1)
    {
        betmoney=betmoney*2;
        if(bet==1)
        {
            playermoney =betmoney;
            dearmoney-=betmoney;
            std::cout << "大，2賠率，玩家贏了%d,玩家還有%d元寶，莊家還剩%d元寶\n" << betmoney << playermoney << dearmoney;
        }
        else
        {
            playermoney-=betmoney;
            dearmoney =betmoney;
            std::cout << "大，2賠率，玩家輸了%d,玩家還剩%d元寶，莊家還有%d元寶\n" << betmoney << playermoney << dearmoney;
        }
    }
    else
    {
        std::cout << "平局，玩家還有%d,莊家還有%d\n" << playermoney << dearmoney;
    }
}

int checkmoney(int pm,int dm)
{
    if(pm<=0)
    {
        if(pm==0)
        {
            std::cout << "你輸光了所有的元寶，被趕出賭場\n";
        }
        else
        {
            std::cout << "你欠賭場老闆%d元寶\n" << abs(pm);
        }
        return 0;
    }
    if(dm<=0)
    {
        if(dm==0)
        {
            std::cout << "老闆輸光了所有的元寶，\n";
        }
        else
        {
            std::cout << "老闆欠賭場老闆%d元寶\n" << abs(dm);
        }
        return 0;
    }
    return 1;
}
int main()
{
    int Chekmoney;
    char ch;
    showtoscreen();
    for(;;)
    {
        if(playermoney<10)
        {
            std::cout << "你的元寶不足10個，不能在賭博了。\n";
            break;
        }
        if(dearmoney<10)
        {
            std::cout << "你的元寶不足10個，不能在賭博了。\n";
            break;
        }
        bet=Getbet();
        repeat:betmoney=getAmount();
        if(betmoney>playermoney)
        {
            std::cout << "你沒有這麼多元寶，請重新輸入。";
            goto repeat;
        }
        if(betmoney>dearmoney)
        {
            std::cout << "老闆沒有這麼多元寶，請重新輸入。";
            goto repeat;
        }
        Throw();
        moneycale();
        getchar();
        Chekmoney=checkmoney(playermoney,dearmoney);
        if(Chekmoney==0)
            break;
        std::cout << "繼續玩嗎？退出請按q，否則繼續\n\n";
        ch=getchar();
        if(ch=='q')
            break;
    }
    return 0;
}