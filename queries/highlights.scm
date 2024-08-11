
(comment) @comment
(loadmodule) @function.builtin

(local_variable
  (identifier) @variable ) @variable.local
(avp_variable
  (identifier) @variable.local ) @variable.builtin
(xavp_variable) @variable.builtin
(pseudo_variable) @function.builtin
(modparam) @function.builtin
(file_inclusion) @function.builtin

(config_variable
  key: (config_key) @variable.builtin)

(control) @keyword
(file_starter) @keyword
(preprocessor_directive) @keyword
(predefined_routes) @type.builtin
(string) @string
(function_call
  function_name: (identifier) @function.call
  "(" @punctuation.bracket
  ")" @punctuation.bracket)
; (argument) @variable
(route_call) @function
(number) @number
(local_id) @keyword

(if_statement
  "if" @keyword
  (else_block
    "else" @keyword))
; (operator) @operator


; [ "if"
;   "else"
;   "or" ] @keyword
  ; "while"
  ; "for"
  ; "break" ] @keyword
