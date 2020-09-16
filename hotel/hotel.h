#define QUIT    5
#define HOTEL1  180
#define HOTEL2  200
#define HOTEL3  220
#define HOTEL4  280
#define DISCOUNT 0.9
#define STARS "*************************************"

// show and get menu selected
int menu(void);

// get nights
int get_nights(void);

void show_price(double rate, int nights);