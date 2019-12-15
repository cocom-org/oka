#ifndef __IR_ird__
#define __IR_ird__

#define _IR_offsetof(type, field) ((char *)&((type *) 64)->field - (char *) 64)


#line 38 "./ird.sprut"


#include "objstack.h"
#include "position.h"

/* Definitions of predefined types: */

typedef int integer_t;

typedef int bool_t;

typedef char *string_t;

typedef unsigned int unit_reservation_set_element_t;

typedef unit_reservation_set_element_t *reservation_sets_list_t;



#line 28 "ird.h"

typedef enum IR_node_mode_enum
{
  IR_NM_node,
  IR_NM_identifier,
  IR_NM_number,
  IR_NM_code_insertion,
  IR_NM_declaration,
  IR_NM_identifier_declaration,
  IR_NM_instruction_declaration,
  IR_NM_reservation_declaration,
  IR_NM_unit_declaration,
  IR_NM_exclusion_clause,
  IR_NM_automaton_declaration,
  IR_NM_code,
  IR_NM_local_code,
  IR_NM_import_code,
  IR_NM_export_code,
  IR_NM_expression_definition,
  IR_NM_expression,
  IR_NM_one_operand_expression,
  IR_NM_two_operand_expression,
  IR_NM_new_cycle_concatenation,
  IR_NM_concatenation,
  IR_NM_optional_expression,
  IR_NM_alternative,
  IR_NM_repetition,
  IR_NM_expression_atom,
  IR_NM_no_unit,
  IR_NM_nothing,
  IR_NM_result_or_input,
  IR_NM_result,
  IR_NM_input,
  IR_NM_additional_code,
  IR_NM_description,
  IR_NM_single_declaration,
  IR_NM_single_automaton_declaration,
  IR_NM_single_unit_declaration,
  IR_NM_unit_set_element,
  IR_NM_single_expression_declaration,
  IR_NM_single_reservation_declaration,
  IR_NM_result_list,
  IR_NM_input_list,
  IR_NM_single_instruction_declaration,
  IR_NM_state,
  IR_NM_arc,
  IR_NM_alternative_state,
  IR_NM_automaton_instruction_declaration,
  IR_NM_automaton,
  IR_NM__root,
  IR_NM__error
} IR_node_mode_t;

extern short _IR_node_level [];

extern unsigned char _IR_SF_node [];

extern unsigned char _IR_SF_identifier [];

extern unsigned char _IR_SF_number [];

extern unsigned char _IR_SF_code_insertion [];

extern unsigned char _IR_SF_declaration [];

extern unsigned char _IR_SF_identifier_declaration [];

extern unsigned char _IR_SF_instruction_declaration [];

extern unsigned char _IR_SF_reservation_declaration [];

extern unsigned char _IR_SF_unit_declaration [];

extern unsigned char _IR_SF_exclusion_clause [];

extern unsigned char _IR_SF_automaton_declaration [];

extern unsigned char _IR_SF_code [];

extern unsigned char _IR_SF_local_code [];

extern unsigned char _IR_SF_import_code [];

extern unsigned char _IR_SF_export_code [];

extern unsigned char _IR_SF_expression_definition [];

extern unsigned char _IR_SF_expression [];

extern unsigned char _IR_SF_one_operand_expression [];

extern unsigned char _IR_SF_two_operand_expression [];

extern unsigned char _IR_SF_new_cycle_concatenation [];

extern unsigned char _IR_SF_concatenation [];

extern unsigned char _IR_SF_optional_expression [];

extern unsigned char _IR_SF_alternative [];

extern unsigned char _IR_SF_repetition [];

extern unsigned char _IR_SF_expression_atom [];

extern unsigned char _IR_SF_no_unit [];

extern unsigned char _IR_SF_nothing [];

extern unsigned char _IR_SF_result_or_input [];

extern unsigned char _IR_SF_result [];

extern unsigned char _IR_SF_input [];

extern unsigned char _IR_SF_additional_code [];

extern unsigned char _IR_SF_description [];

extern unsigned char _IR_SF_single_declaration [];

extern unsigned char _IR_SF_single_automaton_declaration [];

extern unsigned char _IR_SF_single_unit_declaration [];

extern unsigned char _IR_SF_unit_set_element [];

extern unsigned char _IR_SF_single_expression_declaration [];

extern unsigned char _IR_SF_single_reservation_declaration [];

extern unsigned char _IR_SF_result_list [];

extern unsigned char _IR_SF_input_list [];

extern unsigned char _IR_SF_single_instruction_declaration [];

extern unsigned char _IR_SF_state [];

extern unsigned char _IR_SF_arc [];

extern unsigned char _IR_SF_alternative_state [];

extern unsigned char _IR_SF_automaton_instruction_declaration [];

extern unsigned char _IR_SF_automaton [];

extern unsigned char _IR_SF__root [];

extern unsigned char _IR_SF__error [];

extern unsigned char *_IR_is_type[];

extern unsigned char _IR_D_expression [];

extern unsigned char _IR_D_expression_identifier [];

extern void *_IR_class_structure_array [];

typedef struct IR_node *IR_node_t;

typedef struct _IR_double_link *IR_double_link_t;

struct _IR_double_link
{
  IR_node_t field_itself;
  IR_node_t link_owner;
  void (*set_function) (IR_node_t, IR_node_t);
  IR_double_link_t previous_link;
  IR_double_link_t next_link;
};

struct _IR_S_node
{
  position_t  position;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_node _IR_S_node;
} _IR_node;

struct _IR_S_identifier
{
  struct _IR_S_node _IR_M_node;
  string_t  identifier_itself;
  IR_node_t  next_identifier;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_identifier _IR_S_identifier;
} _IR_identifier;

