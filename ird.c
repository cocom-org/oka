#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ird.h"


#line 141 "./ird.sprut"


/* All internal representation storage is implemented by object stack.  See
   package `object-stack'. */

os_t irp;


#line 17 "ird.c"
#ifndef IR_START_ALLOC
#define IR_START_ALLOC()
#endif

#ifndef IR_STOP_ALLOC
#define IR_STOP_ALLOC()
#endif

#ifndef IR_ALLOC
#define IR_ALLOC(ptr, size, ptr_type) ((ptr) = (ptr_type) malloc (size))
#endif

#ifndef IR_FREE
#define IR_FREE(ptr, size) free (ptr)
#endif

#ifndef IR_BEGIN_IR_node_t
#define IR_BEGIN_IR_node_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_IR_node_t
#define IR_END_IR_node_t(a)
#endif

#ifndef IR_COPY_IR_node_t
#define IR_COPY_IR_node_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_IR_node_t
#define IR_EQUAL_IR_node_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_IR_node_t
#define IR_PRINT_IR_node_t(a) printf ("%lx", (unsigned long) (a))
#endif

#ifndef IR_INPUT_IR_node_t
#define IR_INPUT_IR_node_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_IR_node_t
#define IR_OUTPUT_IR_node_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_BEGIN_integer_t
#define IR_BEGIN_integer_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_integer_t
#define IR_END_integer_t(a)
#endif

#ifndef IR_COPY_integer_t
#define IR_COPY_integer_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_integer_t
#define IR_EQUAL_integer_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_integer_t
#define IR_PRINT_integer_t(a)
#endif

#ifndef IR_INPUT_integer_t
#define IR_INPUT_integer_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_integer_t
#define IR_OUTPUT_integer_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_BEGIN_bool_t
#define IR_BEGIN_bool_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_bool_t
#define IR_END_bool_t(a)
#endif

#ifndef IR_COPY_bool_t
#define IR_COPY_bool_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_bool_t
#define IR_EQUAL_bool_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_bool_t
#define IR_PRINT_bool_t(a)
#endif

#ifndef IR_INPUT_bool_t
#define IR_INPUT_bool_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_bool_t
#define IR_OUTPUT_bool_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_BEGIN_string_t
#define IR_BEGIN_string_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_string_t
#define IR_END_string_t(a)
#endif

#ifndef IR_COPY_string_t
#define IR_COPY_string_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_string_t
#define IR_EQUAL_string_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_string_t
#define IR_PRINT_string_t(a)
#endif

#ifndef IR_INPUT_string_t
#define IR_INPUT_string_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_string_t
#define IR_OUTPUT_string_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_BEGIN_position_t
#define IR_BEGIN_position_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_position_t
#define IR_END_position_t(a)
#endif

#ifndef IR_COPY_position_t
#define IR_COPY_position_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_position_t
#define IR_EQUAL_position_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_position_t
#define IR_PRINT_position_t(a)
#endif

#ifndef IR_INPUT_position_t
#define IR_INPUT_position_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_position_t
#define IR_OUTPUT_position_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_BEGIN_reservation_sets_list_t
#define IR_BEGIN_reservation_sets_list_t(a) memset (&(a), 0, sizeof (a))
#endif

#ifndef IR_END_reservation_sets_list_t
#define IR_END_reservation_sets_list_t(a)
#endif

#ifndef IR_COPY_reservation_sets_list_t
#define IR_COPY_reservation_sets_list_t(a, b) ((a) = (b))
#endif

#ifndef IR_EQUAL_reservation_sets_list_t
#define IR_EQUAL_reservation_sets_list_t(a, b) ((a) == (b))
#endif

#ifndef IR_PRINT_reservation_sets_list_t
#define IR_PRINT_reservation_sets_list_t(a)
#endif

#ifndef IR_INPUT_reservation_sets_list_t
#define IR_INPUT_reservation_sets_list_t(file, field) (fread (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

#ifndef IR_OUTPUT_reservation_sets_list_t
#define IR_OUTPUT_reservation_sets_list_t(file, field) (fwrite (&(field), sizeof (field), 1, (file)) != sizeof (field))
#endif

short _IR_node_level [] =
{
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};

unsigned char _IR_SF_node [] =
{255, 255, 255, 255, 63, 1
};

unsigned char _IR_SF_identifier [] =
{2, 0, 0, 0, 0, 0
};

unsigned char _IR_SF_number [] =
{4, 0, 0, 0, 0, 0
};

unsigned char _IR_SF_code_insertion [] =
{8, 0, 0, 0, 0, 0
};

unsigned char _IR_SF_declaration [] =
{240, 127, 0, 0, 0, 0
};

unsigned char _IR_SF_identifier_declaration [] =
{224, 7, 0, 0, 0, 0
};

unsigned char _IR_SF_instruction_declaration [] =
{64, 0, 0, 0, 0, 0
};

unsigned char _IR_SF_reservation_declaration [] =
{128, 0, 0, 0, 0, 0
};

unsigned char _IR_SF_unit_declaration [] =
{0, 1, 0, 0, 0, 0
};

unsigned char _IR_SF_exclusion_clause [] =
{0, 2, 0, 0, 0, 0
};

unsigned char _IR_SF_automaton_declaration [] =
{0, 4, 0, 0, 0, 0
};

unsigned char _IR_SF_code [] =
{0, 120, 0, 0, 0, 0
};

unsigned char _IR_SF_local_code [] =
{0, 16, 0, 0, 0, 0
};

unsigned char _IR_SF_import_code [] =
{0, 32, 0, 0, 0, 0
};

unsigned char _IR_SF_export_code [] =
{0, 64, 0, 0, 0, 0
};

unsigned char _IR_SF_expression_definition [] =
{0, 128, 0, 0, 0, 0
};

unsigned char _IR_SF_expression [] =
{0, 0, 255, 63, 0, 0
};

unsigned char _IR_SF_one_operand_expression [] =
{0, 0, 162, 0, 0, 0
};

unsigned char _IR_SF_two_operand_expression [] =
{0, 0, 92, 0, 0, 0
};

unsigned char _IR_SF_new_cycle_concatenation [] =
{0, 0, 8, 0, 0, 0
};

unsigned char _IR_SF_concatenation [] =
{0, 0, 16, 0, 0, 0
};

unsigned char _IR_SF_optional_expression [] =
{0, 0, 32, 0, 0, 0
};

unsigned char _IR_SF_alternative [] =
{0, 0, 64, 0, 0, 0
};

unsigned char _IR_SF_repetition [] =
{0, 0, 128, 0, 0, 0
};

unsigned char _IR_SF_expression_atom [] =
{0, 0, 0, 1, 0, 0
};

unsigned char _IR_SF_no_unit [] =
{0, 0, 0, 62, 0, 0
};

unsigned char _IR_SF_nothing [] =
{0, 0, 0, 4, 0, 0
};

unsigned char _IR_SF_result_or_input [] =
{0, 0, 0, 56, 0, 0
};

unsigned char _IR_SF_result [] =
{0, 0, 0, 16, 0, 0
};

unsigned char _IR_SF_input [] =
{0, 0, 0, 32, 0, 0
};

unsigned char _IR_SF_additional_code [] =
{0, 0, 0, 64, 0, 0
};

unsigned char _IR_SF_description [] =
{0, 0, 0, 128, 0, 0
};

unsigned char _IR_SF_single_declaration [] =
{0, 0, 0, 0, 55, 1
};

unsigned char _IR_SF_single_automaton_declaration [] =
{0, 0, 0, 0, 2, 0
};

unsigned char _IR_SF_single_unit_declaration [] =
{0, 0, 0, 0, 4, 0
};

unsigned char _IR_SF_unit_set_element [] =
{0, 0, 0, 0, 8, 0
};

unsigned char _IR_SF_single_expression_declaration [] =
{0, 0, 0, 0, 48, 1
};

unsigned char _IR_SF_single_reservation_declaration [] =
{0, 0, 0, 0, 32, 0
};

unsigned char _IR_SF_result_list [] =
{0, 0, 0, 0, 64, 0
};

unsigned char _IR_SF_input_list [] =
{0, 0, 0, 0, 128, 0
};

unsigned char _IR_SF_single_instruction_declaration [] =
{0, 0, 0, 0, 0, 1
};

unsigned char _IR_SF_state [] =
{0, 0, 0, 0, 0, 2
};

unsigned char _IR_SF_arc [] =
{0, 0, 0, 0, 0, 4
};

unsigned char _IR_SF_alternative_state [] =
{0, 0, 0, 0, 0, 8
};

unsigned char _IR_SF_automaton_instruction_declaration [] =
{0, 0, 0, 0, 0, 16
};

unsigned char _IR_SF_automaton [] =
{0, 0, 0, 0, 0, 32
};

unsigned char _IR_SF__root [] =
{255, 255, 255, 255, 255, 255
};

unsigned char _IR_SF__error [] =
{0, 0, 0, 0, 0, 128
};

unsigned char *_IR_is_type[] =
{
_IR_SF_node,
_IR_SF_identifier,
_IR_SF_number,
_IR_SF_code_insertion,
_IR_SF_declaration,
_IR_SF_identifier_declaration,
_IR_SF_instruction_declaration,
_IR_SF_reservation_declaration,
_IR_SF_unit_declaration,
_IR_SF_exclusion_clause,
_IR_SF_automaton_declaration,
_IR_SF_code,
_IR_SF_local_code,
_IR_SF_import_code,
_IR_SF_export_code,
_IR_SF_expression_definition,
_IR_SF_expression,
_IR_SF_one_operand_expression,
_IR_SF_two_operand_expression,
_IR_SF_new_cycle_concatenation,
_IR_SF_concatenation,
_IR_SF_optional_expression,
_IR_SF_alternative,
_IR_SF_repetition,
_IR_SF_expression_atom,
_IR_SF_no_unit,
_IR_SF_nothing,
_IR_SF_result_or_input,
_IR_SF_result,
_IR_SF_input,
_IR_SF_additional_code,
_IR_SF_description,
_IR_SF_single_declaration,
_IR_SF_single_automaton_declaration,
_IR_SF_single_unit_declaration,
_IR_SF_unit_set_element,
_IR_SF_single_expression_declaration,
_IR_SF_single_reservation_declaration,
_IR_SF_result_list,
_IR_SF_input_list,
_IR_SF_single_instruction_declaration,
_IR_SF_state,
_IR_SF_arc,
_IR_SF_alternative_state,
_IR_SF_automaton_instruction_declaration,
_IR_SF_automaton,
_IR_SF__root,
_IR_SF__error
};

unsigned char _IR_D_expression [] =
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  _IR_offsetof (_IR_expression_definition, _IR_S_expression_definition)
    + _IR_offsetof (struct _IR_S_expression_definition, expression), 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)
    + _IR_offsetof (struct _IR_S_single_expression_declaration, expression), 
  _IR_offsetof (_IR_single_reservation_declaration, _IR_S_single_reservation_declaration)
    + _IR_offsetof (struct _IR_S_single_reservation_declaration, _IR_M_single_expression_declaration)
    + _IR_offsetof (struct _IR_S_single_expression_declaration, expression), 
  0, 0, 
  _IR_offsetof (_IR_single_instruction_declaration, _IR_S_single_instruction_declaration)
    + _IR_offsetof (struct _IR_S_single_instruction_declaration, _IR_M_single_expression_declaration)
    + _IR_offsetof (struct _IR_S_single_expression_declaration, expression), 
  0, 0, 0, 0, 0, 0, 0
};

unsigned char _IR_D_expression_identifier [] =
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  _IR_offsetof (_IR_expression_definition, _IR_S_expression_definition)
    + _IR_offsetof (struct _IR_S_expression_definition, expression_identifier), 
  0, 0, 0, 0, 0, 0, 0, 0, 
  _IR_offsetof (_IR_expression_atom, _IR_S_expression_atom)
    + _IR_offsetof (struct _IR_S_expression_atom, expression_identifier), 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0
};

void *_IR_class_structure_array [] =
{
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
};

