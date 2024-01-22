#include "app.h"

int main(void)
{
    welcomeMsg();

    char choice;

    bool quit = false;

    while(!quit)
    {
        printf("Enter calculate(c) or quit(q): ");
        scanf(" %c", &choice);

        if(choice == 'q')
        {
            quit = true;
            printf("Exiting programme...");
        }
        else
        {
            double x, y;
            char c;
            printf("Calculator Expression: ");
            scanf("%lf %c %lf", &x, &c, &y);

            switch(c)
            {
                case '+' : {
                    printf("Result of %.2lf + %.2lf = %.2lf\n", x, y, add(x,y));
                    break;
                }
                case '-' : {
                    printf("Result of %.2lf - %.2lf = %.2lf\n", x, y, sub(x,y));
                    break;
                }
                case '*' : {
                    printf("Result of %.2lf * %.2lf = %.2lf\n", x, y, mul(x,y));
                    break;
                }
                case '/' : {
                    printf("Result of %.2lf / %.2lf = %.2lf\n", x, y, div(x,y));
                    break;
                }
                case '@' : {
                    printf("Result of %.2lf @ %.2lf = %.2lf\n", x, y, pow(x,y));
                    break;
                }
                default : {
                    printf("Invalid Input...\n");
                    break;
                }
            }
        }
    }
}