struct _IR_S_number
{
  struct _IR_S_node _IR_M_node;
  integer_t  number_value;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_number _IR_S_number;
} _IR_number;

struct _IR_S_code_insertion
{
  struct _IR_S_node _IR_M_node;
  string_t  code_insertion_itself;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_code_insertion _IR_S_code_insertion;
} _IR_code_insertion;

struct _IR_S_declaration
{
  struct _IR_S_node _IR_M_node;
  IR_node_t  next_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_declaration _IR_S_declaration;
} _IR_declaration;

struct _IR_S_identifier_declaration
{
  struct _IR_S_declaration _IR_M_declaration;
  IR_node_t  identifier_list;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_identifier_declaration _IR_S_identifier_declaration;
} _IR_identifier_declaration;

struct _IR_S_instruction_declaration
{
  struct _IR_S_identifier_declaration _IR_M_identifier_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_instruction_declaration _IR_S_instruction_declaration;
} _IR_instruction_declaration;

struct _IR_S_reservation_declaration
{
  struct _IR_S_identifier_declaration _IR_M_identifier_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_reservation_declaration _IR_S_reservation_declaration;
} _IR_reservation_declaration;

struct _IR_S_unit_declaration
{
  struct _IR_S_identifier_declaration _IR_M_identifier_declaration;
  IR_node_t  automaton_identifier;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_unit_declaration _IR_S_unit_declaration;
} _IR_unit_declaration;

struct _IR_S_exclusion_clause
{
  struct _IR_S_identifier_declaration _IR_M_identifier_declaration;
  IR_node_t  identifier_list_2;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_exclusion_clause _IR_S_exclusion_clause;
} _IR_exclusion_clause;

struct _IR_S_automaton_declaration
{
  struct _IR_S_identifier_declaration _IR_M_identifier_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_automaton_declaration _IR_S_automaton_declaration;
} _IR_automaton_declaration;

struct _IR_S_code
{
  struct _IR_S_declaration _IR_M_declaration;
  IR_node_t  code_itself;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_code _IR_S_code;
} _IR_code;

struct _IR_S_local_code
{
  struct _IR_S_code _IR_M_code;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_local_code _IR_S_local_code;
} _IR_local_code;

struct _IR_S_import_code
{
  struct _IR_S_code _IR_M_code;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_import_code _IR_S_import_code;
} _IR_import_code;

struct _IR_S_export_code
{
  struct _IR_S_code _IR_M_code;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_export_code _IR_S_export_code;
} _IR_export_code;

struct _IR_S_expression_definition
{
  struct _IR_S_node _IR_M_node;
  IR_node_t  expression;
  IR_node_t  next_expression_definition;
  IR_node_t  expression_identifier;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_expression_definition _IR_S_expression_definition;
} _IR_expression_definition;

struct _IR_S_expression
{
  struct _IR_S_node _IR_M_node;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_expression _IR_S_expression;
} _IR_expression;

struct _IR_S_one_operand_expression
{
  struct _IR_S_expression _IR_M_expression;
  IR_node_t  operand;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_one_operand_expression _IR_S_one_operand_expression;
} _IR_one_operand_expression;

struct _IR_S_two_operand_expression
{
  struct _IR_S_expression _IR_M_expression;
  IR_node_t  left_operand;
  IR_node_t  right_operand;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_two_operand_expression _IR_S_two_operand_expression;
} _IR_two_operand_expression;

struct _IR_S_new_cycle_concatenation
{
  struct _IR_S_two_operand_expression _IR_M_two_operand_expression;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_new_cycle_concatenation _IR_S_new_cycle_concatenation;
} _IR_new_cycle_concatenation;

struct _IR_S_concatenation
{
  struct _IR_S_two_operand_expression _IR_M_two_operand_expression;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_concatenation _IR_S_concatenation;
} _IR_concatenation;

struct _IR_S_optional_expression
{
  struct _IR_S_one_operand_expression _IR_M_one_operand_expression;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_optional_expression _IR_S_optional_expression;
} _IR_optional_expression;

struct _IR_S_alternative
{
  struct _IR_S_two_operand_expression _IR_M_two_operand_expression;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_alternative _IR_S_alternative;
} _IR_alternative;

struct _IR_S_repetition
{
  struct _IR_S_one_operand_expression _IR_M_one_operand_expression;
  IR_node_t  repetition_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_repetition _IR_S_repetition;
} _IR_repetition;

struct _IR_S_expression_atom
{
  struct _IR_S_expression _IR_M_expression;
  IR_node_t  expression_identifier;
  IR_node_t  single_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_expression_atom _IR_S_expression_atom;
} _IR_expression_atom;

struct _IR_S_no_unit
{
  struct _IR_S_expression _IR_M_expression;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_no_unit _IR_S_no_unit;
} _IR_no_unit;

struct _IR_S_nothing
{
  struct _IR_S_no_unit _IR_M_no_unit;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_nothing _IR_S_nothing;
} _IR_nothing;

struct _IR_S_result_or_input
{
  struct _IR_S_no_unit _IR_M_no_unit;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_result_or_input _IR_S_result_or_input;
} _IR_result_or_input;

struct _IR_S_result
{
  struct _IR_S_result_or_input _IR_M_result_or_input;
  integer_t  result_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_result _IR_S_result;
} _IR_result;

struct _IR_S_input
{
  struct _IR_S_result_or_input _IR_M_result_or_input;
  integer_t  input_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_input _IR_S_input;
} _IR_input;

struct _IR_S_additional_code
{
  struct _IR_S_node _IR_M_node;
  string_t  additional_code_itself;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_additional_code _IR_S_additional_code;
} _IR_additional_code;

