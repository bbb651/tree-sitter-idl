(interface_definition
    "interface" @context
    name: (identifier) @name) @item

(partial_interface_definition
    "partial" @context
    "interface" @context
    name: (identifier) @name) @item

(interface_mixin_definition
    "interface" @context
    "mixin" @context
    name: (identifier) @name) @item

(dictionary_definition
    "dictionary" @context
    name: (identifier) @name) @item

(partial_dictionary_definition
    "partial" @context
    "dictionary" @context
    name: (identifier) @name) @item

(enum_definition
    "enum" @context
    name: (identifier) @name) @item

(typedef_definition
    "typedef" @context
    name: (identifier) @name) @item

(callback_definition
    "callback" @context
    name: (identifier) @name) @item

(const_member
    "const" @context
    name: (identifier) @name) @item

(attribute_member
    ["readonly" "attribute"]* @context
    name: (identifier) @name) @item

(operation_member
    ["static" "getter" "setter" "deleter"]* @context
    name: (identifier)? @name
    parameters: (argument_list
      "(" @context
      ")" @context)) @item

(includes_statement
    (identifier) @context
    "includes" @context
    (identifier) @name) @item
