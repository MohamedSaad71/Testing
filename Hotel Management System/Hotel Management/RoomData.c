#include "RoomData.h"

char* getStartDate(struct roomData * room,char *Date)
{

    for(int i=0;i<5;i++)
    {
        Date[i]=room->startDate[i];
    }
    return Date;
}

void setStartDate(struct roomData * room, char* startdate)
{
    /*Check for the true format of the date as the format should be
     like 31/12
    */

    if(startdate[2]!= '/')
    {
        printf("Invalid Date Format/n");
        printf("Please Enter Valid date format like mm/dd");
    }
    /*Checking for month format*/
    else if((startdate[1]<49 || startdate[1]>57))
    {
         printf("Invalid Date Format/n");
    }
    else if(startdate[0]>49)
    {
        printf("Invalid Date Format/n");
    }
    else if(startdate[0]==49 && startdate[1]>50)
    {
        printf("Invalid Date Format/n");
    }
    /*Checking for day format*/
    else if( (startdate[4]<48) || (startdate[4]>57))
    {
        printf("Invalid Date Format/n");
    }
    else if(startdate[3]>51)
    {
        printf("Invalid Date Format/n");
    }
    else if((startdate[3]==51)&&(startdate[4]>49))
    {
        printf("Invalid Date Format/n");
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            room->startDate[i] = startdate[i];
        }

    }



}

char* getEndDate(struct roomData * room,char *Date)
{

    for(int i=0;i<5;i++)
    {
        Date[i]=room->endDate[i];
    }
    return Date;
}
void setEndDate(struct roomData * room, char* enddate)
{
    if(enddate[2]!= '/')
    {
        printf("Invalid Date Format/n");
        printf("Please Enter Valid date format like mm/dd");
    }
    /*Checking for month format*/
    else if((enddate[1]<49 || enddate[1]>57))
    {
         printf("Invalid Date Format/n");
    }
    else if(enddate[0]>49)
    {
        printf("Invalid Date Format/n");
    }
    else if(enddate[0]==49 && enddate[1]>50)
    {
        printf("Invalid Date Format/n");
    }
    /*Checking for day format*/
    else if( (enddate[4]<48) || (enddate[4]>57))
    {
        printf("Invalid Date Format/n");
    }
    else if(enddate[3]>51)
    {
        printf("Invalid Date Format/n");
    }
    else if((enddate[3]==51)&&(enddate[4]>49))
    {
        printf("Invalid Date Format/n");
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            room->endDate[i] = enddate[i];
        }

    }

}
int getPriceFull(struct roomData * room)
{
    return room->priceFull;
}

void setPriceFull(struct roomData * room, int pricefull)
{
    room->priceFull=pricefull;
}
int getPriceFull(struct roomData * room);