struct _IR_S_description
{
  struct _IR_S_node _IR_M_node;
  IR_node_t  declaration_list;
  IR_node_t  expression_definition_list;
  IR_node_t  additional_code;
  IR_node_t  single_declaration_list;
  integer_t  units_number;
  integer_t  instructions_number;
  integer_t  max_instruction_reservation_cycles;
  IR_node_t  first_automaton;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_description _IR_S_description;
} _IR_description;

struct _IR_S_single_declaration
{
  struct _IR_S_node _IR_M_node;
  IR_node_t  identifier;
  IR_node_t  next_single_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_declaration _IR_S_single_declaration;
} _IR_single_declaration;

struct _IR_S_single_automaton_declaration
{
  struct _IR_S_single_declaration _IR_M_single_declaration;
  bool_t  automaton_is_used;
  IR_node_t  corresponding_automaton;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_automaton_declaration _IR_S_single_automaton_declaration;
} _IR_single_automaton_declaration;

struct _IR_S_single_unit_declaration
{
  struct _IR_S_single_declaration _IR_M_single_declaration;
  bool_t  unit_is_used;
  IR_node_t  the_same_automaton_unit;
  integer_t  the_same_automaton_message_reported_p;
  integer_t  unit_number;
  IR_node_t  single_automaton_declaration;
  integer_t  max_occurrence_cycle_number;
  IR_node_t  exclusion_list;
  integer_t  corresponding_automaton_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_unit_declaration _IR_S_single_unit_declaration;
} _IR_single_unit_declaration;

struct _IR_S_unit_set_element
{
  struct _IR_S_node _IR_M_node;
  IR_node_t  single_unit_declaration;
  IR_node_t  next_unit_set_element;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_unit_set_element _IR_S_unit_set_element;
} _IR_unit_set_element;

struct _IR_S_single_expression_declaration
{
  struct _IR_S_single_declaration _IR_M_single_declaration;
  IR_node_t  expression;
  integer_t  cycle_checking_pass_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_expression_declaration _IR_S_single_expression_declaration;
} _IR_single_expression_declaration;

struct _IR_S_single_reservation_declaration
{
  struct _IR_S_single_expression_declaration _IR_M_single_expression_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_reservation_declaration _IR_S_single_reservation_declaration;
} _IR_single_reservation_declaration;

struct _IR_S_result_list
{
  IR_node_t  result;
  IR_node_t  next_result;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_result_list _IR_S_result_list;
} _IR_result_list;

struct _IR_S_input_list
{
  IR_node_t  input;
  IR_node_t  next_input;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_input_list _IR_S_input_list;
} _IR_input_list;

struct _IR_S_single_instruction_declaration
{
  struct _IR_S_single_expression_declaration _IR_M_single_expression_declaration;
  integer_t  instruction_number;
  IR_node_t  result_list;
  IR_node_t  input_list;
  IR_node_t  transformed_expression;
  IR_node_t  arcs_marked_by_instruction;
  integer_t  equivalence_class_number;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_single_instruction_declaration _IR_S_single_instruction_declaration;
} _IR_single_instruction_declaration;

struct _IR_S_state
{
  IR_node_t  first_out_arc;
  bool_t  it_was_placed_in_stack_for_NDFA_forming;
  bool_t  it_was_placed_in_stack_for_DFA_forming;
  IR_node_t  component_states;
  integer_t  pass_number;
  IR_node_t  next_equivalence_class_state;
  integer_t  equivalence_class_number_1;
  integer_t  equivalence_class_number_2;
  IR_node_t  equivalence_class_state;
  integer_t  order_state_number;
  reservation_sets_list_t  reservations;
  integer_t  unique_number;
  IR_node_t  automaton;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_state _IR_S_state;
} _IR_state;

struct _IR_S_arc
{
  IR_node_t  next_arc_marked_by_instruction;
  IR_node_t  to_state;
  IR_node_t  instruction;
  IR_node_t  next_out_arc;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_arc _IR_S_arc;
} _IR_arc;

struct _IR_S_alternative_state
{
  IR_node_t  state;
  IR_node_t  next_alternative_state;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_alternative_state _IR_S_alternative_state;
} _IR_alternative_state;

struct _IR_S_automaton_instruction_declaration
{
  IR_node_t  alternative_state_list;
  IR_node_t  next_the_same_reservations_instruction;
  bool_t  first_instruction_with_the_same_reservations;
  IR_node_t  next_equivalence_class_instruction;
  bool_t  first_out_arc_with_given_equialence_number;
  integer_t  instruction_equivalence_class_number;
  IR_node_t  single_instruction_declaration;
  IR_node_t  next_automaton_instruction_declaration;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_automaton_instruction_declaration _IR_S_automaton_instruction_declaration;
} _IR_automaton_instruction_declaration;

struct _IR_S_automaton
{
  IR_node_t  start_state;
  integer_t  instruction_equivalence_classes_number;
  integer_t  achieved_states_number;
  integer_t  automaton_order_number;
  integer_t  NDFA_states_number;
  integer_t  DFA_states_number;
  integer_t  minimal_DFA_states_number;
  integer_t  NDFA_arcs_number;
  integer_t  DFA_arcs_number;
  integer_t  minimal_DFA_arcs_number;
  IR_node_t  automaton_instruction_declaration_list;
  IR_node_t  corresponding_single_automaton_declaration;
  IR_node_t  next_automaton;
};

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
  struct _IR_S_automaton _IR_S_automaton;
} _IR_automaton;

typedef struct IR_node
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
} _IR__root;

typedef struct
{
  IR_node_mode_t _IR_node_mode;
  int _IR_last_graph_pass_number;
  IR_node_t _IR_temporary;
} _IR__error;

