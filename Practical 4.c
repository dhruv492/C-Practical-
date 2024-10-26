//In This Practical We are going to count illiterate man and women.

#include<stdio.h>
void main()
{
    int tp,tm,tw,ipm,ipw;    //tp=total population,tm=total men,tw=total women,ipm=illiterate population of men,ipw=illiterate population of women.
    float pm,pw,lm,lw,im,iw;     //pm=percentage of men,pw=percentage of women,lm=literacy rate of men,lw=literacy rate of women,im=illiteracy rate of men,iw=illiteracy rate of women.

    tp=1441981744;
    pw=48.4;

    pm=100-pw;

    lm=80.95,lw=62.84;

    im=100-lm;
    iw=100-lw;

    tm=(pm*tp)/100;
    tw=(pw*tp)/100;

    ipm=(im*tm)/100;
    ipw=(iw*tw)/100;

    printf("Total Illiterate Men:%d\n",ipm);
    printf("Total Illiterate Women:%d",ipw);
}
