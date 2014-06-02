#include <project.h>

int main()
{
    for(;;)
    {
        if (SW_Read())
        {
            CyDelay(1000);
        }
        else
        {
            CyDelay(100);
        }
        
        LED_Write(!LED_Read());
    }
}