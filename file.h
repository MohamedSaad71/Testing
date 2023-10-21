#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

enum room_type
{
	/**/
    type_single,
    type_double,
    type_trible,
    type_family
};
enum room_view
{
    view_garden,
    view_pool,
    view_beach
};
enum avail
{
    available,
    not_available
};

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

char* getID(struct roomData * room); // Get a variable from struct
void setID(struct roomData * room, char* id);
char getRoomType(struct roomData * room); // Get a variable from struct
void setRoomType(struct roomData * room, char roomtype);
char getRoomView(struct roomData * room); // Get a variable from struct
void setRoomView(struct roomData * room, char view);
char getAvail(struct roomData * room); // Get a variable from struct
void setAvail(struct roomData * room, char availablility);
char* getStartDate(struct roomData * room); // Get a variable from struct
void setStartDate(struct roomData * room, char* startdate);
char* getEndDate(struct roomData * room); // Get a variable from struct
void setEndDate(struct roomData * room, char* enddate);
int getPriceFull(struct roomData * room); // Get a variable from struct
void setPriceFull(struct roomData * room, int pricefull);
int getPriceHalf(struct roomData * room); // Get a variable from struct
void setPriceHalf(struct roomData * room, int pricehalf);

void checkAvailability();
void generateList();


#endif // FILE_H_INCLUDED
