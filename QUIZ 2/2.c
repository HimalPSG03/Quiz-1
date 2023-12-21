#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char pass[] = "Pass@123";
    char special[] = "!@#$%^&*()-+";
    bool small = false, caps = false, spl = false, num = false;
    if (strlen(pass) < 8)
    {
        printf("Password is small");
        return 0;
    }
    bool special_check(char ch)
    {
        for (int j = 0; j < strlen(special); j++)
        {
            if (ch == special[j])
            {
                return true;
            }
        }
        return false;
    }
    for (int i = 0; i < strlen(pass); i++)
    {
        if (pass[i] >= 'a' && pass[i] <= 'z')
        {
            small = true;
        }
        else if (pass[i] >= 'A' && pass[i] <= 'Z')
        {
            caps = true;
        }
        else if (pass[i] >= '0' && pass[i] <= '9')
        {
            num = true;
        }
        else if (special_check(pass[i]))
        {
            spl = true;
        }
    }
    if (small && caps && num && spl)
    {
        printf("Strong");
    }
    else
    {
        printf("Weak");
    }
    return 0;
}