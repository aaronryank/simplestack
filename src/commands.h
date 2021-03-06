#ifndef _COMMANDS_H
#define _COMMANDS_H

#include "simplestack.h"

/* check if stack[top+off1] is the same number type as stack[top+off2] */
#define compatibletypes(off1,off2) \
        ((stack[top+off1].type == TYPE_INT && stack[top+off2].type == TYPE_INT) || (stack[top+off1].type == TYPE_FLT && stack[top+off2].type == TYPE_FLT))

/* get the type-specific value of stack[top+off] */
#define typeval(off) \
        ((stack[top+off].type == TYPE_FLT) ? stack[top+off].val_flt : (stack[top+off].type == TYPE_STR) ? strlen(stack[top+off].val_str) : stack[top+off].val)

#define type_str(off) \
        (stack[top+off].type == TYPE_STR)

#define type_int(off) \
        (stack[top+off].type == TYPE_INT)

#define type_flt(off) \
        (stack[top+off].type == TYPE_FLT)

#define type_num(off) \
        (type_int(off) || type_flt(off))

#define type(off) stack[top+off].type

#define implicit (args == -1)

#define val_int(off) \
        stack[top+off].val

#define val_flt(off) \
        stack[top+off].val_flt

#define val_str(off) \
        stack[top+off].val_str

extern int exec_command_add(int args);
extern int exec_command_increment(int args);
extern int exec_command_sub(int args);
extern int exec_command_mul(int args);
extern int exec_command_div(int args);
extern int exec_command_mod(int args);
extern int exec_command_print(int args);
extern int exec_command_lt(int args);
extern int exec_command_gt(int args);
extern int exec_command_putchar(int args);
extern int exec_command_exit(int args);
extern int exec_command_getchar(int args);
extern int exec_command_getint(int args);
extern int exec_command_getstr(int args);
extern int exec_command_duplicate(int args);
extern int exec_command_pop(int args);
extern int exec_command_reverse(int args);
extern int exec_command_raise(int args);
extern int exec_command_stringify(int args);
extern int exec_command_stack_len(int args);
extern int exec_command_eq(int args);
extern int exec_command_swap(int args);
extern int exec_command_tomem(int args);
extern int exec_command_frommem(int args);
extern int get_top_val(int args);
extern int exec_command_if(int args);
extern int exec_command_ifnot(int args);
extern int exec_command_do(int args);
extern int exec_command_while(int args);
extern int exec_command_dupstack(int args);
extern int exec_command_getflt(int args);
extern int exec_command_str(int args, wint_t *command);
extern int exec_command_swap_case(int args);
extern int exec_command_loop_forever(int args);
extern int exec_command_alpha(int args);
extern int exec_command_decrement(int args);
extern int exec_command_incstr(int args);
extern int exec_command_decstr(int args);
extern int exec_command_strchar(int args);
extern int exec_command_sign(int args);
extern int exec_command_seq(int args);
extern int exec_command_sum_stack(int args);
extern int exec_command_itoa(int args);
extern int exec_command_whitespace(int args);
extern int exec_command_consume(int args);
extern int exec_command_log10(int args);
extern int exec_command_xor(int args);
extern int exec_command_copy_to_mem(int args);
extern int exec_command_not(int args);
extern int exec_command_rev_stack(int args);
extern int exec_command_log2(int args);
extern int exec_command_iswhole(int args);
extern int exec_command_split(int args);
extern int exec_command_print_stack(int args);
extern int exec_command_strcmp(int args);
extern int exec_command_push_bin(int args);
extern int exec_command_rev_canvas(int args);
extern int exec_command_if_eq(int args);
extern int exec_command_exit_thingy(int args);
extern int exec_command_inc_mem(int args);
extern int exec_command_dec_mem(int args);

#endif // _COMMANDS_H