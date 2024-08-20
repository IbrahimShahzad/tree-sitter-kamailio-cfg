
(comment) @comment

(preproc_def
  (preproc_arg) @variable.parameter)
(preproc_subst
  (preproc_arg) @string.regexp) @keyword.directive
(preproc_substdef
  (preproc_arg) @string.regexp) @keyword.directive.define
(preproc_substdefs
  (preproc_arg) @string.regexp) @keyword.directive.define
(preproc_trydef
  (preproc_arg) @variable.parameter)
(preproc_ifdef) @keyword.directive
(preproc_trydef) @keyword.directive.define
(preproc_def) @keyword.directive.define
(include_file
  file_name: (string) @string.special.path) @keyword.directive
(import_file
  file_name: (string) @string.special.path) @keyword.directive
(route_call) @function

(pvar_type) @attribute.builtin
(modparam) @function.builtin
(loadmodule) @function.builtin
(modparamx) @function.builtin
(loadmodulex) @function.builtin

(top_level_assignment_expression
  key: (identifier) @variable.member
  value: (expression) @variable.parameter)

(file_starter) @module

(string) @string
(call_expression
  function: (expression) @function.call
  arguments: (argument_list
    "(" @punctuation.bracket
    ")" @punctuation.bracket))

(number_literal) @number

(predef_route) @keyword
(route_name) @variable.parameter

(true) @keyword
(false) @keyword
(null) @keyword

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"=" @operator
"==" @operator
">" @operator
"<" @operator
">=" @operator
"<=" @operator
"!=" @operator
"=~" @operator
"+=" @operator
"!" @operator
"&&" @operator
"&" @operator
"||" @operator
"|" @operator
"^" @operator
"<<" @operator
">>" @operator
"+" @operator
"-" @operator

"." @punctuation.delimiter
";" @punctuation.delimiter
":" @punctuation.delimiter

"or" @keyword.operator
"not" @keyword.operator
"and" @keyword.operator

[ "break"
  "continue"
  "return"
  "switch"
  "drop"
  "exit"] @keyword.return

[ "while" ] @keyword.repeat
[  "if"
 "else"
 "default"
  "case" ] @keyword.conditional

