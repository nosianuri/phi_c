#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    scanf("%lld %lld %lld", &eye,&mouth,&body);
    long long int count1 =0;
    if(eye<=mouth && eye<=body)
    {
        printf("%lld", eye);
    }
    else if (mouth <= eye && mouth <= body)
    {
        count1 = mouth;
        eye = eye-mouth;
        body = body - mouth;
        if((eye/2) <= body)
        {
            count1 = count1 + (eye / 2);
            printf("%lld", count1);
        }
        else if ((eye/2) >= body)
        {
            count1 = count1 + body;
            printf("%lld", count1);
        }
    }
    else if (body <= eye && body <= mouth)
    printf("%lld", body);
    return 0;
}