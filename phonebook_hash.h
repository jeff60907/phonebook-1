#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

#define HASH 1
typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
    struct __PHONE_BOOK_ENTRY *pNext;
} entry_detail;

typedef struct _LASTNAME_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    entry_detail *detail;
    struct _LASTNAME_ENTRY *pNext;
} entry;
entry *findName(char lastName[], entry *pHead);
entry *append(char lastName[], entry *e);

unsigned int BKDRHash(char *str);
void init_memorypool(int size);
void free_memorypool(void);
#endif

