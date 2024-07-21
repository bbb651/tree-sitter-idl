; Keywords
[
  "interface"
  "partial"
  "mixin"
  "dictionary"
  "enum"
  "typedef"
  "callback"
  "includes"
  "const"
  "attribute"
  "readonly"
  "required"
  "getter"
  "setter"
  "deleter"
  "static"
  "optional"
] @keyword

; Types
(primitive_type) @type.builtin
(string_type) @type.builtin
(sequence_type (identifier) @type)
(promise_type (identifier) @type)
(record_type (string_type) @type.builtin (identifier) @type)

; Identifiers
(interface_definition
  name: (identifier) @type)
(dictionary_definition
  name: (identifier) @type)
(enum_definition
  name: (identifier) @type)
(typedef_definition
  name: (identifier) @type)
(callback_definition
  name: (identifier) @type)

(const_member
  name: (identifier) @variable)
(attribute_member
  name: (identifier) @variable)
(operation_member
  name: (identifier) @function)
(dictionary_member
  name: (identifier) @variable)

(argument
  name: (identifier) @variable.parameter)

; Operators and punctuation
"=" @operator
":" @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"<" @punctuation.bracket
">" @punctuation.bracket

; Literals
(number) @number
(boolean) @boolean
(string) @string

; Comments
(comment) @comment
