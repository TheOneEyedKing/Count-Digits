#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int _1=0,_2=0,_3=0,_4=0,_5=0,_6=0,_7=0,_8=0,_9=0,_0=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='0')
            _0++;
        else if(s[i]=='1')
            _1++;
        else if(s[i]=='2')
            _2++;
        else if(s[i]=='3')
            _3++;
        else if(s[i]=='4')
            _4++;
        else if(s[i]=='5')
            _5++;
        else if(s[i]=='6')
            _6++;
        else if(s[i]=='7')
            _7++;
        else if(s[i]=='8')
            _8++;
        else if(s[i]=='9')
            _9++;

    }
    printf("0 %d\n1 %d\n2 %d\n3 %d\n4 %d\n5 %d\n6 %d\n7 %d\n8 %d\n9 %d",_0,_1,_2,_3,_4,_5,_6,_7,_8,_9);
    return 0;
}