const char *IR_node_name[] =
{
  "node",
  "identifier",
  "number",
  "code_insertion",
  "declaration",
  "identifier_declaration",
  "instruction_declaration",
  "reservation_declaration",
  "unit_declaration",
  "exclusion_clause",
  "automaton_declaration",
  "code",
  "local_code",
  "import_code",
  "export_code",
  "expression_definition",
  "expression",
  "one_operand_expression",
  "two_operand_expression",
  "new_cycle_concatenation",
  "concatenation",
  "optional_expression",
  "alternative",
  "repetition",
  "expression_atom",
  "no_unit",
  "nothing",
  "result_or_input",
  "result",
  "input",
  "additional_code",
  "description",
  "single_declaration",
  "single_automaton_declaration",
  "single_unit_declaration",
  "unit_set_element",
  "single_expression_declaration",
  "single_reservation_declaration",
  "result_list",
  "input_list",
  "single_instruction_declaration",
  "state",
  "arc",
  "alternative_state",
  "automaton_instruction_declaration",
  "automaton",
  "%root",
  "%error"
};

unsigned char IR_node_size[] =
{
  sizeof (_IR_node),
  sizeof (_IR_identifier),
  sizeof (_IR_number),
  sizeof (_IR_code_insertion),
  sizeof (_IR_declaration),
  sizeof (_IR_identifier_declaration),
  sizeof (_IR_instruction_declaration),
  sizeof (_IR_reservation_declaration),
  sizeof (_IR_unit_declaration),
  sizeof (_IR_exclusion_clause),
  sizeof (_IR_automaton_declaration),
  sizeof (_IR_code),
  sizeof (_IR_local_code),
  sizeof (_IR_import_code),
  sizeof (_IR_export_code),
  sizeof (_IR_expression_definition),
  sizeof (_IR_expression),
  sizeof (_IR_one_operand_expression),
  sizeof (_IR_two_operand_expression),
  sizeof (_IR_new_cycle_concatenation),
  sizeof (_IR_concatenation),
  sizeof (_IR_optional_expression),
  sizeof (_IR_alternative),
  sizeof (_IR_repetition),
  sizeof (_IR_expression_atom),
  sizeof (_IR_no_unit),
  sizeof (_IR_nothing),
  sizeof (_IR_result_or_input),
  sizeof (_IR_result),
  sizeof (_IR_input),
  sizeof (_IR_additional_code),
  sizeof (_IR_description),
  sizeof (_IR_single_declaration),
  sizeof (_IR_single_automaton_declaration),
  sizeof (_IR_single_unit_declaration),
  sizeof (_IR_unit_set_element),
  sizeof (_IR_single_expression_declaration),
  sizeof (_IR_single_reservation_declaration),
  sizeof (_IR_result_list),
  sizeof (_IR_input_list),
  sizeof (_IR_single_instruction_declaration),
  sizeof (_IR_state),
  sizeof (_IR_arc),
  sizeof (_IR_alternative_state),
  sizeof (_IR_automaton_instruction_declaration),
  sizeof (_IR_automaton),
  sizeof (_IR__root),
  sizeof (_IR__error)
};

static int (* _IR_traverse_guard_function_variable) (IR_node_t node);

static int _IR_current_graph_pass_number;

void _IR_set_double_field_value
  (IR_double_link_t link, IR_node_t value, int disp, int flag)
{
}

IR_double_link_t IR__first_double_link (IR_node_t node)
{
  return NULL;
}

void IR__set_double_link (IR_double_link_t link, IR_node_t value)
{
#ifdef __IR_DEBUG__
  if (link == NULL)
    abort ();
#endif /* __IR_DEBUG__ */
  (*link->set_function) (link->link_owner, value);
}

static void _IR_node_field_initiation (IR_node_mode_t node_mode, IR_node_t node)
{
  switch (node_mode)
    {
    case IR_NM_node:
      IR_BEGIN_position_t ((((_IR_node *) node)->_IR_S_node.position));
      break;
    case IR_NM_identifier:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_identifier *) node)->_IR_S_identifier._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_string_t ((((_IR_identifier *) node)->_IR_S_identifier.identifier_itself));
      IR_BEGIN_IR_node_t ((((_IR_identifier *) node)->_IR_S_identifier.next_identifier));
      break;
    case IR_NM_number:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_number *) node)->_IR_S_number._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_integer_t ((((_IR_number *) node)->_IR_S_number.number_value));
      break;
    case IR_NM_code_insertion:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_code_insertion *) node)->_IR_S_code_insertion._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_string_t ((((_IR_code_insertion *) node)->_IR_S_code_insertion.code_insertion_itself));
      break;
    case IR_NM_declaration:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_declaration *) node)->_IR_S_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_IR_node_t ((((_IR_declaration *) node)->_IR_S_declaration.next_declaration));
      break;
    case IR_NM_identifier_declaration:
      _IR_node_field_initiation (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_identifier_declaration *) node)->_IR_S_identifier_declaration._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)));
      IR_BEGIN_IR_node_t ((((_IR_identifier_declaration *) node)->_IR_S_identifier_declaration.identifier_list));
      break;
    case IR_NM_instruction_declaration:
      _IR_node_field_initiation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_instruction_declaration *) node)->_IR_S_instruction_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_reservation_declaration:
      _IR_node_field_initiation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_reservation_declaration *) node)->_IR_S_reservation_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_unit_declaration:
      _IR_node_field_initiation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_unit_declaration *) node)->_IR_S_unit_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      IR_BEGIN_IR_node_t ((((_IR_unit_declaration *) node)->_IR_S_unit_declaration.automaton_identifier));
      break;
    case IR_NM_exclusion_clause:
      _IR_node_field_initiation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_exclusion_clause *) node)->_IR_S_exclusion_clause._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      IR_BEGIN_IR_node_t ((((_IR_exclusion_clause *) node)->_IR_S_exclusion_clause.identifier_list_2));
      break;
    case IR_NM_automaton_declaration:
      _IR_node_field_initiation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_automaton_declaration *) node)->_IR_S_automaton_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_code:
      _IR_node_field_initiation (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_code *) node)->_IR_S_code._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)));
      IR_BEGIN_IR_node_t ((((_IR_code *) node)->_IR_S_code.code_itself));
      break;
    case IR_NM_local_code:
      _IR_node_field_initiation (IR_NM_code, (IR_node_t) ((char *) &((_IR_local_code *) node)->_IR_S_local_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_import_code:
      _IR_node_field_initiation (IR_NM_code, (IR_node_t) ((char *) &((_IR_import_code *) node)->_IR_S_import_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_export_code:
      _IR_node_field_initiation (IR_NM_code, (IR_node_t) ((char *) &((_IR_export_code *) node)->_IR_S_export_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_expression_definition:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression_definition *) node)->_IR_S_expression_definition._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_IR_node_t ((((_IR_expression_definition *) node)->_IR_S_expression_definition.expression));
      IR_BEGIN_IR_node_t ((((_IR_expression_definition *) node)->_IR_S_expression_definition.next_expression_definition));
      IR_BEGIN_IR_node_t ((((_IR_expression_definition *) node)->_IR_S_expression_definition.expression_identifier));
      break;
    case IR_NM_expression:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression *) node)->_IR_S_expression._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      break;
    case IR_NM_one_operand_expression:
      _IR_node_field_initiation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_one_operand_expression *) node)->_IR_S_one_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_BEGIN_IR_node_t ((((_IR_one_operand_expression *) node)->_IR_S_one_operand_expression.operand));
      break;
    case IR_NM_two_operand_expression:
      _IR_node_field_initiation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_two_operand_expression *) node)->_IR_S_two_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_BEGIN_IR_node_t ((((_IR_two_operand_expression *) node)->_IR_S_two_operand_expression.left_operand));
      IR_BEGIN_IR_node_t ((((_IR_two_operand_expression *) node)->_IR_S_two_operand_expression.right_operand));
      break;
    case IR_NM_new_cycle_concatenation:
      _IR_node_field_initiation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_new_cycle_concatenation *) node)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_concatenation:
      _IR_node_field_initiation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_concatenation *) node)->_IR_S_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_optional_expression:
      _IR_node_field_initiation (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_optional_expression *) node)->_IR_S_optional_expression._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)));
      break;
    case IR_NM_alternative:
      _IR_node_field_initiation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_alternative *) node)->_IR_S_alternative._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_repetition:
      _IR_node_field_initiation (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_repetition *) node)->_IR_S_repetition._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)));
      IR_BEGIN_IR_node_t ((((_IR_repetition *) node)->_IR_S_repetition.repetition_number));
      break;
    case IR_NM_expression_atom:
      _IR_node_field_initiation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_expression_atom *) node)->_IR_S_expression_atom._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_BEGIN_IR_node_t ((((_IR_expression_atom *) node)->_IR_S_expression_atom.expression_identifier));
      IR_BEGIN_IR_node_t ((((_IR_expression_atom *) node)->_IR_S_expression_atom.single_declaration));
      break;
    case IR_NM_no_unit:
      _IR_node_field_initiation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_no_unit *) node)->_IR_S_no_unit._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      break;
    case IR_NM_nothing:
      _IR_node_field_initiation (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_nothing *) node)->_IR_S_nothing._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)));
      break;
    case IR_NM_result_or_input:
      _IR_node_field_initiation (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_result_or_input *) node)->_IR_S_result_or_input._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)));
      break;
    case IR_NM_result:
      _IR_node_field_initiation (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_result *) node)->_IR_S_result._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)));
      IR_BEGIN_integer_t ((((_IR_result *) node)->_IR_S_result.result_number));
      break;
    case IR_NM_input:
      _IR_node_field_initiation (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_input *) node)->_IR_S_input._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)));
      IR_BEGIN_integer_t ((((_IR_input *) node)->_IR_S_input.input_number));
      break;
    case IR_NM_additional_code:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_additional_code *) node)->_IR_S_additional_code._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_string_t ((((_IR_additional_code *) node)->_IR_S_additional_code.additional_code_itself));
      break;
    case IR_NM_description:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_description *) node)->_IR_S_description._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_IR_node_t ((((_IR_description *) node)->_IR_S_description.declaration_list));
      IR_BEGIN_IR_node_t ((((_IR_description *) node)->_IR_S_description.expression_definition_list));
      IR_BEGIN_IR_node_t ((((_IR_description *) node)->_IR_S_description.additional_code));
      IR_BEGIN_IR_node_t ((((_IR_description *) node)->_IR_S_description.single_declaration_list));
      IR_BEGIN_integer_t ((((_IR_description *) node)->_IR_S_description.units_number));
{

#line 515 "./ird.sprut"
(((_IR_description *) node)->_IR_S_description.units_number) = 0;

#line 835 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_description *) node)->_IR_S_description.instructions_number));
{

#line 517 "./ird.sprut"
(((_IR_description *) node)->_IR_S_description.instructions_number) = 0;

#line 843 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_description *) node)->_IR_S_description.max_instruction_reservation_cycles));
      IR_BEGIN_IR_node_t ((((_IR_description *) node)->_IR_S_description.first_automaton));
      break;
    case IR_NM_single_declaration:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_single_declaration *) node)->_IR_S_single_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_IR_node_t ((((_IR_single_declaration *) node)->_IR_S_single_declaration.identifier));
      IR_BEGIN_IR_node_t ((((_IR_single_declaration *) node)->_IR_S_single_declaration.next_single_declaration));
      break;
    case IR_NM_single_automaton_declaration:
      _IR_node_field_initiation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_automaton_declaration *) node)->_IR_S_single_automaton_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_BEGIN_bool_t ((((_IR_single_automaton_declaration *) node)->_IR_S_single_automaton_declaration.automaton_is_used));
{

#line 410 "./ird.sprut"
(((_IR_single_automaton_declaration *) node)->_IR_S_single_automaton_declaration.automaton_is_used) = 0 /*FALSE*/;

#line 861 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_single_automaton_declaration *) node)->_IR_S_single_automaton_declaration.corresponding_automaton));
      break;
    case IR_NM_single_unit_declaration:
      _IR_node_field_initiation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_BEGIN_bool_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.unit_is_used));
{

#line 420 "./ird.sprut"
(((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.unit_is_used) = 0 /*FALSE*/;

#line 873 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.the_same_automaton_unit));
      IR_BEGIN_integer_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.the_same_automaton_message_reported_p));
      IR_BEGIN_integer_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.unit_number));
      IR_BEGIN_IR_node_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.single_automaton_declaration));
      IR_BEGIN_integer_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.max_occurrence_cycle_number));
{

#line 439 "./ird.sprut"
(((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.max_occurrence_cycle_number) = 0;

#line 885 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.exclusion_list));
{

#line 442 "./ird.sprut"
(((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.exclusion_list) = NULL;

#line 893 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_single_unit_declaration *) node)->_IR_S_single_unit_declaration.corresponding_automaton_number));
      break;
    case IR_NM_unit_set_element:
      _IR_node_field_initiation (IR_NM_node, (IR_node_t) ((char *) &((_IR_unit_set_element *) node)->_IR_S_unit_set_element._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_BEGIN_IR_node_t ((((_IR_unit_set_element *) node)->_IR_S_unit_set_element.single_unit_declaration));
      IR_BEGIN_IR_node_t ((((_IR_unit_set_element *) node)->_IR_S_unit_set_element.next_unit_set_element));
      break;
    case IR_NM_single_expression_declaration:
      _IR_node_field_initiation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_expression_declaration *) node)->_IR_S_single_expression_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_BEGIN_IR_node_t ((((_IR_single_expression_declaration *) node)->_IR_S_single_expression_declaration.expression));
{

#line 462 "./ird.sprut"
(((_IR_single_expression_declaration *) node)->_IR_S_single_expression_declaration.expression) = NULL;

#line 910 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_single_expression_declaration *) node)->_IR_S_single_expression_declaration.cycle_checking_pass_number));
      break;
    case IR_NM_single_reservation_declaration:
      _IR_node_field_initiation (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_reservation_declaration *) node)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)));
      break;
    case IR_NM_result_list:
      IR_BEGIN_IR_node_t ((((_IR_result_list *) node)->_IR_S_result_list.result));
      IR_BEGIN_IR_node_t ((((_IR_result_list *) node)->_IR_S_result_list.next_result));
      break;
    case IR_NM_input_list:
      IR_BEGIN_IR_node_t ((((_IR_input_list *) node)->_IR_S_input_list.input));
      IR_BEGIN_IR_node_t ((((_IR_input_list *) node)->_IR_S_input_list.next_input));
      break;
    case IR_NM_single_instruction_declaration:
      _IR_node_field_initiation (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)));
      IR_BEGIN_integer_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.instruction_number));
      IR_BEGIN_IR_node_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.result_list));
      IR_BEGIN_IR_node_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.input_list));
      IR_BEGIN_IR_node_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.transformed_expression));
{

#line 600 "./ird.sprut"
(((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.transformed_expression) = NULL;

#line 936 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction));
{

#line 604 "./ird.sprut"
(((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction) = NULL;

#line 944 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_single_instruction_declaration *) node)->_IR_S_single_instruction_declaration.equivalence_class_number));
      break;
    case IR_NM_state:
      IR_BEGIN_IR_node_t ((((_IR_state *) node)->_IR_S_state.first_out_arc));
{

#line 542 "./ird.sprut"
(((_IR_state *) node)->_IR_S_state.first_out_arc) = NULL;

#line 955 "ird.c"
}
      IR_BEGIN_bool_t ((((_IR_state *) node)->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming));
{

#line 544 "./ird.sprut"
(((_IR_state *) node)->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming) = 0 /* FALSE */;

#line 963 "ird.c"
}
      IR_BEGIN_bool_t ((((_IR_state *) node)->_IR_S_state.it_was_placed_in_stack_for_DFA_forming));
{

#line 546 "./ird.sprut"
(((_IR_state *) node)->_IR_S_state.it_was_placed_in_stack_for_DFA_forming) = 0 /* FALSE */;

#line 971 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_state *) node)->_IR_S_state.component_states));
{

#line 551 "./ird.sprut"
(((_IR_state *) node)->_IR_S_state.component_states) = NULL;

#line 979 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_state *) node)->_IR_S_state.pass_number));
{

#line 553 "./ird.sprut"
(((_IR_state *) node)->_IR_S_state.pass_number) = 0;

#line 987 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_state *) node)->_IR_S_state.next_equivalence_class_state));
      IR_BEGIN_integer_t ((((_IR_state *) node)->_IR_S_state.equivalence_class_number_1));
      IR_BEGIN_integer_t ((((_IR_state *) node)->_IR_S_state.equivalence_class_number_2));
      IR_BEGIN_IR_node_t ((((_IR_state *) node)->_IR_S_state.equivalence_class_state));
      IR_BEGIN_integer_t ((((_IR_state *) node)->_IR_S_state.order_state_number));
      IR_BEGIN_reservation_sets_list_t ((((_IR_state *) node)->_IR_S_state.reservations));
      IR_BEGIN_integer_t ((((_IR_state *) node)->_IR_S_state.unique_number));
      IR_BEGIN_IR_node_t ((((_IR_state *) node)->_IR_S_state.automaton));
      break;
    case IR_NM_arc:
      IR_BEGIN_IR_node_t ((((_IR_arc *) node)->_IR_S_arc.next_arc_marked_by_instruction));
{

#line 588 "./ird.sprut"
(((_IR_arc *) node)->_IR_S_arc.next_arc_marked_by_instruction) = NULL;

#line 1005 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_arc *) node)->_IR_S_arc.to_state));
      IR_BEGIN_IR_node_t ((((_IR_arc *) node)->_IR_S_arc.instruction));
      IR_BEGIN_IR_node_t ((((_IR_arc *) node)->_IR_S_arc.next_out_arc));
      break;
    case IR_NM_alternative_state:
      IR_BEGIN_IR_node_t ((((_IR_alternative_state *) node)->_IR_S_alternative_state.state));
      IR_BEGIN_IR_node_t ((((_IR_alternative_state *) node)->_IR_S_alternative_state.next_alternative_state));
      break;
    case IR_NM_automaton_instruction_declaration:
      IR_BEGIN_IR_node_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.alternative_state_list));
{

#line 648 "./ird.sprut"
(((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.alternative_state_list) = NULL;

#line 1022 "ird.c"
}
      IR_BEGIN_IR_node_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction));
      IR_BEGIN_bool_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.first_instruction_with_the_same_reservations));
      IR_BEGIN_IR_node_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction));
      IR_BEGIN_bool_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number));
{

#line 665 "./ird.sprut"
(((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number) = 0 /* FALSE */;

#line 1033 "ird.c"
}
      IR_BEGIN_integer_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.instruction_equivalence_class_number));
      IR_BEGIN_IR_node_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.single_instruction_declaration));
      IR_BEGIN_IR_node_t ((((_IR_automaton_instruction_declaration *) node)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration));
      break;
    case IR_NM_automaton:
      IR_BEGIN_IR_node_t ((((_IR_automaton *) node)->_IR_S_automaton.start_state));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.instruction_equivalence_classes_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.achieved_states_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.automaton_order_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.NDFA_states_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.DFA_states_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.minimal_DFA_states_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.NDFA_arcs_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.DFA_arcs_number));
      IR_BEGIN_integer_t ((((_IR_automaton *) node)->_IR_S_automaton.minimal_DFA_arcs_number));
      IR_BEGIN_IR_node_t ((((_IR_automaton *) node)->_IR_S_automaton.automaton_instruction_declaration_list));
      IR_BEGIN_IR_node_t ((((_IR_automaton *) node)->_IR_S_automaton.corresponding_single_automaton_declaration));
      IR_BEGIN_IR_node_t ((((_IR_automaton *) node)->_IR_S_automaton.next_automaton));
      break;
    case IR_NM__error:
      break;
    default:
      abort ();
      break;
    }
}