#define IR_NODE_MODE(t) ((t)->_IR_node_mode)

extern const char *IR_node_name[];

extern unsigned char IR_node_size[];

#define IR_NODE_LEVEL(node) _IR_node_level [IR_NODE_MODE (node)]

#define IR_IS_TYPE(type, super) ((_IR_is_type [super] [type /8] >> (type % 8)) & 1)

#define IR_IS_OF_TYPE(node, super)IR_IS_TYPE (IR_NODE_MODE (node), super)

extern void _IR_set_double_field_value
  (IR_double_link_t link, IR_node_t value, int disp, int flag);

extern IR_double_link_t IR__first_double_link (IR_node_t node);

#define IR__next_double_link(prev_double_link) ((prev_double_link)->next_link)

#define IR__previous_double_link(next_double_link) ((next_double_link)->previous_link)

#define IR__owner(link) ((link)->link_owner)

#define IR_position(_node) (((_IR_node *) (_node))->_IR_S_node.position)

#define IR_identifier_itself(_node) (((_IR_identifier *) (_node))->_IR_S_identifier.identifier_itself)

#define IR_next_identifier(_node) (((_IR_identifier *) (_node))->_IR_S_identifier.next_identifier)

#define IR_number_value(_node) (((_IR_number *) (_node))->_IR_S_number.number_value)

#define IR_code_insertion_itself(_node) (((_IR_code_insertion *) (_node))->_IR_S_code_insertion.code_insertion_itself)

#define IR_next_declaration(_node) (((_IR_declaration *) (_node))->_IR_S_declaration.next_declaration)

#define IR_identifier_list(_node) (((_IR_identifier_declaration *) (_node))->_IR_S_identifier_declaration.identifier_list)

#define IR_automaton_identifier(_node) (((_IR_unit_declaration *) (_node))->_IR_S_unit_declaration.automaton_identifier)

#define IR_identifier_list_2(_node) (((_IR_exclusion_clause *) (_node))->_IR_S_exclusion_clause.identifier_list_2)

#define IR_code_itself(_node) (((_IR_code *) (_node))->_IR_S_code.code_itself)

#define IR_expression(_node) (*(IR_node_t *) ((char *) (_node) + _IR_D_expression [IR_NODE_MODE ((_node))]))

#define IR_next_expression_definition(_node) (((_IR_expression_definition *) (_node))->_IR_S_expression_definition.next_expression_definition)

#define IR_expression_identifier(_node) (*(IR_node_t *) ((char *) (_node) + _IR_D_expression_identifier [IR_NODE_MODE ((_node))]))

#define IR_operand(_node) (((_IR_one_operand_expression *) (_node))->_IR_S_one_operand_expression.operand)

#define IR_left_operand(_node) (((_IR_two_operand_expression *) (_node))->_IR_S_two_operand_expression.left_operand)

#define IR_right_operand(_node) (((_IR_two_operand_expression *) (_node))->_IR_S_two_operand_expression.right_operand)

#define IR_repetition_number(_node) (((_IR_repetition *) (_node))->_IR_S_repetition.repetition_number)

#define IR_single_declaration(_node) (((_IR_expression_atom *) (_node))->_IR_S_expression_atom.single_declaration)

#define IR_result_number(_node) (((_IR_result *) (_node))->_IR_S_result.result_number)

#define IR_input_number(_node) (((_IR_input *) (_node))->_IR_S_input.input_number)

#define IR_additional_code_itself(_node) (((_IR_additional_code *) (_node))->_IR_S_additional_code.additional_code_itself)

#define IR_declaration_list(_node) (((_IR_description *) (_node))->_IR_S_description.declaration_list)

#define IR_expression_definition_list(_node) (((_IR_description *) (_node))->_IR_S_description.expression_definition_list)

#define IR_additional_code(_node) (((_IR_description *) (_node))->_IR_S_description.additional_code)

#define IR_single_declaration_list(_node) (((_IR_description *) (_node))->_IR_S_description.single_declaration_list)

#define IR_units_number(_node) (((_IR_description *) (_node))->_IR_S_description.units_number)

#define IR_instructions_number(_node) (((_IR_description *) (_node))->_IR_S_description.instructions_number)

#define IR_max_instruction_reservation_cycles(_node) (((_IR_description *) (_node))->_IR_S_description.max_instruction_reservation_cycles)

#define IR_first_automaton(_node) (((_IR_description *) (_node))->_IR_S_description.first_automaton)

#define IR_identifier(_node) (((_IR_single_declaration *) (_node))->_IR_S_single_declaration.identifier)

#define IR_next_single_declaration(_node) (((_IR_single_declaration *) (_node))->_IR_S_single_declaration.next_single_declaration)

#define IR_automaton_is_used(_node) (((_IR_single_automaton_declaration *) (_node))->_IR_S_single_automaton_declaration.automaton_is_used)

#define IR_corresponding_automaton(_node) (((_IR_single_automaton_declaration *) (_node))->_IR_S_single_automaton_declaration.corresponding_automaton)

#define IR_unit_is_used(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.unit_is_used)

#define IR_the_same_automaton_unit(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.the_same_automaton_unit)

#define IR_the_same_automaton_message_reported_p(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.the_same_automaton_message_reported_p)

#define IR_unit_number(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.unit_number)

#define IR_single_automaton_declaration(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.single_automaton_declaration)

#define IR_max_occurrence_cycle_number(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.max_occurrence_cycle_number)

#define IR_exclusion_list(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.exclusion_list)

#define IR_corresponding_automaton_number(_node) (((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.corresponding_automaton_number)

#define IR_single_unit_declaration(_node) (((_IR_unit_set_element *) (_node))->_IR_S_unit_set_element.single_unit_declaration)

