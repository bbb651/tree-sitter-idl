module.exports = grammar({
  name: 'web_idl',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.interface_definition,
      $.dictionary_definition,
      $.enum_definition,
      $.typedef_definition,
      $.callback_definition,
      $.includes_statement
    ),

    interface_definition: $ => seq(
      optional('partial'),
      'interface',
      optional('mixin'),
      $.identifier,
      optional(seq(':', $.identifier)),
      '{',
      repeat($._interface_member),
      '}'
    ),

    _interface_member: $ => choice(
      $.const_member,
      $.attribute_member,
      $.operation_member
    ),

    const_member: $ => seq(
      'const',
      $._type,
      $.identifier,
      '=',
      $._const_value,
      ';'
    ),

    attribute_member: $ => seq(
      optional('readonly'),
      'attribute',
      $._type,
      $.identifier,
      ';'
    ),

    operation_member: $ => seq(
      optional(choice('getter', 'setter', 'deleter')),
      $._type,
      optional($.identifier),
      '(',
      optional($.argument_list),
      ')',
      ';'
    ),

    dictionary_definition: $ => seq(
      optional('partial'),
      'dictionary',
      $.identifier,
      optional(seq(':', $.identifier)),
      '{',
      repeat($.dictionary_member),
      '}'
    ),

    dictionary_member: $ => seq(
      optional('required'),
      $._type,
      $.identifier,
      optional(seq('=', $._const_value)),
      ';'
    ),

    enum_definition: $ => seq(
      'enum',
      $.identifier,
      '{',
      commaSep1($.string),
      '}'
    ),

    typedef_definition: $ => seq(
      'typedef',
      $._type,
      $.identifier,
      ';'
    ),

    callback_definition: $ => seq(
      'callback',
      $.identifier,
      '=',
      $._type,
      '(',
      optional($.argument_list),
      ')',
      ';'
    ),

    includes_statement: $ => seq(
      $.identifier,
      'includes',
      $.identifier,
      ';'
    ),

    argument_list: $ => commaSep1($.argument),

    argument: $ => seq(
      optional('optional'),
      $._type,
      optional('...'),
      $.identifier,
      optional(seq('=', $._const_value))
    ),

    _type: $ => choice(
      $.primitive_type,
      $.string_type,
      $.identifier,
      $.sequence_type,
      $.promise_type,
      $.record_type,
      $.union_type
    ),

    primitive_type: $ => choice(
      'boolean',
      'byte',
      'octet',
      'short',
      seq(optional('unsigned'), 'short'),
      seq(optional('unsigned'), 'long'),
      seq(optional('unsigned'), 'long', 'long'),
      seq(optional('unrestricted'), 'float'),
      seq(optional('unrestricted'), 'double')
    ),

    string_type: $ => choice('ByteString', 'DOMString', 'USVString'),

    sequence_type: $ => seq(
      choice('sequence', 'FrozenArray'),
      '<',
      $._type,
      '>'
    ),

    promise_type: $ => seq('Promise', '<', $._type, '>'),

    record_type: $ => seq('record', '<', $.string_type, ',', $._type, '>'),

    union_type: $ => seq('(', commaSep1($._type, 'or'), ')'),

    _const_value: $ => choice(
      $.number,
      $.boolean,
      $.string
    ),

    identifier: $ => /[_\-]?[A-Za-z][0-9A-Z_a-z\-]*/,
    number: $ => /[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/,
    boolean: $ => choice('true', 'false'),
    string: $ => /"[^"]*"/,

    comment: $ => choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )
  }
});

function commaSep1(rule, separator = ',') {
  return seq(rule, repeat(seq(separator, rule)));
}
