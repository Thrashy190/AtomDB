#include "../../include/core/row.h"
#include <stdio.h>
#include <string.h>

void print_row(Row *row)
{
    printf("(%d, %s, %s)\n", row->id, row->username, row->email);
}

void serialize_row(Row *source, void *destination)
{
    memcpy(destination, &(source->id), ID_SIZE);
    memcpy(destination + ID_SIZE, source->username, USERNAME_SIZE);
    memcpy(destination + ID_SIZE + USERNAME_SIZE, source->email, EMAIL_SIZE);
}

void deserialize_row(void *source, Row *destination)
{
    memcpy(&(destination->id), source, ID_SIZE);
    memcpy(destination->username, source + ID_SIZE, USERNAME_SIZE);
    memcpy(destination->email, source + ID_SIZE + USERNAME_SIZE, EMAIL_SIZE);
}