IR_node_t IR_create_node (IR_node_mode_t node_mode)
{
 IR_node_t _result;

  IR_ALLOC (_result, IR_node_size [node_mode], IR_node_t);
#ifdef __IR_DEBUG__
  if (_result == NULL)
    abort ();
#endif /* __IR_DEBUG__ */
  IR_NODE_MODE (_result) = node_mode;
  _result->_IR_last_graph_pass_number = 0;
  _IR_node_field_initiation (node_mode, _result);
  return _result;
}

IR_node_t IR_new_identifier
(position_t position,
 string_t identifier_itself,
 IR_node_t next_identifier)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_identifier);
  (((_IR_identifier *) _result)->_IR_S_identifier._IR_M_node.position) = position;
  (((_IR_identifier *) _result)->_IR_S_identifier.identifier_itself) = identifier_itself;
  (((_IR_identifier *) _result)->_IR_S_identifier.next_identifier) = next_identifier;
  return _result;
}

IR_node_t IR_new_number
(position_t position,
 integer_t number_value)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_number);
  (((_IR_number *) _result)->_IR_S_number._IR_M_node.position) = position;
  (((_IR_number *) _result)->_IR_S_number.number_value) = number_value;
  return _result;
}

IR_node_t IR_new_code_insertion
(position_t position,
 string_t code_insertion_itself)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_code_insertion);
  (((_IR_code_insertion *) _result)->_IR_S_code_insertion._IR_M_node.position) = position;
  (((_IR_code_insertion *) _result)->_IR_S_code_insertion.code_insertion_itself) = code_insertion_itself;
  return _result;
}

IR_node_t IR_new_instruction_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_instruction_declaration);
  (((_IR_instruction_declaration *) _result)->_IR_S_instruction_declaration._IR_M_identifier_declaration._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_instruction_declaration *) _result)->_IR_S_instruction_declaration._IR_M_identifier_declaration._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_instruction_declaration *) _result)->_IR_S_instruction_declaration._IR_M_identifier_declaration.identifier_list) = identifier_list;
  return _result;
}

IR_node_t IR_new_reservation_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_reservation_declaration);
  (((_IR_reservation_declaration *) _result)->_IR_S_reservation_declaration._IR_M_identifier_declaration._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_reservation_declaration *) _result)->_IR_S_reservation_declaration._IR_M_identifier_declaration._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_reservation_declaration *) _result)->_IR_S_reservation_declaration._IR_M_identifier_declaration.identifier_list) = identifier_list;
  return _result;
}

IR_node_t IR_new_unit_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list,
 IR_node_t automaton_identifier)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_unit_declaration);
  (((_IR_unit_declaration *) _result)->_IR_S_unit_declaration._IR_M_identifier_declaration._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_unit_declaration *) _result)->_IR_S_unit_declaration._IR_M_identifier_declaration._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_unit_declaration *) _result)->_IR_S_unit_declaration._IR_M_identifier_declaration.identifier_list) = identifier_list;
  (((_IR_unit_declaration *) _result)->_IR_S_unit_declaration.automaton_identifier) = automaton_identifier;
  return _result;
}

IR_node_t IR_new_exclusion_clause
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list,
 IR_node_t identifier_list_2)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_exclusion_clause);
  (((_IR_exclusion_clause *) _result)->_IR_S_exclusion_clause._IR_M_identifier_declaration._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_exclusion_clause *) _result)->_IR_S_exclusion_clause._IR_M_identifier_declaration._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_exclusion_clause *) _result)->_IR_S_exclusion_clause._IR_M_identifier_declaration.identifier_list) = identifier_list;
  (((_IR_exclusion_clause *) _result)->_IR_S_exclusion_clause.identifier_list_2) = identifier_list_2;
  return _result;
}

IR_node_t IR_new_automaton_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_automaton_declaration);
  (((_IR_automaton_declaration *) _result)->_IR_S_automaton_declaration._IR_M_identifier_declaration._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_automaton_declaration *) _result)->_IR_S_automaton_declaration._IR_M_identifier_declaration._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_automaton_declaration *) _result)->_IR_S_automaton_declaration._IR_M_identifier_declaration.identifier_list) = identifier_list;
  return _result;
}

