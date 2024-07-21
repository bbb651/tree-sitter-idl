#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_partial = 1,
  anon_sym_interface = 2,
  anon_sym_mixin = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_const = 7,
  anon_sym_EQ = 8,
  anon_sym_SEMI = 9,
  anon_sym_readonly = 10,
  anon_sym_attribute = 11,
  anon_sym_getter = 12,
  anon_sym_setter = 13,
  anon_sym_deleter = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_dictionary = 17,
  anon_sym_required = 18,
  anon_sym_enum = 19,
  anon_sym_COMMA = 20,
  anon_sym_typedef = 21,
  anon_sym_callback = 22,
  anon_sym_includes = 23,
  anon_sym_optional = 24,
  anon_sym_DOT_DOT_DOT = 25,
  anon_sym_boolean = 26,
  anon_sym_byte = 27,
  anon_sym_octet = 28,
  anon_sym_short = 29,
  anon_sym_unsigned = 30,
  anon_sym_long = 31,
  anon_sym_unrestricted = 32,
  anon_sym_float = 33,
  anon_sym_double = 34,
  anon_sym_ByteString = 35,
  anon_sym_DOMString = 36,
  anon_sym_USVString = 37,
  anon_sym_sequence = 38,
  anon_sym_FrozenArray = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_Promise = 42,
  anon_sym_record = 43,
  anon_sym_or = 44,
  sym_identifier = 45,
  sym_number = 46,
  anon_sym_true = 47,
  anon_sym_false = 48,
  sym_string = 49,
  anon_sym_SLASH_SLASH = 50,
  anon_sym_SLASH_STAR = 51,
  anon_sym_SLASH = 52,
  sym_source_file = 53,
  sym__definition = 54,
  sym_interface_definition = 55,
  sym__interface_member = 56,
  sym_const_member = 57,
  sym_attribute_member = 58,
  sym_operation_member = 59,
  sym_dictionary_definition = 60,
  sym_dictionary_member = 61,
  sym_enum_definition = 62,
  sym_typedef_definition = 63,
  sym_callback_definition = 64,
  sym_includes_statement = 65,
  sym_argument_list = 66,
  sym_argument = 67,
  sym__type = 68,
  sym_primitive_type = 69,
  sym_string_type = 70,
  sym_sequence_type = 71,
  sym_promise_type = 72,
  sym_record_type = 73,
  sym_union_type = 74,
  sym__const_value = 75,
  sym_boolean = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_interface_definition_repeat1 = 78,
  aux_sym_dictionary_definition_repeat1 = 79,
  aux_sym_enum_definition_repeat1 = 80,
  aux_sym_argument_list_repeat1 = 81,
  aux_sym_union_type_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_partial] = "partial",
  [anon_sym_interface] = "interface",
  [anon_sym_mixin] = "mixin",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_readonly] = "readonly",
  [anon_sym_attribute] = "attribute",
  [anon_sym_getter] = "getter",
  [anon_sym_setter] = "setter",
  [anon_sym_deleter] = "deleter",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_dictionary] = "dictionary",
  [anon_sym_required] = "required",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_typedef] = "typedef",
  [anon_sym_callback] = "callback",
  [anon_sym_includes] = "includes",
  [anon_sym_optional] = "optional",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_boolean] = "boolean",
  [anon_sym_byte] = "byte",
  [anon_sym_octet] = "octet",
  [anon_sym_short] = "short",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_long] = "long",
  [anon_sym_unrestricted] = "unrestricted",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_ByteString] = "ByteString",
  [anon_sym_DOMString] = "DOMString",
  [anon_sym_USVString] = "USVString",
  [anon_sym_sequence] = "sequence",
  [anon_sym_FrozenArray] = "FrozenArray",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_Promise] = "Promise",
  [anon_sym_record] = "record",
  [anon_sym_or] = "or",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string] = "string",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_interface_definition] = "interface_definition",
  [sym__interface_member] = "_interface_member",
  [sym_const_member] = "const_member",
  [sym_attribute_member] = "attribute_member",
  [sym_operation_member] = "operation_member",
  [sym_dictionary_definition] = "dictionary_definition",
  [sym_dictionary_member] = "dictionary_member",
  [sym_enum_definition] = "enum_definition",
  [sym_typedef_definition] = "typedef_definition",
  [sym_callback_definition] = "callback_definition",
  [sym_includes_statement] = "includes_statement",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_string_type] = "string_type",
  [sym_sequence_type] = "sequence_type",
  [sym_promise_type] = "promise_type",
  [sym_record_type] = "record_type",
  [sym_union_type] = "union_type",
  [sym__const_value] = "_const_value",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_dictionary_definition_repeat1] = "dictionary_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_mixin] = anon_sym_mixin,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_getter] = anon_sym_getter,
  [anon_sym_setter] = anon_sym_setter,
  [anon_sym_deleter] = anon_sym_deleter,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_dictionary] = anon_sym_dictionary,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_callback] = anon_sym_callback,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_octet] = anon_sym_octet,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_unrestricted] = anon_sym_unrestricted,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_ByteString] = anon_sym_ByteString,
  [anon_sym_DOMString] = anon_sym_DOMString,
  [anon_sym_USVString] = anon_sym_USVString,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_FrozenArray] = anon_sym_FrozenArray,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_Promise] = anon_sym_Promise,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_or] = anon_sym_or,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string] = sym_string,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym__interface_member] = sym__interface_member,
  [sym_const_member] = sym_const_member,
  [sym_attribute_member] = sym_attribute_member,
  [sym_operation_member] = sym_operation_member,
  [sym_dictionary_definition] = sym_dictionary_definition,
  [sym_dictionary_member] = sym_dictionary_member,
  [sym_enum_definition] = sym_enum_definition,
  [sym_typedef_definition] = sym_typedef_definition,
  [sym_callback_definition] = sym_callback_definition,
  [sym_includes_statement] = sym_includes_statement,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_string_type] = sym_string_type,
  [sym_sequence_type] = sym_sequence_type,
  [sym_promise_type] = sym_promise_type,
  [sym_record_type] = sym_record_type,
  [sym_union_type] = sym_union_type,
  [sym__const_value] = sym__const_value,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_dictionary_definition_repeat1] = aux_sym_dictionary_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callback] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unrestricted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOMString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USVString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FrozenArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Promise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_member] = {
    .visible = false,
    .named = true,
  },
  [sym_const_member] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_member] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_member] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_member] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_callback_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_includes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_type] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym__const_value] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 31,
  [43] = 43,
  [44] = 30,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 83,
  [101] = 91,
  [102] = 102,
  [103] = 83,
  [104] = 91,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 98,
  [109] = 109,
  [110] = 107,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 89,
  [123] = 85,
  [124] = 86,
  [125] = 125,
  [126] = 88,
  [127] = 127,
  [128] = 84,
  [129] = 129,
  [130] = 82,
  [131] = 81,
  [132] = 80,
  [133] = 92,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 119,
  [142] = 142,
  [143] = 143,
  [144] = 118,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 170,
  [201] = 167,
  [202] = 189,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 182,
  [209] = 183,
  [210] = 166,
  [211] = 211,
  [212] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '"', 1,
        '(', 228,
        ')', 229,
        ',', 236,
        '.', 9,
        '/', 477,
        ':', 211,
        ';', 217,
        '<', 273,
        '=', 216,
        '>', 274,
        'B', 197,
        'D', 12,
        'F', 143,
        'P', 145,
        'U', 13,
        'a', 169,
        'b', 129,
        'c', 18,
        'd', 57,
        'e', 117,
        'f', 22,
        'g', 72,
        'i', 110,
        'l', 131,
        'm', 83,
        'o', 37,
        'p', 20,
        'r', 47,
        's', 48,
        't', 146,
        'u', 111,
        '{', 212,
        '}', 213,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(474);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 228,
        ')', 229,
        'B', 466,
        'D', 282,
        'F', 416,
        'P', 419,
        'U', 283,
        'b', 399,
        'd', 396,
        'f', 373,
        'l', 402,
        'o', 308,
        'r', 330,
        's', 327,
        'u', 381,
        '-', 202,
        '_', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 228,
        'B', 466,
        'D', 282,
        'F', 416,
        'P', 419,
        'U', 283,
        'a', 440,
        'b', 399,
        'c', 400,
        'd', 332,
        'f', 373,
        'g', 334,
        'l', 402,
        'o', 309,
        'r', 319,
        's', 320,
        'u', 381,
        '}', 213,
        '-', 202,
        '_', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 228,
        'B', 466,
        'D', 282,
        'F', 416,
        'P', 419,
        'U', 283,
        'b', 399,
        'd', 396,
        'f', 373,
        'l', 402,
        'o', 309,
        'r', 326,
        's', 327,
        'u', 381,
        '}', 213,
        '-', 202,
        '_', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 228,
        'B', 466,
        'D', 282,
        'F', 416,
        'P', 419,
        'U', 283,
        'b', 399,
        'd', 396,
        'f', 373,
        'l', 402,
        'o', 309,
        'r', 330,
        's', 327,
        'u', 381,
        '-', 202,
        '_', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(244);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 17:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'q') ADVANCE(189);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'q') ADVANCE(190);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 193:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 198:
      if (lookahead == 'z') ADVANCE(67);
      END_STATE();
    case 199:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 202:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        'c', 288,
        'd', 353,
        'e', 379,
        'i', 380,
        'p', 289,
        't', 462,
        '-', 202,
        '_', 202,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_partial);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_mixin);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_getter);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_getter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_setter);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_setter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_deleter);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_deleter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_dictionary);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_dictionary);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_callback);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_callback);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_octet);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_octet);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_unrestricted);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_unrestricted);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ByteString);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_ByteString);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOMString);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOMString);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_USVString);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_USVString);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_FrozenArray);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_FrozenArray);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Promise);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Promise);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == 'y') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(459);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(476);
      if (lookahead == '/') ADVANCE(475);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 203},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 203},
  [56] = {.lex_state = 203},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 203},
  [59] = {.lex_state = 203},
  [60] = {.lex_state = 203},
  [61] = {.lex_state = 203},
  [62] = {.lex_state = 203},
  [63] = {.lex_state = 203},
  [64] = {.lex_state = 203},
  [65] = {.lex_state = 203},
  [66] = {.lex_state = 203},
  [67] = {.lex_state = 203},
  [68] = {.lex_state = 203},
  [69] = {.lex_state = 203},
  [70] = {.lex_state = 203},
  [71] = {.lex_state = 203},
  [72] = {.lex_state = 203},
  [73] = {.lex_state = 203},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 109},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 109},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_getter] = ACTIONS(1),
    [anon_sym_setter] = ACTIONS(1),
    [anon_sym_deleter] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_dictionary] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_callback] = ACTIONS(1),
    [anon_sym_includes] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_octet] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_unrestricted] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_ByteString] = ACTIONS(1),
    [anon_sym_DOMString] = ACTIONS(1),
    [anon_sym_USVString] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_FrozenArray] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_Promise] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym__definition] = STATE(55),
    [sym_interface_definition] = STATE(55),
    [sym_dictionary_definition] = STATE(55),
    [sym_enum_definition] = STATE(55),
    [sym_typedef_definition] = STATE(55),
    [sym_callback_definition] = STATE(55),
    [sym_includes_statement] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_partial] = ACTIONS(5),
    [anon_sym_interface] = ACTIONS(7),
    [anon_sym_dictionary] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(13),
    [anon_sym_callback] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [72] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(12), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [144] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [216] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [288] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(5), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [360] = 17,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(4), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [432] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [504] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(8), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [576] = 17,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(60), 1,
      anon_sym_readonly,
    ACTIONS(63), 1,
      anon_sym_attribute,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_unsigned,
    ACTIONS(78), 1,
      anon_sym_long,
    ACTIONS(81), 1,
      anon_sym_unrestricted,
    ACTIONS(90), 1,
      anon_sym_Promise,
    ACTIONS(93), 1,
      anon_sym_record,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(87), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(66), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(84), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(72), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [648] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(2), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [720] = 17,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_readonly,
    ACTIONS(25), 1,
      anon_sym_attribute,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(27), 3,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    STATE(10), 5,
      sym__interface_member,
      sym_const_member,
      sym_attribute_member,
      sym_operation_member,
      aux_sym_interface_definition_repeat1,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(137), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [792] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(15), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [850] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(18), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [908] = 14,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_required,
    ACTIONS(122), 1,
      anon_sym_unsigned,
    ACTIONS(125), 1,
      anon_sym_long,
    ACTIONS(128), 1,
      anon_sym_unrestricted,
    ACTIONS(137), 1,
      anon_sym_Promise,
    ACTIONS(140), 1,
      anon_sym_record,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(134), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(15), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(131), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(119), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [966] = 15,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_optional,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(105), 1,
      sym_argument,
    STATE(179), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(125), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1026] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(25), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1084] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(15), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1142] = 15,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(148), 1,
      anon_sym_optional,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_argument,
    STATE(162), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(125), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1202] = 15,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(148), 1,
      anon_sym_optional,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_argument,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(125), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1262] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(15), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1320] = 15,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(148), 1,
      anon_sym_optional,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_argument,
    STATE(192), 1,
      sym_argument_list,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(125), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1380] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(13), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1438] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(21), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1496] = 14,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(105), 1,
      anon_sym_required,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    STATE(15), 2,
      sym_dictionary_member,
      aux_sym_dictionary_definition_repeat1,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(171), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1554] = 13,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(148), 1,
      anon_sym_optional,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(139), 1,
      sym_argument,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(125), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1608] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(143), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1656] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(154), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1704] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(152), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1752] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(202), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1800] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(201), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1848] = 2,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(180), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [1878] = 2,
    ACTIONS(182), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(184), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [1908] = 11,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_unsigned,
    ACTIONS(192), 1,
      anon_sym_long,
    ACTIONS(194), 1,
      anon_sym_unrestricted,
    ACTIONS(200), 1,
      anon_sym_Promise,
    ACTIONS(202), 1,
      anon_sym_record,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(198), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(196), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(188), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(108), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [1956] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(113), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2004] = 2,
    ACTIONS(208), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(210), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2034] = 2,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(214), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2064] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(200), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2112] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(150), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2160] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(207), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2208] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(170), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2256] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(167), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2304] = 2,
    ACTIONS(226), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(228), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2334] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(189), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2382] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(170), 1,
      anon_sym_unsigned,
    ACTIONS(172), 1,
      anon_sym_long,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(164), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2430] = 11,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_unsigned,
    ACTIONS(192), 1,
      anon_sym_long,
    ACTIONS(194), 1,
      anon_sym_unrestricted,
    ACTIONS(200), 1,
      anon_sym_Promise,
    ACTIONS(202), 1,
      anon_sym_record,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(198), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(196), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(188), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(138), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2478] = 2,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(238), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2508] = 2,
    ACTIONS(240), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(242), 23,
      anon_sym_const,
      anon_sym_readonly,
      anon_sym_attribute,
      anon_sym_getter,
      anon_sym_setter,
      anon_sym_deleter,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2538] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_unsigned,
    ACTIONS(35), 1,
      anon_sym_long,
    ACTIONS(37), 1,
      anon_sym_unrestricted,
    ACTIONS(43), 1,
      anon_sym_Promise,
    ACTIONS(45), 1,
      anon_sym_record,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(41), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(39), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(31), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(190), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2586] = 11,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_unsigned,
    ACTIONS(192), 1,
      anon_sym_long,
    ACTIONS(194), 1,
      anon_sym_unrestricted,
    ACTIONS(200), 1,
      anon_sym_Promise,
    ACTIONS(202), 1,
      anon_sym_record,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(198), 2,
      anon_sym_sequence,
      anon_sym_FrozenArray,
    ACTIONS(196), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
    ACTIONS(188), 6,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_float,
      anon_sym_double,
    STATE(98), 7,
      sym__type,
      sym_primitive_type,
      sym_string_type,
      sym_sequence_type,
      sym_promise_type,
      sym_record_type,
      sym_union_type,
  [2634] = 2,
    ACTIONS(248), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(250), 18,
      anon_sym_required,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2659] = 2,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(254), 18,
      anon_sym_required,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2684] = 2,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(258), 18,
      anon_sym_required,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2709] = 2,
    ACTIONS(260), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(262), 18,
      anon_sym_required,
      anon_sym_boolean,
      anon_sym_byte,
      anon_sym_octet,
      anon_sym_short,
      anon_sym_unsigned,
      anon_sym_long,
      anon_sym_unrestricted,
      anon_sym_float,
      anon_sym_double,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
      anon_sym_sequence,
      anon_sym_FrozenArray,
      anon_sym_Promise,
      anon_sym_record,
      sym_identifier,
  [2734] = 9,
    ACTIONS(5), 1,
      anon_sym_partial,
    ACTIONS(7), 1,
      anon_sym_interface,
    ACTIONS(9), 1,
      anon_sym_dictionary,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_typedef,
    ACTIONS(15), 1,
      anon_sym_callback,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    STATE(56), 8,
      sym__definition,
      sym_interface_definition,
      sym_dictionary_definition,
      sym_enum_definition,
      sym_typedef_definition,
      sym_callback_definition,
      sym_includes_statement,
      aux_sym_source_file_repeat1,
  [2769] = 9,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      anon_sym_partial,
    ACTIONS(271), 1,
      anon_sym_interface,
    ACTIONS(274), 1,
      anon_sym_dictionary,
    ACTIONS(277), 1,
      anon_sym_enum,
    ACTIONS(280), 1,
      anon_sym_typedef,
    ACTIONS(283), 1,
      anon_sym_callback,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(56), 8,
      sym__definition,
      sym_interface_definition,
      sym_dictionary_definition,
      sym_enum_definition,
      sym_typedef_definition,
      sym_callback_definition,
      sym_includes_statement,
      aux_sym_source_file_repeat1,
  [2804] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2817] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2830] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2843] = 2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2856] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2869] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2882] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2895] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2908] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2921] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2934] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2947] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2960] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2973] = 2,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2986] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [2999] = 2,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [3012] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 7,
      anon_sym_partial,
      anon_sym_interface,
      anon_sym_dictionary,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_callback,
      sym_identifier,
  [3025] = 3,
    ACTIONS(357), 2,
      sym_number,
      sym_string,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym__const_value,
      sym_boolean,
  [3038] = 3,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(361), 2,
      sym_number,
      sym_string,
    STATE(168), 2,
      sym__const_value,
      sym_boolean,
  [3051] = 3,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(363), 2,
      sym_number,
      sym_string,
    STATE(134), 2,
      sym__const_value,
      sym_boolean,
  [3064] = 3,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(365), 2,
      sym_number,
      sym_string,
    STATE(153), 2,
      sym__const_value,
      sym_boolean,
  [3077] = 3,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(367), 2,
      sym_number,
      sym_string,
    STATE(136), 2,
      sym__const_value,
      sym_boolean,
  [3090] = 3,
    ACTIONS(359), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(369), 2,
      sym_number,
      sym_string,
    STATE(160), 2,
      sym__const_value,
      sym_boolean,
  [3103] = 1,
    ACTIONS(371), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3111] = 1,
    ACTIONS(373), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3118] = 1,
    ACTIONS(375), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3125] = 3,
    ACTIONS(377), 1,
      anon_sym_long,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(373), 2,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
  [3136] = 1,
    ACTIONS(381), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3143] = 1,
    ACTIONS(383), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3150] = 1,
    ACTIONS(385), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3157] = 2,
    STATE(210), 1,
      sym_string_type,
    ACTIONS(387), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
  [3166] = 1,
    ACTIONS(389), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3173] = 1,
    ACTIONS(391), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3180] = 2,
    STATE(166), 1,
      sym_string_type,
    ACTIONS(387), 3,
      anon_sym_ByteString,
      anon_sym_DOMString,
      anon_sym_USVString,
  [3189] = 3,
    ACTIONS(395), 1,
      anon_sym_long,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(393), 2,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
  [3200] = 1,
    ACTIONS(393), 4,
      anon_sym_LPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_GT,
      sym_identifier,
  [3207] = 2,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3215] = 2,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3223] = 3,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_argument_list_repeat1,
  [3233] = 2,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(413), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3241] = 1,
    ACTIONS(415), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3247] = 3,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      anon_sym_or,
    STATE(110), 1,
      aux_sym_union_type_repeat1,
  [3257] = 3,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_enum_definition_repeat1,
  [3267] = 2,
    ACTIONS(425), 1,
      anon_sym_long,
    ACTIONS(373), 2,
      anon_sym_LPAREN,
      anon_sym_GT,
  [3275] = 2,
    ACTIONS(427), 1,
      anon_sym_long,
    ACTIONS(393), 2,
      anon_sym_LPAREN,
      anon_sym_GT,
  [3283] = 3,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      anon_sym_or,
    STATE(102), 1,
      aux_sym_union_type_repeat1,
  [3293] = 2,
    ACTIONS(434), 1,
      anon_sym_long,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3301] = 2,
    ACTIONS(436), 1,
      anon_sym_long,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3309] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_argument_list_repeat1,
  [3319] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_argument_list_repeat1,
  [3329] = 3,
    ACTIONS(419), 1,
      anon_sym_or,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_union_type_repeat1,
  [3339] = 3,
    ACTIONS(419), 1,
      anon_sym_or,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_union_type_repeat1,
  [3349] = 3,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_enum_definition_repeat1,
  [3359] = 3,
    ACTIONS(419), 1,
      anon_sym_or,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_union_type_repeat1,
  [3369] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_enum_definition_repeat1,
  [3379] = 2,
    ACTIONS(458), 1,
      anon_sym_mixin,
    ACTIONS(460), 1,
      sym_identifier,
  [3386] = 2,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 1,
      sym_identifier,
  [3393] = 2,
    ACTIONS(466), 1,
      anon_sym_interface,
    ACTIONS(468), 1,
      anon_sym_dictionary,
  [3400] = 2,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [3407] = 2,
    ACTIONS(474), 1,
      anon_sym_COLON,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
  [3414] = 2,
    ACTIONS(478), 1,
      anon_sym_mixin,
    ACTIONS(480), 1,
      sym_identifier,
  [3421] = 2,
    ACTIONS(427), 1,
      anon_sym_short,
    ACTIONS(482), 1,
      anon_sym_long,
  [3428] = 1,
    ACTIONS(436), 2,
      anon_sym_float,
      anon_sym_double,
  [3433] = 2,
    ACTIONS(436), 1,
      anon_sym_short,
    ACTIONS(484), 1,
      anon_sym_long,
  [3440] = 2,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
  [3447] = 1,
    ACTIONS(391), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3452] = 1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3457] = 1,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3462] = 2,
    ACTIONS(490), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(492), 1,
      sym_identifier,
  [3469] = 1,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3474] = 2,
    ACTIONS(494), 1,
      anon_sym_EQ,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [3481] = 1,
    ACTIONS(381), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3486] = 1,
    ACTIONS(449), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3491] = 1,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3496] = 1,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3501] = 1,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3506] = 1,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3511] = 1,
    ACTIONS(498), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3516] = 1,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3521] = 1,
    ACTIONS(413), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3526] = 2,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      sym_identifier,
  [3533] = 1,
    ACTIONS(429), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3538] = 1,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3543] = 2,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [3550] = 1,
    ACTIONS(427), 2,
      anon_sym_float,
      anon_sym_double,
  [3555] = 2,
    ACTIONS(510), 1,
      anon_sym_COLON,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
  [3562] = 2,
    ACTIONS(514), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(516), 1,
      sym_identifier,
  [3569] = 2,
    ACTIONS(427), 1,
      anon_sym_short,
    ACTIONS(518), 1,
      anon_sym_long,
  [3576] = 2,
    ACTIONS(520), 1,
      anon_sym_EQ,
    ACTIONS(522), 1,
      anon_sym_SEMI,
  [3583] = 1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [3587] = 1,
    ACTIONS(526), 1,
      anon_sym_includes,
  [3591] = 1,
    ACTIONS(528), 1,
      sym_string,
  [3595] = 1,
    ACTIONS(516), 1,
      sym_identifier,
  [3599] = 1,
    ACTIONS(530), 1,
      sym_identifier,
  [3603] = 1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
  [3607] = 1,
    ACTIONS(532), 1,
      sym_identifier,
  [3611] = 1,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3615] = 1,
    ACTIONS(536), 1,
      sym_identifier,
  [3619] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [3623] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3627] = 1,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
  [3631] = 1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
  [3635] = 1,
    ACTIONS(546), 1,
      sym_identifier,
  [3639] = 1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3643] = 1,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3647] = 1,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [3651] = 1,
    ACTIONS(554), 1,
      sym_identifier,
  [3655] = 1,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [3659] = 1,
    ACTIONS(558), 1,
      anon_sym_EQ,
  [3663] = 1,
    ACTIONS(560), 1,
      anon_sym_COMMA,
  [3667] = 1,
    ACTIONS(562), 1,
      anon_sym_GT,
  [3671] = 1,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [3675] = 1,
    ACTIONS(566), 1,
      sym_identifier,
  [3679] = 1,
    ACTIONS(568), 1,
      anon_sym_GT,
  [3683] = 1,
    ACTIONS(570), 1,
      sym_identifier,
  [3687] = 1,
    ACTIONS(572), 1,
      sym_identifier,
  [3691] = 1,
    ACTIONS(574), 1,
      sym_identifier,
  [3695] = 1,
    ACTIONS(576), 1,
      anon_sym_SEMI,
  [3699] = 1,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [3703] = 1,
    ACTIONS(580), 1,
      anon_sym_SEMI,
  [3707] = 1,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [3711] = 1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
  [3715] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [3719] = 1,
    ACTIONS(586), 1,
      anon_sym_attribute,
  [3723] = 1,
    ACTIONS(588), 1,
      sym_identifier,
  [3727] = 1,
    ACTIONS(590), 1,
      anon_sym_LT,
  [3731] = 1,
    ACTIONS(592), 1,
      anon_sym_LT,
  [3735] = 1,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
  [3739] = 1,
    ACTIONS(594), 1,
      anon_sym_LT,
  [3743] = 1,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [3747] = 1,
    ACTIONS(598), 1,
      sym_identifier,
  [3751] = 1,
    ACTIONS(600), 1,
      anon_sym_SEMI,
  [3755] = 1,
    ACTIONS(602), 1,
      anon_sym_GT,
  [3759] = 1,
    ACTIONS(604), 1,
      sym_identifier,
  [3763] = 1,
    ACTIONS(606), 1,
      anon_sym_EQ,
  [3767] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [3771] = 1,
    ACTIONS(608), 1,
      sym_identifier,
  [3775] = 1,
    ACTIONS(610), 1,
      sym_identifier,
  [3779] = 1,
    ACTIONS(612), 1,
      anon_sym_SEMI,
  [3783] = 1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [3787] = 1,
    ACTIONS(616), 1,
      sym_identifier,
  [3791] = 1,
    ACTIONS(618), 1,
      anon_sym_SEMI,
  [3795] = 1,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [3799] = 1,
    ACTIONS(622), 1,
      anon_sym_GT,
  [3803] = 1,
    ACTIONS(624), 1,
      anon_sym_GT,
  [3807] = 1,
    ACTIONS(626), 1,
      anon_sym_GT,
  [3811] = 1,
    ACTIONS(628), 1,
      anon_sym_SEMI,
  [3815] = 1,
    ACTIONS(630), 1,
      sym_identifier,
  [3819] = 1,
    ACTIONS(632), 1,
      sym_identifier,
  [3823] = 1,
    ACTIONS(634), 1,
      sym_identifier,
  [3827] = 1,
    ACTIONS(636), 1,
      sym_identifier,
  [3831] = 1,
    ACTIONS(638), 1,
      anon_sym_LT,
  [3835] = 1,
    ACTIONS(640), 1,
      anon_sym_LT,
  [3839] = 1,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [3843] = 1,
    ACTIONS(644), 1,
      sym_string,
  [3847] = 1,
    ACTIONS(646), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 504,
  [SMALL_STATE(10)] = 576,
  [SMALL_STATE(11)] = 648,
  [SMALL_STATE(12)] = 720,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 850,
  [SMALL_STATE(15)] = 908,
  [SMALL_STATE(16)] = 966,
  [SMALL_STATE(17)] = 1026,
  [SMALL_STATE(18)] = 1084,
  [SMALL_STATE(19)] = 1142,
  [SMALL_STATE(20)] = 1202,
  [SMALL_STATE(21)] = 1262,
  [SMALL_STATE(22)] = 1320,
  [SMALL_STATE(23)] = 1380,
  [SMALL_STATE(24)] = 1438,
  [SMALL_STATE(25)] = 1496,
  [SMALL_STATE(26)] = 1554,
  [SMALL_STATE(27)] = 1608,
  [SMALL_STATE(28)] = 1656,
  [SMALL_STATE(29)] = 1704,
  [SMALL_STATE(30)] = 1752,
  [SMALL_STATE(31)] = 1800,
  [SMALL_STATE(32)] = 1848,
  [SMALL_STATE(33)] = 1878,
  [SMALL_STATE(34)] = 1908,
  [SMALL_STATE(35)] = 1956,
  [SMALL_STATE(36)] = 2004,
  [SMALL_STATE(37)] = 2034,
  [SMALL_STATE(38)] = 2064,
  [SMALL_STATE(39)] = 2112,
  [SMALL_STATE(40)] = 2160,
  [SMALL_STATE(41)] = 2208,
  [SMALL_STATE(42)] = 2256,
  [SMALL_STATE(43)] = 2304,
  [SMALL_STATE(44)] = 2334,
  [SMALL_STATE(45)] = 2382,
  [SMALL_STATE(46)] = 2430,
  [SMALL_STATE(47)] = 2478,
  [SMALL_STATE(48)] = 2508,
  [SMALL_STATE(49)] = 2538,
  [SMALL_STATE(50)] = 2586,
  [SMALL_STATE(51)] = 2634,
  [SMALL_STATE(52)] = 2659,
  [SMALL_STATE(53)] = 2684,
  [SMALL_STATE(54)] = 2709,
  [SMALL_STATE(55)] = 2734,
  [SMALL_STATE(56)] = 2769,
  [SMALL_STATE(57)] = 2804,
  [SMALL_STATE(58)] = 2817,
  [SMALL_STATE(59)] = 2830,
  [SMALL_STATE(60)] = 2843,
  [SMALL_STATE(61)] = 2856,
  [SMALL_STATE(62)] = 2869,
  [SMALL_STATE(63)] = 2882,
  [SMALL_STATE(64)] = 2895,
  [SMALL_STATE(65)] = 2908,
  [SMALL_STATE(66)] = 2921,
  [SMALL_STATE(67)] = 2934,
  [SMALL_STATE(68)] = 2947,
  [SMALL_STATE(69)] = 2960,
  [SMALL_STATE(70)] = 2973,
  [SMALL_STATE(71)] = 2986,
  [SMALL_STATE(72)] = 2999,
  [SMALL_STATE(73)] = 3012,
  [SMALL_STATE(74)] = 3025,
  [SMALL_STATE(75)] = 3038,
  [SMALL_STATE(76)] = 3051,
  [SMALL_STATE(77)] = 3064,
  [SMALL_STATE(78)] = 3077,
  [SMALL_STATE(79)] = 3090,
  [SMALL_STATE(80)] = 3103,
  [SMALL_STATE(81)] = 3111,
  [SMALL_STATE(82)] = 3118,
  [SMALL_STATE(83)] = 3125,
  [SMALL_STATE(84)] = 3136,
  [SMALL_STATE(85)] = 3143,
  [SMALL_STATE(86)] = 3150,
  [SMALL_STATE(87)] = 3157,
  [SMALL_STATE(88)] = 3166,
  [SMALL_STATE(89)] = 3173,
  [SMALL_STATE(90)] = 3180,
  [SMALL_STATE(91)] = 3189,
  [SMALL_STATE(92)] = 3200,
  [SMALL_STATE(93)] = 3207,
  [SMALL_STATE(94)] = 3215,
  [SMALL_STATE(95)] = 3223,
  [SMALL_STATE(96)] = 3233,
  [SMALL_STATE(97)] = 3241,
  [SMALL_STATE(98)] = 3247,
  [SMALL_STATE(99)] = 3257,
  [SMALL_STATE(100)] = 3267,
  [SMALL_STATE(101)] = 3275,
  [SMALL_STATE(102)] = 3283,
  [SMALL_STATE(103)] = 3293,
  [SMALL_STATE(104)] = 3301,
  [SMALL_STATE(105)] = 3309,
  [SMALL_STATE(106)] = 3319,
  [SMALL_STATE(107)] = 3329,
  [SMALL_STATE(108)] = 3339,
  [SMALL_STATE(109)] = 3349,
  [SMALL_STATE(110)] = 3359,
  [SMALL_STATE(111)] = 3369,
  [SMALL_STATE(112)] = 3379,
  [SMALL_STATE(113)] = 3386,
  [SMALL_STATE(114)] = 3393,
  [SMALL_STATE(115)] = 3400,
  [SMALL_STATE(116)] = 3407,
  [SMALL_STATE(117)] = 3414,
  [SMALL_STATE(118)] = 3421,
  [SMALL_STATE(119)] = 3428,
  [SMALL_STATE(120)] = 3433,
  [SMALL_STATE(121)] = 3440,
  [SMALL_STATE(122)] = 3447,
  [SMALL_STATE(123)] = 3452,
  [SMALL_STATE(124)] = 3457,
  [SMALL_STATE(125)] = 3462,
  [SMALL_STATE(126)] = 3469,
  [SMALL_STATE(127)] = 3474,
  [SMALL_STATE(128)] = 3481,
  [SMALL_STATE(129)] = 3486,
  [SMALL_STATE(130)] = 3491,
  [SMALL_STATE(131)] = 3496,
  [SMALL_STATE(132)] = 3501,
  [SMALL_STATE(133)] = 3506,
  [SMALL_STATE(134)] = 3511,
  [SMALL_STATE(135)] = 3516,
  [SMALL_STATE(136)] = 3521,
  [SMALL_STATE(137)] = 3526,
  [SMALL_STATE(138)] = 3533,
  [SMALL_STATE(139)] = 3538,
  [SMALL_STATE(140)] = 3543,
  [SMALL_STATE(141)] = 3550,
  [SMALL_STATE(142)] = 3555,
  [SMALL_STATE(143)] = 3562,
  [SMALL_STATE(144)] = 3569,
  [SMALL_STATE(145)] = 3576,
  [SMALL_STATE(146)] = 3583,
  [SMALL_STATE(147)] = 3587,
  [SMALL_STATE(148)] = 3591,
  [SMALL_STATE(149)] = 3595,
  [SMALL_STATE(150)] = 3599,
  [SMALL_STATE(151)] = 3603,
  [SMALL_STATE(152)] = 3607,
  [SMALL_STATE(153)] = 3611,
  [SMALL_STATE(154)] = 3615,
  [SMALL_STATE(155)] = 3619,
  [SMALL_STATE(156)] = 3623,
  [SMALL_STATE(157)] = 3627,
  [SMALL_STATE(158)] = 3631,
  [SMALL_STATE(159)] = 3635,
  [SMALL_STATE(160)] = 3639,
  [SMALL_STATE(161)] = 3643,
  [SMALL_STATE(162)] = 3647,
  [SMALL_STATE(163)] = 3651,
  [SMALL_STATE(164)] = 3655,
  [SMALL_STATE(165)] = 3659,
  [SMALL_STATE(166)] = 3663,
  [SMALL_STATE(167)] = 3667,
  [SMALL_STATE(168)] = 3671,
  [SMALL_STATE(169)] = 3675,
  [SMALL_STATE(170)] = 3679,
  [SMALL_STATE(171)] = 3683,
  [SMALL_STATE(172)] = 3687,
  [SMALL_STATE(173)] = 3691,
  [SMALL_STATE(174)] = 3695,
  [SMALL_STATE(175)] = 3699,
  [SMALL_STATE(176)] = 3703,
  [SMALL_STATE(177)] = 3707,
  [SMALL_STATE(178)] = 3711,
  [SMALL_STATE(179)] = 3715,
  [SMALL_STATE(180)] = 3719,
  [SMALL_STATE(181)] = 3723,
  [SMALL_STATE(182)] = 3727,
  [SMALL_STATE(183)] = 3731,
  [SMALL_STATE(184)] = 3735,
  [SMALL_STATE(185)] = 3739,
  [SMALL_STATE(186)] = 3743,
  [SMALL_STATE(187)] = 3747,
  [SMALL_STATE(188)] = 3751,
  [SMALL_STATE(189)] = 3755,
  [SMALL_STATE(190)] = 3759,
  [SMALL_STATE(191)] = 3763,
  [SMALL_STATE(192)] = 3767,
  [SMALL_STATE(193)] = 3771,
  [SMALL_STATE(194)] = 3775,
  [SMALL_STATE(195)] = 3779,
  [SMALL_STATE(196)] = 3783,
  [SMALL_STATE(197)] = 3787,
  [SMALL_STATE(198)] = 3791,
  [SMALL_STATE(199)] = 3795,
  [SMALL_STATE(200)] = 3799,
  [SMALL_STATE(201)] = 3803,
  [SMALL_STATE(202)] = 3807,
  [SMALL_STATE(203)] = 3811,
  [SMALL_STATE(204)] = 3815,
  [SMALL_STATE(205)] = 3819,
  [SMALL_STATE(206)] = 3823,
  [SMALL_STATE(207)] = 3827,
  [SMALL_STATE(208)] = 3831,
  [SMALL_STATE(209)] = 3835,
  [SMALL_STATE(210)] = 3839,
  [SMALL_STATE(211)] = 3843,
  [SMALL_STATE(212)] = 3847,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_member, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_member, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_member, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_member, 5, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_member, 5, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_member, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_member, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_member, 6, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_member, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_member, 6, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_member, 6, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_member, 7, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation_member, 7, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_member, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_member, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_member, 6, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_member, 6, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_member, 5, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_member, 5, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_member, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_member, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_definition, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_definition, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_definition, 6, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_definition, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_definition, 7, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_definition, 7, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_definition, 5, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_definition, 5, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 7, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 7, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 8, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 8, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includes_statement, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_includes_statement, 4, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callback_definition, 8, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callback_definition, 8, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_definition, 8, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_definition, 8, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 7, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 7, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef_definition, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 9, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 9, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise_type, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_type, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 6, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 6, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_web_idl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
