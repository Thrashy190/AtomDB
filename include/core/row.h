#ifndef ROW_H
#define ROW_H

#include <stdint.h>

#define COLUMN_USERNAME_SIZE 32
#define COLUMN_EMAIL_SIZE 255

// Definimos el macro antes de la estructura
#define size_of_attribute(Struct, Attribute) sizeof(((Struct *)0)->Attribute)

// Declaramos la estructura primero
typedef struct
{
    uint32_t id;
    char username[COLUMN_USERNAME_SIZE];
    char email[COLUMN_EMAIL_SIZE];
} Row;

// Ahora definimos las constantes después de la estructura
#define ID_SIZE size_of_attribute(Row, id)
#define USERNAME_SIZE size_of_attribute(Row, username)
#define EMAIL_SIZE size_of_attribute(Row, email)
#define ROW_SIZE (ID_SIZE + USERNAME_SIZE + EMAIL_SIZE)

// Declaraciones de funciones
void print_row(Row *row);
void serialize_row(Row *source, void *destination);
void deserialize_row(void *source, Row *destination);

#endif // ROW_H