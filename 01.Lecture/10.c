#include "00.c"

struct student
{
    int id;
    char name[20];
    int group;
};

void func(struct student record)
{
    printf(" Id is: %d \n", record.id);
    printf(" Name is: %s \n", record.name);
    printf(" Group is: %d \n",
    record.group);
}

void pfunc(struct student *record)
{
    printf(" Id is: %d \n", record->id);
    printf(" Name is: %s \n", record->name);
    printf(" Group is: %d \n",
    record->group);
    }

int main() {
    struct student record = {1, "Vasiliy", 102};
    func(record);
    printf("\n");
    pfunc(&record);
    return 0;
}