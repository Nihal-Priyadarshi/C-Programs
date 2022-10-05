#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0, chk=0, len, rem, binDigit, octalDigit;
    long long binaryInt=0, temp=1, octalNum, binaryNum;
    char hexdec[11], binnum[40]="";
    printf("Enter Hexadecimal Number: ");
    gets(hexdec);
    while(hexdec[i])
    {
        switch(hexdec[i])
        {
            case '0':
                strcat(binnum, "0000");
                break;
            case '1':
                strcat(binnum, "0001");
                break;
            case '2':
                strcat(binnum, "0010");
                break;
            case '3':
                strcat(binnum, "0011");
                break;
            case '4':
                strcat(binnum, "0100");
                break;
            case '5':
                strcat(binnum, "0101");
                break;
            case '6':
                strcat(binnum, "0110");
                break;
            case '7':
                strcat(binnum, "0111");
                break;
            case '8':
                strcat(binnum, "1000");
                break;
            case '9':
                strcat(binnum, "1001");
                break;
            case 'A':
                strcat(binnum, "1010");
                break;
            case 'a':
                strcat(binnum, "1010");
                break;
            case 'B':
                strcat(binnum, "1011");
                break;
            case 'b':
                strcat(binnum, "1011");
                break;
            case 'C':
                strcat(binnum, "1100");
                break;
            case 'c':
                strcat(binnum, "1100");
                break;
            case 'D':
                strcat(binnum, "1101");
                break;
            case 'd':
                strcat(binnum, "1101");
                break;
            case 'E':
                strcat(binnum, "1110");
                break;
            case 'e':
                strcat(binnum, "1110");
                break;
            case 'F':
                strcat(binnum, "1111");
                break;
            case 'f':
                strcat(binnum, "1111");
                break;
            default:
                chk = 1;
                break;
        }
        i++;
    }
    if(chk==0)
    {
        len = strlen(binnum);
        while(len!=0)
        {
            if(binnum[len-1]=='0')
                binDigit=0;
            else
                binDigit=1;
            binaryInt = binaryInt + (binDigit*temp);
            temp = temp*10;
            len--;
        }
        binaryNum = binaryInt;
        octalNum = 0;
        temp = 1;
        while(binaryNum>0)
        {
            rem = binaryNum%1000;
            switch(rem)
            {
                case 0:
                    octalDigit = 0;
                    break;
                case 1:
                    octalDigit = 1;
                    break;
                case 10:
                    octalDigit = 2;
                    break;
                case 11:
                    octalDigit = 3;
                    break;
                case 100:
                    octalDigit = 4;
                    break;
                case 101:
                    octalDigit = 5;
                    break;
                case 110:
                    octalDigit = 6;
                    break;
                case 111:
                    octalDigit = 7;
                    break;
            }
            octalNum = (octalDigit*temp) + octalNum;
            binaryNum = binaryNum/1000;
            temp = temp*10;
        }
        printf("\nEquivalent Octal Value = %lld", octalNum);
    }
    else
        printf("\nInvalid Hexadecimal Character/Digit");
    getch();
    return 0;
}