#define IR_next_unit_set_element(_node) (((_IR_unit_set_element *) (_node))->_IR_S_unit_set_element.next_unit_set_element)

#define IR_cycle_checking_pass_number(_node) (((_IR_single_expression_declaration *) (_node))->_IR_S_single_expression_declaration.cycle_checking_pass_number)

#define IR_result(_node) (((_IR_result_list *) (_node))->_IR_S_result_list.result)

#define IR_next_result(_node) (((_IR_result_list *) (_node))->_IR_S_result_list.next_result)

#define IR_input(_node) (((_IR_input_list *) (_node))->_IR_S_input_list.input)

#define IR_next_input(_node) (((_IR_input_list *) (_node))->_IR_S_input_list.next_input)

#define IR_instruction_number(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.instruction_number)

#define IR_result_list(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.result_list)

#define IR_input_list(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.input_list)

#define IR_transformed_expression(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.transformed_expression)

#define IR_arcs_marked_by_instruction(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.arcs_marked_by_instruction)

#define IR_equivalence_class_number(_node) (((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.equivalence_class_number)

#define IR_first_out_arc(_node) (((_IR_state *) (_node))->_IR_S_state.first_out_arc)

#define IR_it_was_placed_in_stack_for_NDFA_forming(_node) (((_IR_state *) (_node))->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming)

#define IR_it_was_placed_in_stack_for_DFA_forming(_node) (((_IR_state *) (_node))->_IR_S_state.it_was_placed_in_stack_for_DFA_forming)

#define IR_component_states(_node) (((_IR_state *) (_node))->_IR_S_state.component_states)

#define IR_pass_number(_node) (((_IR_state *) (_node))->_IR_S_state.pass_number)

#define IR_next_equivalence_class_state(_node) (((_IR_state *) (_node))->_IR_S_state.next_equivalence_class_state)

#define IR_equivalence_class_number_1(_node) (((_IR_state *) (_node))->_IR_S_state.equivalence_class_number_1)

#define IR_equivalence_class_number_2(_node) (((_IR_state *) (_node))->_IR_S_state.equivalence_class_number_2)

#define IR_equivalence_class_state(_node) (((_IR_state *) (_node))->_IR_S_state.equivalence_class_state)

#define IR_order_state_number(_node) (((_IR_state *) (_node))->_IR_S_state.order_state_number)

#define IR_reservations(_node) (((_IR_state *) (_node))->_IR_S_state.reservations)

#define IR_unique_number(_node) (((_IR_state *) (_node))->_IR_S_state.unique_number)

#define IR_automaton(_node) (((_IR_state *) (_node))->_IR_S_state.automaton)

#define IR_next_arc_marked_by_instruction(_node) (((_IR_arc *) (_node))->_IR_S_arc.next_arc_marked_by_instruction)

#define IR_to_state(_node) (((_IR_arc *) (_node))->_IR_S_arc.to_state)

#define IR_instruction(_node) (((_IR_arc *) (_node))->_IR_S_arc.instruction)

#define IR_next_out_arc(_node) (((_IR_arc *) (_node))->_IR_S_arc.next_out_arc)

#define IR_state(_node) (((_IR_alternative_state *) (_node))->_IR_S_alternative_state.state)

#define IR_next_alternative_state(_node) (((_IR_alternative_state *) (_node))->_IR_S_alternative_state.next_alternative_state)

#define IR_alternative_state_list(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.alternative_state_list)

#define IR_next_the_same_reservations_instruction(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction)

#define IR_first_instruction_with_the_same_reservations(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.first_instruction_with_the_same_reservations)

#define IR_next_equivalence_class_instruction(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction)

#define IR_first_out_arc_with_given_equialence_number(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number)

#define IR_instruction_equivalence_class_number(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.instruction_equivalence_class_number)

#define IR_single_instruction_declaration(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.single_instruction_declaration)

#define IR_next_automaton_instruction_declaration(_node) (((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration)

#define IR_start_state(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.start_state)

#define IR_instruction_equivalence_classes_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.instruction_equivalence_classes_number)

#define IR_achieved_states_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.achieved_states_number)

#define IR_automaton_order_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.automaton_order_number)

#define IR_NDFA_states_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.NDFA_states_number)

#define IR_DFA_states_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.DFA_states_number)

#define IR_minimal_DFA_states_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.minimal_DFA_states_number)

#define IR_NDFA_arcs_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.NDFA_arcs_number)

#define IR_DFA_arcs_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.DFA_arcs_number)

#define IR_minimal_DFA_arcs_number(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.minimal_DFA_arcs_number)

#define IR_automaton_instruction_declaration_list(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.automaton_instruction_declaration_list)

#define IR_corresponding_single_automaton_declaration(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.corresponding_single_automaton_declaration)

#define IR_next_automaton(_node) (((_IR_automaton *) (_node))->_IR_S_automaton.next_automaton)

extern void IR__set_double_link (IR_double_link_t link, IR_node_t value);

#define IR_set_position(_node, _value) ((((_IR_node *) (_node))->_IR_S_node.position) = (_value))

#define IR_set_identifier_itself(_node, _value) ((((_IR_identifier *) (_node))->_IR_S_identifier.identifier_itself) = (_value))

#define IR_set_next_identifier(_node, _value) ((((_IR_identifier *) (_node))->_IR_S_identifier.next_identifier) = (_value))

#define IR_set_number_value(_node, _value) ((((_IR_number *) (_node))->_IR_S_number.number_value) = (_value))

#define IR_set_code_insertion_itself(_node, _value) ((((_IR_code_insertion *) (_node))->_IR_S_code_insertion.code_insertion_itself) = (_value))

