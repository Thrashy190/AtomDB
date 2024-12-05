#ifndef META_COMMAND_H
#define META_COMMAND_H

#include "../utils/input_buffer.h"
#include "../core/table.h"

typedef enum
{
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer *input_buffer, Table *table);

#endif // META_COMMAND_H