IR_node_t IR_new_local_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_local_code);
  (((_IR_local_code *) _result)->_IR_S_local_code._IR_M_code._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_local_code *) _result)->_IR_S_local_code._IR_M_code._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_local_code *) _result)->_IR_S_local_code._IR_M_code.code_itself) = code_itself;
  return _result;
}

IR_node_t IR_new_import_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_import_code);
  (((_IR_import_code *) _result)->_IR_S_import_code._IR_M_code._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_import_code *) _result)->_IR_S_import_code._IR_M_code._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_import_code *) _result)->_IR_S_import_code._IR_M_code.code_itself) = code_itself;
  return _result;
}

IR_node_t IR_new_export_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_export_code);
  (((_IR_export_code *) _result)->_IR_S_export_code._IR_M_code._IR_M_declaration._IR_M_node.position) = position;
  (((_IR_export_code *) _result)->_IR_S_export_code._IR_M_code._IR_M_declaration.next_declaration) = next_declaration;
  (((_IR_export_code *) _result)->_IR_S_export_code._IR_M_code.code_itself) = code_itself;
  return _result;
}

IR_node_t IR_new_expression_definition
(position_t position,
 IR_node_t expression_identifier)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_expression_definition);
  (((_IR_expression_definition *) _result)->_IR_S_expression_definition._IR_M_node.position) = position;
  (((_IR_expression_definition *) _result)->_IR_S_expression_definition.expression_identifier) = expression_identifier;
  return _result;
}

IR_node_t IR_new_new_cycle_concatenation
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_new_cycle_concatenation);
  (((_IR_new_cycle_concatenation *) _result)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression._IR_M_expression._IR_M_node.position) = position;
  (((_IR_new_cycle_concatenation *) _result)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression.left_operand) = left_operand;
  (((_IR_new_cycle_concatenation *) _result)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression.right_operand) = right_operand;
  return _result;
}

IR_node_t IR_new_concatenation
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_concatenation);
  (((_IR_concatenation *) _result)->_IR_S_concatenation._IR_M_two_operand_expression._IR_M_expression._IR_M_node.position) = position;
  (((_IR_concatenation *) _result)->_IR_S_concatenation._IR_M_two_operand_expression.left_operand) = left_operand;
  (((_IR_concatenation *) _result)->_IR_S_concatenation._IR_M_two_operand_expression.right_operand) = right_operand;
  return _result;
}

IR_node_t IR_new_optional_expression
(position_t position,
 IR_node_t operand)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_optional_expression);
  (((_IR_optional_expression *) _result)->_IR_S_optional_expression._IR_M_one_operand_expression._IR_M_expression._IR_M_node.position) = position;
  (((_IR_optional_expression *) _result)->_IR_S_optional_expression._IR_M_one_operand_expression.operand) = operand;
  return _result;
}

IR_node_t IR_new_alternative
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_alternative);
  (((_IR_alternative *) _result)->_IR_S_alternative._IR_M_two_operand_expression._IR_M_expression._IR_M_node.position) = position;
  (((_IR_alternative *) _result)->_IR_S_alternative._IR_M_two_operand_expression.left_operand) = left_operand;
  (((_IR_alternative *) _result)->_IR_S_alternative._IR_M_two_operand_expression.right_operand) = right_operand;
  return _result;
}

IR_node_t IR_new_repetition
(position_t position,
 IR_node_t operand,
 IR_node_t repetition_number)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_repetition);
  (((_IR_repetition *) _result)->_IR_S_repetition._IR_M_one_operand_expression._IR_M_expression._IR_M_node.position) = position;
  (((_IR_repetition *) _result)->_IR_S_repetition._IR_M_one_operand_expression.operand) = operand;
  (((_IR_repetition *) _result)->_IR_S_repetition.repetition_number) = repetition_number;
  return _result;
}

IR_node_t IR_new_expression_atom
(position_t position,
 IR_node_t expression_identifier)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_expression_atom);
  (((_IR_expression_atom *) _result)->_IR_S_expression_atom._IR_M_expression._IR_M_node.position) = position;
  (((_IR_expression_atom *) _result)->_IR_S_expression_atom.expression_identifier) = expression_identifier;
  return _result;
}

IR_node_t IR_new_nothing
(position_t position)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_nothing);
  (((_IR_nothing *) _result)->_IR_S_nothing._IR_M_no_unit._IR_M_expression._IR_M_node.position) = position;
  return _result;
}

IR_node_t IR_new_result
(position_t position,
 integer_t result_number)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_result);
  (((_IR_result *) _result)->_IR_S_result._IR_M_result_or_input._IR_M_no_unit._IR_M_expression._IR_M_node.position) = position;
  (((_IR_result *) _result)->_IR_S_result.result_number) = result_number;
  return _result;
}

IR_node_t IR_new_input
(position_t position,
 integer_t input_number)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_input);
  (((_IR_input *) _result)->_IR_S_input._IR_M_result_or_input._IR_M_no_unit._IR_M_expression._IR_M_node.position) = position;
  (((_IR_input *) _result)->_IR_S_input.input_number) = input_number;
  return _result;
}

IR_node_t IR_new_additional_code
(position_t position,
 string_t additional_code_itself)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_additional_code);
  (((_IR_additional_code *) _result)->_IR_S_additional_code._IR_M_node.position) = position;
  (((_IR_additional_code *) _result)->_IR_S_additional_code.additional_code_itself) = additional_code_itself;
  return _result;
}

IR_node_t IR_new_description
(position_t position,
 IR_node_t declaration_list,
 IR_node_t expression_definition_list,
 IR_node_t additional_code)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_description);
  (((_IR_description *) _result)->_IR_S_description._IR_M_node.position) = position;
  (((_IR_description *) _result)->_IR_S_description.declaration_list) = declaration_list;
  (((_IR_description *) _result)->_IR_S_description.expression_definition_list) = expression_definition_list;
  (((_IR_description *) _result)->_IR_S_description.additional_code) = additional_code;
  return _result;
}

IR_node_t IR_new_single_automaton_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_single_automaton_declaration);
  (((_IR_single_automaton_declaration *) _result)->_IR_S_single_automaton_declaration._IR_M_single_declaration._IR_M_node.position) = position;
  (((_IR_single_automaton_declaration *) _result)->_IR_S_single_automaton_declaration._IR_M_single_declaration.identifier) = identifier;
  (((_IR_single_automaton_declaration *) _result)->_IR_S_single_automaton_declaration._IR_M_single_declaration.next_single_declaration) = next_single_declaration;
  return _result;
}

IR_node_t IR_new_single_unit_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_single_unit_declaration);
  (((_IR_single_unit_declaration *) _result)->_IR_S_single_unit_declaration._IR_M_single_declaration._IR_M_node.position) = position;
  (((_IR_single_unit_declaration *) _result)->_IR_S_single_unit_declaration._IR_M_single_declaration.identifier) = identifier;
  (((_IR_single_unit_declaration *) _result)->_IR_S_single_unit_declaration._IR_M_single_declaration.next_single_declaration) = next_single_declaration;
  return _result;
}

IR_node_t IR_new_unit_set_element
(position_t position,
 IR_node_t single_unit_declaration,
 IR_node_t next_unit_set_element)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_unit_set_element);
  (((_IR_unit_set_element *) _result)->_IR_S_unit_set_element._IR_M_node.position) = position;
  (((_IR_unit_set_element *) _result)->_IR_S_unit_set_element.single_unit_declaration) = single_unit_declaration;
  (((_IR_unit_set_element *) _result)->_IR_S_unit_set_element.next_unit_set_element) = next_unit_set_element;
  return _result;
}

IR_node_t IR_new_single_reservation_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_single_reservation_declaration);
  (((_IR_single_reservation_declaration *) _result)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration._IR_M_single_declaration._IR_M_node.position) = position;
  (((_IR_single_reservation_declaration *) _result)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration._IR_M_single_declaration.identifier) = identifier;
  (((_IR_single_reservation_declaration *) _result)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration._IR_M_single_declaration.next_single_declaration) = next_single_declaration;
  return _result;
}

IR_node_t IR_new_result_list
(IR_node_t result,
 IR_node_t next_result)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_result_list);
  (((_IR_result_list *) _result)->_IR_S_result_list.result) = result;
  (((_IR_result_list *) _result)->_IR_S_result_list.next_result) = next_result;
  return _result;
}

IR_node_t IR_new_input_list
(IR_node_t input,
 IR_node_t next_input)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_input_list);
  (((_IR_input_list *) _result)->_IR_S_input_list.input) = input;
  (((_IR_input_list *) _result)->_IR_S_input_list.next_input) = next_input;
  return _result;
}

IR_node_t IR_new_single_instruction_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_single_instruction_declaration);
  (((_IR_single_instruction_declaration *) _result)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration._IR_M_single_declaration._IR_M_node.position) = position;
  (((_IR_single_instruction_declaration *) _result)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration._IR_M_single_declaration.identifier) = identifier;
  (((_IR_single_instruction_declaration *) _result)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration._IR_M_single_declaration.next_single_declaration) = next_single_declaration;
  return _result;
}

IR_node_t IR_new_state
(reservation_sets_list_t reservations,
 integer_t unique_number,
 IR_node_t automaton)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_state);
  (((_IR_state *) _result)->_IR_S_state.reservations) = reservations;
  (((_IR_state *) _result)->_IR_S_state.unique_number) = unique_number;
  (((_IR_state *) _result)->_IR_S_state.automaton) = automaton;
  return _result;
}

IR_node_t IR_new_arc
(IR_node_t to_state,
 IR_node_t instruction,
 IR_node_t next_out_arc)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_arc);
  (((_IR_arc *) _result)->_IR_S_arc.to_state) = to_state;
  (((_IR_arc *) _result)->_IR_S_arc.instruction) = instruction;
  (((_IR_arc *) _result)->_IR_S_arc.next_out_arc) = next_out_arc;
  return _result;
}

IR_node_t IR_new_alternative_state
(IR_node_t state,
 IR_node_t next_alternative_state)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_alternative_state);
  (((_IR_alternative_state *) _result)->_IR_S_alternative_state.state) = state;
  (((_IR_alternative_state *) _result)->_IR_S_alternative_state.next_alternative_state) = next_alternative_state;
  return _result;
}

IR_node_t IR_new_automaton_instruction_declaration
(IR_node_t single_instruction_declaration,
 IR_node_t next_automaton_instruction_declaration)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_automaton_instruction_declaration);
  (((_IR_automaton_instruction_declaration *) _result)->_IR_S_automaton_instruction_declaration.single_instruction_declaration) = single_instruction_declaration;
  (((_IR_automaton_instruction_declaration *) _result)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration) = next_automaton_instruction_declaration;
  return _result;
}

IR_node_t IR_new_automaton
(IR_node_t automaton_instruction_declaration_list,
 IR_node_t corresponding_single_automaton_declaration,
 IR_node_t next_automaton)
{
  IR_node_t _result;

  _result = IR_create_node (IR_NM_automaton);
  (((_IR_automaton *) _result)->_IR_S_automaton.automaton_instruction_declaration_list) = automaton_instruction_declaration_list;
  (((_IR_automaton *) _result)->_IR_S_automaton.corresponding_single_automaton_declaration) = corresponding_single_automaton_declaration;
  (((_IR_automaton *) _result)->_IR_S_automaton.next_automaton) = next_automaton;
  return _result;
}