#define IR_set_next_declaration(_node, _value) ((((_IR_declaration *) (_node))->_IR_S_declaration.next_declaration) = (_value))

#define IR_set_identifier_list(_node, _value) ((((_IR_identifier_declaration *) (_node))->_IR_S_identifier_declaration.identifier_list) = (_value))

#define IR_set_automaton_identifier(_node, _value) ((((_IR_unit_declaration *) (_node))->_IR_S_unit_declaration.automaton_identifier) = (_value))

#define IR_set_identifier_list_2(_node, _value) ((((_IR_exclusion_clause *) (_node))->_IR_S_exclusion_clause.identifier_list_2) = (_value))

#define IR_set_code_itself(_node, _value) ((((_IR_code *) (_node))->_IR_S_code.code_itself) = (_value))

#define IR_set_expression(_node, _value) ((*(IR_node_t *) ((char *) (_node) + _IR_D_expression [IR_NODE_MODE ((_node))])) = (_value))

#define IR_set_next_expression_definition(_node, _value) ((((_IR_expression_definition *) (_node))->_IR_S_expression_definition.next_expression_definition) = (_value))

#define IR_set_expression_identifier(_node, _value) ((*(IR_node_t *) ((char *) (_node) + _IR_D_expression_identifier [IR_NODE_MODE ((_node))])) = (_value))

#define IR_set_operand(_node, _value) ((((_IR_one_operand_expression *) (_node))->_IR_S_one_operand_expression.operand) = (_value))

#define IR_set_left_operand(_node, _value) ((((_IR_two_operand_expression *) (_node))->_IR_S_two_operand_expression.left_operand) = (_value))

#define IR_set_right_operand(_node, _value) ((((_IR_two_operand_expression *) (_node))->_IR_S_two_operand_expression.right_operand) = (_value))

#define IR_set_repetition_number(_node, _value) ((((_IR_repetition *) (_node))->_IR_S_repetition.repetition_number) = (_value))

#define IR_set_single_declaration(_node, _value) ((((_IR_expression_atom *) (_node))->_IR_S_expression_atom.single_declaration) = (_value))

#define IR_set_result_number(_node, _value) ((((_IR_result *) (_node))->_IR_S_result.result_number) = (_value))

#define IR_set_input_number(_node, _value) ((((_IR_input *) (_node))->_IR_S_input.input_number) = (_value))

#define IR_set_additional_code_itself(_node, _value) ((((_IR_additional_code *) (_node))->_IR_S_additional_code.additional_code_itself) = (_value))

#define IR_set_declaration_list(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.declaration_list) = (_value))

#define IR_set_expression_definition_list(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.expression_definition_list) = (_value))

#define IR_set_additional_code(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.additional_code) = (_value))

#define IR_set_single_declaration_list(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.single_declaration_list) = (_value))

#define IR_set_units_number(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.units_number) = (_value))

#define IR_set_instructions_number(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.instructions_number) = (_value))

#define IR_set_max_instruction_reservation_cycles(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.max_instruction_reservation_cycles) = (_value))

#define IR_set_first_automaton(_node, _value) ((((_IR_description *) (_node))->_IR_S_description.first_automaton) = (_value))

#define IR_set_identifier(_node, _value) ((((_IR_single_declaration *) (_node))->_IR_S_single_declaration.identifier) = (_value))

#define IR_set_next_single_declaration(_node, _value) ((((_IR_single_declaration *) (_node))->_IR_S_single_declaration.next_single_declaration) = (_value))

#define IR_set_automaton_is_used(_node, _value) ((((_IR_single_automaton_declaration *) (_node))->_IR_S_single_automaton_declaration.automaton_is_used) = (_value))

#define IR_set_corresponding_automaton(_node, _value) ((((_IR_single_automaton_declaration *) (_node))->_IR_S_single_automaton_declaration.corresponding_automaton) = (_value))

#define IR_set_unit_is_used(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.unit_is_used) = (_value))

#define IR_set_the_same_automaton_unit(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.the_same_automaton_unit) = (_value))

#define IR_set_the_same_automaton_message_reported_p(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.the_same_automaton_message_reported_p) = (_value))

#define IR_set_unit_number(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.unit_number) = (_value))

#define IR_set_single_automaton_declaration(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.single_automaton_declaration) = (_value))

#define IR_set_max_occurrence_cycle_number(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.max_occurrence_cycle_number) = (_value))

#define IR_set_exclusion_list(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.exclusion_list) = (_value))

#define IR_set_corresponding_automaton_number(_node, _value) ((((_IR_single_unit_declaration *) (_node))->_IR_S_single_unit_declaration.corresponding_automaton_number) = (_value))

#define IR_set_single_unit_declaration(_node, _value) ((((_IR_unit_set_element *) (_node))->_IR_S_unit_set_element.single_unit_declaration) = (_value))

#define IR_set_next_unit_set_element(_node, _value) ((((_IR_unit_set_element *) (_node))->_IR_S_unit_set_element.next_unit_set_element) = (_value))

#define IR_set_cycle_checking_pass_number(_node, _value) ((((_IR_single_expression_declaration *) (_node))->_IR_S_single_expression_declaration.cycle_checking_pass_number) = (_value))

#define IR_set_result(_node, _value) ((((_IR_result_list *) (_node))->_IR_S_result_list.result) = (_value))

#define IR_set_next_result(_node, _value) ((((_IR_result_list *) (_node))->_IR_S_result_list.next_result) = (_value))

#define IR_set_input(_node, _value) ((((_IR_input_list *) (_node))->_IR_S_input_list.input) = (_value))

