void premium(char health, char gender, int age, char lives)
{
    if (health == 'e')
    {
        // && (age>25&&age<35) && lives == "c" && gender="m"
        if (age > 25 && age < 35)
        {
            if (lives == 'c')
            {
                if (gender == 'm')
                {
                    printf("the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.\n");
                }
                else if (gender == 'f')
                {
                    printf("the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.\n");
                }
            }
            else
            {
                printf("not insured\n");
            }
        }
        else
        {
            printf("not insured\n");
        }
    }
    else if (health == 'p')
    {
        if (age > 25 && age < 35)
        {
            if (lives == 'v')
            {
                if (gender == 'm')
                {
                    printf("the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.\n");
                }
                else
                {
                    printf("not insured\n");
                }
            }
            else
            {
                printf("not insured\n");
            }
        }
        else
        {
            printf("not insured\n");
        }
    }
    else
    {
        printf("not insured\n");
    }
}