static void _IR_copy_node_fields (IR_node_mode_t node_mode, IR_node_t to, IR_node_t from)
{
  switch (node_mode)
    {
    case IR_NM_node:
      IR_COPY_position_t ((((_IR_node *) to)->_IR_S_node.position), (((_IR_node *) from)->_IR_S_node.position));
      break;
    case IR_NM_identifier:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_identifier *) to)->_IR_S_identifier._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_identifier *) from)->_IR_S_identifier._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_string_t ((((_IR_identifier *) to)->_IR_S_identifier.identifier_itself), (((_IR_identifier *) from)->_IR_S_identifier.identifier_itself));
      IR_COPY_IR_node_t ((((_IR_identifier *) to)->_IR_S_identifier.next_identifier), (((_IR_identifier *) from)->_IR_S_identifier.next_identifier));
      break;
    case IR_NM_number:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_number *) to)->_IR_S_number._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_number *) from)->_IR_S_number._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_integer_t ((((_IR_number *) to)->_IR_S_number.number_value), (((_IR_number *) from)->_IR_S_number.number_value));
      break;
    case IR_NM_code_insertion:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_code_insertion *) to)->_IR_S_code_insertion._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_code_insertion *) from)->_IR_S_code_insertion._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_string_t ((((_IR_code_insertion *) to)->_IR_S_code_insertion.code_insertion_itself), (((_IR_code_insertion *) from)->_IR_S_code_insertion.code_insertion_itself));
      break;
    case IR_NM_declaration:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_declaration *) to)->_IR_S_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_declaration *) from)->_IR_S_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_IR_node_t ((((_IR_declaration *) to)->_IR_S_declaration.next_declaration), (((_IR_declaration *) from)->_IR_S_declaration.next_declaration));
      break;
    case IR_NM_identifier_declaration:
      _IR_copy_node_fields (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_identifier_declaration *) to)->_IR_S_identifier_declaration._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)), (IR_node_t) ((char *) &((_IR_identifier_declaration *) from)->_IR_S_identifier_declaration._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)));
      IR_COPY_IR_node_t ((((_IR_identifier_declaration *) to)->_IR_S_identifier_declaration.identifier_list), (((_IR_identifier_declaration *) from)->_IR_S_identifier_declaration.identifier_list));
      break;
    case IR_NM_instruction_declaration:
      _IR_copy_node_fields (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_instruction_declaration *) to)->_IR_S_instruction_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), (IR_node_t) ((char *) &((_IR_instruction_declaration *) from)->_IR_S_instruction_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_reservation_declaration:
      _IR_copy_node_fields (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_reservation_declaration *) to)->_IR_S_reservation_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), (IR_node_t) ((char *) &((_IR_reservation_declaration *) from)->_IR_S_reservation_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_unit_declaration:
      _IR_copy_node_fields (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_unit_declaration *) to)->_IR_S_unit_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), (IR_node_t) ((char *) &((_IR_unit_declaration *) from)->_IR_S_unit_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      IR_COPY_IR_node_t ((((_IR_unit_declaration *) to)->_IR_S_unit_declaration.automaton_identifier), (((_IR_unit_declaration *) from)->_IR_S_unit_declaration.automaton_identifier));
      break;
    case IR_NM_exclusion_clause:
      _IR_copy_node_fields (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_exclusion_clause *) to)->_IR_S_exclusion_clause._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), (IR_node_t) ((char *) &((_IR_exclusion_clause *) from)->_IR_S_exclusion_clause._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      IR_COPY_IR_node_t ((((_IR_exclusion_clause *) to)->_IR_S_exclusion_clause.identifier_list_2), (((_IR_exclusion_clause *) from)->_IR_S_exclusion_clause.identifier_list_2));
      break;
    case IR_NM_automaton_declaration:
      _IR_copy_node_fields (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_automaton_declaration *) to)->_IR_S_automaton_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), (IR_node_t) ((char *) &((_IR_automaton_declaration *) from)->_IR_S_automaton_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)));
      break;
    case IR_NM_code:
      _IR_copy_node_fields (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_code *) to)->_IR_S_code._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)), (IR_node_t) ((char *) &((_IR_code *) from)->_IR_S_code._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)));
      IR_COPY_IR_node_t ((((_IR_code *) to)->_IR_S_code.code_itself), (((_IR_code *) from)->_IR_S_code.code_itself));
      break;
    case IR_NM_local_code:
      _IR_copy_node_fields (IR_NM_code, (IR_node_t) ((char *) &((_IR_local_code *) to)->_IR_S_local_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), (IR_node_t) ((char *) &((_IR_local_code *) from)->_IR_S_local_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_import_code:
      _IR_copy_node_fields (IR_NM_code, (IR_node_t) ((char *) &((_IR_import_code *) to)->_IR_S_import_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), (IR_node_t) ((char *) &((_IR_import_code *) from)->_IR_S_import_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_export_code:
      _IR_copy_node_fields (IR_NM_code, (IR_node_t) ((char *) &((_IR_export_code *) to)->_IR_S_export_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), (IR_node_t) ((char *) &((_IR_export_code *) from)->_IR_S_export_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)));
      break;
    case IR_NM_expression_definition:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression_definition *) to)->_IR_S_expression_definition._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_expression_definition *) from)->_IR_S_expression_definition._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_IR_node_t ((((_IR_expression_definition *) to)->_IR_S_expression_definition.expression), (((_IR_expression_definition *) from)->_IR_S_expression_definition.expression));
      IR_COPY_IR_node_t ((((_IR_expression_definition *) to)->_IR_S_expression_definition.next_expression_definition), (((_IR_expression_definition *) from)->_IR_S_expression_definition.next_expression_definition));
      IR_COPY_IR_node_t ((((_IR_expression_definition *) to)->_IR_S_expression_definition.expression_identifier), (((_IR_expression_definition *) from)->_IR_S_expression_definition.expression_identifier));
      break;
    case IR_NM_expression:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression *) to)->_IR_S_expression._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_expression *) from)->_IR_S_expression._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      break;
    case IR_NM_one_operand_expression:
      _IR_copy_node_fields (IR_NM_expression, (IR_node_t) ((char *) &((_IR_one_operand_expression *) to)->_IR_S_one_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), (IR_node_t) ((char *) &((_IR_one_operand_expression *) from)->_IR_S_one_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_COPY_IR_node_t ((((_IR_one_operand_expression *) to)->_IR_S_one_operand_expression.operand), (((_IR_one_operand_expression *) from)->_IR_S_one_operand_expression.operand));
      break;
    case IR_NM_two_operand_expression:
      _IR_copy_node_fields (IR_NM_expression, (IR_node_t) ((char *) &((_IR_two_operand_expression *) to)->_IR_S_two_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), (IR_node_t) ((char *) &((_IR_two_operand_expression *) from)->_IR_S_two_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_COPY_IR_node_t ((((_IR_two_operand_expression *) to)->_IR_S_two_operand_expression.left_operand), (((_IR_two_operand_expression *) from)->_IR_S_two_operand_expression.left_operand));
      IR_COPY_IR_node_t ((((_IR_two_operand_expression *) to)->_IR_S_two_operand_expression.right_operand), (((_IR_two_operand_expression *) from)->_IR_S_two_operand_expression.right_operand));
      break;
    case IR_NM_new_cycle_concatenation:
      _IR_copy_node_fields (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_new_cycle_concatenation *) to)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), (IR_node_t) ((char *) &((_IR_new_cycle_concatenation *) from)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_concatenation:
      _IR_copy_node_fields (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_concatenation *) to)->_IR_S_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), (IR_node_t) ((char *) &((_IR_concatenation *) from)->_IR_S_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_optional_expression:
      _IR_copy_node_fields (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_optional_expression *) to)->_IR_S_optional_expression._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)), (IR_node_t) ((char *) &((_IR_optional_expression *) from)->_IR_S_optional_expression._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)));
      break;
    case IR_NM_alternative:
      _IR_copy_node_fields (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_alternative *) to)->_IR_S_alternative._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), (IR_node_t) ((char *) &((_IR_alternative *) from)->_IR_S_alternative._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)));
      break;
    case IR_NM_repetition:
      _IR_copy_node_fields (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_repetition *) to)->_IR_S_repetition._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)), (IR_node_t) ((char *) &((_IR_repetition *) from)->_IR_S_repetition._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)));
      IR_COPY_IR_node_t ((((_IR_repetition *) to)->_IR_S_repetition.repetition_number), (((_IR_repetition *) from)->_IR_S_repetition.repetition_number));
      break;
    case IR_NM_expression_atom:
      _IR_copy_node_fields (IR_NM_expression, (IR_node_t) ((char *) &((_IR_expression_atom *) to)->_IR_S_expression_atom._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), (IR_node_t) ((char *) &((_IR_expression_atom *) from)->_IR_S_expression_atom._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      IR_COPY_IR_node_t ((((_IR_expression_atom *) to)->_IR_S_expression_atom.expression_identifier), (((_IR_expression_atom *) from)->_IR_S_expression_atom.expression_identifier));
      IR_COPY_IR_node_t ((((_IR_expression_atom *) to)->_IR_S_expression_atom.single_declaration), (((_IR_expression_atom *) from)->_IR_S_expression_atom.single_declaration));
      break;
    case IR_NM_no_unit:
      _IR_copy_node_fields (IR_NM_expression, (IR_node_t) ((char *) &((_IR_no_unit *) to)->_IR_S_no_unit._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), (IR_node_t) ((char *) &((_IR_no_unit *) from)->_IR_S_no_unit._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)));
      break;
    case IR_NM_nothing:
      _IR_copy_node_fields (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_nothing *) to)->_IR_S_nothing._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)), (IR_node_t) ((char *) &((_IR_nothing *) from)->_IR_S_nothing._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)));
      break;
    case IR_NM_result_or_input:
      _IR_copy_node_fields (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_result_or_input *) to)->_IR_S_result_or_input._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)), (IR_node_t) ((char *) &((_IR_result_or_input *) from)->_IR_S_result_or_input._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)));
      break;
    case IR_NM_result:
      _IR_copy_node_fields (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_result *) to)->_IR_S_result._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)), (IR_node_t) ((char *) &((_IR_result *) from)->_IR_S_result._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)));
      IR_COPY_integer_t ((((_IR_result *) to)->_IR_S_result.result_number), (((_IR_result *) from)->_IR_S_result.result_number));
      break;
    case IR_NM_input:
      _IR_copy_node_fields (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_input *) to)->_IR_S_input._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)), (IR_node_t) ((char *) &((_IR_input *) from)->_IR_S_input._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)));
      IR_COPY_integer_t ((((_IR_input *) to)->_IR_S_input.input_number), (((_IR_input *) from)->_IR_S_input.input_number));
      break;
    case IR_NM_additional_code:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_additional_code *) to)->_IR_S_additional_code._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_additional_code *) from)->_IR_S_additional_code._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_string_t ((((_IR_additional_code *) to)->_IR_S_additional_code.additional_code_itself), (((_IR_additional_code *) from)->_IR_S_additional_code.additional_code_itself));
      break;
    case IR_NM_description:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_description *) to)->_IR_S_description._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_description *) from)->_IR_S_description._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_IR_node_t ((((_IR_description *) to)->_IR_S_description.declaration_list), (((_IR_description *) from)->_IR_S_description.declaration_list));
      IR_COPY_IR_node_t ((((_IR_description *) to)->_IR_S_description.expression_definition_list), (((_IR_description *) from)->_IR_S_description.expression_definition_list));
      IR_COPY_IR_node_t ((((_IR_description *) to)->_IR_S_description.additional_code), (((_IR_description *) from)->_IR_S_description.additional_code));
      IR_COPY_IR_node_t ((((_IR_description *) to)->_IR_S_description.single_declaration_list), (((_IR_description *) from)->_IR_S_description.single_declaration_list));
      IR_COPY_integer_t ((((_IR_description *) to)->_IR_S_description.units_number), (((_IR_description *) from)->_IR_S_description.units_number));
      IR_COPY_integer_t ((((_IR_description *) to)->_IR_S_description.instructions_number), (((_IR_description *) from)->_IR_S_description.instructions_number));
      IR_COPY_integer_t ((((_IR_description *) to)->_IR_S_description.max_instruction_reservation_cycles), (((_IR_description *) from)->_IR_S_description.max_instruction_reservation_cycles));
      IR_COPY_IR_node_t ((((_IR_description *) to)->_IR_S_description.first_automaton), (((_IR_description *) from)->_IR_S_description.first_automaton));
      break;
    case IR_NM_single_declaration:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_single_declaration *) to)->_IR_S_single_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_single_declaration *) from)->_IR_S_single_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_IR_node_t ((((_IR_single_declaration *) to)->_IR_S_single_declaration.identifier), (((_IR_single_declaration *) from)->_IR_S_single_declaration.identifier));
      IR_COPY_IR_node_t ((((_IR_single_declaration *) to)->_IR_S_single_declaration.next_single_declaration), (((_IR_single_declaration *) from)->_IR_S_single_declaration.next_single_declaration));
      break;
    case IR_NM_single_automaton_declaration:
      _IR_copy_node_fields (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_automaton_declaration *) to)->_IR_S_single_automaton_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), (IR_node_t) ((char *) &((_IR_single_automaton_declaration *) from)->_IR_S_single_automaton_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_COPY_bool_t ((((_IR_single_automaton_declaration *) to)->_IR_S_single_automaton_declaration.automaton_is_used), (((_IR_single_automaton_declaration *) from)->_IR_S_single_automaton_declaration.automaton_is_used));
      IR_COPY_IR_node_t ((((_IR_single_automaton_declaration *) to)->_IR_S_single_automaton_declaration.corresponding_automaton), (((_IR_single_automaton_declaration *) from)->_IR_S_single_automaton_declaration.corresponding_automaton));
      break;
    case IR_NM_single_unit_declaration:
      _IR_copy_node_fields (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), (IR_node_t) ((char *) &((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_COPY_bool_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.unit_is_used), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.unit_is_used));
      IR_COPY_IR_node_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.the_same_automaton_unit), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.the_same_automaton_unit));
      IR_COPY_integer_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.the_same_automaton_message_reported_p), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.the_same_automaton_message_reported_p));
      IR_COPY_integer_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.unit_number), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.unit_number));
      IR_COPY_IR_node_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.single_automaton_declaration), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.single_automaton_declaration));
      IR_COPY_integer_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.max_occurrence_cycle_number), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.max_occurrence_cycle_number));
      IR_COPY_IR_node_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.exclusion_list), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.exclusion_list));
      IR_COPY_integer_t ((((_IR_single_unit_declaration *) to)->_IR_S_single_unit_declaration.corresponding_automaton_number), (((_IR_single_unit_declaration *) from)->_IR_S_single_unit_declaration.corresponding_automaton_number));
      break;
    case IR_NM_unit_set_element:
      _IR_copy_node_fields (IR_NM_node, (IR_node_t) ((char *) &((_IR_unit_set_element *) to)->_IR_S_unit_set_element._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), (IR_node_t) ((char *) &((_IR_unit_set_element *) from)->_IR_S_unit_set_element._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)));
      IR_COPY_IR_node_t ((((_IR_unit_set_element *) to)->_IR_S_unit_set_element.single_unit_declaration), (((_IR_unit_set_element *) from)->_IR_S_unit_set_element.single_unit_declaration));
      IR_COPY_IR_node_t ((((_IR_unit_set_element *) to)->_IR_S_unit_set_element.next_unit_set_element), (((_IR_unit_set_element *) from)->_IR_S_unit_set_element.next_unit_set_element));
      break;
    case IR_NM_single_expression_declaration:
      _IR_copy_node_fields (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_expression_declaration *) to)->_IR_S_single_expression_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), (IR_node_t) ((char *) &((_IR_single_expression_declaration *) from)->_IR_S_single_expression_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)));
      IR_COPY_IR_node_t ((((_IR_single_expression_declaration *) to)->_IR_S_single_expression_declaration.expression), (((_IR_single_expression_declaration *) from)->_IR_S_single_expression_declaration.expression));
      IR_COPY_integer_t ((((_IR_single_expression_declaration *) to)->_IR_S_single_expression_declaration.cycle_checking_pass_number), (((_IR_single_expression_declaration *) from)->_IR_S_single_expression_declaration.cycle_checking_pass_number));
      break;
    case IR_NM_single_reservation_declaration:
      _IR_copy_node_fields (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_reservation_declaration *) to)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)), (IR_node_t) ((char *) &((_IR_single_reservation_declaration *) from)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)));
      break;
    case IR_NM_result_list:
      IR_COPY_IR_node_t ((((_IR_result_list *) to)->_IR_S_result_list.result), (((_IR_result_list *) from)->_IR_S_result_list.result));
      IR_COPY_IR_node_t ((((_IR_result_list *) to)->_IR_S_result_list.next_result), (((_IR_result_list *) from)->_IR_S_result_list.next_result));
      break;
    case IR_NM_input_list:
      IR_COPY_IR_node_t ((((_IR_input_list *) to)->_IR_S_input_list.input), (((_IR_input_list *) from)->_IR_S_input_list.input));
      IR_COPY_IR_node_t ((((_IR_input_list *) to)->_IR_S_input_list.next_input), (((_IR_input_list *) from)->_IR_S_input_list.next_input));
      break;
    case IR_NM_single_instruction_declaration:
      _IR_copy_node_fields (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)), (IR_node_t) ((char *) &((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)));
      IR_COPY_integer_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.instruction_number), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.instruction_number));
      IR_COPY_IR_node_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.result_list), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.result_list));
      IR_COPY_IR_node_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.input_list), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.input_list));
      IR_COPY_IR_node_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.transformed_expression), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.transformed_expression));
      IR_COPY_IR_node_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction));
      IR_COPY_integer_t ((((_IR_single_instruction_declaration *) to)->_IR_S_single_instruction_declaration.equivalence_class_number), (((_IR_single_instruction_declaration *) from)->_IR_S_single_instruction_declaration.equivalence_class_number));
      break;
    case IR_NM_state:
      IR_COPY_IR_node_t ((((_IR_state *) to)->_IR_S_state.first_out_arc), (((_IR_state *) from)->_IR_S_state.first_out_arc));
      IR_COPY_bool_t ((((_IR_state *) to)->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming), (((_IR_state *) from)->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming));
      IR_COPY_bool_t ((((_IR_state *) to)->_IR_S_state.it_was_placed_in_stack_for_DFA_forming), (((_IR_state *) from)->_IR_S_state.it_was_placed_in_stack_for_DFA_forming));
      IR_COPY_IR_node_t ((((_IR_state *) to)->_IR_S_state.component_states), (((_IR_state *) from)->_IR_S_state.component_states));
      IR_COPY_integer_t ((((_IR_state *) to)->_IR_S_state.pass_number), (((_IR_state *) from)->_IR_S_state.pass_number));
      IR_COPY_IR_node_t ((((_IR_state *) to)->_IR_S_state.next_equivalence_class_state), (((_IR_state *) from)->_IR_S_state.next_equivalence_class_state));
      IR_COPY_integer_t ((((_IR_state *) to)->_IR_S_state.equivalence_class_number_1), (((_IR_state *) from)->_IR_S_state.equivalence_class_number_1));
      IR_COPY_integer_t ((((_IR_state *) to)->_IR_S_state.equivalence_class_number_2), (((_IR_state *) from)->_IR_S_state.equivalence_class_number_2));
      IR_COPY_IR_node_t ((((_IR_state *) to)->_IR_S_state.equivalence_class_state), (((_IR_state *) from)->_IR_S_state.equivalence_class_state));
      IR_COPY_integer_t ((((_IR_state *) to)->_IR_S_state.order_state_number), (((_IR_state *) from)->_IR_S_state.order_state_number));
      IR_COPY_reservation_sets_list_t ((((_IR_state *) to)->_IR_S_state.reservations), (((_IR_state *) from)->_IR_S_state.reservations));
      IR_COPY_integer_t ((((_IR_state *) to)->_IR_S_state.unique_number), (((_IR_state *) from)->_IR_S_state.unique_number));
      IR_COPY_IR_node_t ((((_IR_state *) to)->_IR_S_state.automaton), (((_IR_state *) from)->_IR_S_state.automaton));
      break;
    case IR_NM_arc:
      IR_COPY_IR_node_t ((((_IR_arc *) to)->_IR_S_arc.next_arc_marked_by_instruction), (((_IR_arc *) from)->_IR_S_arc.next_arc_marked_by_instruction));
      IR_COPY_IR_node_t ((((_IR_arc *) to)->_IR_S_arc.to_state), (((_IR_arc *) from)->_IR_S_arc.to_state));
      IR_COPY_IR_node_t ((((_IR_arc *) to)->_IR_S_arc.instruction), (((_IR_arc *) from)->_IR_S_arc.instruction));
      IR_COPY_IR_node_t ((((_IR_arc *) to)->_IR_S_arc.next_out_arc), (((_IR_arc *) from)->_IR_S_arc.next_out_arc));
      break;
    case IR_NM_alternative_state:
      IR_COPY_IR_node_t ((((_IR_alternative_state *) to)->_IR_S_alternative_state.state), (((_IR_alternative_state *) from)->_IR_S_alternative_state.state));
      IR_COPY_IR_node_t ((((_IR_alternative_state *) to)->_IR_S_alternative_state.next_alternative_state), (((_IR_alternative_state *) from)->_IR_S_alternative_state.next_alternative_state));
      break;
    case IR_NM_automaton_instruction_declaration:
      IR_COPY_IR_node_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.alternative_state_list), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.alternative_state_list));
      IR_COPY_IR_node_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction));
      IR_COPY_bool_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.first_instruction_with_the_same_reservations), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.first_instruction_with_the_same_reservations));
      IR_COPY_IR_node_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction));
      IR_COPY_bool_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number));
      IR_COPY_integer_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.instruction_equivalence_class_number), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.instruction_equivalence_class_number));
      IR_COPY_IR_node_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.single_instruction_declaration), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.single_instruction_declaration));
      IR_COPY_IR_node_t ((((_IR_automaton_instruction_declaration *) to)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration), (((_IR_automaton_instruction_declaration *) from)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration));
      break;
    case IR_NM_automaton:
      IR_COPY_IR_node_t ((((_IR_automaton *) to)->_IR_S_automaton.start_state), (((_IR_automaton *) from)->_IR_S_automaton.start_state));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.instruction_equivalence_classes_number), (((_IR_automaton *) from)->_IR_S_automaton.instruction_equivalence_classes_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.achieved_states_number), (((_IR_automaton *) from)->_IR_S_automaton.achieved_states_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.automaton_order_number), (((_IR_automaton *) from)->_IR_S_automaton.automaton_order_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.NDFA_states_number), (((_IR_automaton *) from)->_IR_S_automaton.NDFA_states_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.DFA_states_number), (((_IR_automaton *) from)->_IR_S_automaton.DFA_states_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.minimal_DFA_states_number), (((_IR_automaton *) from)->_IR_S_automaton.minimal_DFA_states_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.NDFA_arcs_number), (((_IR_automaton *) from)->_IR_S_automaton.NDFA_arcs_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.DFA_arcs_number), (((_IR_automaton *) from)->_IR_S_automaton.DFA_arcs_number));
      IR_COPY_integer_t ((((_IR_automaton *) to)->_IR_S_automaton.minimal_DFA_arcs_number), (((_IR_automaton *) from)->_IR_S_automaton.minimal_DFA_arcs_number));
      IR_COPY_IR_node_t ((((_IR_automaton *) to)->_IR_S_automaton.automaton_instruction_declaration_list), (((_IR_automaton *) from)->_IR_S_automaton.automaton_instruction_declaration_list));
      IR_COPY_IR_node_t ((((_IR_automaton *) to)->_IR_S_automaton.corresponding_single_automaton_declaration), (((_IR_automaton *) from)->_IR_S_automaton.corresponding_single_automaton_declaration));
      IR_COPY_IR_node_t ((((_IR_automaton *) to)->_IR_S_automaton.next_automaton), (((_IR_automaton *) from)->_IR_S_automaton.next_automaton));
      break;
    default:
      abort ();
      break;
    }
}