#define IR_set_next_input(_node, _value) ((((_IR_input_list *) (_node))->_IR_S_input_list.next_input) = (_value))

#define IR_set_instruction_number(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.instruction_number) = (_value))

#define IR_set_result_list(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.result_list) = (_value))

#define IR_set_input_list(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.input_list) = (_value))

#define IR_set_transformed_expression(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.transformed_expression) = (_value))

#define IR_set_arcs_marked_by_instruction(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.arcs_marked_by_instruction) = (_value))

#define IR_set_equivalence_class_number(_node, _value) ((((_IR_single_instruction_declaration *) (_node))->_IR_S_single_instruction_declaration.equivalence_class_number) = (_value))

#define IR_set_first_out_arc(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.first_out_arc) = (_value))

#define IR_set_it_was_placed_in_stack_for_NDFA_forming(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.it_was_placed_in_stack_for_NDFA_forming) = (_value))

#define IR_set_it_was_placed_in_stack_for_DFA_forming(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.it_was_placed_in_stack_for_DFA_forming) = (_value))

#define IR_set_component_states(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.component_states) = (_value))

#define IR_set_pass_number(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.pass_number) = (_value))

#define IR_set_next_equivalence_class_state(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.next_equivalence_class_state) = (_value))

#define IR_set_equivalence_class_number_1(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.equivalence_class_number_1) = (_value))

#define IR_set_equivalence_class_number_2(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.equivalence_class_number_2) = (_value))

#define IR_set_equivalence_class_state(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.equivalence_class_state) = (_value))

#define IR_set_order_state_number(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.order_state_number) = (_value))

#define IR_set_reservations(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.reservations) = (_value))

#define IR_set_unique_number(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.unique_number) = (_value))

#define IR_set_automaton(_node, _value) ((((_IR_state *) (_node))->_IR_S_state.automaton) = (_value))

#define IR_set_next_arc_marked_by_instruction(_node, _value) ((((_IR_arc *) (_node))->_IR_S_arc.next_arc_marked_by_instruction) = (_value))

#define IR_set_to_state(_node, _value) ((((_IR_arc *) (_node))->_IR_S_arc.to_state) = (_value))

#define IR_set_instruction(_node, _value) ((((_IR_arc *) (_node))->_IR_S_arc.instruction) = (_value))

#define IR_set_next_out_arc(_node, _value) ((((_IR_arc *) (_node))->_IR_S_arc.next_out_arc) = (_value))

#define IR_set_state(_node, _value) ((((_IR_alternative_state *) (_node))->_IR_S_alternative_state.state) = (_value))

#define IR_set_next_alternative_state(_node, _value) ((((_IR_alternative_state *) (_node))->_IR_S_alternative_state.next_alternative_state) = (_value))

#define IR_set_alternative_state_list(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.alternative_state_list) = (_value))

#define IR_set_next_the_same_reservations_instruction(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_the_same_reservations_instruction) = (_value))

#define IR_set_first_instruction_with_the_same_reservations(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.first_instruction_with_the_same_reservations) = (_value))

#define IR_set_next_equivalence_class_instruction(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_equivalence_class_instruction) = (_value))

#define IR_set_first_out_arc_with_given_equialence_number(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.first_out_arc_with_given_equialence_number) = (_value))

#define IR_set_instruction_equivalence_class_number(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.instruction_equivalence_class_number) = (_value))

#define IR_set_single_instruction_declaration(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.single_instruction_declaration) = (_value))

#define IR_set_next_automaton_instruction_declaration(_node, _value) ((((_IR_automaton_instruction_declaration *) (_node))->_IR_S_automaton_instruction_declaration.next_automaton_instruction_declaration) = (_value))

#define IR_set_start_state(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.start_state) = (_value))

#define IR_set_instruction_equivalence_classes_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.instruction_equivalence_classes_number) = (_value))

#define IR_set_achieved_states_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.achieved_states_number) = (_value))

#define IR_set_automaton_order_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.automaton_order_number) = (_value))

#define IR_set_NDFA_states_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.NDFA_states_number) = (_value))

#define IR_set_DFA_states_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.DFA_states_number) = (_value))

#define IR_set_minimal_DFA_states_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.minimal_DFA_states_number) = (_value))

#define IR_set_NDFA_arcs_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.NDFA_arcs_number) = (_value))

#define IR_set_DFA_arcs_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.DFA_arcs_number) = (_value))

#define IR_set_minimal_DFA_arcs_number(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.minimal_DFA_arcs_number) = (_value))

#define IR_set_automaton_instruction_declaration_list(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.automaton_instruction_declaration_list) = (_value))

#define IR_set_corresponding_single_automaton_declaration(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.corresponding_single_automaton_declaration) = (_value))

#define IR_set_next_automaton(_node, _value) ((((_IR_automaton *) (_node))->_IR_S_automaton.next_automaton) = (_value))

extern IR_node_t IR_create_node (IR_node_mode_t node_mode);

extern IR_node_t IR_new_identifier
(position_t position,
 string_t identifier_itself,
 IR_node_t next_identifier);

extern IR_node_t IR_new_number
(position_t position,
 integer_t number_value);

extern IR_node_t IR_new_code_insertion
(position_t position,
 string_t code_insertion_itself);

extern IR_node_t IR_new_instruction_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list);

extern IR_node_t IR_new_reservation_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list);

extern IR_node_t IR_new_unit_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list,
 IR_node_t automaton_identifier);

extern IR_node_t IR_new_exclusion_clause
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list,
 IR_node_t identifier_list_2);

extern IR_node_t IR_new_automaton_declaration
(position_t position,
 IR_node_t next_declaration,
 IR_node_t identifier_list);

extern IR_node_t IR_new_local_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself);

extern IR_node_t IR_new_import_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself);

