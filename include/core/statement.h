#ifndef STATEMENT_H
#define STATEMENT_H

#include "row.h"
#include "table.h"
#include "../utils/input_buffer.h"

typedef enum
{
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct
{
    StatementType type;
    Row row_to_insert;
} Statement;

typedef enum
{
    PREPARE_SUCCESS,
    PREPARE_SYNTAX_ERROR,
    PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

typedef enum
{
    EXECUTE_SUCCESS,
    EXECUTE_TABLE_FULL
} ExecuteResult;

PrepareResult prepare_statement(InputBuffer *input_buffer, Statement *statement);
ExecuteResult execute_statement(Statement *statement, Table *table);

#endif // STATEMENT_H