#ifndef ROOMDATA_H_INCLUDED
#define ROOMDATA_H_INCLUDED


#include<stdio.h>
#include<stdlib.h>


typedef enum
{
    type_single,
    type_double,
    type_trible,
    type_family
}room_type;

typedef enum room_view
{
    view_garden,
    view_pool,
    view_beach
}room_view;

typedef enum
{
    available,
    not_available
}avail;

struct roomData
{
    char roomID[4];
    char roomType;
    char roomView;
    char availability;
    char startDate[5];
    char endDate[5];
    int priceFull;
    int priceHalf;
};

struct node
{
    struct roomData *room;
    struct node *next;

};

static struct node *S_head = NULL;
static struct node *D_head = NULL;
static struct node *T_head = NULL;


char* getID(struct roomData * room); // Get a variable from struct
void setID(struct roomData * room, char* id);
char getRoomType(struct roomData * room); // Get a variable from struct
void setRoomType(struct roomData * room, room_type type);
char getRoomView(struct roomData * room); // Get a variable from struct
void setRoomView(struct roomData * room,room_view view);
char getAvail(struct roomData * room); // Get a variable from struct
void setAvail(struct roomData * room, avail availablility);
/*****************************/
char* getStartDate(struct roomData * room,char *Date); // Get a variable from struct
void setStartDate(struct roomData * room, char* startdate);
char* getEndDate(struct roomData * room,char *Date); // Get a variable from struct
void setEndDate(struct roomData * room, char* enddate);
int getPriceFull(struct roomData * room); // Get a variable from struct
void setPriceFull(struct roomData * room, int pricefull);
int getPriceHalf(struct roomData * room); // Get a variable from struct
void setPriceHalf(struct roomData * room, int pricehalf);

void checkAvailability(room_type type,room_view view);
void generateList(int S_size,int D_size,int T_size);




#endif // ROOMDATA_H_INCLUDED