IR_node_t IR_copy_node (IR_node_t node)
{
  IR_node_t _result;

  if (node == NULL)
    return NULL;
  IR_ALLOC (_result, IR_node_size [IR_NODE_MODE (node)], IR_node_t);
#ifdef __IR_DEBUG__
  if (_result == NULL)
    abort ();
#endif /* __IR_DEBUG__ */
  IR_NODE_MODE (_result) = IR_NODE_MODE (node);
  _result->_IR_last_graph_pass_number = 0;
  _IR_copy_node_fields (IR_NODE_MODE (node), _result, node);
  return _result;
}

static IR_node_t _IR_transform_dag
(IR_node_t graph, int class_field_flag, int (*guard_function) (IR_node_t node),
 IR_node_t (*transformation_function) (IR_node_t node));

static void _IR_node_field_transformation
(IR_node_mode_t node_mode, IR_node_t graph, int class_field_flag, int (*guard_function) (IR_node_t node),
 IR_node_t (*transformation_function) (IR_node_t node))
{
  switch (node_mode)
    {
    case IR_NM_node:
      break;
    case IR_NM_identifier:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_identifier *) graph)->_IR_S_identifier._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_identifier *) graph)->_IR_S_identifier.next_identifier)
        = _IR_transform_dag ((((_IR_identifier *) graph)->_IR_S_identifier.next_identifier), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_number:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_number *) graph)->_IR_S_number._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_code_insertion:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_code_insertion *) graph)->_IR_S_code_insertion._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_declaration:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_declaration *) graph)->_IR_S_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_declaration *) graph)->_IR_S_declaration.next_declaration)
        = _IR_transform_dag ((((_IR_declaration *) graph)->_IR_S_declaration.next_declaration), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_identifier_declaration:
      _IR_node_field_transformation (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_identifier_declaration *) graph)->_IR_S_identifier_declaration._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_identifier_declaration *) graph)->_IR_S_identifier_declaration.identifier_list)
        = _IR_transform_dag ((((_IR_identifier_declaration *) graph)->_IR_S_identifier_declaration.identifier_list), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_instruction_declaration:
      _IR_node_field_transformation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_instruction_declaration *) graph)->_IR_S_instruction_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_reservation_declaration:
      _IR_node_field_transformation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_reservation_declaration *) graph)->_IR_S_reservation_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_unit_declaration:
      _IR_node_field_transformation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_unit_declaration *) graph)->_IR_S_unit_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_unit_declaration *) graph)->_IR_S_unit_declaration.automaton_identifier)
        = _IR_transform_dag ((((_IR_unit_declaration *) graph)->_IR_S_unit_declaration.automaton_identifier), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_exclusion_clause:
      _IR_node_field_transformation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_exclusion_clause *) graph)->_IR_S_exclusion_clause._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_exclusion_clause *) graph)->_IR_S_exclusion_clause.identifier_list_2)
        = _IR_transform_dag ((((_IR_exclusion_clause *) graph)->_IR_S_exclusion_clause.identifier_list_2), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_automaton_declaration:
      _IR_node_field_transformation (IR_NM_identifier_declaration, (IR_node_t) ((char *) &((_IR_automaton_declaration *) graph)->_IR_S_automaton_declaration._IR_M_identifier_declaration - _IR_offsetof (_IR_identifier_declaration, _IR_S_identifier_declaration)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_code:
      _IR_node_field_transformation (IR_NM_declaration, (IR_node_t) ((char *) &((_IR_code *) graph)->_IR_S_code._IR_M_declaration - _IR_offsetof (_IR_declaration, _IR_S_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_code *) graph)->_IR_S_code.code_itself)
        = _IR_transform_dag ((((_IR_code *) graph)->_IR_S_code.code_itself), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_local_code:
      _IR_node_field_transformation (IR_NM_code, (IR_node_t) ((char *) &((_IR_local_code *) graph)->_IR_S_local_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_import_code:
      _IR_node_field_transformation (IR_NM_code, (IR_node_t) ((char *) &((_IR_import_code *) graph)->_IR_S_import_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_export_code:
      _IR_node_field_transformation (IR_NM_code, (IR_node_t) ((char *) &((_IR_export_code *) graph)->_IR_S_export_code._IR_M_code - _IR_offsetof (_IR_code, _IR_S_code)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_expression_definition:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression_definition *) graph)->_IR_S_expression_definition._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_expression_definition *) graph)->_IR_S_expression_definition.expression)
        = _IR_transform_dag ((((_IR_expression_definition *) graph)->_IR_S_expression_definition.expression), class_field_flag, guard_function, transformation_function);
      (((_IR_expression_definition *) graph)->_IR_S_expression_definition.next_expression_definition)
        = _IR_transform_dag ((((_IR_expression_definition *) graph)->_IR_S_expression_definition.next_expression_definition), class_field_flag, guard_function, transformation_function);
      (((_IR_expression_definition *) graph)->_IR_S_expression_definition.expression_identifier)
        = _IR_transform_dag ((((_IR_expression_definition *) graph)->_IR_S_expression_definition.expression_identifier), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_expression:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_expression *) graph)->_IR_S_expression._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_one_operand_expression:
      _IR_node_field_transformation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_one_operand_expression *) graph)->_IR_S_one_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), class_field_flag, guard_function, transformation_function);
      (((_IR_one_operand_expression *) graph)->_IR_S_one_operand_expression.operand)
        = _IR_transform_dag ((((_IR_one_operand_expression *) graph)->_IR_S_one_operand_expression.operand), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_two_operand_expression:
      _IR_node_field_transformation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_two_operand_expression *) graph)->_IR_S_two_operand_expression._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), class_field_flag, guard_function, transformation_function);
      (((_IR_two_operand_expression *) graph)->_IR_S_two_operand_expression.left_operand)
        = _IR_transform_dag ((((_IR_two_operand_expression *) graph)->_IR_S_two_operand_expression.left_operand), class_field_flag, guard_function, transformation_function);
      (((_IR_two_operand_expression *) graph)->_IR_S_two_operand_expression.right_operand)
        = _IR_transform_dag ((((_IR_two_operand_expression *) graph)->_IR_S_two_operand_expression.right_operand), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_new_cycle_concatenation:
      _IR_node_field_transformation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_new_cycle_concatenation *) graph)->_IR_S_new_cycle_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_concatenation:
      _IR_node_field_transformation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_concatenation *) graph)->_IR_S_concatenation._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_optional_expression:
      _IR_node_field_transformation (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_optional_expression *) graph)->_IR_S_optional_expression._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_alternative:
      _IR_node_field_transformation (IR_NM_two_operand_expression, (IR_node_t) ((char *) &((_IR_alternative *) graph)->_IR_S_alternative._IR_M_two_operand_expression - _IR_offsetof (_IR_two_operand_expression, _IR_S_two_operand_expression)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_repetition:
      _IR_node_field_transformation (IR_NM_one_operand_expression, (IR_node_t) ((char *) &((_IR_repetition *) graph)->_IR_S_repetition._IR_M_one_operand_expression - _IR_offsetof (_IR_one_operand_expression, _IR_S_one_operand_expression)), class_field_flag, guard_function, transformation_function);
      (((_IR_repetition *) graph)->_IR_S_repetition.repetition_number)
        = _IR_transform_dag ((((_IR_repetition *) graph)->_IR_S_repetition.repetition_number), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_expression_atom:
      _IR_node_field_transformation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_expression_atom *) graph)->_IR_S_expression_atom._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), class_field_flag, guard_function, transformation_function);
      (((_IR_expression_atom *) graph)->_IR_S_expression_atom.expression_identifier)
        = _IR_transform_dag ((((_IR_expression_atom *) graph)->_IR_S_expression_atom.expression_identifier), class_field_flag, guard_function, transformation_function);
      (((_IR_expression_atom *) graph)->_IR_S_expression_atom.single_declaration)
        = _IR_transform_dag ((((_IR_expression_atom *) graph)->_IR_S_expression_atom.single_declaration), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_no_unit:
      _IR_node_field_transformation (IR_NM_expression, (IR_node_t) ((char *) &((_IR_no_unit *) graph)->_IR_S_no_unit._IR_M_expression - _IR_offsetof (_IR_expression, _IR_S_expression)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_nothing:
      _IR_node_field_transformation (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_nothing *) graph)->_IR_S_nothing._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_result_or_input:
      _IR_node_field_transformation (IR_NM_no_unit, (IR_node_t) ((char *) &((_IR_result_or_input *) graph)->_IR_S_result_or_input._IR_M_no_unit - _IR_offsetof (_IR_no_unit, _IR_S_no_unit)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_result:
      _IR_node_field_transformation (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_result *) graph)->_IR_S_result._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_input:
      _IR_node_field_transformation (IR_NM_result_or_input, (IR_node_t) ((char *) &((_IR_input *) graph)->_IR_S_input._IR_M_result_or_input - _IR_offsetof (_IR_result_or_input, _IR_S_result_or_input)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_additional_code:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_additional_code *) graph)->_IR_S_additional_code._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_description:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_description *) graph)->_IR_S_description._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_description *) graph)->_IR_S_description.declaration_list)
        = _IR_transform_dag ((((_IR_description *) graph)->_IR_S_description.declaration_list), class_field_flag, guard_function, transformation_function);
      (((_IR_description *) graph)->_IR_S_description.expression_definition_list)
        = _IR_transform_dag ((((_IR_description *) graph)->_IR_S_description.expression_definition_list), class_field_flag, guard_function, transformation_function);
      (((_IR_description *) graph)->_IR_S_description.additional_code)
        = _IR_transform_dag ((((_IR_description *) graph)->_IR_S_description.additional_code), class_field_flag, guard_function, transformation_function);
      (((_IR_description *) graph)->_IR_S_description.single_declaration_list)
        = _IR_transform_dag ((((_IR_description *) graph)->_IR_S_description.single_declaration_list), class_field_flag, guard_function, transformation_function);
      (((_IR_description *) graph)->_IR_S_description.first_automaton)
        = _IR_transform_dag ((((_IR_description *) graph)->_IR_S_description.first_automaton), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_declaration:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_single_declaration *) graph)->_IR_S_single_declaration._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_single_declaration *) graph)->_IR_S_single_declaration.identifier)
        = _IR_transform_dag ((((_IR_single_declaration *) graph)->_IR_S_single_declaration.identifier), class_field_flag, guard_function, transformation_function);
      (((_IR_single_declaration *) graph)->_IR_S_single_declaration.next_single_declaration)
        = _IR_transform_dag ((((_IR_single_declaration *) graph)->_IR_S_single_declaration.next_single_declaration), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_automaton_declaration:
      _IR_node_field_transformation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_automaton_declaration *) graph)->_IR_S_single_automaton_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_single_automaton_declaration *) graph)->_IR_S_single_automaton_declaration.corresponding_automaton)
        = _IR_transform_dag ((((_IR_single_automaton_declaration *) graph)->_IR_S_single_automaton_declaration.corresponding_automaton), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_unit_declaration:
      _IR_node_field_transformation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.the_same_automaton_unit)
        = _IR_transform_dag ((((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.the_same_automaton_unit), class_field_flag, guard_function, transformation_function);
      (((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.single_automaton_declaration)
        = _IR_transform_dag ((((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.single_automaton_declaration), class_field_flag, guard_function, transformation_function);
      (((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.exclusion_list)
        = _IR_transform_dag ((((_IR_single_unit_declaration *) graph)->_IR_S_single_unit_declaration.exclusion_list), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_unit_set_element:
      _IR_node_field_transformation (IR_NM_node, (IR_node_t) ((char *) &((_IR_unit_set_element *) graph)->_IR_S_unit_set_element._IR_M_node - _IR_offsetof (_IR_node, _IR_S_node)), class_field_flag, guard_function, transformation_function);
      (((_IR_unit_set_element *) graph)->_IR_S_unit_set_element.single_unit_declaration)
        = _IR_transform_dag ((((_IR_unit_set_element *) graph)->_IR_S_unit_set_element.single_unit_declaration), class_field_flag, guard_function, transformation_function);
      (((_IR_unit_set_element *) graph)->_IR_S_unit_set_element.next_unit_set_element)
        = _IR_transform_dag ((((_IR_unit_set_element *) graph)->_IR_S_unit_set_element.next_unit_set_element), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_expression_declaration:
      _IR_node_field_transformation (IR_NM_single_declaration, (IR_node_t) ((char *) &((_IR_single_expression_declaration *) graph)->_IR_S_single_expression_declaration._IR_M_single_declaration - _IR_offsetof (_IR_single_declaration, _IR_S_single_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_single_expression_declaration *) graph)->_IR_S_single_expression_declaration.expression)
        = _IR_transform_dag ((((_IR_single_expression_declaration *) graph)->_IR_S_single_expression_declaration.expression), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_reservation_declaration:
      _IR_node_field_transformation (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_reservation_declaration *) graph)->_IR_S_single_reservation_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_result_list:
      (((_IR_result_list *) graph)->_IR_S_result_list.result)
        = _IR_transform_dag ((((_IR_result_list *) graph)->_IR_S_result_list.result), class_field_flag, guard_function, transformation_function);
      (((_IR_result_list *) graph)->_IR_S_result_list.next_result)
        = _IR_transform_dag ((((_IR_result_list *) graph)->_IR_S_result_list.next_result), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_input_list:
      (((_IR_input_list *) graph)->_IR_S_input_list.input)
        = _IR_transform_dag ((((_IR_input_list *) graph)->_IR_S_input_list.input), class_field_flag, guard_function, transformation_function);
      (((_IR_input_list *) graph)->_IR_S_input_list.next_input)
        = _IR_transform_dag ((((_IR_input_list *) graph)->_IR_S_input_list.next_input), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_single_instruction_declaration:
      _IR_node_field_transformation (IR_NM_single_expression_declaration, (IR_node_t) ((char *) &((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration._IR_M_single_expression_declaration - _IR_offsetof (_IR_single_expression_declaration, _IR_S_single_expression_declaration)), class_field_flag, guard_function, transformation_function);
      (((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.result_list)
        = _IR_transform_dag ((((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.result_list), class_field_flag, guard_function, transformation_function);
      (((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.input_list)
        = _IR_transform_dag ((((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.input_list), class_field_flag, guard_function, transformation_function);
      (((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.transformed_expression)
        = _IR_transform_dag ((((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.transformed_expression), class_field_flag, guard_function, transformation_function);
      (((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction)
        = _IR_transform_dag ((((_IR_single_instruction_declaration *) graph)->_IR_S_single_instruction_declaration.arcs_marked_by_instruction), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_state:
      (((_IR_state *) graph)->_IR_S_state.first_out_arc)
        = _IR_transform_dag ((((_IR_state *) graph)->_IR_S_state.first_out_arc), class_field_flag, guard_function, transformation_function);
      (((_IR_state *) graph)->_IR_S_state.component_states)
        = _IR_transform_dag ((((_IR_state *) graph)->_IR_S_state.component_states), class_field_flag, guard_function, transformation_function);
      (((_IR_state *) graph)->_IR_S_state.next_equivalence_class_state)
        = _IR_transform_dag ((((_IR_state *) graph)->_IR_S_state.next_equivalence_class_state), class_field_flag, guard_function, transformation_function);
      (((_IR_state *) graph)->_IR_S_state.equivalence_class_state)
        = _IR_transform_dag ((((_IR_state *) graph)->_IR_S_state.equivalence_class_state), class_field_flag, guard_function, transformation_function);
      (((_IR_state *) graph)->_IR_S_state.automaton)
        = _IR_transform_dag ((((_IR_state *) graph)->_IR_S_state.automaton), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_arc:
      (((_IR_arc *) graph)->_IR_S_arc.next_arc_marked_by_instruction)
        = _IR_transform_dag ((((_IR_arc *) graph)->_IR_S_arc.next_arc_marked_by_instruction), class_field_flag, guard_function, transformation_function);
      (((_IR_arc *) graph)->_IR_S_arc.to_state)
        = _IR_transform_dag ((((_IR_arc *) graph)->_IR_S_arc.to_state), class_field_flag, guard_function, transformation_function);
      (((_IR_arc *) graph)->_IR_S_arc.instruction)
        = _IR_transform_dag ((((_IR_arc *) graph)->_IR_S_arc.instruction), class_field_flag, guard_function, transformation_function);
      (((_IR_arc *) graph)->_IR_S_arc.next_out_arc)
        = _IR_transform_dag ((((_IR_arc *) graph)->_IR_S_arc.next_out_arc), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_alternative_state:
      (((_IR_alternative_state *) graph)->_IR_S_alternative_state.state)
        = _IR_transform_dag ((((_IR_alternative_state *) graph)->_IR_S_alternative_state.state), class_field_flag, guard_function, transformation_function);
      (((_IR_alternative_state *) graph)->_IR_S_alternative_state.next_alternative_state)
        = _IR_transform_dag ((((_IR_alternative_state *) graph)->_IR_S_alternative_state.next_alternative_state), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_automaton_instruction_declaration:
      (((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.alternative_state_list)
        = _IR_transform_dag ((((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.alternative_state_list), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction)
        = _IR_transform_dag ((((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction)
        = _IR_transform_dag ((((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.single_instruction_declaration)
        = _IR_transform_dag ((((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.single_instruction_declaration), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration)
        = _IR_transform_dag ((((_IR_automaton_instruction_declaration *) graph)->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration), class_field_flag, guard_function, transformation_function);
      break;
    case IR_NM_automaton:
      (((_IR_automaton *) graph)->_IR_S_automaton.start_state)
        = _IR_transform_dag ((((_IR_automaton *) graph)->_IR_S_automaton.start_state), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton *) graph)->_IR_S_automaton.automaton_instruction_declaration_list)
        = _IR_transform_dag ((((_IR_automaton *) graph)->_IR_S_automaton.automaton_instruction_declaration_list), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton *) graph)->_IR_S_automaton.corresponding_single_automaton_declaration)
        = _IR_transform_dag ((((_IR_automaton *) graph)->_IR_S_automaton.corresponding_single_automaton_declaration), class_field_flag, guard_function, transformation_function);
      (((_IR_automaton *) graph)->_IR_S_automaton.next_automaton)
        = _IR_transform_dag ((((_IR_automaton *) graph)->_IR_S_automaton.next_automaton), class_field_flag, guard_function, transformation_function);
      break;
    default:
      abort ();
      break;
    }
}

static IR_node_t _IR_transform_dag
(IR_node_t graph, int class_field_flag, int (*guard_function) (IR_node_t node),
 IR_node_t (*transformation_function) (IR_node_t node))
{
  if (graph == NULL || !(*guard_function) (graph))
    return graph;
  else if (graph->_IR_last_graph_pass_number == _IR_current_graph_pass_number)
    {
      if (graph->_IR_temporary == NULL)
        /* Graph cycle is occured. */
        graph->_IR_temporary = graph;
      return graph->_IR_temporary;
    }
  graph->_IR_temporary = NULL;
  graph->_IR_last_graph_pass_number = _IR_current_graph_pass_number;
  _IR_node_field_transformation (IR_NODE_MODE (graph), graph, class_field_flag, guard_function, transformation_function);
  if (graph->_IR_temporary == NULL)
    {
      /* No cycle. */
      graph->_IR_temporary = (*transformation_function) (graph);
      graph = graph->_IR_temporary;
    }
  return graph;
}

IR_node_t IR_transform_dag
(IR_node_t graph, int class_field_flag, int (*guard_function) (IR_node_t node),
 IR_node_t (*transformation_function) (IR_node_t node))
{
  _IR_current_graph_pass_number++;
  return
    _IR_transform_dag
      (graph, class_field_flag, guard_function, transformation_function);
}

void IR_start (void)
{
#ifdef __IR_DEBUG__
  if (sizeof (_IR_node) > 255)
    {
      fprintf (stderr, "Very long node `node' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_identifier) > 255)
    {
      fprintf (stderr, "Very long node `identifier' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_number) > 255)
    {
      fprintf (stderr, "Very long node `number' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_code_insertion) > 255)
    {
      fprintf (stderr, "Very long node `code_insertion' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_declaration) > 255)
    {
      fprintf (stderr, "Very long node `declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_identifier_declaration) > 255)
    {
      fprintf (stderr, "Very long node `identifier_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_instruction_declaration) > 255)
    {
      fprintf (stderr, "Very long node `instruction_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_reservation_declaration) > 255)
    {
      fprintf (stderr, "Very long node `reservation_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_unit_declaration) > 255)
    {
      fprintf (stderr, "Very long node `unit_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_exclusion_clause) > 255)
    {
      fprintf (stderr, "Very long node `exclusion_clause' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_automaton_declaration) > 255)
    {
      fprintf (stderr, "Very long node `automaton_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_code) > 255)
    {
      fprintf (stderr, "Very long node `code' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_local_code) > 255)
    {
      fprintf (stderr, "Very long node `local_code' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_import_code) > 255)
    {
      fprintf (stderr, "Very long node `import_code' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_export_code) > 255)
    {
      fprintf (stderr, "Very long node `export_code' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_expression_definition) > 255)
    {
      fprintf (stderr, "Very long node `expression_definition' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_expression) > 255)
    {
      fprintf (stderr, "Very long node `expression' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_one_operand_expression) > 255)
    {
      fprintf (stderr, "Very long node `one_operand_expression' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_two_operand_expression) > 255)
    {
      fprintf (stderr, "Very long node `two_operand_expression' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_new_cycle_concatenation) > 255)
    {
      fprintf (stderr, "Very long node `new_cycle_concatenation' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_concatenation) > 255)
    {
      fprintf (stderr, "Very long node `concatenation' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_optional_expression) > 255)
    {
      fprintf (stderr, "Very long node `optional_expression' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_alternative) > 255)
    {
      fprintf (stderr, "Very long node `alternative' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_repetition) > 255)
    {
      fprintf (stderr, "Very long node `repetition' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_expression_atom) > 255)
    {
      fprintf (stderr, "Very long node `expression_atom' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_no_unit) > 255)
    {
      fprintf (stderr, "Very long node `no_unit' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_nothing) > 255)
    {
      fprintf (stderr, "Very long node `nothing' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_result_or_input) > 255)
    {
      fprintf (stderr, "Very long node `result_or_input' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_result) > 255)
    {
      fprintf (stderr, "Very long node `result' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_input) > 255)
    {
      fprintf (stderr, "Very long node `input' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_additional_code) > 255)
    {
      fprintf (stderr, "Very long node `additional_code' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_description) > 255)
    {
      fprintf (stderr, "Very long node `description' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_automaton_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_automaton_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_unit_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_unit_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_unit_set_element) > 255)
    {
      fprintf (stderr, "Very long node `unit_set_element' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_expression_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_expression_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_reservation_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_reservation_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_result_list) > 255)
    {
      fprintf (stderr, "Very long node `result_list' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_input_list) > 255)
    {
      fprintf (stderr, "Very long node `input_list' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_single_instruction_declaration) > 255)
    {
      fprintf (stderr, "Very long node `single_instruction_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_state) > 255)
    {
      fprintf (stderr, "Very long node `state' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_arc) > 255)
    {
      fprintf (stderr, "Very long node `arc' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_alternative_state) > 255)
    {
      fprintf (stderr, "Very long node `alternative_state' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_automaton_instruction_declaration) > 255)
    {
      fprintf (stderr, "Very long node `automaton_instruction_declaration' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
#ifdef __IR_DEBUG__
  if (sizeof (_IR_automaton) > 255)
    {
      fprintf (stderr, "Very long node `automaton' use option `-long-node-size' or `-short-node-size'\n");
      exit (1);
    }
#endif /* __IR_DEBUG__ */
  _IR_current_graph_pass_number = 0;
  IR_START_ALLOC ();
}

void IR_stop (void)
{
  IR_STOP_ALLOC ();
}



#line 723 "./ird.sprut"


/* I think there is no sense to use complex search structure. */

IR_node_t
find_result (IR_node_t instruction, integer_t number)
{
  IR_node_t element;

  for (element = IR_result_list (instruction);
       element != NULL && IR_result_number (IR_result (element)) != number;
       element = IR_next_result (element))
    ;
  return element;
}

IR_node_t
find_input (IR_node_t instruction, integer_t number)
{
  IR_node_t element;

  for (element = IR_input_list (instruction);
       element != NULL && IR_input_number (IR_input (element)) != number;
       element = IR_next_input (element))
    ;
  return element;
}

/*
Local Variables:
mode:c
End:
*/