extern IR_node_t IR_new_export_code
(position_t position,
 IR_node_t next_declaration,
 IR_node_t code_itself);

extern IR_node_t IR_new_expression_definition
(position_t position,
 IR_node_t expression_identifier);

extern IR_node_t IR_new_new_cycle_concatenation
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand);

extern IR_node_t IR_new_concatenation
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand);

extern IR_node_t IR_new_optional_expression
(position_t position,
 IR_node_t operand);

extern IR_node_t IR_new_alternative
(position_t position,
 IR_node_t left_operand,
 IR_node_t right_operand);

extern IR_node_t IR_new_repetition
(position_t position,
 IR_node_t operand,
 IR_node_t repetition_number);

extern IR_node_t IR_new_expression_atom
(position_t position,
 IR_node_t expression_identifier);

extern IR_node_t IR_new_nothing
(position_t position);

extern IR_node_t IR_new_result
(position_t position,
 integer_t result_number);

extern IR_node_t IR_new_input
(position_t position,
 integer_t input_number);

extern IR_node_t IR_new_additional_code
(position_t position,
 string_t additional_code_itself);

extern IR_node_t IR_new_description
(position_t position,
 IR_node_t declaration_list,
 IR_node_t expression_definition_list,
 IR_node_t additional_code);

extern IR_node_t IR_new_single_automaton_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration);

extern IR_node_t IR_new_single_unit_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration);

extern IR_node_t IR_new_unit_set_element
(position_t position,
 IR_node_t single_unit_declaration,
 IR_node_t next_unit_set_element);

extern IR_node_t IR_new_single_reservation_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration);

extern IR_node_t IR_new_result_list
(IR_node_t result,
 IR_node_t next_result);

extern IR_node_t IR_new_input_list
(IR_node_t input,
 IR_node_t next_input);

extern IR_node_t IR_new_single_instruction_declaration
(position_t position,
 IR_node_t identifier,
 IR_node_t next_single_declaration);

extern IR_node_t IR_new_state
(reservation_sets_list_t reservations,
 integer_t unique_number,
 IR_node_t automaton);

extern IR_node_t IR_new_arc
(IR_node_t to_state,
 IR_node_t instruction,
 IR_node_t next_out_arc);

extern IR_node_t IR_new_alternative_state
(IR_node_t state,
 IR_node_t next_alternative_state);

extern IR_node_t IR_new_automaton_instruction_declaration
(IR_node_t single_instruction_declaration,
 IR_node_t next_automaton_instruction_declaration);

extern IR_node_t IR_new_automaton
(IR_node_t automaton_instruction_declaration_list,
 IR_node_t corresponding_single_automaton_declaration,
 IR_node_t next_automaton);

extern IR_node_t IR_copy_node (IR_node_t node);

extern IR_node_t IR_transform_dag
(IR_node_t graph, int class_field_flag, int (*guard_function) (IR_node_t node),
 IR_node_t (*transformation_function) (IR_node_t node));

extern void IR_start (void);

extern void IR_stop (void);


#line 58 "./ird.sprut"


/* These macros for storage management of OKA internal representation: */

/* Start work with the storage manager -- see OKA documentation. */

#define IR_START_ALLOC()    OS_CREATE (irp, 0)

/* Finish work with the storage manager -- see OKA documentation. */

#define IR_STOP_ALLOC()     OS_DELETE (irp)

/* Allocate storage for internal representation of given size
   -- see OKA documentation. */

#define IR_ALLOC(ptr, size, ptr_type)\
  do {\
    OS_TOP_EXPAND (irp, size); ptr = (ptr_type) OS_TOP_BEGIN (irp);\
    OS_TOP_FINISH (irp);\
  } while (0);

/* Free storage of internal representation of given size -- see OKA
   documentation. */

#define IR_FREE(ptr, size)


/* These macros are analogous to ones of package `object-stack'
   worked with storage of OKA internal representation: */

/* Start new internal representation object -- see also package
   `object-stack'. */

#define IR_TOP_FINISH()  OS_TOP_FINISH (irp)

/* Nullify current internal representation object -- see also package
   `object-stack'. */

#define IR_TOP_NULLIFY()  OS_TOP_NULLIFY (irp)

/* Shorten current internal representation object on given number bytes -- see
   also package `object-stack'. */

#define IR_TOP_SHORTEN(length) OS_TOP_SHORTEN (irp, length)

/* Return start address of current internal representation object -- see also
   package `object-stack'. */

#define IR_TOP_BEGIN()  OS_TOP_BEGIN (irp)

/* Return length of current internal representation object in bytes -- see
   also package `object-stack'. */

#define IR_TOP_LENGTH()  OS_TOP_LENGTH (irp)

/* Expand current internal representation object -- see also package
   `object-stack'. */

#define IR_TOP_EXPAND(length)  OS_TOP_EXPAND (irp, length)

/* Add byte to the end of current internal representation object -- see also
   package `object-stack'. */

#define IR_TOP_ADD_BYTE(b)  OS_TOP_ADD_BYTE (irp, b)

/* Add string to the end of current internal representation object -- see also
   package `object-stack'. */

#define IR_TOP_ADD_STRING(str)  OS_TOP_ADD_STRING (irp, str)

/* Add memory of given length to the end of current internal representation
   object -- see also package `object-stack'. */

#define IR_TOP_ADD_MEMORY(mem, length)  OS_TOP_ADD_MEMORY (irp, mem, length)

extern os_t irp;

IR_node_t find_result (IR_node_t instruction, integer_t number);

IR_node_t find_input (IR_node_t instruction, integer_t number);



#line 1563 "ird.h"
#endif /* __IR_ird__ */
