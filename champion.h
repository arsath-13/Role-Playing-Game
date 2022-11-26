#ifndef CHAMPION //Header guard
#define CHAMPION

//enum creation for Champ roles
typedef enum {M,F,S,T} ChampionRole;


//Champion
struct Champion
{
    ChampionRole role;
    int level;
    struct Champion* next; //node for linked list
    
};


//function prototypes
struct Champion* createChampion(); 

struct Champion* addChampion(struct Champion *head,  struct Champion *c);

struct Champion* buildChampionList(int n);

void printChampionList(struct Champion *head);

struct Champion* removeChampion(struct Champion *head);

struct Champion* destroyChampion(struct Champion *head);

#endif
