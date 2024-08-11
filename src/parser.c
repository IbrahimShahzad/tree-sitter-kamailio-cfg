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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 221
#define ALIAS_COUNT 0
#define TOKEN_COUNT 161
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  anon_sym_POUND_BANG = 1,
  anon_sym_BANG_BANG = 2,
  anon_sym_SER = 3,
  anon_sym_KAMAILIO = 4,
  anon_sym_OPENSER = 5,
  anon_sym_MAXCOMPAT = 6,
  anon_sym_ALL = 7,
  sym__QUOTE = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_SLASH = 10,
  sym__SEMICOLON = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LPAREN = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_COMMA = 18,
  sym__COLON = 19,
  sym__STAR = 20,
  sym__DOT = 21,
  sym__COM_LINE = 22,
  sym__COM_LINE_DEPR = 23,
  anon_sym_SLASH_STAR = 24,
  sym__COM_END = 25,
  anon_sym_include_file = 26,
  anon_sym_import_file = 27,
  anon_sym_loadmodule = 28,
  anon_sym_loadmodulex = 29,
  anon_sym_request_route = 30,
  anon_sym_reply_route = 31,
  anon_sym_branch_route = 32,
  anon_sym_failure_route = 33,
  anon_sym_onreply_route = 34,
  anon_sym_event_route = 35,
  anon_sym_onsend_route = 36,
  anon_sym_route = 37,
  aux_sym__multiline_comment_token1 = 38,
  aux_sym_comment_token1 = 39,
  anon_sym_cfgengine = 40,
  anon_sym_debug = 41,
  anon_sym_EQ = 42,
  anon_sym_log_name = 43,
  anon_sym_log_stderror = 44,
  anon_sym_log_facility = 45,
  anon_sym_log_color = 46,
  anon_sym_log_prefix = 47,
  anon_sym_log_prefix_mode = 48,
  anon_sym_log_engine_type = 49,
  anon_sym_log_engine_data = 50,
  anon_sym_fork = 51,
  anon_sym_fork_delay = 52,
  anon_sym_modinit_delay = 53,
  anon_sym_xavp_via_params = 54,
  anon_sym_xavp_via_fields = 55,
  anon_sym_xavp_via_reply_params = 56,
  anon_sym_listen = 57,
  anon_sym_advertise_PIPEADVERTISE = 58,
  anon_sym_virtual = 59,
  anon_sym_name_PIPENAME = 60,
  anon_sym_alias = 61,
  anon_sym_domain = 62,
  anon_sym_auto_aliases = 63,
  anon_sym_auto_domains = 64,
  anon_sym_dns = 65,
  anon_sym_rev_dns_PIPEdns_rev_via = 66,
  anon_sym_dns_try_ipv6 = 67,
  anon_sym_dns_try_naptr = 68,
  anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing = 69,
  anon_sym_dns_udp_pref_PIPEdns_udp_preference = 70,
  anon_sym_dns_tcp_pref_PIPEdns_tcp_preference = 71,
  anon_sym_dns_tls_pref_PIPEdns_tls_preference = 72,
  anon_sym_dns_sctp_pref_PIPEdns_sctp_preference = 73,
  anon_sym_dns_retr_time = 74,
  anon_sym_dns_slow_query_ms = 75,
  anon_sym_dns_retr_no = 76,
  anon_sym_dns_servers_no = 77,
  anon_sym_dns_use_search_list = 78,
  anon_sym_dns_search_full_match = 79,
  anon_sym_dns_naptr_ignore_rfc = 80,
  anon_sym_dns_cache_init = 81,
  anon_sym_use_dns_cache_PIPEdns_use_cache = 82,
  anon_sym_use_dns_failover_PIPEdns_use_failover = 83,
  anon_sym_dns_cache_flags = 84,
  anon_sym_dns_cache_negative_ttl = 85,
  anon_sym_dns_cache_min_ttl = 86,
  anon_sym_dns_cache_max_ttl = 87,
  anon_sym_dns_cache_mem = 88,
  anon_sym_dns_cache_gc_interval = 89,
  anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired = 90,
  anon_sym_dns_cache_rec_pref = 91,
  anon_sym_ipv6autobind_STAR_SLASH = 92,
  anon_sym_auto_bind_ipv6 = 93,
  anon_sym_bind_ipv6_link_local = 94,
  anon_sym_ipv6_hex_style = 95,
  anon_sym_if = 96,
  anon_sym_else = 97,
  anon_sym_return = 98,
  anon_sym_exit = 99,
  anon_sym_break = 100,
  anon_sym_drop = 101,
  aux_sym_string_token1 = 102,
  aux_sym_string_token2 = 103,
  sym_escape_sequence = 104,
  aux_sym_preprocessor_directive_token1 = 105,
  aux_sym_preprocessor_directive_token2 = 106,
  aux_sym_preprocessor_directive_token3 = 107,
  aux_sym_preprocessor_directive_token4 = 108,
  anon_sym_DOLLAR = 109,
  anon_sym_var = 110,
  aux_sym_index_token1 = 111,
  anon_sym_s = 112,
  anon_sym_uri = 113,
  anon_sym_param = 114,
  anon_sym_nameaddr = 115,
  anon_sym_tobody = 116,
  anon_sym_re = 117,
  anon_sym_line = 118,
  anon_sym_sql = 119,
  anon_sym_msrpuri = 120,
  anon_sym_json = 121,
  anon_sym_url = 122,
  anon_sym_sock = 123,
  anon_sym_urialias = 124,
  anon_sym_val = 125,
  sym_boolean_constant = 126,
  anon_sym_BANG = 127,
  anon_sym_PIPE_PIPE = 128,
  anon_sym_or = 129,
  anon_sym_AMP_AMP = 130,
  anon_sym_and = 131,
  anon_sym_EQ_EQ = 132,
  anon_sym_GT = 133,
  anon_sym_LT = 134,
  anon_sym_GT_EQ = 135,
  anon_sym_LT_EQ = 136,
  sym_identifier = 137,
  sym_hex_number = 138,
  sym_oct_number = 139,
  sym_dec_number = 140,
  sym_bin_number = 141,
  anon_sym_avp = 142,
  anon_sym_hdr = 143,
  anon_sym_ru = 144,
  anon_sym_tu = 145,
  anon_sym_ci = 146,
  anon_sym_du = 147,
  anon_sym_fu = 148,
  anon_sym_rU = 149,
  anon_sym_null = 150,
  anon_sym_branch = 151,
  anon_sym_rr = 152,
  anon_sym_addr = 153,
  anon_sym_body = 154,
  anon_sym_ct = 155,
  anon_sym_diversion = 156,
  anon_sym_xavp = 157,
  anon_sym_modparam = 158,
  anon_sym_modparamx = 159,
  sym_sip_keywords = 160,
  sym_source_file = 161,
  sym_file_starter = 162,
  sym__top_level_statement = 163,
  sym__RPAREN = 164,
  sym__LPAREN = 165,
  sym__LBRACE = 166,
  sym__RBRACE = 167,
  sym__LBRACK = 168,
  sym__RBRACK = 169,
  sym__COMMA = 170,
  sym_file_inclusion = 171,
  sym_loadmodule = 172,
  sym_loadmodulex = 173,
  sym_predefined_routes = 174,
  sym__route_name = 175,
  sym_named_route = 176,
  sym_unnamed_route = 177,
  sym_routing_block = 178,
  sym__multiline_comment = 179,
  sym_comment = 180,
  sym__statement = 181,
  sym_keyword = 182,
  sym_assignment = 183,
  sym_config_key = 184,
  sym_config_value = 185,
  sym_config_variable = 186,
  sym_control = 187,
  sym_if_statement = 188,
  sym_parentized_expression = 189,
  sym_else_block = 190,
  sym_string = 191,
  sym_preprocessor_directive = 192,
  sym_number = 193,
  sym_variable = 194,
  sym_local_id = 195,
  sym_local_variable = 196,
  sym_variable_content = 197,
  sym_index = 198,
  sym_transformation = 199,
  sym__expression = 200,
  sym_unary_expression = 201,
  sym__logical_or_expression = 202,
  sym__logical_and_expression = 203,
  sym__equality_expression = 204,
  sym__relational_expression = 205,
  sym_binary_expression = 206,
  sym_pseudo_variable = 207,
  sym_pvar_type = 208,
  sym_avp_variable = 209,
  sym_xavp_variable = 210,
  sym_modparam = 211,
  sym_modparamx = 212,
  sym_function_call = 213,
  sym__block = 214,
  sym_route_call = 215,
  aux_sym_source_file_repeat1 = 216,
  aux_sym_string_repeat1 = 217,
  aux_sym_string_repeat2 = 218,
  aux_sym_function_call_repeat1 = 219,
  aux_sym__block_repeat1 = 220,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_SER] = "SER",
  [anon_sym_KAMAILIO] = "KAMAILIO",
  [anon_sym_OPENSER] = "OPENSER",
  [anon_sym_MAXCOMPAT] = "MAXCOMPAT",
  [anon_sym_ALL] = "ALL",
  [sym__QUOTE] = "_QUOTE",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SLASH] = "/",
  [sym__SEMICOLON] = "_SEMICOLON",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym__COLON] = "_COLON",
  [sym__STAR] = "_STAR",
  [sym__DOT] = "_DOT",
  [sym__COM_LINE] = "_COM_LINE",
  [sym__COM_LINE_DEPR] = "_COM_LINE_DEPR",
  [anon_sym_SLASH_STAR] = "/*",
  [sym__COM_END] = "_COM_END",
  [anon_sym_include_file] = "include_file",
  [anon_sym_import_file] = "import_file",
  [anon_sym_loadmodule] = "loadmodule",
  [anon_sym_loadmodulex] = "loadmodulex",
  [anon_sym_request_route] = "request_route",
  [anon_sym_reply_route] = "reply_route",
  [anon_sym_branch_route] = "branch_route",
  [anon_sym_failure_route] = "failure_route",
  [anon_sym_onreply_route] = "onreply_route",
  [anon_sym_event_route] = "event_route",
  [anon_sym_onsend_route] = "onsend_route",
  [anon_sym_route] = "route",
  [aux_sym__multiline_comment_token1] = "_multiline_comment_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_cfgengine] = "cfgengine",
  [anon_sym_debug] = "debug",
  [anon_sym_EQ] = "=",
  [anon_sym_log_name] = "log_name",
  [anon_sym_log_stderror] = "log_stderror",
  [anon_sym_log_facility] = "log_facility",
  [anon_sym_log_color] = "log_color",
  [anon_sym_log_prefix] = "log_prefix",
  [anon_sym_log_prefix_mode] = "log_prefix_mode",
  [anon_sym_log_engine_type] = "log_engine_type",
  [anon_sym_log_engine_data] = "log_engine_data",
  [anon_sym_fork] = "fork",
  [anon_sym_fork_delay] = "fork_delay",
  [anon_sym_modinit_delay] = "modinit_delay",
  [anon_sym_xavp_via_params] = "xavp_via_params",
  [anon_sym_xavp_via_fields] = "xavp_via_fields",
  [anon_sym_xavp_via_reply_params] = "xavp_via_reply_params",
  [anon_sym_listen] = "listen",
  [anon_sym_advertise_PIPEADVERTISE] = "advertise|ADVERTISE",
  [anon_sym_virtual] = "virtual",
  [anon_sym_name_PIPENAME] = "name|NAME",
  [anon_sym_alias] = "alias",
  [anon_sym_domain] = "domain",
  [anon_sym_auto_aliases] = "auto_aliases",
  [anon_sym_auto_domains] = "auto_domains",
  [anon_sym_dns] = "dns",
  [anon_sym_rev_dns_PIPEdns_rev_via] = "rev_dns|dns_rev_via",
  [anon_sym_dns_try_ipv6] = "dns_try_ipv6",
  [anon_sym_dns_try_naptr] = "dns_try_naptr",
  [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = "dns_srv_lb|dns_srv_loadbalancing",
  [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = "dns_udp_pref|dns_udp_preference",
  [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = "dns_tcp_pref|dns_tcp_preference",
  [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = "dns_tls_pref|dns_tls_preference",
  [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = "dns_sctp_pref|dns_sctp_preference",
  [anon_sym_dns_retr_time] = "dns_retr_time",
  [anon_sym_dns_slow_query_ms] = "dns_slow_query_ms",
  [anon_sym_dns_retr_no] = "dns_retr_no",
  [anon_sym_dns_servers_no] = "dns_servers_no",
  [anon_sym_dns_use_search_list] = "dns_use_search_list",
  [anon_sym_dns_search_full_match] = "dns_search_full_match",
  [anon_sym_dns_naptr_ignore_rfc] = "dns_naptr_ignore_rfc",
  [anon_sym_dns_cache_init] = "dns_cache_init",
  [anon_sym_use_dns_cache_PIPEdns_use_cache] = "use_dns_cache|dns_use_cache",
  [anon_sym_use_dns_failover_PIPEdns_use_failover] = "use_dns_failover|dns_use_failover",
  [anon_sym_dns_cache_flags] = "dns_cache_flags",
  [anon_sym_dns_cache_negative_ttl] = "dns_cache_negative_ttl",
  [anon_sym_dns_cache_min_ttl] = "dns_cache_min_ttl",
  [anon_sym_dns_cache_max_ttl] = "dns_cache_max_ttl",
  [anon_sym_dns_cache_mem] = "dns_cache_mem",
  [anon_sym_dns_cache_gc_interval] = "dns_cache_gc_interval",
  [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = "dns_cache_del_nonexp|dns_cache_delete_nonexpired",
  [anon_sym_dns_cache_rec_pref] = "dns_cache_rec_pref",
  [anon_sym_ipv6autobind_STAR_SLASH] = "ipv6 auto bind */",
  [anon_sym_auto_bind_ipv6] = "auto_bind_ipv6",
  [anon_sym_bind_ipv6_link_local] = "bind_ipv6_link_local",
  [anon_sym_ipv6_hex_style] = "ipv6_hex_style",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_return] = "return",
  [anon_sym_exit] = "exit",
  [anon_sym_break] = "break",
  [anon_sym_drop] = "drop",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_preprocessor_directive_token1] = "preprocessor_directive_token1",
  [aux_sym_preprocessor_directive_token2] = "preprocessor_directive_token2",
  [aux_sym_preprocessor_directive_token3] = "preprocessor_directive_token3",
  [aux_sym_preprocessor_directive_token4] = "preprocessor_directive_token4",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_var] = "var",
  [aux_sym_index_token1] = "index_token1",
  [anon_sym_s] = "s",
  [anon_sym_uri] = "uri",
  [anon_sym_param] = "param",
  [anon_sym_nameaddr] = "nameaddr",
  [anon_sym_tobody] = "tobody",
  [anon_sym_re] = "re",
  [anon_sym_line] = "line",
  [anon_sym_sql] = "sql",
  [anon_sym_msrpuri] = "msrpuri",
  [anon_sym_json] = "json",
  [anon_sym_url] = "url",
  [anon_sym_sock] = "sock",
  [anon_sym_urialias] = "urialias",
  [anon_sym_val] = "val",
  [sym_boolean_constant] = "boolean_constant",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [sym_identifier] = "identifier",
  [sym_hex_number] = "hex_number",
  [sym_oct_number] = "oct_number",
  [sym_dec_number] = "dec_number",
  [sym_bin_number] = "bin_number",
  [anon_sym_avp] = "avp",
  [anon_sym_hdr] = "hdr",
  [anon_sym_ru] = "ru",
  [anon_sym_tu] = "tu",
  [anon_sym_ci] = "ci",
  [anon_sym_du] = "du",
  [anon_sym_fu] = "fu",
  [anon_sym_rU] = "rU",
  [anon_sym_null] = "null",
  [anon_sym_branch] = "branch",
  [anon_sym_rr] = "rr",
  [anon_sym_addr] = "addr",
  [anon_sym_body] = "body",
  [anon_sym_ct] = "ct",
  [anon_sym_diversion] = "diversion",
  [anon_sym_xavp] = "xavp",
  [anon_sym_modparam] = "modparam",
  [anon_sym_modparamx] = "modparamx",
  [sym_sip_keywords] = "sip_keywords",
  [sym_source_file] = "source_file",
  [sym_file_starter] = "file_starter",
  [sym__top_level_statement] = "_top_level_statement",
  [sym__RPAREN] = "_RPAREN",
  [sym__LPAREN] = "_LPAREN",
  [sym__LBRACE] = "_LBRACE",
  [sym__RBRACE] = "_RBRACE",
  [sym__LBRACK] = "_LBRACK",
  [sym__RBRACK] = "_RBRACK",
  [sym__COMMA] = "_COMMA",
  [sym_file_inclusion] = "file_inclusion",
  [sym_loadmodule] = "loadmodule",
  [sym_loadmodulex] = "loadmodulex",
  [sym_predefined_routes] = "predefined_routes",
  [sym__route_name] = "_route_name",
  [sym_named_route] = "named_route",
  [sym_unnamed_route] = "unnamed_route",
  [sym_routing_block] = "routing_block",
  [sym__multiline_comment] = "_multiline_comment",
  [sym_comment] = "comment",
  [sym__statement] = "_statement",
  [sym_keyword] = "keyword",
  [sym_assignment] = "assignment",
  [sym_config_key] = "config_key",
  [sym_config_value] = "config_value",
  [sym_config_variable] = "config_variable",
  [sym_control] = "control",
  [sym_if_statement] = "if_statement",
  [sym_parentized_expression] = "parentized_expression",
  [sym_else_block] = "else_block",
  [sym_string] = "string",
  [sym_preprocessor_directive] = "preprocessor_directive",
  [sym_number] = "number",
  [sym_variable] = "variable",
  [sym_local_id] = "local_id",
  [sym_local_variable] = "local_variable",
  [sym_variable_content] = "variable_content",
  [sym_index] = "index",
  [sym_transformation] = "transformation",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__logical_or_expression] = "_logical_or_expression",
  [sym__logical_and_expression] = "_logical_and_expression",
  [sym__equality_expression] = "_equality_expression",
  [sym__relational_expression] = "_relational_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_pseudo_variable] = "pseudo_variable",
  [sym_pvar_type] = "pvar_type",
  [sym_avp_variable] = "avp_variable",
  [sym_xavp_variable] = "xavp_variable",
  [sym_modparam] = "modparam",
  [sym_modparamx] = "modparamx",
  [sym_function_call] = "function_call",
  [sym__block] = "_block",
  [sym_route_call] = "route_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [anon_sym_SER] = anon_sym_SER,
  [anon_sym_KAMAILIO] = anon_sym_KAMAILIO,
  [anon_sym_OPENSER] = anon_sym_OPENSER,
  [anon_sym_MAXCOMPAT] = anon_sym_MAXCOMPAT,
  [anon_sym_ALL] = anon_sym_ALL,
  [sym__QUOTE] = sym__QUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__SEMICOLON] = sym__SEMICOLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__COLON] = sym__COLON,
  [sym__STAR] = sym__STAR,
  [sym__DOT] = sym__DOT,
  [sym__COM_LINE] = sym__COM_LINE,
  [sym__COM_LINE_DEPR] = sym__COM_LINE_DEPR,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [sym__COM_END] = sym__COM_END,
  [anon_sym_include_file] = anon_sym_include_file,
  [anon_sym_import_file] = anon_sym_import_file,
  [anon_sym_loadmodule] = anon_sym_loadmodule,
  [anon_sym_loadmodulex] = anon_sym_loadmodulex,
  [anon_sym_request_route] = anon_sym_request_route,
  [anon_sym_reply_route] = anon_sym_reply_route,
  [anon_sym_branch_route] = anon_sym_branch_route,
  [anon_sym_failure_route] = anon_sym_failure_route,
  [anon_sym_onreply_route] = anon_sym_onreply_route,
  [anon_sym_event_route] = anon_sym_event_route,
  [anon_sym_onsend_route] = anon_sym_onsend_route,
  [anon_sym_route] = anon_sym_route,
  [aux_sym__multiline_comment_token1] = aux_sym__multiline_comment_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_cfgengine] = anon_sym_cfgengine,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_log_name] = anon_sym_log_name,
  [anon_sym_log_stderror] = anon_sym_log_stderror,
  [anon_sym_log_facility] = anon_sym_log_facility,
  [anon_sym_log_color] = anon_sym_log_color,
  [anon_sym_log_prefix] = anon_sym_log_prefix,
  [anon_sym_log_prefix_mode] = anon_sym_log_prefix_mode,
  [anon_sym_log_engine_type] = anon_sym_log_engine_type,
  [anon_sym_log_engine_data] = anon_sym_log_engine_data,
  [anon_sym_fork] = anon_sym_fork,
  [anon_sym_fork_delay] = anon_sym_fork_delay,
  [anon_sym_modinit_delay] = anon_sym_modinit_delay,
  [anon_sym_xavp_via_params] = anon_sym_xavp_via_params,
  [anon_sym_xavp_via_fields] = anon_sym_xavp_via_fields,
  [anon_sym_xavp_via_reply_params] = anon_sym_xavp_via_reply_params,
  [anon_sym_listen] = anon_sym_listen,
  [anon_sym_advertise_PIPEADVERTISE] = anon_sym_advertise_PIPEADVERTISE,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_name_PIPENAME] = anon_sym_name_PIPENAME,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_domain] = anon_sym_domain,
  [anon_sym_auto_aliases] = anon_sym_auto_aliases,
  [anon_sym_auto_domains] = anon_sym_auto_domains,
  [anon_sym_dns] = anon_sym_dns,
  [anon_sym_rev_dns_PIPEdns_rev_via] = anon_sym_rev_dns_PIPEdns_rev_via,
  [anon_sym_dns_try_ipv6] = anon_sym_dns_try_ipv6,
  [anon_sym_dns_try_naptr] = anon_sym_dns_try_naptr,
  [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing,
  [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = anon_sym_dns_udp_pref_PIPEdns_udp_preference,
  [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = anon_sym_dns_tcp_pref_PIPEdns_tcp_preference,
  [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = anon_sym_dns_tls_pref_PIPEdns_tls_preference,
  [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = anon_sym_dns_sctp_pref_PIPEdns_sctp_preference,
  [anon_sym_dns_retr_time] = anon_sym_dns_retr_time,
  [anon_sym_dns_slow_query_ms] = anon_sym_dns_slow_query_ms,
  [anon_sym_dns_retr_no] = anon_sym_dns_retr_no,
  [anon_sym_dns_servers_no] = anon_sym_dns_servers_no,
  [anon_sym_dns_use_search_list] = anon_sym_dns_use_search_list,
  [anon_sym_dns_search_full_match] = anon_sym_dns_search_full_match,
  [anon_sym_dns_naptr_ignore_rfc] = anon_sym_dns_naptr_ignore_rfc,
  [anon_sym_dns_cache_init] = anon_sym_dns_cache_init,
  [anon_sym_use_dns_cache_PIPEdns_use_cache] = anon_sym_use_dns_cache_PIPEdns_use_cache,
  [anon_sym_use_dns_failover_PIPEdns_use_failover] = anon_sym_use_dns_failover_PIPEdns_use_failover,
  [anon_sym_dns_cache_flags] = anon_sym_dns_cache_flags,
  [anon_sym_dns_cache_negative_ttl] = anon_sym_dns_cache_negative_ttl,
  [anon_sym_dns_cache_min_ttl] = anon_sym_dns_cache_min_ttl,
  [anon_sym_dns_cache_max_ttl] = anon_sym_dns_cache_max_ttl,
  [anon_sym_dns_cache_mem] = anon_sym_dns_cache_mem,
  [anon_sym_dns_cache_gc_interval] = anon_sym_dns_cache_gc_interval,
  [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired,
  [anon_sym_dns_cache_rec_pref] = anon_sym_dns_cache_rec_pref,
  [anon_sym_ipv6autobind_STAR_SLASH] = anon_sym_ipv6autobind_STAR_SLASH,
  [anon_sym_auto_bind_ipv6] = anon_sym_auto_bind_ipv6,
  [anon_sym_bind_ipv6_link_local] = anon_sym_bind_ipv6_link_local,
  [anon_sym_ipv6_hex_style] = anon_sym_ipv6_hex_style,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_drop] = anon_sym_drop,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_preprocessor_directive_token1] = aux_sym_preprocessor_directive_token1,
  [aux_sym_preprocessor_directive_token2] = aux_sym_preprocessor_directive_token2,
  [aux_sym_preprocessor_directive_token3] = aux_sym_preprocessor_directive_token3,
  [aux_sym_preprocessor_directive_token4] = aux_sym_preprocessor_directive_token4,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_var] = anon_sym_var,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_uri] = anon_sym_uri,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_nameaddr] = anon_sym_nameaddr,
  [anon_sym_tobody] = anon_sym_tobody,
  [anon_sym_re] = anon_sym_re,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_sql] = anon_sym_sql,
  [anon_sym_msrpuri] = anon_sym_msrpuri,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_sock] = anon_sym_sock,
  [anon_sym_urialias] = anon_sym_urialias,
  [anon_sym_val] = anon_sym_val,
  [sym_boolean_constant] = sym_boolean_constant,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [sym_identifier] = sym_identifier,
  [sym_hex_number] = sym_hex_number,
  [sym_oct_number] = sym_oct_number,
  [sym_dec_number] = sym_dec_number,
  [sym_bin_number] = sym_bin_number,
  [anon_sym_avp] = anon_sym_avp,
  [anon_sym_hdr] = anon_sym_hdr,
  [anon_sym_ru] = anon_sym_ru,
  [anon_sym_tu] = anon_sym_tu,
  [anon_sym_ci] = anon_sym_ci,
  [anon_sym_du] = anon_sym_du,
  [anon_sym_fu] = anon_sym_fu,
  [anon_sym_rU] = anon_sym_rU,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_rr] = anon_sym_rr,
  [anon_sym_addr] = anon_sym_addr,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_ct] = anon_sym_ct,
  [anon_sym_diversion] = anon_sym_diversion,
  [anon_sym_xavp] = anon_sym_xavp,
  [anon_sym_modparam] = anon_sym_modparam,
  [anon_sym_modparamx] = anon_sym_modparamx,
  [sym_sip_keywords] = sym_sip_keywords,
  [sym_source_file] = sym_source_file,
  [sym_file_starter] = sym_file_starter,
  [sym__top_level_statement] = sym__top_level_statement,
  [sym__RPAREN] = sym__RPAREN,
  [sym__LPAREN] = sym__LPAREN,
  [sym__LBRACE] = sym__LBRACE,
  [sym__RBRACE] = sym__RBRACE,
  [sym__LBRACK] = sym__LBRACK,
  [sym__RBRACK] = sym__RBRACK,
  [sym__COMMA] = sym__COMMA,
  [sym_file_inclusion] = sym_file_inclusion,
  [sym_loadmodule] = sym_loadmodule,
  [sym_loadmodulex] = sym_loadmodulex,
  [sym_predefined_routes] = sym_predefined_routes,
  [sym__route_name] = sym__route_name,
  [sym_named_route] = sym_named_route,
  [sym_unnamed_route] = sym_unnamed_route,
  [sym_routing_block] = sym_routing_block,
  [sym__multiline_comment] = sym__multiline_comment,
  [sym_comment] = sym_comment,
  [sym__statement] = sym__statement,
  [sym_keyword] = sym_keyword,
  [sym_assignment] = sym_assignment,
  [sym_config_key] = sym_config_key,
  [sym_config_value] = sym_config_value,
  [sym_config_variable] = sym_config_variable,
  [sym_control] = sym_control,
  [sym_if_statement] = sym_if_statement,
  [sym_parentized_expression] = sym_parentized_expression,
  [sym_else_block] = sym_else_block,
  [sym_string] = sym_string,
  [sym_preprocessor_directive] = sym_preprocessor_directive,
  [sym_number] = sym_number,
  [sym_variable] = sym_variable,
  [sym_local_id] = sym_local_id,
  [sym_local_variable] = sym_local_variable,
  [sym_variable_content] = sym_variable_content,
  [sym_index] = sym_index,
  [sym_transformation] = sym_transformation,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__logical_or_expression] = sym__logical_or_expression,
  [sym__logical_and_expression] = sym__logical_and_expression,
  [sym__equality_expression] = sym__equality_expression,
  [sym__relational_expression] = sym__relational_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_pseudo_variable] = sym_pseudo_variable,
  [sym_pvar_type] = sym_pvar_type,
  [sym_avp_variable] = sym_avp_variable,
  [sym_xavp_variable] = sym_xavp_variable,
  [sym_modparam] = sym_modparam,
  [sym_modparamx] = sym_modparamx,
  [sym_function_call] = sym_function_call,
  [sym__block] = sym__block,
  [sym_route_call] = sym_route_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KAMAILIO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPENSER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAXCOMPAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALL] = {
    .visible = true,
    .named = false,
  },
  [sym__QUOTE] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__SEMICOLON] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__COLON] = {
    .visible = false,
    .named = true,
  },
  [sym__STAR] = {
    .visible = false,
    .named = true,
  },
  [sym__DOT] = {
    .visible = false,
    .named = true,
  },
  [sym__COM_LINE] = {
    .visible = false,
    .named = true,
  },
  [sym__COM_LINE_DEPR] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__COM_END] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadmodulex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_request_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reply_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_failure_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onreply_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onsend_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cfgengine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_stderror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_facility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_prefix_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_engine_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_engine_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fork] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fork_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modinit_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xavp_via_params] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xavp_via_fields] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xavp_via_reply_params] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_advertise_PIPEADVERTISE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_PIPENAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_domain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_aliases] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_domains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rev_dns_PIPEdns_rev_via] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_try_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_try_naptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_retr_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_slow_query_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_retr_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_servers_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_use_search_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_search_full_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_naptr_ignore_rfc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_dns_cache_PIPEdns_use_cache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_dns_failover_PIPEdns_use_failover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_negative_ttl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_min_ttl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_max_ttl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_mem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_gc_interval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_cache_rec_pref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6autobind_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_bind_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind_ipv6_link_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6_hex_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_preprocessor_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preprocessor_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preprocessor_directive_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preprocessor_directive_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nameaddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tobody] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msrpuri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urialias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_number] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_avp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hdr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ru] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ci] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_du] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xavp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modparamx] = {
    .visible = true,
    .named = false,
  },
  [sym_sip_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_file_starter] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__RPAREN] = {
    .visible = false,
    .named = true,
  },
  [sym__LPAREN] = {
    .visible = false,
    .named = true,
  },
  [sym__LBRACE] = {
    .visible = false,
    .named = true,
  },
  [sym__RBRACE] = {
    .visible = false,
    .named = true,
  },
  [sym__LBRACK] = {
    .visible = false,
    .named = true,
  },
  [sym__RBRACK] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMA] = {
    .visible = false,
    .named = true,
  },
  [sym_file_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_loadmodule] = {
    .visible = true,
    .named = true,
  },
  [sym_loadmodulex] = {
    .visible = true,
    .named = true,
  },
  [sym_predefined_routes] = {
    .visible = true,
    .named = true,
  },
  [sym__route_name] = {
    .visible = false,
    .named = true,
  },
  [sym_named_route] = {
    .visible = true,
    .named = true,
  },
  [sym_unnamed_route] = {
    .visible = true,
    .named = true,
  },
  [sym_routing_block] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_config_key] = {
    .visible = true,
    .named = true,
  },
  [sym_config_value] = {
    .visible = true,
    .named = true,
  },
  [sym_config_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parentized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_id] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_content] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_transformation] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__logical_or_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__logical_and_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__equality_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__relational_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_pvar_type] = {
    .visible = true,
    .named = true,
  },
  [sym_avp_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_xavp_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_modparam] = {
    .visible = true,
    .named = true,
  },
  [sym_modparamx] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_route_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_argument = 2,
  field_cfg_type = 3,
  field_condition = 4,
  field_file_name = 5,
  field_from = 6,
  field_function_name = 7,
  field_key = 8,
  field_local_var = 9,
  field_module_name = 10,
  field_parameter_name = 11,
  field_pvar = 12,
  field_route = 13,
  field_route_name = 14,
  field_to = 15,
  field_transformation_type = 16,
  field_value = 17,
  field_variable_name = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_argument] = "argument",
  [field_cfg_type] = "cfg_type",
  [field_condition] = "condition",
  [field_file_name] = "file_name",
  [field_from] = "from",
  [field_function_name] = "function_name",
  [field_key] = "key",
  [field_local_var] = "local_var",
  [field_module_name] = "module_name",
  [field_parameter_name] = "parameter_name",
  [field_pvar] = "pvar",
  [field_route] = "route",
  [field_route_name] = "route_name",
  [field_to] = "to",
  [field_transformation_type] = "transformation_type",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 1},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_cfg_type, 1},
  [1] =
    {field_key, 0},
  [2] =
    {field_file_name, 1},
  [3] =
    {field_module_name, 1},
  [4] =
    {field_route, 0},
  [5] =
    {field_key, 0},
    {field_value, 2},
  [7] =
    {field_from, 2},
    {field_to, 3},
  [9] =
    {field_pvar, 1},
  [10] =
    {field_action, 2},
    {field_condition, 1},
  [12] =
    {field_function_name, 0},
  [13] =
    {field_local_var, 0},
    {field_value, 2},
  [15] =
    {field_route, 0},
    {field_route_name, 2},
  [17] =
    {field_route_name, 2},
  [18] =
    {field_pvar, 2},
  [19] =
    {field_argument, 2},
    {field_function_name, 0},
  [21] =
    {field_transformation_type, 1},
  [22] =
    {field_argument, 1},
  [23] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_function_name, 0},
  [26] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [28] =
    {field_module_name, 2},
    {field_parameter_name, 4},
    {field_value, 6},
  [31] =
    {field_value, 6},
    {field_variable_name, 3},
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
  [34] = 30,
  [35] = 33,
  [36] = 31,
  [37] = 33,
  [38] = 32,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 19,
  [62] = 62,
  [63] = 14,
  [64] = 64,
  [65] = 21,
  [66] = 25,
  [67] = 11,
  [68] = 11,
  [69] = 14,
  [70] = 60,
  [71] = 62,
  [72] = 25,
  [73] = 21,
  [74] = 74,
  [75] = 74,
  [76] = 64,
  [77] = 77,
  [78] = 19,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 109,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 115,
  [123] = 123,
  [124] = 124,
  [125] = 118,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 6,
  [139] = 5,
  [140] = 126,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 147,
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
  [178] = 173,
  [179] = 172,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 171,
  [184] = 172,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 186,
  [191] = 171,
  [192] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1034);
      ADVANCE_MAP(
        '!', 1801,
        '"', 1043,
        '#', 1060,
        '$', 1779,
        '&', 12,
        '\'', 1044,
        '(', 1049,
        ')', 1048,
        '*', 1056,
        ',', 1054,
        '.', 1057,
        '/', 1046,
        '0', 2348,
        '1', 2349,
        ':', 1055,
        ';', 1047,
        '<', 1808,
        '=', 1107,
        '>', 1807,
        'A', 90,
        'K', 31,
        'M', 32,
        'O', 111,
        'S', 56,
        '[', 1052,
        '\\', 1030,
        ']', 1053,
        'a', 312,
        'b', 520,
        'c', 473,
        'd', 362,
        'e', 589,
        'f', 209,
        'h', 318,
        'i', 474,
        'j', 858,
        'l', 524,
        'm', 712,
        'n', 216,
        'o', 645,
        'p', 220,
        'r', 137,
        's', 1784,
        't', 704,
        'u', 788,
        'v', 211,
        'x', 218,
        '{', 1050,
        '|', 1016,
        '}', 1051,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1031);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 1801,
        '"', 1043,
        '$', 1779,
        '\'', 1044,
        ')', 1048,
        '0', 2348,
        '1', 2349,
        '[', 1052,
        '{', 1050,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(1036);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(2376);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 1042,
        '$', 1779,
        '\'', 1044,
        '/', 1045,
        '0', 2348,
        '1', 2349,
        '[', 1052,
        'f', 1891,
        't', 2212,
        '{', 1050,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1042);
      if (lookahead == '\'') ADVANCE(1044);
      if (lookahead == '0') ADVANCE(2348);
      if (lookahead == '1') ADVANCE(2349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(1030);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1255);
      if (lookahead != 0) ADVANCE(1256);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 1059,
        '$', 1779,
        '/', 14,
        'b', 2201,
        'd', 2197,
        'e', 2096,
        'i', 2005,
        'r', 1991,
        '}', 1051,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 1059,
        '$', 1779,
        '/', 14,
        'b', 2201,
        'd', 2197,
        'e', 2322,
        'i', 2005,
        'r', 1991,
        '{', 1050,
        '}', 1051,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(1804);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(1030);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0) ADVANCE(1258);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(1061);
      if (lookahead == '/') ADVANCE(1058);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(1099);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(1099);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(1233);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 27:
      if (lookahead == '6') ADVANCE(1174);
      END_STATE();
    case 28:
      if (lookahead == '6') ADVANCE(1234);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(1806);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(882);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(945);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(506);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(126);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(892);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(959);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(1157);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(1153);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'V') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(63);
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(349);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(6);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(1041);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(1007);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 98:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(1038);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'Q') ADVANCE(6);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(1037);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(1039);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(729);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(6);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 127:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(1040);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(2359);
      if (lookahead == 'e') ADVANCE(1790);
      if (lookahead == 'o') ADVANCE(947);
      if (lookahead == 'r') ADVANCE(2363);
      if (lookahead == 'u') ADVANCE(2354);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(2359);
      if (lookahead == 'e') ADVANCE(1789);
      if (lookahead == 'o') ADVANCE(947);
      if (lookahead == 'r') ADVANCE(2363);
      if (lookahead == 'u') ADVANCE(2354);
      END_STATE();
    case 139:
      if (lookahead == 'V') ADVANCE(69);
      END_STATE();
    case 140:
      if (lookahead == 'X') ADVANCE(49);
      END_STATE();
    case 141:
      if (lookahead == 'Y') ADVANCE(6);
      END_STATE();
    case 142:
      if (lookahead == 'Y') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(269);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(542);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(294);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(661);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(485);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(337);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(778);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(983);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(486);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(539);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(482);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(956);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(590);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(535);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(617);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(304);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(872);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(763);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(598);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(568);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(880);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(663);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(681);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(923);
      END_STATE();
    case 172:
      if (lookahead == '_') ADVANCE(801);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(908);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(919);
      END_STATE();
    case 175:
      if (lookahead == '_') ADVANCE(806);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(638);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(957);
      END_STATE();
    case 178:
      if (lookahead == '_') ADVANCE(547);
      END_STATE();
    case 179:
      if (lookahead == '_') ADVANCE(629);
      END_STATE();
    case 180:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 181:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 182:
      if (lookahead == '_') ADVANCE(925);
      END_STATE();
    case 183:
      if (lookahead == '_') ADVANCE(866);
      END_STATE();
    case 184:
      if (lookahead == '_') ADVANCE(596);
      END_STATE();
    case 185:
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 186:
      if (lookahead == '_') ADVANCE(928);
      END_STATE();
    case 187:
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 188:
      if (lookahead == '_') ADVANCE(813);
      END_STATE();
    case 189:
      if (lookahead == '_') ADVANCE(873);
      END_STATE();
    case 190:
      if (lookahead == '_') ADVANCE(339);
      END_STATE();
    case 191:
      if (lookahead == '_') ADVANCE(984);
      END_STATE();
    case 192:
      if (lookahead == '_') ADVANCE(759);
      END_STATE();
    case 193:
      if (lookahead == '_') ADVANCE(684);
      END_STATE();
    case 194:
      if (lookahead == '_') ADVANCE(760);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(488);
      END_STATE();
    case 196:
      if (lookahead == '_') ADVANCE(969);
      END_STATE();
    case 197:
      if (lookahead == '_') ADVANCE(832);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(764);
      END_STATE();
    case 199:
      if (lookahead == '_') ADVANCE(834);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(766);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(836);
      END_STATE();
    case 202:
      if (lookahead == '_') ADVANCE(767);
      END_STATE();
    case 203:
      if (lookahead == '_') ADVANCE(838);
      END_STATE();
    case 204:
      if (lookahead == '_') ADVANCE(839);
      END_STATE();
    case 205:
      if (lookahead == '_') ADVANCE(841);
      END_STATE();
    case 206:
      if (lookahead == '_') ADVANCE(771);
      END_STATE();
    case 207:
      if (lookahead == '_') ADVANCE(772);
      END_STATE();
    case 208:
      if (lookahead == '_') ADVANCE(773);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == 'u') ADVANCE(2358);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(1129);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(1173);
      END_STATE();
    case 215:
      ADVANCE_MAP(
        'a', 344,
        'b', 706,
        'c', 522,
        'd', 523,
        'f', 943,
        'h', 318,
        'j', 858,
        'l', 570,
        'm', 859,
        'n', 265,
        'p', 220,
        'r', 138,
        's', 1783,
        't', 705,
        'u', 787,
        'v', 210,
        'x', 258,
        '{', 1050,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(975);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(1002);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(847);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '|') ADVANCE(103);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(939);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(779);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(921);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(977);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(978);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(876);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'b') ADVANCE(572);
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(946);
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(863);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(714);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(562);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(1020);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(1203);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(517);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(715);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(713);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(810);
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == 'l') ADVANCE(890);
      if (lookahead == 'r') ADVANCE(1006);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(942);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(699);
      if (lookahead == 'r') ADVANCE(976);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(891);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(241);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(518);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(940);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(900);
      if (lookahead == 'v') ADVANCE(740);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(1805);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(1000);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(1229);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(780);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(526);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(1001);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(781);
      END_STATE();
    case 328:
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'v') ADVANCE(443);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 330:
      if (lookahead == 'd') ADVANCE(658);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead == 'q') ADVANCE(954);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(782);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'v') ADVANCE(740);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(682);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(981);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(900);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(768);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(775);
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'n') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead == 'u') ADVANCE(2357);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(1791);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(1799);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(1775);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(1260);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(1075);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(1240);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1209);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1183);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1181);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 472:
      if (lookahead == 'f') ADVANCE(502);
      END_STATE();
    case 473:
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(2356);
      if (lookahead == 't') ADVANCE(2366);
      END_STATE();
    case 474:
      if (lookahead == 'f') ADVANCE(1243);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(970);
      END_STATE();
    case 475:
      if (lookahead == 'f') ADVANCE(1775);
      END_STATE();
    case 476:
      if (lookahead == 'f') ADVANCE(1260);
      END_STATE();
    case 477:
      if (lookahead == 'f') ADVANCE(1262);
      END_STATE();
    case 478:
      if (lookahead == 'f') ADVANCE(1261);
      END_STATE();
    case 479:
      if (lookahead == 'f') ADVANCE(1778);
      END_STATE();
    case 480:
      if (lookahead == 'f') ADVANCE(1230);
      END_STATE();
    case 481:
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(970);
      END_STATE();
    case 482:
      if (lookahead == 'f') ADVANCE(960);
      END_STATE();
    case 483:
      if (lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 484:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 485:
      if (lookahead == 'f') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 486:
      if (lookahead == 'f') ADVANCE(561);
      END_STATE();
    case 487:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(565);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(456);
      END_STATE();
    case 490:
      if (lookahead == 'f') ADVANCE(460);
      END_STATE();
    case 491:
      if (lookahead == 'f') ADVANCE(461);
      END_STATE();
    case 492:
      if (lookahead == 'f') ADVANCE(1021);
      END_STATE();
    case 493:
      if (lookahead == 'f') ADVANCE(1022);
      END_STATE();
    case 494:
      if (lookahead == 'f') ADVANCE(1023);
      END_STATE();
    case 495:
      if (lookahead == 'f') ADVANCE(1024);
      END_STATE();
    case 496:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 497:
      if (lookahead == 'g') ADVANCE(1103);
      END_STATE();
    case 498:
      if (lookahead == 'g') ADVANCE(1180);
      END_STATE();
    case 499:
      if (lookahead == 'g') ADVANCE(851);
      END_STATE();
    case 500:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 501:
      if (lookahead == 'g') ADVANCE(903);
      END_STATE();
    case 502:
      if (lookahead == 'g') ADVANCE(402);
      END_STATE();
    case 503:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 504:
      if (lookahead == 'g') ADVANCE(545);
      END_STATE();
    case 505:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 506:
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 507:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 508:
      if (lookahead == 'h') ADVANCE(2362);
      END_STATE();
    case 509:
      if (lookahead == 'h') ADVANCE(1200);
      END_STATE();
    case 510:
      if (lookahead == 'h') ADVANCE(2361);
      END_STATE();
    case 511:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 512:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 513:
      if (lookahead == 'h') ADVANCE(466);
      END_STATE();
    case 514:
      if (lookahead == 'h') ADVANCE(390);
      END_STATE();
    case 515:
      if (lookahead == 'h') ADVANCE(718);
      END_STATE();
    case 516:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 517:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 518:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 519:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(652);
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(2356);
      if (lookahead == 't') ADVANCE(2366);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'u') ADVANCE(2357);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(1785);
      if (lookahead == 'l') ADVANCE(1795);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(1793);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(1015);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(893);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'l') ADVANCE(865);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(991);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(749);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(906);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(907);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(986);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 574:
      if (lookahead == 'k') ADVANCE(1134);
      END_STATE();
    case 575:
      if (lookahead == 'k') ADVANCE(1796);
      END_STATE();
    case 576:
      if (lookahead == 'k') ADVANCE(1251);
      END_STATE();
    case 577:
      if (lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(1792);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(1798);
      if (lookahead == 'r') ADVANCE(1780);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(2360);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(1214);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(1013);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(440);
      if (lookahead == 'x') ADVANCE(530);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(949);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(333);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(953);
      END_STATE();
    case 610:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 611:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 613:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 615:
      if (lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 616:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 617:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 618:
      if (lookahead == 'l') ADVANCE(879);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'v') ADVANCE(440);
      END_STATE();
    case 619:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 620:
      if (lookahead == 'l') ADVANCE(888);
      END_STATE();
    case 621:
      if (lookahead == 'l') ADVANCE(1014);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(1786);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(2370);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(1223);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 627:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 628:
      if (lookahead == 'm') ADVANCE(853);
      END_STATE();
    case 629:
      if (lookahead == 'm') ADVANCE(854);
      END_STATE();
    case 630:
      if (lookahead == 'm') ADVANCE(855);
      END_STATE();
    case 631:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 632:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 633:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 634:
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 635:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 636:
      if (lookahead == 'm') ADVANCE(719);
      END_STATE();
    case 637:
      if (lookahead == 'm') ADVANCE(727);
      END_STATE();
    case 638:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(1794);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(2367);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(971);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(744);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 667:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 672:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 673:
      if (lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 674:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 675:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(864);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 682:
      if (lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 683:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 684:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 685:
      if (lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 686:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 689:
      if (lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 691:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 692:
      if (lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 693:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 694:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 695:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 696:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 697:
      if (lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(990);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(1191);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(993);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(950);
      if (lookahead == 'u') ADVANCE(2355);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(2355);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(802);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 721:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 724:
      if (lookahead == 'o') ADVANCE(803);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(959);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(987);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(961);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(988);
      END_STATE();
    case 734:
      if (lookahead == 'o') ADVANCE(962);
      END_STATE();
    case 735:
      if (lookahead == 'o') ADVANCE(963);
      END_STATE();
    case 736:
      if (lookahead == 'o') ADVANCE(965);
      END_STATE();
    case 737:
      if (lookahead == 'o') ADVANCE(966);
      END_STATE();
    case 738:
      if (lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(968);
      END_STATE();
    case 740:
      if (lookahead == 'p') ADVANCE(2352);
      END_STATE();
    case 741:
      if (lookahead == 'p') ADVANCE(1253);
      END_STATE();
    case 742:
      if (lookahead == 'p') ADVANCE(2369);
      END_STATE();
    case 743:
      if (lookahead == 'p') ADVANCE(1260);
      END_STATE();
    case 744:
      if (lookahead == 'p') ADVANCE(1263);
      END_STATE();
    case 745:
      if (lookahead == 'p') ADVANCE(2368);
      END_STATE();
    case 746:
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 747:
      if (lookahead == 'p') ADVANCE(724);
      END_STATE();
    case 748:
      if (lookahead == 'p') ADVANCE(972);
      END_STATE();
    case 749:
      if (lookahead == 'p') ADVANCE(973);
      END_STATE();
    case 750:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 751:
      if (lookahead == 'p') ADVANCE(974);
      END_STATE();
    case 752:
      if (lookahead == 'p') ADVANCE(364);
      END_STATE();
    case 753:
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 754:
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 755:
      if (lookahead == 'p') ADVANCE(918);
      END_STATE();
    case 756:
      if (lookahead == 'p') ADVANCE(955);
      END_STATE();
    case 757:
      if (lookahead == 'p') ADVANCE(812);
      END_STATE();
    case 758:
      if (lookahead == 'p') ADVANCE(922);
      END_STATE();
    case 759:
      if (lookahead == 'p') ADVANCE(814);
      END_STATE();
    case 760:
      if (lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 761:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 762:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 763:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 764:
      if (lookahead == 'p') ADVANCE(833);
      END_STATE();
    case 765:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 766:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 767:
      if (lookahead == 'p') ADVANCE(837);
      END_STATE();
    case 768:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 769:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 770:
      if (lookahead == 'p') ADVANCE(1026);
      END_STATE();
    case 771:
      if (lookahead == 'p') ADVANCE(842);
      END_STATE();
    case 772:
      if (lookahead == 'p') ADVANCE(843);
      END_STATE();
    case 773:
      if (lookahead == 'p') ADVANCE(844);
      END_STATE();
    case 774:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 776:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 777:
      if (lookahead == 'q') ADVANCE(6);
      END_STATE();
    case 778:
      if (lookahead == 'q') ADVANCE(964);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(2353);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(2364);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(1117);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(1177);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(1210);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(901);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 813:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 818:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(825);
      END_STATE();
    case 821:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 822:
      if (lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 823:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 824:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 825:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 826:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 827:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 828:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 829:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 830:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(989);
      END_STATE();
    case 832:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 833:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 834:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 835:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 836:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 837:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 838:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 839:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 840:
      if (lookahead == 'r') ADVANCE(1027);
      END_STATE();
    case 841:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 842:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 843:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 844:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 848:
      if (lookahead == 's') ADVANCE(1797);
      END_STATE();
    case 849:
      if (lookahead == 's') ADVANCE(1164);
      END_STATE();
    case 850:
      if (lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 851:
      if (lookahead == 's') ADVANCE(1211);
      END_STATE();
    case 852:
      if (lookahead == 's') ADVANCE(1144);
      END_STATE();
    case 853:
      if (lookahead == 's') ADVANCE(1141);
      END_STATE();
    case 854:
      if (lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 855:
      if (lookahead == 's') ADVANCE(1147);
      END_STATE();
    case 856:
      if (lookahead == 's') ADVANCE(1019);
      END_STATE();
    case 857:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 858:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 859:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 860:
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 861:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 862:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 863:
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 864:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 865:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 866:
      if (lookahead == 's') ADVANCE(905);
      END_STATE();
    case 867:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 868:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 869:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 870:
      if (lookahead == 's') ADVANCE(397);
      END_STATE();
    case 871:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 872:
      if (lookahead == 's') ADVANCE(831);
      END_STATE();
    case 873:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 874:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 875:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 876:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 877:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 878:
      if (lookahead == 's') ADVANCE(896);
      END_STATE();
    case 879:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 880:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 881:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 882:
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 883:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 884:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 885:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 886:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 887:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 888:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 889:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 890:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(1249);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(1777);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(1206);
      END_STATE();
    case 896:
      if (lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 897:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(999);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 910:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 912:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 913:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 914:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 915:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 916:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 917:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 918:
      if (lookahead == 't') ADVANCE(817);
      END_STATE();
    case 919:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 920:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 921:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 922:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 923:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 924:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 925:
      if (lookahead == 't') ADVANCE(917);
      END_STATE();
    case 926:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 927:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 928:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 930:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 931:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 933:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 934:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 935:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 936:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 938:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 939:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 940:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 941:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 943:
      if (lookahead == 'u') ADVANCE(2358);
      END_STATE();
    case 944:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 945:
      if (lookahead == 'u') ADVANCE(892);
      END_STATE();
    case 946:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 947:
      if (lookahead == 'u') ADVANCE(910);
      END_STATE();
    case 948:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 949:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 950:
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 951:
      if (lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 952:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 953:
      if (lookahead == 'u') ADVANCE(821);
      END_STATE();
    case 954:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 955:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 956:
      if (lookahead == 'u') ADVANCE(885);
      END_STATE();
    case 957:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 958:
      if (lookahead == 'u') ADVANCE(909);
      END_STATE();
    case 959:
      if (lookahead == 'u') ADVANCE(912);
      END_STATE();
    case 960:
      if (lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 961:
      if (lookahead == 'u') ADVANCE(926);
      END_STATE();
    case 962:
      if (lookahead == 'u') ADVANCE(927);
      END_STATE();
    case 963:
      if (lookahead == 'u') ADVANCE(929);
      END_STATE();
    case 964:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 965:
      if (lookahead == 'u') ADVANCE(930);
      END_STATE();
    case 966:
      if (lookahead == 'u') ADVANCE(931);
      END_STATE();
    case 967:
      if (lookahead == 'u') ADVANCE(932);
      END_STATE();
    case 968:
      if (lookahead == 'u') ADVANCE(933);
      END_STATE();
    case 969:
      if (lookahead == 'u') ADVANCE(886);
      END_STATE();
    case 970:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 971:
      if (lookahead == 'v') ADVANCE(1263);
      END_STATE();
    case 972:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 973:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 974:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 975:
      if (lookahead == 'v') ADVANCE(742);
      END_STATE();
    case 976:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 977:
      if (lookahead == 'v') ADVANCE(762);
      END_STATE();
    case 978:
      if (lookahead == 'v') ADVANCE(745);
      END_STATE();
    case 979:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 980:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 981:
      if (lookahead == 'v') ADVANCE(443);
      END_STATE();
    case 982:
      if (lookahead == 'v') ADVANCE(408);
      END_STATE();
    case 983:
      if (lookahead == 'v') ADVANCE(543);
      END_STATE();
    case 984:
      if (lookahead == 'v') ADVANCE(553);
      END_STATE();
    case 985:
      if (lookahead == 'v') ADVANCE(426);
      END_STATE();
    case 986:
      if (lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 987:
      if (lookahead == 'v') ADVANCE(430);
      END_STATE();
    case 988:
      if (lookahead == 'v') ADVANCE(435);
      END_STATE();
    case 989:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 990:
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 991:
      if (lookahead == 'x') ADVANCE(1122);
      END_STATE();
    case 992:
      if (lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 993:
      if (lookahead == 'x') ADVANCE(1009);
      END_STATE();
    case 994:
      if (lookahead == 'x') ADVANCE(743);
      END_STATE();
    case 995:
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 996:
      if (lookahead == 'x') ADVANCE(770);
      END_STATE();
    case 997:
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 998:
      if (lookahead == 'x') ADVANCE(761);
      END_STATE();
    case 999:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 1000:
      if (lookahead == 'y') ADVANCE(2365);
      END_STATE();
    case 1001:
      if (lookahead == 'y') ADVANCE(1788);
      END_STATE();
    case 1002:
      if (lookahead == 'y') ADVANCE(1135);
      END_STATE();
    case 1003:
      if (lookahead == 'y') ADVANCE(1114);
      END_STATE();
    case 1004:
      if (lookahead == 'y') ADVANCE(1138);
      END_STATE();
    case 1005:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 1006:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 1007:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 1008:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 1009:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 1010:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 1011:
      if (lookahead == 'y') ADVANCE(753);
      END_STATE();
    case 1012:
      if (lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 1013:
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 1014:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 1015:
      if (lookahead == 'z') ADVANCE(243);
      END_STATE();
    case 1016:
      if (lookahead == '|') ADVANCE(1802);
      END_STATE();
    case 1017:
      if (lookahead == '|') ADVANCE(103);
      END_STATE();
    case 1018:
      if (lookahead == '|') ADVANCE(37);
      END_STATE();
    case 1019:
      if (lookahead == '|') ADVANCE(348);
      END_STATE();
    case 1020:
      if (lookahead == '|') ADVANCE(350);
      END_STATE();
    case 1021:
      if (lookahead == '|') ADVANCE(351);
      END_STATE();
    case 1022:
      if (lookahead == '|') ADVANCE(353);
      END_STATE();
    case 1023:
      if (lookahead == '|') ADVANCE(354);
      END_STATE();
    case 1024:
      if (lookahead == '|') ADVANCE(355);
      END_STATE();
    case 1025:
      if (lookahead == '|') ADVANCE(356);
      END_STATE();
    case 1026:
      if (lookahead == '|') ADVANCE(357);
      END_STATE();
    case 1027:
      if (lookahead == '|') ADVANCE(358);
      END_STATE();
    case 1028:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(1782);
      END_STATE();
    case 1029:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2345);
      END_STATE();
    case 1030:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1259);
      END_STATE();
    case 1031:
      if (eof) ADVANCE(1034);
      ADVANCE_MAP(
        '!', 1801,
        '"', 1043,
        '#', 1060,
        '$', 1779,
        '&', 12,
        '\'', 1044,
        '(', 1049,
        ')', 1048,
        '*', 1056,
        ',', 1054,
        '.', 1057,
        '/', 1046,
        '0', 2348,
        '1', 2349,
        ':', 1055,
        ';', 1047,
        '<', 1808,
        '=', 1107,
        '>', 1807,
        'A', 90,
        'K', 31,
        'M', 32,
        'O', 111,
        'S', 56,
        '[', 1052,
        ']', 1053,
        'a', 312,
        'b', 520,
        'c', 473,
        'd', 362,
        'e', 589,
        'f', 209,
        'h', 318,
        'i', 474,
        'j', 858,
        'l', 524,
        'm', 712,
        'n', 216,
        'o', 645,
        'p', 220,
        'r', 137,
        's', 1784,
        't', 704,
        'u', 788,
        'v', 211,
        'x', 218,
        '{', 1050,
        '|', 1016,
        '}', 1051,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1031);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      END_STATE();
    case 1032:
      if (eof) ADVANCE(1034);
      ADVANCE_MAP(
        '!', 5,
        '"', 1042,
        '#', 1060,
        '&', 12,
        '\'', 1044,
        ')', 1048,
        ',', 1054,
        '/', 14,
        '0', 2348,
        '1', 2349,
        ';', 1047,
        '<', 1808,
        '=', 30,
        '>', 1807,
        ']', 1053,
        'a', 352,
        'b', 521,
        'c', 472,
        'd', 363,
        'e', 618,
        'f', 244,
        'i', 481,
        'l', 569,
        'm', 711,
        'n', 261,
        'o', 645,
        'r', 395,
        's', 944,
        't', 804,
        'u', 857,
        'v', 536,
        'x', 254,
        '|', 1016,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1032);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      END_STATE();
    case 1033:
      if (eof) ADVANCE(1034);
      ADVANCE_MAP(
        '"', 1042,
        '#', 1060,
        '\'', 1044,
        '/', 14,
        '=', 1106,
        'a', 1933,
        'b', 2031,
        'c', 2003,
        'd', 1940,
        'e', 2304,
        'f', 1868,
        'i', 2098,
        'l', 2034,
        'm', 2138,
        'n', 1864,
        'o', 2112,
        'r', 1941,
        'u', 2236,
        'v', 2032,
        'x', 1866,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1033);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_SER);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_KAMAILIO);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_OPENSER);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_MAXCOMPAT);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_ALL);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__QUOTE);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__QUOTE);
      ADVANCE_MAP(
        'A', 48,
        'B', 142,
        'C', 34,
        'D', 64,
        'E', 992,
        'F', 790,
        'G', 57,
        'I', 99,
        'K', 54,
        'M', 58,
        'N', 106,
        'O', 113,
        'P', 19,
        'R', 59,
        'S', 77,
        'T', 698,
        'U', 110,
        'V', 529,
      );
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(1061);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__SEMICOLON);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__COLON);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__STAR);
      if (lookahead == '/') ADVANCE(1062);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__DOT);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__COM_LINE);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__COM_LINE_DEPR);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__COM_LINE_DEPR);
      if (lookahead == '!') ADVANCE(1035);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__COM_END);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_include_file);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_include_file);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_include_file);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_import_file);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_import_file);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_import_file);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_loadmodule);
      if (lookahead == 'x') ADVANCE(1072);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_loadmodule);
      if (lookahead == 'x') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_loadmodule);
      if (lookahead == 'x') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_loadmodulex);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_loadmodulex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_loadmodulex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_request_route);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_request_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_request_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_reply_route);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_reply_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_reply_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_branch_route);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_branch_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_branch_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_failure_route);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_failure_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_failure_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_onreply_route);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_onreply_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_onreply_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_event_route);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_event_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_event_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_onsend_route);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_onsend_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_onsend_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__multiline_comment_token1);
      if (lookahead == '*') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1101);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1101);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_cfgengine);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_debug);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_debug);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(1806);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_log_name);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_log_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_log_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_log_stderror);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_log_stderror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_log_stderror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_log_facility);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_log_facility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_log_facility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_log_color);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_log_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_log_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_log_prefix);
      if (lookahead == '_') ADVANCE(2111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_log_prefix);
      if (lookahead == '_') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_log_prefix);
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_log_prefix_mode);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_log_prefix_mode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_log_prefix_mode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_log_engine_type);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_log_engine_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_log_engine_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_log_engine_data);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_log_engine_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_log_engine_data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_fork);
      if (lookahead == '_') ADVANCE(1926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_fork);
      if (lookahead == '_') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_fork);
      if (lookahead == '_') ADVANCE(336);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_fork_delay);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_fork_delay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_fork_delay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_modinit_delay);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_modinit_delay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_modinit_delay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_xavp_via_params);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_xavp_via_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_xavp_via_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_xavp_via_fields);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_xavp_via_fields);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_xavp_via_fields);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_xavp_via_reply_params);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_xavp_via_reply_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_xavp_via_reply_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_listen);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_listen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_listen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_advertise_PIPEADVERTISE);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_name_PIPENAME);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_domain);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_domain);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_domain);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_auto_aliases);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_auto_aliases);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_auto_aliases);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_auto_domains);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_auto_domains);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_auto_domains);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_dns);
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_dns);
      if (lookahead == '_') ADVANCE(1909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_dns);
      if (lookahead == '_') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_rev_dns_PIPEdns_rev_via);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_dns_try_ipv6);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_dns_try_ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_dns_try_ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_dns_try_naptr);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_dns_try_naptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_dns_try_naptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_dns_udp_pref_PIPEdns_udp_preference);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_dns_tcp_pref_PIPEdns_tcp_preference);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_dns_tls_pref_PIPEdns_tls_preference);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_dns_sctp_pref_PIPEdns_sctp_preference);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_dns_retr_time);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_dns_retr_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_dns_retr_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_dns_slow_query_ms);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_dns_slow_query_ms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_dns_slow_query_ms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_dns_retr_no);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_dns_retr_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_dns_retr_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_dns_servers_no);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_dns_servers_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_dns_servers_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_dns_use_search_list);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_dns_use_search_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_dns_use_search_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_dns_search_full_match);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_dns_search_full_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_dns_search_full_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_dns_naptr_ignore_rfc);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_dns_naptr_ignore_rfc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_dns_naptr_ignore_rfc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_dns_cache_init);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_dns_cache_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_dns_cache_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_use_dns_cache_PIPEdns_use_cache);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_use_dns_failover_PIPEdns_use_failover);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_dns_cache_flags);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_dns_cache_flags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_dns_cache_flags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_dns_cache_negative_ttl);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_dns_cache_negative_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_dns_cache_negative_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_dns_cache_min_ttl);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_dns_cache_min_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_dns_cache_min_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_dns_cache_max_ttl);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_dns_cache_max_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_dns_cache_max_ttl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_dns_cache_mem);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_dns_cache_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_dns_cache_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_dns_cache_gc_interval);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_dns_cache_gc_interval);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_dns_cache_gc_interval);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_dns_cache_rec_pref);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_dns_cache_rec_pref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_dns_cache_rec_pref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_ipv6autobind_STAR_SLASH);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_auto_bind_ipv6);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_auto_bind_ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_auto_bind_ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_bind_ipv6_link_local);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_bind_ipv6_link_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_bind_ipv6_link_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_ipv6_hex_style);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_ipv6_hex_style);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_ipv6_hex_style);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_drop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1256);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1256);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1258);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1258);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token1);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token1);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token1);
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token1);
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == '_') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '6') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '6') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '6') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '6') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '_') ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      ADVANCE_MAP(
        'a', 1385,
        'b', 1478,
        'c', 1451,
        'd', 1392,
        'e', 1734,
        'f', 1322,
        'i', 1541,
        'l', 1481,
        'm', 1580,
        'n', 1318,
        'o', 1555,
        'r', 1393,
        'u', 1672,
        'v', 1479,
        'x', 1320,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1477);
      if (lookahead == 'o') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead == 'g') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1537);
      if (lookahead == 'b') ADVANCE(1508);
      if (lookahead == 'd') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1640);
      if (lookahead == 'r') ADVANCE(1742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1751);
      if (lookahead == 'e') ADVANCE(1543);
      if (lookahead == 'i') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'a') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'b') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'b') ADVANCE(1765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1585);
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead == 'f') ADVANCE(1329);
      if (lookahead == 'n') ADVANCE(1345);
      if (lookahead == 'p') ADVANCE(1635);
      if (lookahead == 's') ADVANCE(1714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1323);
      if (lookahead == 'n') ADVANCE(1331);
      if (lookahead == 'r') ADVANCE(1424);
      if (lookahead == 's') ADVANCE(1363);
      if (lookahead == 't') ADVANCE(1369);
      if (lookahead == 'u') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1717);
      if (lookahead == 'e') ADVANCE(1337);
      if (lookahead == 'l') ADVANCE(1581);
      if (lookahead == 'r') ADVANCE(1741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1332);
      if (lookahead == 'f') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1609);
      if (lookahead == 'l') ADVANCE(1682);
      if (lookahead == 'r') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'c') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1339);
      if (lookahead == 't') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1426);
      if (lookahead == 'f') ADVANCE(1528);
      if (lookahead == 'g') ADVANCE(1365);
      if (lookahead == 'i') ADVANCE(1575);
      if (lookahead == 'm') ADVANCE(1344);
      if (lookahead == 'n') ADVANCE(1420);
      if (lookahead == 'r') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1738);
      if (lookahead == 'l') ADVANCE(1482);
      if (lookahead == 'u') ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'd') ADVANCE(1622);
      if (lookahead == 's') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1354);
      if (lookahead == 'n') ADVANCE(1662);
      if (lookahead == 'o') ADVANCE(1545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1603);
      if (lookahead == 'o') ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'e') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1498);
      if (lookahead == 'p') ADVANCE(1351);
      if (lookahead == 'r') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'f') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'g') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'h') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1559);
      if (lookahead == 'r') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1671);
      if (lookahead == 'o') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1563);
      if (lookahead == 'p') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1607);
      if (lookahead == 'n') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'i') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'k') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'k') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'l') ADVANCE(1761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1604);
      if (lookahead == 'n') ADVANCE(1367);
      if (lookahead == 'p') ADVANCE(1735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(2372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'm') ADVANCE(1592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1582);
      if (lookahead == 't') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'n') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'o') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1511);
      if (lookahead == 'q') ADVANCE(1721);
      if (lookahead == 'v') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'p') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'q') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1412);
      if (lookahead == 's') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'r') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 's') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 't') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'u') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'v') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'w') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'x') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'x') ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'x') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'x') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == 'y') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (lookahead == '|') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token2);
      if (eof) ADVANCE(1034);
      ADVANCE_MAP(
        'a', 1385,
        'b', 1478,
        'c', 1451,
        'd', 1392,
        'e', 1734,
        'f', 1322,
        'i', 1541,
        'l', 1481,
        'm', 1580,
        'n', 1318,
        'o', 1555,
        'r', 1393,
        'u', 1672,
        'v', 1479,
        'x', 1320,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token3);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token4);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token4);
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_preprocessor_directive_token4);
      if (lookahead == 's') ADVANCE(1776);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(1782);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(1782);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'q') ADVANCE(578);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'q') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_uri);
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_nameaddr);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_tobody);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_re);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead == 'q') ADVANCE(954);
      if (lookahead == 't') ADVANCE(948);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_line);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_sql);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_msrpuri);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_sock);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_urialias);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(sym_boolean_constant);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(sym_boolean_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1809);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1810);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == '_') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(2180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2030);
      if (lookahead == 'o') ADVANCE(2185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1922);
      if (lookahead == 'g') ADVANCE(1816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2092);
      if (lookahead == 'b') ADVANCE(2062);
      if (lookahead == 'd') ADVANCE(2153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2203);
      if (lookahead == 'r') ADVANCE(2312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2321);
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead == 'i') ADVANCE(2132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(2214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(2286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(2336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2143);
      if (lookahead == 'e') ADVANCE(2136);
      if (lookahead == 'f') ADVANCE(1876);
      if (lookahead == 'n') ADVANCE(1893);
      if (lookahead == 'p') ADVANCE(2195);
      if (lookahead == 's') ADVANCE(2282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1869);
      if (lookahead == 'n') ADVANCE(1878);
      if (lookahead == 'r') ADVANCE(1974);
      if (lookahead == 's') ADVANCE(1911);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead == 'u') ADVANCE(1938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2285);
      if (lookahead == 'e') ADVANCE(1884);
      if (lookahead == 'l') ADVANCE(2139);
      if (lookahead == 'r') ADVANCE(2311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1879);
      if (lookahead == 'f') ADVANCE(1885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2169);
      if (lookahead == 'l') ADVANCE(2248);
      if (lookahead == 'r') ADVANCE(2327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1886);
      if (lookahead == 't') ADVANCE(2326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1976);
      if (lookahead == 'f') ADVANCE(2083);
      if (lookahead == 'g') ADVANCE(1913);
      if (lookahead == 'i') ADVANCE(2133);
      if (lookahead == 'm') ADVANCE(1892);
      if (lookahead == 'n') ADVANCE(1970);
      if (lookahead == 'r') ADVANCE(1992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2308);
      if (lookahead == 'l') ADVANCE(2035);
      if (lookahead == 'u') ADVANCE(2252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(2182);
      if (lookahead == 's') ADVANCE(1977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1902);
      if (lookahead == 'n') ADVANCE(2226);
      if (lookahead == 'o') ADVANCE(2102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2163);
      if (lookahead == 'o') ADVANCE(2287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2261);
      if (lookahead == 'o') ADVANCE(2287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(2015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2052);
      if (lookahead == 'p') ADVANCE(1899);
      if (lookahead == 'r') ADVANCE(1990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(2340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(2230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(2125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(2043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(2045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2117);
      if (lookahead == 'r') ADVANCE(1867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2235);
      if (lookahead == 'o') ADVANCE(1870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2121);
      if (lookahead == 'p') ADVANCE(1877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2167);
      if (lookahead == 'n') ADVANCE(1894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(2137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2246);
      if (lookahead == 'x') ADVANCE(2051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(2332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2164);
      if (lookahead == 'n') ADVANCE(1915);
      if (lookahead == 'p') ADVANCE(2305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(2151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2140);
      if (lookahead == 't') ADVANCE(2057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(2022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(2303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2066);
      if (lookahead == 'q') ADVANCE(2289);
      if (lookahead == 'v') ADVANCE(1828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(2097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(2295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1962);
      if (lookahead == 's') ADVANCE(1995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(2001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(2283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(2335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(2253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(2250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(2284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(2183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(2278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(2165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(2042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(2177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(2051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(2172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(2089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '|') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2345);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(sym_oct_number);
      if (lookahead == 'b') ADVANCE(2351);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2346);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(2350);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(2347);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(sym_oct_number);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(2350);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(2347);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'b') ADVANCE(2351);
      if (lookahead == 'x') ADVANCE(1029);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2346);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(2350);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(2347);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'b') ADVANCE(2351);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(2349);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2350);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(sym_bin_number);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(anon_sym_avp);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(anon_sym_hdr);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(anon_sym_ru);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(anon_sym_tu);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(anon_sym_ci);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(anon_sym_du);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(anon_sym_fu);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(anon_sym_rU);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(anon_sym_branch);
      if (lookahead == '_') ADVANCE(834);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(anon_sym_rr);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(anon_sym_addr);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(anon_sym_ct);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(anon_sym_diversion);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(anon_sym_xavp);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(anon_sym_xavp);
      if (lookahead == '_') ADVANCE(983);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(anon_sym_modparam);
      if (lookahead == 'x') ADVANCE(2373);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(anon_sym_modparam);
      if (lookahead == 'x') ADVANCE(2374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(anon_sym_modparam);
      if (lookahead == 'x') ADVANCE(2375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(anon_sym_modparamx);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(anon_sym_modparamx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2344);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(anon_sym_modparamx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1773);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym_sip_keywords);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1032},
  [2] = {.lex_state = 1032},
  [3] = {.lex_state = 1032},
  [4] = {.lex_state = 1032},
  [5] = {.lex_state = 1032},
  [6] = {.lex_state = 1032},
  [7] = {.lex_state = 1032},
  [8] = {.lex_state = 1033},
  [9] = {.lex_state = 1774},
  [10] = {.lex_state = 1032},
  [11] = {.lex_state = 1032},
  [12] = {.lex_state = 1032},
  [13] = {.lex_state = 1032},
  [14] = {.lex_state = 1032},
  [15] = {.lex_state = 1032},
  [16] = {.lex_state = 1032},
  [17] = {.lex_state = 1032},
  [18] = {.lex_state = 1032},
  [19] = {.lex_state = 1032},
  [20] = {.lex_state = 1032},
  [21] = {.lex_state = 1032},
  [22] = {.lex_state = 1032},
  [23] = {.lex_state = 1032},
  [24] = {.lex_state = 1032},
  [25] = {.lex_state = 1032},
  [26] = {.lex_state = 1032},
  [27] = {.lex_state = 1032},
  [28] = {.lex_state = 1032},
  [29] = {.lex_state = 1032},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 215},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 215},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 215},
  [57] = {.lex_state = 215},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 1032},
  [80] = {.lex_state = 1032},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 1032},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 1032},
  [86] = {.lex_state = 1032},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 1032},
  [89] = {.lex_state = 1032},
  [90] = {.lex_state = 1032},
  [91] = {.lex_state = 1032},
  [92] = {.lex_state = 1032},
  [93] = {.lex_state = 1032},
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
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1032},
  [130] = {.lex_state = 1032},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1032},
  [133] = {.lex_state = 1032},
  [134] = {.lex_state = 1032},
  [135] = {.lex_state = 1032},
  [136] = {.lex_state = 1032},
  [137] = {.lex_state = 1032},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1033},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1033},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 1033},
  [163] = {.lex_state = 1033},
  [164] = {.lex_state = 1033},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1028},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1100},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 1033},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1100},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 1033},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 1100},
  [192] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_SER] = ACTIONS(1),
    [anon_sym_KAMAILIO] = ACTIONS(1),
    [anon_sym_OPENSER] = ACTIONS(1),
    [anon_sym_MAXCOMPAT] = ACTIONS(1),
    [anon_sym_ALL] = ACTIONS(1),
    [sym__QUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__SEMICOLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__COLON] = ACTIONS(1),
    [sym__STAR] = ACTIONS(1),
    [sym__DOT] = ACTIONS(1),
    [sym__COM_LINE_DEPR] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [sym__COM_END] = ACTIONS(1),
    [anon_sym_include_file] = ACTIONS(1),
    [anon_sym_import_file] = ACTIONS(1),
    [anon_sym_loadmodule] = ACTIONS(1),
    [anon_sym_loadmodulex] = ACTIONS(1),
    [anon_sym_request_route] = ACTIONS(1),
    [anon_sym_reply_route] = ACTIONS(1),
    [anon_sym_branch_route] = ACTIONS(1),
    [anon_sym_failure_route] = ACTIONS(1),
    [anon_sym_onreply_route] = ACTIONS(1),
    [anon_sym_event_route] = ACTIONS(1),
    [anon_sym_onsend_route] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_cfgengine] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_log_name] = ACTIONS(1),
    [anon_sym_log_stderror] = ACTIONS(1),
    [anon_sym_log_facility] = ACTIONS(1),
    [anon_sym_log_color] = ACTIONS(1),
    [anon_sym_log_prefix] = ACTIONS(1),
    [anon_sym_log_prefix_mode] = ACTIONS(1),
    [anon_sym_log_engine_type] = ACTIONS(1),
    [anon_sym_log_engine_data] = ACTIONS(1),
    [anon_sym_fork] = ACTIONS(1),
    [anon_sym_fork_delay] = ACTIONS(1),
    [anon_sym_modinit_delay] = ACTIONS(1),
    [anon_sym_xavp_via_params] = ACTIONS(1),
    [anon_sym_xavp_via_fields] = ACTIONS(1),
    [anon_sym_xavp_via_reply_params] = ACTIONS(1),
    [anon_sym_listen] = ACTIONS(1),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_name_PIPENAME] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_domain] = ACTIONS(1),
    [anon_sym_auto_aliases] = ACTIONS(1),
    [anon_sym_auto_domains] = ACTIONS(1),
    [anon_sym_dns] = ACTIONS(1),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(1),
    [anon_sym_dns_try_ipv6] = ACTIONS(1),
    [anon_sym_dns_try_naptr] = ACTIONS(1),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(1),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(1),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(1),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(1),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(1),
    [anon_sym_dns_retr_time] = ACTIONS(1),
    [anon_sym_dns_slow_query_ms] = ACTIONS(1),
    [anon_sym_dns_retr_no] = ACTIONS(1),
    [anon_sym_dns_servers_no] = ACTIONS(1),
    [anon_sym_dns_use_search_list] = ACTIONS(1),
    [anon_sym_dns_search_full_match] = ACTIONS(1),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(1),
    [anon_sym_dns_cache_init] = ACTIONS(1),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(1),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(1),
    [anon_sym_dns_cache_flags] = ACTIONS(1),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(1),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(1),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(1),
    [anon_sym_dns_cache_mem] = ACTIONS(1),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(1),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(1),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(1),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(1),
    [anon_sym_auto_bind_ipv6] = ACTIONS(1),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(1),
    [anon_sym_ipv6_hex_style] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_preprocessor_directive_token1] = ACTIONS(1),
    [aux_sym_preprocessor_directive_token3] = ACTIONS(1),
    [aux_sym_preprocessor_directive_token4] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_uri] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_nameaddr] = ACTIONS(1),
    [anon_sym_tobody] = ACTIONS(1),
    [anon_sym_re] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_sql] = ACTIONS(1),
    [anon_sym_msrpuri] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_sock] = ACTIONS(1),
    [anon_sym_urialias] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [sym_boolean_constant] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
    [sym_bin_number] = ACTIONS(1),
    [anon_sym_avp] = ACTIONS(1),
    [anon_sym_hdr] = ACTIONS(1),
    [anon_sym_ru] = ACTIONS(1),
    [anon_sym_tu] = ACTIONS(1),
    [anon_sym_ci] = ACTIONS(1),
    [anon_sym_du] = ACTIONS(1),
    [anon_sym_fu] = ACTIONS(1),
    [anon_sym_rU] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_rr] = ACTIONS(1),
    [anon_sym_addr] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_ct] = ACTIONS(1),
    [anon_sym_diversion] = ACTIONS(1),
    [anon_sym_xavp] = ACTIONS(1),
    [anon_sym_modparam] = ACTIONS(1),
    [anon_sym_modparamx] = ACTIONS(1),
    [sym_sip_keywords] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(165),
    [sym_file_starter] = STATE(3),
    [anon_sym_POUND_BANG] = ACTIONS(3),
    [anon_sym_BANG_BANG] = ACTIONS(3),
  },
  [2] = {
    [sym__top_level_statement] = STATE(4),
    [sym_file_inclusion] = STATE(4),
    [sym_loadmodule] = STATE(4),
    [sym_loadmodulex] = STATE(4),
    [sym_predefined_routes] = STATE(97),
    [sym_named_route] = STATE(20),
    [sym_unnamed_route] = STATE(20),
    [sym_routing_block] = STATE(4),
    [sym__multiline_comment] = STATE(21),
    [sym_comment] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_config_key] = STATE(180),
    [sym_config_variable] = STATE(4),
    [sym_preprocessor_directive] = STATE(4),
    [sym_modparam] = STATE(4),
    [sym_modparamx] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [sym__COM_LINE] = ACTIONS(9),
    [sym__COM_LINE_DEPR] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [anon_sym_include_file] = ACTIONS(15),
    [anon_sym_import_file] = ACTIONS(15),
    [anon_sym_loadmodule] = ACTIONS(17),
    [anon_sym_loadmodulex] = ACTIONS(19),
    [anon_sym_request_route] = ACTIONS(21),
    [anon_sym_reply_route] = ACTIONS(21),
    [anon_sym_branch_route] = ACTIONS(21),
    [anon_sym_failure_route] = ACTIONS(21),
    [anon_sym_onreply_route] = ACTIONS(21),
    [anon_sym_event_route] = ACTIONS(21),
    [anon_sym_onsend_route] = ACTIONS(21),
    [anon_sym_route] = ACTIONS(21),
    [anon_sym_cfgengine] = ACTIONS(23),
    [anon_sym_debug] = ACTIONS(25),
    [anon_sym_log_name] = ACTIONS(25),
    [anon_sym_log_stderror] = ACTIONS(25),
    [anon_sym_log_facility] = ACTIONS(25),
    [anon_sym_log_color] = ACTIONS(25),
    [anon_sym_log_prefix] = ACTIONS(27),
    [anon_sym_log_prefix_mode] = ACTIONS(25),
    [anon_sym_log_engine_type] = ACTIONS(25),
    [anon_sym_log_engine_data] = ACTIONS(25),
    [anon_sym_fork] = ACTIONS(27),
    [anon_sym_fork_delay] = ACTIONS(25),
    [anon_sym_modinit_delay] = ACTIONS(25),
    [anon_sym_xavp_via_params] = ACTIONS(25),
    [anon_sym_xavp_via_fields] = ACTIONS(25),
    [anon_sym_xavp_via_reply_params] = ACTIONS(25),
    [anon_sym_listen] = ACTIONS(25),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(25),
    [anon_sym_virtual] = ACTIONS(25),
    [anon_sym_name_PIPENAME] = ACTIONS(25),
    [anon_sym_alias] = ACTIONS(25),
    [anon_sym_domain] = ACTIONS(25),
    [anon_sym_auto_aliases] = ACTIONS(25),
    [anon_sym_auto_domains] = ACTIONS(25),
    [anon_sym_dns] = ACTIONS(27),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(25),
    [anon_sym_dns_try_ipv6] = ACTIONS(25),
    [anon_sym_dns_try_naptr] = ACTIONS(25),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(25),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(25),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(25),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(25),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(25),
    [anon_sym_dns_retr_time] = ACTIONS(25),
    [anon_sym_dns_slow_query_ms] = ACTIONS(25),
    [anon_sym_dns_retr_no] = ACTIONS(25),
    [anon_sym_dns_servers_no] = ACTIONS(25),
    [anon_sym_dns_use_search_list] = ACTIONS(25),
    [anon_sym_dns_search_full_match] = ACTIONS(25),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(25),
    [anon_sym_dns_cache_init] = ACTIONS(25),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(25),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(25),
    [anon_sym_dns_cache_flags] = ACTIONS(25),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_mem] = ACTIONS(25),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(25),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(25),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(25),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(25),
    [anon_sym_auto_bind_ipv6] = ACTIONS(25),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(25),
    [anon_sym_ipv6_hex_style] = ACTIONS(25),
    [anon_sym_modparam] = ACTIONS(29),
    [anon_sym_modparamx] = ACTIONS(31),
  },
  [3] = {
    [sym__top_level_statement] = STATE(2),
    [sym_file_inclusion] = STATE(2),
    [sym_loadmodule] = STATE(2),
    [sym_loadmodulex] = STATE(2),
    [sym_predefined_routes] = STATE(97),
    [sym_named_route] = STATE(20),
    [sym_unnamed_route] = STATE(20),
    [sym_routing_block] = STATE(2),
    [sym__multiline_comment] = STATE(21),
    [sym_comment] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_config_key] = STATE(180),
    [sym_config_variable] = STATE(2),
    [sym_preprocessor_directive] = STATE(2),
    [sym_modparam] = STATE(2),
    [sym_modparamx] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [sym__COM_LINE] = ACTIONS(9),
    [sym__COM_LINE_DEPR] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [anon_sym_include_file] = ACTIONS(15),
    [anon_sym_import_file] = ACTIONS(15),
    [anon_sym_loadmodule] = ACTIONS(17),
    [anon_sym_loadmodulex] = ACTIONS(19),
    [anon_sym_request_route] = ACTIONS(21),
    [anon_sym_reply_route] = ACTIONS(21),
    [anon_sym_branch_route] = ACTIONS(21),
    [anon_sym_failure_route] = ACTIONS(21),
    [anon_sym_onreply_route] = ACTIONS(21),
    [anon_sym_event_route] = ACTIONS(21),
    [anon_sym_onsend_route] = ACTIONS(21),
    [anon_sym_route] = ACTIONS(21),
    [anon_sym_cfgengine] = ACTIONS(23),
    [anon_sym_debug] = ACTIONS(25),
    [anon_sym_log_name] = ACTIONS(25),
    [anon_sym_log_stderror] = ACTIONS(25),
    [anon_sym_log_facility] = ACTIONS(25),
    [anon_sym_log_color] = ACTIONS(25),
    [anon_sym_log_prefix] = ACTIONS(27),
    [anon_sym_log_prefix_mode] = ACTIONS(25),
    [anon_sym_log_engine_type] = ACTIONS(25),
    [anon_sym_log_engine_data] = ACTIONS(25),
    [anon_sym_fork] = ACTIONS(27),
    [anon_sym_fork_delay] = ACTIONS(25),
    [anon_sym_modinit_delay] = ACTIONS(25),
    [anon_sym_xavp_via_params] = ACTIONS(25),
    [anon_sym_xavp_via_fields] = ACTIONS(25),
    [anon_sym_xavp_via_reply_params] = ACTIONS(25),
    [anon_sym_listen] = ACTIONS(25),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(25),
    [anon_sym_virtual] = ACTIONS(25),
    [anon_sym_name_PIPENAME] = ACTIONS(25),
    [anon_sym_alias] = ACTIONS(25),
    [anon_sym_domain] = ACTIONS(25),
    [anon_sym_auto_aliases] = ACTIONS(25),
    [anon_sym_auto_domains] = ACTIONS(25),
    [anon_sym_dns] = ACTIONS(27),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(25),
    [anon_sym_dns_try_ipv6] = ACTIONS(25),
    [anon_sym_dns_try_naptr] = ACTIONS(25),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(25),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(25),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(25),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(25),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(25),
    [anon_sym_dns_retr_time] = ACTIONS(25),
    [anon_sym_dns_slow_query_ms] = ACTIONS(25),
    [anon_sym_dns_retr_no] = ACTIONS(25),
    [anon_sym_dns_servers_no] = ACTIONS(25),
    [anon_sym_dns_use_search_list] = ACTIONS(25),
    [anon_sym_dns_search_full_match] = ACTIONS(25),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(25),
    [anon_sym_dns_cache_init] = ACTIONS(25),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(25),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(25),
    [anon_sym_dns_cache_flags] = ACTIONS(25),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(25),
    [anon_sym_dns_cache_mem] = ACTIONS(25),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(25),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(25),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(25),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(25),
    [anon_sym_auto_bind_ipv6] = ACTIONS(25),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(25),
    [anon_sym_ipv6_hex_style] = ACTIONS(25),
    [anon_sym_modparam] = ACTIONS(29),
    [anon_sym_modparamx] = ACTIONS(31),
  },
  [4] = {
    [sym__top_level_statement] = STATE(4),
    [sym_file_inclusion] = STATE(4),
    [sym_loadmodule] = STATE(4),
    [sym_loadmodulex] = STATE(4),
    [sym_predefined_routes] = STATE(97),
    [sym_named_route] = STATE(20),
    [sym_unnamed_route] = STATE(20),
    [sym_routing_block] = STATE(4),
    [sym__multiline_comment] = STATE(21),
    [sym_comment] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_config_key] = STATE(180),
    [sym_config_variable] = STATE(4),
    [sym_preprocessor_directive] = STATE(4),
    [sym_modparam] = STATE(4),
    [sym_modparamx] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_POUND_BANG] = ACTIONS(37),
    [sym__COM_LINE] = ACTIONS(40),
    [sym__COM_LINE_DEPR] = ACTIONS(43),
    [anon_sym_SLASH_STAR] = ACTIONS(46),
    [anon_sym_include_file] = ACTIONS(49),
    [anon_sym_import_file] = ACTIONS(49),
    [anon_sym_loadmodule] = ACTIONS(52),
    [anon_sym_loadmodulex] = ACTIONS(55),
    [anon_sym_request_route] = ACTIONS(58),
    [anon_sym_reply_route] = ACTIONS(58),
    [anon_sym_branch_route] = ACTIONS(58),
    [anon_sym_failure_route] = ACTIONS(58),
    [anon_sym_onreply_route] = ACTIONS(58),
    [anon_sym_event_route] = ACTIONS(58),
    [anon_sym_onsend_route] = ACTIONS(58),
    [anon_sym_route] = ACTIONS(58),
    [anon_sym_cfgengine] = ACTIONS(61),
    [anon_sym_debug] = ACTIONS(64),
    [anon_sym_log_name] = ACTIONS(64),
    [anon_sym_log_stderror] = ACTIONS(64),
    [anon_sym_log_facility] = ACTIONS(64),
    [anon_sym_log_color] = ACTIONS(64),
    [anon_sym_log_prefix] = ACTIONS(67),
    [anon_sym_log_prefix_mode] = ACTIONS(64),
    [anon_sym_log_engine_type] = ACTIONS(64),
    [anon_sym_log_engine_data] = ACTIONS(64),
    [anon_sym_fork] = ACTIONS(67),
    [anon_sym_fork_delay] = ACTIONS(64),
    [anon_sym_modinit_delay] = ACTIONS(64),
    [anon_sym_xavp_via_params] = ACTIONS(64),
    [anon_sym_xavp_via_fields] = ACTIONS(64),
    [anon_sym_xavp_via_reply_params] = ACTIONS(64),
    [anon_sym_listen] = ACTIONS(64),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(64),
    [anon_sym_virtual] = ACTIONS(64),
    [anon_sym_name_PIPENAME] = ACTIONS(64),
    [anon_sym_alias] = ACTIONS(64),
    [anon_sym_domain] = ACTIONS(64),
    [anon_sym_auto_aliases] = ACTIONS(64),
    [anon_sym_auto_domains] = ACTIONS(64),
    [anon_sym_dns] = ACTIONS(67),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(64),
    [anon_sym_dns_try_ipv6] = ACTIONS(64),
    [anon_sym_dns_try_naptr] = ACTIONS(64),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(64),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(64),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(64),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(64),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(64),
    [anon_sym_dns_retr_time] = ACTIONS(64),
    [anon_sym_dns_slow_query_ms] = ACTIONS(64),
    [anon_sym_dns_retr_no] = ACTIONS(64),
    [anon_sym_dns_servers_no] = ACTIONS(64),
    [anon_sym_dns_use_search_list] = ACTIONS(64),
    [anon_sym_dns_search_full_match] = ACTIONS(64),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(64),
    [anon_sym_dns_cache_init] = ACTIONS(64),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(64),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(64),
    [anon_sym_dns_cache_flags] = ACTIONS(64),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(64),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(64),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(64),
    [anon_sym_dns_cache_mem] = ACTIONS(64),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(64),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(64),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(64),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(64),
    [anon_sym_auto_bind_ipv6] = ACTIONS(64),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(64),
    [anon_sym_ipv6_hex_style] = ACTIONS(64),
    [anon_sym_modparam] = ACTIONS(70),
    [anon_sym_modparamx] = ACTIONS(73),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_POUND_BANG] = ACTIONS(76),
    [sym__SEMICOLON] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [sym__COM_LINE] = ACTIONS(76),
    [sym__COM_LINE_DEPR] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(76),
    [anon_sym_include_file] = ACTIONS(76),
    [anon_sym_import_file] = ACTIONS(76),
    [anon_sym_loadmodule] = ACTIONS(78),
    [anon_sym_loadmodulex] = ACTIONS(76),
    [anon_sym_request_route] = ACTIONS(76),
    [anon_sym_reply_route] = ACTIONS(76),
    [anon_sym_branch_route] = ACTIONS(76),
    [anon_sym_failure_route] = ACTIONS(76),
    [anon_sym_onreply_route] = ACTIONS(76),
    [anon_sym_event_route] = ACTIONS(76),
    [anon_sym_onsend_route] = ACTIONS(76),
    [anon_sym_route] = ACTIONS(76),
    [anon_sym_cfgengine] = ACTIONS(76),
    [anon_sym_debug] = ACTIONS(76),
    [anon_sym_log_name] = ACTIONS(76),
    [anon_sym_log_stderror] = ACTIONS(76),
    [anon_sym_log_facility] = ACTIONS(76),
    [anon_sym_log_color] = ACTIONS(76),
    [anon_sym_log_prefix] = ACTIONS(78),
    [anon_sym_log_prefix_mode] = ACTIONS(76),
    [anon_sym_log_engine_type] = ACTIONS(76),
    [anon_sym_log_engine_data] = ACTIONS(76),
    [anon_sym_fork] = ACTIONS(78),
    [anon_sym_fork_delay] = ACTIONS(76),
    [anon_sym_modinit_delay] = ACTIONS(76),
    [anon_sym_xavp_via_params] = ACTIONS(76),
    [anon_sym_xavp_via_fields] = ACTIONS(76),
    [anon_sym_xavp_via_reply_params] = ACTIONS(76),
    [anon_sym_listen] = ACTIONS(76),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(76),
    [anon_sym_virtual] = ACTIONS(76),
    [anon_sym_name_PIPENAME] = ACTIONS(76),
    [anon_sym_alias] = ACTIONS(76),
    [anon_sym_domain] = ACTIONS(76),
    [anon_sym_auto_aliases] = ACTIONS(76),
    [anon_sym_auto_domains] = ACTIONS(76),
    [anon_sym_dns] = ACTIONS(78),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(76),
    [anon_sym_dns_try_ipv6] = ACTIONS(76),
    [anon_sym_dns_try_naptr] = ACTIONS(76),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(76),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(76),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(76),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(76),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(76),
    [anon_sym_dns_retr_time] = ACTIONS(76),
    [anon_sym_dns_slow_query_ms] = ACTIONS(76),
    [anon_sym_dns_retr_no] = ACTIONS(76),
    [anon_sym_dns_servers_no] = ACTIONS(76),
    [anon_sym_dns_use_search_list] = ACTIONS(76),
    [anon_sym_dns_search_full_match] = ACTIONS(76),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(76),
    [anon_sym_dns_cache_init] = ACTIONS(76),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(76),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(76),
    [anon_sym_dns_cache_flags] = ACTIONS(76),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(76),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(76),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(76),
    [anon_sym_dns_cache_mem] = ACTIONS(76),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(76),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(76),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(76),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(76),
    [anon_sym_auto_bind_ipv6] = ACTIONS(76),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(76),
    [anon_sym_ipv6_hex_style] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(76),
    [anon_sym_or] = ACTIONS(76),
    [anon_sym_modparam] = ACTIONS(78),
    [anon_sym_modparamx] = ACTIONS(76),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_POUND_BANG] = ACTIONS(80),
    [sym__SEMICOLON] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [sym__COM_LINE] = ACTIONS(80),
    [sym__COM_LINE_DEPR] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(80),
    [anon_sym_include_file] = ACTIONS(80),
    [anon_sym_import_file] = ACTIONS(80),
    [anon_sym_loadmodule] = ACTIONS(82),
    [anon_sym_loadmodulex] = ACTIONS(80),
    [anon_sym_request_route] = ACTIONS(80),
    [anon_sym_reply_route] = ACTIONS(80),
    [anon_sym_branch_route] = ACTIONS(80),
    [anon_sym_failure_route] = ACTIONS(80),
    [anon_sym_onreply_route] = ACTIONS(80),
    [anon_sym_event_route] = ACTIONS(80),
    [anon_sym_onsend_route] = ACTIONS(80),
    [anon_sym_route] = ACTIONS(80),
    [anon_sym_cfgengine] = ACTIONS(80),
    [anon_sym_debug] = ACTIONS(80),
    [anon_sym_log_name] = ACTIONS(80),
    [anon_sym_log_stderror] = ACTIONS(80),
    [anon_sym_log_facility] = ACTIONS(80),
    [anon_sym_log_color] = ACTIONS(80),
    [anon_sym_log_prefix] = ACTIONS(82),
    [anon_sym_log_prefix_mode] = ACTIONS(80),
    [anon_sym_log_engine_type] = ACTIONS(80),
    [anon_sym_log_engine_data] = ACTIONS(80),
    [anon_sym_fork] = ACTIONS(82),
    [anon_sym_fork_delay] = ACTIONS(80),
    [anon_sym_modinit_delay] = ACTIONS(80),
    [anon_sym_xavp_via_params] = ACTIONS(80),
    [anon_sym_xavp_via_fields] = ACTIONS(80),
    [anon_sym_xavp_via_reply_params] = ACTIONS(80),
    [anon_sym_listen] = ACTIONS(80),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(80),
    [anon_sym_virtual] = ACTIONS(80),
    [anon_sym_name_PIPENAME] = ACTIONS(80),
    [anon_sym_alias] = ACTIONS(80),
    [anon_sym_domain] = ACTIONS(80),
    [anon_sym_auto_aliases] = ACTIONS(80),
    [anon_sym_auto_domains] = ACTIONS(80),
    [anon_sym_dns] = ACTIONS(82),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(80),
    [anon_sym_dns_try_ipv6] = ACTIONS(80),
    [anon_sym_dns_try_naptr] = ACTIONS(80),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(80),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(80),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(80),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(80),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(80),
    [anon_sym_dns_retr_time] = ACTIONS(80),
    [anon_sym_dns_slow_query_ms] = ACTIONS(80),
    [anon_sym_dns_retr_no] = ACTIONS(80),
    [anon_sym_dns_servers_no] = ACTIONS(80),
    [anon_sym_dns_use_search_list] = ACTIONS(80),
    [anon_sym_dns_search_full_match] = ACTIONS(80),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(80),
    [anon_sym_dns_cache_init] = ACTIONS(80),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(80),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(80),
    [anon_sym_dns_cache_flags] = ACTIONS(80),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(80),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(80),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(80),
    [anon_sym_dns_cache_mem] = ACTIONS(80),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(80),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(80),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(80),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(80),
    [anon_sym_auto_bind_ipv6] = ACTIONS(80),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(80),
    [anon_sym_ipv6_hex_style] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_or] = ACTIONS(80),
    [anon_sym_modparam] = ACTIONS(82),
    [anon_sym_modparamx] = ACTIONS(80),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_POUND_BANG] = ACTIONS(84),
    [sym__SEMICOLON] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [sym__COM_LINE] = ACTIONS(84),
    [sym__COM_LINE_DEPR] = ACTIONS(86),
    [anon_sym_SLASH_STAR] = ACTIONS(84),
    [anon_sym_include_file] = ACTIONS(84),
    [anon_sym_import_file] = ACTIONS(84),
    [anon_sym_loadmodule] = ACTIONS(86),
    [anon_sym_loadmodulex] = ACTIONS(84),
    [anon_sym_request_route] = ACTIONS(84),
    [anon_sym_reply_route] = ACTIONS(84),
    [anon_sym_branch_route] = ACTIONS(84),
    [anon_sym_failure_route] = ACTIONS(84),
    [anon_sym_onreply_route] = ACTIONS(84),
    [anon_sym_event_route] = ACTIONS(84),
    [anon_sym_onsend_route] = ACTIONS(84),
    [anon_sym_route] = ACTIONS(84),
    [anon_sym_cfgengine] = ACTIONS(84),
    [anon_sym_debug] = ACTIONS(84),
    [anon_sym_log_name] = ACTIONS(84),
    [anon_sym_log_stderror] = ACTIONS(84),
    [anon_sym_log_facility] = ACTIONS(84),
    [anon_sym_log_color] = ACTIONS(84),
    [anon_sym_log_prefix] = ACTIONS(86),
    [anon_sym_log_prefix_mode] = ACTIONS(84),
    [anon_sym_log_engine_type] = ACTIONS(84),
    [anon_sym_log_engine_data] = ACTIONS(84),
    [anon_sym_fork] = ACTIONS(86),
    [anon_sym_fork_delay] = ACTIONS(84),
    [anon_sym_modinit_delay] = ACTIONS(84),
    [anon_sym_xavp_via_params] = ACTIONS(84),
    [anon_sym_xavp_via_fields] = ACTIONS(84),
    [anon_sym_xavp_via_reply_params] = ACTIONS(84),
    [anon_sym_listen] = ACTIONS(84),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(84),
    [anon_sym_virtual] = ACTIONS(84),
    [anon_sym_name_PIPENAME] = ACTIONS(84),
    [anon_sym_alias] = ACTIONS(84),
    [anon_sym_domain] = ACTIONS(84),
    [anon_sym_auto_aliases] = ACTIONS(84),
    [anon_sym_auto_domains] = ACTIONS(84),
    [anon_sym_dns] = ACTIONS(86),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(84),
    [anon_sym_dns_try_ipv6] = ACTIONS(84),
    [anon_sym_dns_try_naptr] = ACTIONS(84),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(84),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(84),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(84),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(84),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(84),
    [anon_sym_dns_retr_time] = ACTIONS(84),
    [anon_sym_dns_slow_query_ms] = ACTIONS(84),
    [anon_sym_dns_retr_no] = ACTIONS(84),
    [anon_sym_dns_servers_no] = ACTIONS(84),
    [anon_sym_dns_use_search_list] = ACTIONS(84),
    [anon_sym_dns_search_full_match] = ACTIONS(84),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(84),
    [anon_sym_dns_cache_init] = ACTIONS(84),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(84),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(84),
    [anon_sym_dns_cache_flags] = ACTIONS(84),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(84),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(84),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(84),
    [anon_sym_dns_cache_mem] = ACTIONS(84),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(84),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(84),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(84),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(84),
    [anon_sym_auto_bind_ipv6] = ACTIONS(84),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(84),
    [anon_sym_ipv6_hex_style] = ACTIONS(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(84),
    [anon_sym_or] = ACTIONS(84),
    [anon_sym_modparam] = ACTIONS(86),
    [anon_sym_modparamx] = ACTIONS(84),
  },
  [8] = {
    [sym_string] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_POUND_BANG] = ACTIONS(88),
    [sym__QUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym__COM_LINE] = ACTIONS(88),
    [sym__COM_LINE_DEPR] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(88),
    [anon_sym_include_file] = ACTIONS(94),
    [anon_sym_import_file] = ACTIONS(94),
    [anon_sym_loadmodule] = ACTIONS(94),
    [anon_sym_loadmodulex] = ACTIONS(94),
    [anon_sym_request_route] = ACTIONS(94),
    [anon_sym_reply_route] = ACTIONS(94),
    [anon_sym_branch_route] = ACTIONS(94),
    [anon_sym_failure_route] = ACTIONS(94),
    [anon_sym_onreply_route] = ACTIONS(94),
    [anon_sym_event_route] = ACTIONS(94),
    [anon_sym_onsend_route] = ACTIONS(94),
    [anon_sym_route] = ACTIONS(94),
    [anon_sym_cfgengine] = ACTIONS(88),
    [anon_sym_debug] = ACTIONS(94),
    [anon_sym_log_name] = ACTIONS(94),
    [anon_sym_log_stderror] = ACTIONS(94),
    [anon_sym_log_facility] = ACTIONS(94),
    [anon_sym_log_color] = ACTIONS(94),
    [anon_sym_log_prefix] = ACTIONS(94),
    [anon_sym_log_prefix_mode] = ACTIONS(94),
    [anon_sym_log_engine_type] = ACTIONS(94),
    [anon_sym_log_engine_data] = ACTIONS(94),
    [anon_sym_fork] = ACTIONS(94),
    [anon_sym_fork_delay] = ACTIONS(94),
    [anon_sym_modinit_delay] = ACTIONS(94),
    [anon_sym_xavp_via_params] = ACTIONS(94),
    [anon_sym_xavp_via_fields] = ACTIONS(94),
    [anon_sym_xavp_via_reply_params] = ACTIONS(94),
    [anon_sym_listen] = ACTIONS(94),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(88),
    [anon_sym_virtual] = ACTIONS(94),
    [anon_sym_name_PIPENAME] = ACTIONS(88),
    [anon_sym_alias] = ACTIONS(94),
    [anon_sym_domain] = ACTIONS(94),
    [anon_sym_auto_aliases] = ACTIONS(94),
    [anon_sym_auto_domains] = ACTIONS(94),
    [anon_sym_dns] = ACTIONS(94),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(88),
    [anon_sym_dns_try_ipv6] = ACTIONS(94),
    [anon_sym_dns_try_naptr] = ACTIONS(94),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(88),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(88),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(88),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(88),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(88),
    [anon_sym_dns_retr_time] = ACTIONS(94),
    [anon_sym_dns_slow_query_ms] = ACTIONS(94),
    [anon_sym_dns_retr_no] = ACTIONS(94),
    [anon_sym_dns_servers_no] = ACTIONS(94),
    [anon_sym_dns_use_search_list] = ACTIONS(94),
    [anon_sym_dns_search_full_match] = ACTIONS(94),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(94),
    [anon_sym_dns_cache_init] = ACTIONS(94),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(88),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(88),
    [anon_sym_dns_cache_flags] = ACTIONS(94),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_mem] = ACTIONS(94),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(94),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(88),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(94),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(88),
    [anon_sym_auto_bind_ipv6] = ACTIONS(94),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(94),
    [anon_sym_ipv6_hex_style] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_modparam] = ACTIONS(94),
    [anon_sym_modparamx] = ACTIONS(94),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_POUND_BANG] = ACTIONS(94),
    [sym__COM_LINE] = ACTIONS(94),
    [sym__COM_LINE_DEPR] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(94),
    [anon_sym_include_file] = ACTIONS(94),
    [anon_sym_import_file] = ACTIONS(94),
    [anon_sym_loadmodule] = ACTIONS(94),
    [anon_sym_loadmodulex] = ACTIONS(94),
    [anon_sym_request_route] = ACTIONS(94),
    [anon_sym_reply_route] = ACTIONS(94),
    [anon_sym_branch_route] = ACTIONS(94),
    [anon_sym_failure_route] = ACTIONS(94),
    [anon_sym_onreply_route] = ACTIONS(94),
    [anon_sym_event_route] = ACTIONS(94),
    [anon_sym_onsend_route] = ACTIONS(94),
    [anon_sym_route] = ACTIONS(94),
    [anon_sym_cfgengine] = ACTIONS(94),
    [anon_sym_debug] = ACTIONS(94),
    [anon_sym_log_name] = ACTIONS(94),
    [anon_sym_log_stderror] = ACTIONS(94),
    [anon_sym_log_facility] = ACTIONS(94),
    [anon_sym_log_color] = ACTIONS(94),
    [anon_sym_log_prefix] = ACTIONS(94),
    [anon_sym_log_prefix_mode] = ACTIONS(94),
    [anon_sym_log_engine_type] = ACTIONS(94),
    [anon_sym_log_engine_data] = ACTIONS(94),
    [anon_sym_fork] = ACTIONS(94),
    [anon_sym_fork_delay] = ACTIONS(94),
    [anon_sym_modinit_delay] = ACTIONS(94),
    [anon_sym_xavp_via_params] = ACTIONS(94),
    [anon_sym_xavp_via_fields] = ACTIONS(94),
    [anon_sym_xavp_via_reply_params] = ACTIONS(94),
    [anon_sym_listen] = ACTIONS(94),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(94),
    [anon_sym_virtual] = ACTIONS(94),
    [anon_sym_name_PIPENAME] = ACTIONS(94),
    [anon_sym_alias] = ACTIONS(94),
    [anon_sym_domain] = ACTIONS(94),
    [anon_sym_auto_aliases] = ACTIONS(94),
    [anon_sym_auto_domains] = ACTIONS(94),
    [anon_sym_dns] = ACTIONS(94),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(94),
    [anon_sym_dns_try_ipv6] = ACTIONS(94),
    [anon_sym_dns_try_naptr] = ACTIONS(94),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(94),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(94),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(94),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(94),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(94),
    [anon_sym_dns_retr_time] = ACTIONS(94),
    [anon_sym_dns_slow_query_ms] = ACTIONS(94),
    [anon_sym_dns_retr_no] = ACTIONS(94),
    [anon_sym_dns_servers_no] = ACTIONS(94),
    [anon_sym_dns_use_search_list] = ACTIONS(94),
    [anon_sym_dns_search_full_match] = ACTIONS(94),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(94),
    [anon_sym_dns_cache_init] = ACTIONS(94),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(94),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(94),
    [anon_sym_dns_cache_flags] = ACTIONS(94),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(94),
    [anon_sym_dns_cache_mem] = ACTIONS(94),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(94),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(94),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(94),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(94),
    [anon_sym_auto_bind_ipv6] = ACTIONS(94),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(94),
    [anon_sym_ipv6_hex_style] = ACTIONS(94),
    [aux_sym_preprocessor_directive_token2] = ACTIONS(98),
    [anon_sym_modparam] = ACTIONS(94),
    [anon_sym_modparamx] = ACTIONS(94),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_POUND_BANG] = ACTIONS(100),
    [sym__COM_LINE] = ACTIONS(100),
    [sym__COM_LINE_DEPR] = ACTIONS(102),
    [anon_sym_SLASH_STAR] = ACTIONS(100),
    [anon_sym_include_file] = ACTIONS(100),
    [anon_sym_import_file] = ACTIONS(100),
    [anon_sym_loadmodule] = ACTIONS(102),
    [anon_sym_loadmodulex] = ACTIONS(100),
    [anon_sym_request_route] = ACTIONS(100),
    [anon_sym_reply_route] = ACTIONS(100),
    [anon_sym_branch_route] = ACTIONS(100),
    [anon_sym_failure_route] = ACTIONS(100),
    [anon_sym_onreply_route] = ACTIONS(100),
    [anon_sym_event_route] = ACTIONS(100),
    [anon_sym_onsend_route] = ACTIONS(100),
    [anon_sym_route] = ACTIONS(100),
    [anon_sym_cfgengine] = ACTIONS(100),
    [anon_sym_debug] = ACTIONS(100),
    [anon_sym_log_name] = ACTIONS(100),
    [anon_sym_log_stderror] = ACTIONS(100),
    [anon_sym_log_facility] = ACTIONS(100),
    [anon_sym_log_color] = ACTIONS(100),
    [anon_sym_log_prefix] = ACTIONS(102),
    [anon_sym_log_prefix_mode] = ACTIONS(100),
    [anon_sym_log_engine_type] = ACTIONS(100),
    [anon_sym_log_engine_data] = ACTIONS(100),
    [anon_sym_fork] = ACTIONS(102),
    [anon_sym_fork_delay] = ACTIONS(100),
    [anon_sym_modinit_delay] = ACTIONS(100),
    [anon_sym_xavp_via_params] = ACTIONS(100),
    [anon_sym_xavp_via_fields] = ACTIONS(100),
    [anon_sym_xavp_via_reply_params] = ACTIONS(100),
    [anon_sym_listen] = ACTIONS(100),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(100),
    [anon_sym_virtual] = ACTIONS(100),
    [anon_sym_name_PIPENAME] = ACTIONS(100),
    [anon_sym_alias] = ACTIONS(100),
    [anon_sym_domain] = ACTIONS(100),
    [anon_sym_auto_aliases] = ACTIONS(100),
    [anon_sym_auto_domains] = ACTIONS(100),
    [anon_sym_dns] = ACTIONS(102),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(100),
    [anon_sym_dns_try_ipv6] = ACTIONS(100),
    [anon_sym_dns_try_naptr] = ACTIONS(100),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(100),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(100),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(100),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(100),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(100),
    [anon_sym_dns_retr_time] = ACTIONS(100),
    [anon_sym_dns_slow_query_ms] = ACTIONS(100),
    [anon_sym_dns_retr_no] = ACTIONS(100),
    [anon_sym_dns_servers_no] = ACTIONS(100),
    [anon_sym_dns_use_search_list] = ACTIONS(100),
    [anon_sym_dns_search_full_match] = ACTIONS(100),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(100),
    [anon_sym_dns_cache_init] = ACTIONS(100),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(100),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(100),
    [anon_sym_dns_cache_flags] = ACTIONS(100),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(100),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(100),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(100),
    [anon_sym_dns_cache_mem] = ACTIONS(100),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(100),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(100),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(100),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(100),
    [anon_sym_auto_bind_ipv6] = ACTIONS(100),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(100),
    [anon_sym_ipv6_hex_style] = ACTIONS(100),
    [anon_sym_modparam] = ACTIONS(102),
    [anon_sym_modparamx] = ACTIONS(100),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_POUND_BANG] = ACTIONS(104),
    [sym__COM_LINE] = ACTIONS(104),
    [sym__COM_LINE_DEPR] = ACTIONS(106),
    [anon_sym_SLASH_STAR] = ACTIONS(104),
    [anon_sym_include_file] = ACTIONS(104),
    [anon_sym_import_file] = ACTIONS(104),
    [anon_sym_loadmodule] = ACTIONS(106),
    [anon_sym_loadmodulex] = ACTIONS(104),
    [anon_sym_request_route] = ACTIONS(104),
    [anon_sym_reply_route] = ACTIONS(104),
    [anon_sym_branch_route] = ACTIONS(104),
    [anon_sym_failure_route] = ACTIONS(104),
    [anon_sym_onreply_route] = ACTIONS(104),
    [anon_sym_event_route] = ACTIONS(104),
    [anon_sym_onsend_route] = ACTIONS(104),
    [anon_sym_route] = ACTIONS(104),
    [anon_sym_cfgengine] = ACTIONS(104),
    [anon_sym_debug] = ACTIONS(104),
    [anon_sym_log_name] = ACTIONS(104),
    [anon_sym_log_stderror] = ACTIONS(104),
    [anon_sym_log_facility] = ACTIONS(104),
    [anon_sym_log_color] = ACTIONS(104),
    [anon_sym_log_prefix] = ACTIONS(106),
    [anon_sym_log_prefix_mode] = ACTIONS(104),
    [anon_sym_log_engine_type] = ACTIONS(104),
    [anon_sym_log_engine_data] = ACTIONS(104),
    [anon_sym_fork] = ACTIONS(106),
    [anon_sym_fork_delay] = ACTIONS(104),
    [anon_sym_modinit_delay] = ACTIONS(104),
    [anon_sym_xavp_via_params] = ACTIONS(104),
    [anon_sym_xavp_via_fields] = ACTIONS(104),
    [anon_sym_xavp_via_reply_params] = ACTIONS(104),
    [anon_sym_listen] = ACTIONS(104),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(104),
    [anon_sym_virtual] = ACTIONS(104),
    [anon_sym_name_PIPENAME] = ACTIONS(104),
    [anon_sym_alias] = ACTIONS(104),
    [anon_sym_domain] = ACTIONS(104),
    [anon_sym_auto_aliases] = ACTIONS(104),
    [anon_sym_auto_domains] = ACTIONS(104),
    [anon_sym_dns] = ACTIONS(106),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(104),
    [anon_sym_dns_try_ipv6] = ACTIONS(104),
    [anon_sym_dns_try_naptr] = ACTIONS(104),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(104),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(104),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(104),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(104),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(104),
    [anon_sym_dns_retr_time] = ACTIONS(104),
    [anon_sym_dns_slow_query_ms] = ACTIONS(104),
    [anon_sym_dns_retr_no] = ACTIONS(104),
    [anon_sym_dns_servers_no] = ACTIONS(104),
    [anon_sym_dns_use_search_list] = ACTIONS(104),
    [anon_sym_dns_search_full_match] = ACTIONS(104),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(104),
    [anon_sym_dns_cache_init] = ACTIONS(104),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(104),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(104),
    [anon_sym_dns_cache_flags] = ACTIONS(104),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(104),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(104),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(104),
    [anon_sym_dns_cache_mem] = ACTIONS(104),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(104),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(104),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(104),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(104),
    [anon_sym_auto_bind_ipv6] = ACTIONS(104),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(104),
    [anon_sym_ipv6_hex_style] = ACTIONS(104),
    [anon_sym_modparam] = ACTIONS(106),
    [anon_sym_modparamx] = ACTIONS(104),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_POUND_BANG] = ACTIONS(108),
    [sym__COM_LINE] = ACTIONS(108),
    [sym__COM_LINE_DEPR] = ACTIONS(110),
    [anon_sym_SLASH_STAR] = ACTIONS(108),
    [anon_sym_include_file] = ACTIONS(108),
    [anon_sym_import_file] = ACTIONS(108),
    [anon_sym_loadmodule] = ACTIONS(110),
    [anon_sym_loadmodulex] = ACTIONS(108),
    [anon_sym_request_route] = ACTIONS(108),
    [anon_sym_reply_route] = ACTIONS(108),
    [anon_sym_branch_route] = ACTIONS(108),
    [anon_sym_failure_route] = ACTIONS(108),
    [anon_sym_onreply_route] = ACTIONS(108),
    [anon_sym_event_route] = ACTIONS(108),
    [anon_sym_onsend_route] = ACTIONS(108),
    [anon_sym_route] = ACTIONS(108),
    [anon_sym_cfgengine] = ACTIONS(108),
    [anon_sym_debug] = ACTIONS(108),
    [anon_sym_log_name] = ACTIONS(108),
    [anon_sym_log_stderror] = ACTIONS(108),
    [anon_sym_log_facility] = ACTIONS(108),
    [anon_sym_log_color] = ACTIONS(108),
    [anon_sym_log_prefix] = ACTIONS(110),
    [anon_sym_log_prefix_mode] = ACTIONS(108),
    [anon_sym_log_engine_type] = ACTIONS(108),
    [anon_sym_log_engine_data] = ACTIONS(108),
    [anon_sym_fork] = ACTIONS(110),
    [anon_sym_fork_delay] = ACTIONS(108),
    [anon_sym_modinit_delay] = ACTIONS(108),
    [anon_sym_xavp_via_params] = ACTIONS(108),
    [anon_sym_xavp_via_fields] = ACTIONS(108),
    [anon_sym_xavp_via_reply_params] = ACTIONS(108),
    [anon_sym_listen] = ACTIONS(108),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(108),
    [anon_sym_virtual] = ACTIONS(108),
    [anon_sym_name_PIPENAME] = ACTIONS(108),
    [anon_sym_alias] = ACTIONS(108),
    [anon_sym_domain] = ACTIONS(108),
    [anon_sym_auto_aliases] = ACTIONS(108),
    [anon_sym_auto_domains] = ACTIONS(108),
    [anon_sym_dns] = ACTIONS(110),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(108),
    [anon_sym_dns_try_ipv6] = ACTIONS(108),
    [anon_sym_dns_try_naptr] = ACTIONS(108),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(108),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(108),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(108),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(108),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(108),
    [anon_sym_dns_retr_time] = ACTIONS(108),
    [anon_sym_dns_slow_query_ms] = ACTIONS(108),
    [anon_sym_dns_retr_no] = ACTIONS(108),
    [anon_sym_dns_servers_no] = ACTIONS(108),
    [anon_sym_dns_use_search_list] = ACTIONS(108),
    [anon_sym_dns_search_full_match] = ACTIONS(108),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(108),
    [anon_sym_dns_cache_init] = ACTIONS(108),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(108),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(108),
    [anon_sym_dns_cache_flags] = ACTIONS(108),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(108),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(108),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(108),
    [anon_sym_dns_cache_mem] = ACTIONS(108),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(108),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(108),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(108),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(108),
    [anon_sym_auto_bind_ipv6] = ACTIONS(108),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(108),
    [anon_sym_ipv6_hex_style] = ACTIONS(108),
    [anon_sym_modparam] = ACTIONS(110),
    [anon_sym_modparamx] = ACTIONS(108),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_POUND_BANG] = ACTIONS(112),
    [sym__COM_LINE] = ACTIONS(112),
    [sym__COM_LINE_DEPR] = ACTIONS(114),
    [anon_sym_SLASH_STAR] = ACTIONS(112),
    [anon_sym_include_file] = ACTIONS(112),
    [anon_sym_import_file] = ACTIONS(112),
    [anon_sym_loadmodule] = ACTIONS(114),
    [anon_sym_loadmodulex] = ACTIONS(112),
    [anon_sym_request_route] = ACTIONS(112),
    [anon_sym_reply_route] = ACTIONS(112),
    [anon_sym_branch_route] = ACTIONS(112),
    [anon_sym_failure_route] = ACTIONS(112),
    [anon_sym_onreply_route] = ACTIONS(112),
    [anon_sym_event_route] = ACTIONS(112),
    [anon_sym_onsend_route] = ACTIONS(112),
    [anon_sym_route] = ACTIONS(112),
    [anon_sym_cfgengine] = ACTIONS(112),
    [anon_sym_debug] = ACTIONS(112),
    [anon_sym_log_name] = ACTIONS(112),
    [anon_sym_log_stderror] = ACTIONS(112),
    [anon_sym_log_facility] = ACTIONS(112),
    [anon_sym_log_color] = ACTIONS(112),
    [anon_sym_log_prefix] = ACTIONS(114),
    [anon_sym_log_prefix_mode] = ACTIONS(112),
    [anon_sym_log_engine_type] = ACTIONS(112),
    [anon_sym_log_engine_data] = ACTIONS(112),
    [anon_sym_fork] = ACTIONS(114),
    [anon_sym_fork_delay] = ACTIONS(112),
    [anon_sym_modinit_delay] = ACTIONS(112),
    [anon_sym_xavp_via_params] = ACTIONS(112),
    [anon_sym_xavp_via_fields] = ACTIONS(112),
    [anon_sym_xavp_via_reply_params] = ACTIONS(112),
    [anon_sym_listen] = ACTIONS(112),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(112),
    [anon_sym_virtual] = ACTIONS(112),
    [anon_sym_name_PIPENAME] = ACTIONS(112),
    [anon_sym_alias] = ACTIONS(112),
    [anon_sym_domain] = ACTIONS(112),
    [anon_sym_auto_aliases] = ACTIONS(112),
    [anon_sym_auto_domains] = ACTIONS(112),
    [anon_sym_dns] = ACTIONS(114),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(112),
    [anon_sym_dns_try_ipv6] = ACTIONS(112),
    [anon_sym_dns_try_naptr] = ACTIONS(112),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(112),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(112),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(112),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(112),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(112),
    [anon_sym_dns_retr_time] = ACTIONS(112),
    [anon_sym_dns_slow_query_ms] = ACTIONS(112),
    [anon_sym_dns_retr_no] = ACTIONS(112),
    [anon_sym_dns_servers_no] = ACTIONS(112),
    [anon_sym_dns_use_search_list] = ACTIONS(112),
    [anon_sym_dns_search_full_match] = ACTIONS(112),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(112),
    [anon_sym_dns_cache_init] = ACTIONS(112),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(112),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(112),
    [anon_sym_dns_cache_flags] = ACTIONS(112),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(112),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(112),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(112),
    [anon_sym_dns_cache_mem] = ACTIONS(112),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(112),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(112),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(112),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(112),
    [anon_sym_auto_bind_ipv6] = ACTIONS(112),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(112),
    [anon_sym_ipv6_hex_style] = ACTIONS(112),
    [anon_sym_modparam] = ACTIONS(114),
    [anon_sym_modparamx] = ACTIONS(112),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_POUND_BANG] = ACTIONS(116),
    [sym__COM_LINE] = ACTIONS(116),
    [sym__COM_LINE_DEPR] = ACTIONS(118),
    [anon_sym_SLASH_STAR] = ACTIONS(116),
    [anon_sym_include_file] = ACTIONS(116),
    [anon_sym_import_file] = ACTIONS(116),
    [anon_sym_loadmodule] = ACTIONS(118),
    [anon_sym_loadmodulex] = ACTIONS(116),
    [anon_sym_request_route] = ACTIONS(116),
    [anon_sym_reply_route] = ACTIONS(116),
    [anon_sym_branch_route] = ACTIONS(116),
    [anon_sym_failure_route] = ACTIONS(116),
    [anon_sym_onreply_route] = ACTIONS(116),
    [anon_sym_event_route] = ACTIONS(116),
    [anon_sym_onsend_route] = ACTIONS(116),
    [anon_sym_route] = ACTIONS(116),
    [anon_sym_cfgengine] = ACTIONS(116),
    [anon_sym_debug] = ACTIONS(116),
    [anon_sym_log_name] = ACTIONS(116),
    [anon_sym_log_stderror] = ACTIONS(116),
    [anon_sym_log_facility] = ACTIONS(116),
    [anon_sym_log_color] = ACTIONS(116),
    [anon_sym_log_prefix] = ACTIONS(118),
    [anon_sym_log_prefix_mode] = ACTIONS(116),
    [anon_sym_log_engine_type] = ACTIONS(116),
    [anon_sym_log_engine_data] = ACTIONS(116),
    [anon_sym_fork] = ACTIONS(118),
    [anon_sym_fork_delay] = ACTIONS(116),
    [anon_sym_modinit_delay] = ACTIONS(116),
    [anon_sym_xavp_via_params] = ACTIONS(116),
    [anon_sym_xavp_via_fields] = ACTIONS(116),
    [anon_sym_xavp_via_reply_params] = ACTIONS(116),
    [anon_sym_listen] = ACTIONS(116),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(116),
    [anon_sym_virtual] = ACTIONS(116),
    [anon_sym_name_PIPENAME] = ACTIONS(116),
    [anon_sym_alias] = ACTIONS(116),
    [anon_sym_domain] = ACTIONS(116),
    [anon_sym_auto_aliases] = ACTIONS(116),
    [anon_sym_auto_domains] = ACTIONS(116),
    [anon_sym_dns] = ACTIONS(118),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(116),
    [anon_sym_dns_try_ipv6] = ACTIONS(116),
    [anon_sym_dns_try_naptr] = ACTIONS(116),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(116),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(116),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(116),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(116),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(116),
    [anon_sym_dns_retr_time] = ACTIONS(116),
    [anon_sym_dns_slow_query_ms] = ACTIONS(116),
    [anon_sym_dns_retr_no] = ACTIONS(116),
    [anon_sym_dns_servers_no] = ACTIONS(116),
    [anon_sym_dns_use_search_list] = ACTIONS(116),
    [anon_sym_dns_search_full_match] = ACTIONS(116),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(116),
    [anon_sym_dns_cache_init] = ACTIONS(116),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(116),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(116),
    [anon_sym_dns_cache_flags] = ACTIONS(116),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(116),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(116),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(116),
    [anon_sym_dns_cache_mem] = ACTIONS(116),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(116),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(116),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(116),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(116),
    [anon_sym_auto_bind_ipv6] = ACTIONS(116),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(116),
    [anon_sym_ipv6_hex_style] = ACTIONS(116),
    [anon_sym_modparam] = ACTIONS(118),
    [anon_sym_modparamx] = ACTIONS(116),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_POUND_BANG] = ACTIONS(120),
    [sym__COM_LINE] = ACTIONS(120),
    [sym__COM_LINE_DEPR] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(120),
    [anon_sym_include_file] = ACTIONS(120),
    [anon_sym_import_file] = ACTIONS(120),
    [anon_sym_loadmodule] = ACTIONS(122),
    [anon_sym_loadmodulex] = ACTIONS(120),
    [anon_sym_request_route] = ACTIONS(120),
    [anon_sym_reply_route] = ACTIONS(120),
    [anon_sym_branch_route] = ACTIONS(120),
    [anon_sym_failure_route] = ACTIONS(120),
    [anon_sym_onreply_route] = ACTIONS(120),
    [anon_sym_event_route] = ACTIONS(120),
    [anon_sym_onsend_route] = ACTIONS(120),
    [anon_sym_route] = ACTIONS(120),
    [anon_sym_cfgengine] = ACTIONS(120),
    [anon_sym_debug] = ACTIONS(120),
    [anon_sym_log_name] = ACTIONS(120),
    [anon_sym_log_stderror] = ACTIONS(120),
    [anon_sym_log_facility] = ACTIONS(120),
    [anon_sym_log_color] = ACTIONS(120),
    [anon_sym_log_prefix] = ACTIONS(122),
    [anon_sym_log_prefix_mode] = ACTIONS(120),
    [anon_sym_log_engine_type] = ACTIONS(120),
    [anon_sym_log_engine_data] = ACTIONS(120),
    [anon_sym_fork] = ACTIONS(122),
    [anon_sym_fork_delay] = ACTIONS(120),
    [anon_sym_modinit_delay] = ACTIONS(120),
    [anon_sym_xavp_via_params] = ACTIONS(120),
    [anon_sym_xavp_via_fields] = ACTIONS(120),
    [anon_sym_xavp_via_reply_params] = ACTIONS(120),
    [anon_sym_listen] = ACTIONS(120),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(120),
    [anon_sym_virtual] = ACTIONS(120),
    [anon_sym_name_PIPENAME] = ACTIONS(120),
    [anon_sym_alias] = ACTIONS(120),
    [anon_sym_domain] = ACTIONS(120),
    [anon_sym_auto_aliases] = ACTIONS(120),
    [anon_sym_auto_domains] = ACTIONS(120),
    [anon_sym_dns] = ACTIONS(122),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(120),
    [anon_sym_dns_try_ipv6] = ACTIONS(120),
    [anon_sym_dns_try_naptr] = ACTIONS(120),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(120),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(120),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(120),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(120),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(120),
    [anon_sym_dns_retr_time] = ACTIONS(120),
    [anon_sym_dns_slow_query_ms] = ACTIONS(120),
    [anon_sym_dns_retr_no] = ACTIONS(120),
    [anon_sym_dns_servers_no] = ACTIONS(120),
    [anon_sym_dns_use_search_list] = ACTIONS(120),
    [anon_sym_dns_search_full_match] = ACTIONS(120),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(120),
    [anon_sym_dns_cache_init] = ACTIONS(120),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(120),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(120),
    [anon_sym_dns_cache_flags] = ACTIONS(120),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(120),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(120),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(120),
    [anon_sym_dns_cache_mem] = ACTIONS(120),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(120),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(120),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(120),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(120),
    [anon_sym_auto_bind_ipv6] = ACTIONS(120),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(120),
    [anon_sym_ipv6_hex_style] = ACTIONS(120),
    [anon_sym_modparam] = ACTIONS(122),
    [anon_sym_modparamx] = ACTIONS(120),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_POUND_BANG] = ACTIONS(124),
    [sym__COM_LINE] = ACTIONS(124),
    [sym__COM_LINE_DEPR] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_include_file] = ACTIONS(124),
    [anon_sym_import_file] = ACTIONS(124),
    [anon_sym_loadmodule] = ACTIONS(126),
    [anon_sym_loadmodulex] = ACTIONS(124),
    [anon_sym_request_route] = ACTIONS(124),
    [anon_sym_reply_route] = ACTIONS(124),
    [anon_sym_branch_route] = ACTIONS(124),
    [anon_sym_failure_route] = ACTIONS(124),
    [anon_sym_onreply_route] = ACTIONS(124),
    [anon_sym_event_route] = ACTIONS(124),
    [anon_sym_onsend_route] = ACTIONS(124),
    [anon_sym_route] = ACTIONS(124),
    [anon_sym_cfgengine] = ACTIONS(124),
    [anon_sym_debug] = ACTIONS(124),
    [anon_sym_log_name] = ACTIONS(124),
    [anon_sym_log_stderror] = ACTIONS(124),
    [anon_sym_log_facility] = ACTIONS(124),
    [anon_sym_log_color] = ACTIONS(124),
    [anon_sym_log_prefix] = ACTIONS(126),
    [anon_sym_log_prefix_mode] = ACTIONS(124),
    [anon_sym_log_engine_type] = ACTIONS(124),
    [anon_sym_log_engine_data] = ACTIONS(124),
    [anon_sym_fork] = ACTIONS(126),
    [anon_sym_fork_delay] = ACTIONS(124),
    [anon_sym_modinit_delay] = ACTIONS(124),
    [anon_sym_xavp_via_params] = ACTIONS(124),
    [anon_sym_xavp_via_fields] = ACTIONS(124),
    [anon_sym_xavp_via_reply_params] = ACTIONS(124),
    [anon_sym_listen] = ACTIONS(124),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(124),
    [anon_sym_virtual] = ACTIONS(124),
    [anon_sym_name_PIPENAME] = ACTIONS(124),
    [anon_sym_alias] = ACTIONS(124),
    [anon_sym_domain] = ACTIONS(124),
    [anon_sym_auto_aliases] = ACTIONS(124),
    [anon_sym_auto_domains] = ACTIONS(124),
    [anon_sym_dns] = ACTIONS(126),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(124),
    [anon_sym_dns_try_ipv6] = ACTIONS(124),
    [anon_sym_dns_try_naptr] = ACTIONS(124),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(124),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(124),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(124),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(124),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(124),
    [anon_sym_dns_retr_time] = ACTIONS(124),
    [anon_sym_dns_slow_query_ms] = ACTIONS(124),
    [anon_sym_dns_retr_no] = ACTIONS(124),
    [anon_sym_dns_servers_no] = ACTIONS(124),
    [anon_sym_dns_use_search_list] = ACTIONS(124),
    [anon_sym_dns_search_full_match] = ACTIONS(124),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(124),
    [anon_sym_dns_cache_init] = ACTIONS(124),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(124),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(124),
    [anon_sym_dns_cache_flags] = ACTIONS(124),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(124),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(124),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(124),
    [anon_sym_dns_cache_mem] = ACTIONS(124),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(124),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(124),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(124),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(124),
    [anon_sym_auto_bind_ipv6] = ACTIONS(124),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(124),
    [anon_sym_ipv6_hex_style] = ACTIONS(124),
    [anon_sym_modparam] = ACTIONS(126),
    [anon_sym_modparamx] = ACTIONS(124),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_POUND_BANG] = ACTIONS(128),
    [sym__COM_LINE] = ACTIONS(128),
    [sym__COM_LINE_DEPR] = ACTIONS(130),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_include_file] = ACTIONS(128),
    [anon_sym_import_file] = ACTIONS(128),
    [anon_sym_loadmodule] = ACTIONS(130),
    [anon_sym_loadmodulex] = ACTIONS(128),
    [anon_sym_request_route] = ACTIONS(128),
    [anon_sym_reply_route] = ACTIONS(128),
    [anon_sym_branch_route] = ACTIONS(128),
    [anon_sym_failure_route] = ACTIONS(128),
    [anon_sym_onreply_route] = ACTIONS(128),
    [anon_sym_event_route] = ACTIONS(128),
    [anon_sym_onsend_route] = ACTIONS(128),
    [anon_sym_route] = ACTIONS(128),
    [anon_sym_cfgengine] = ACTIONS(128),
    [anon_sym_debug] = ACTIONS(128),
    [anon_sym_log_name] = ACTIONS(128),
    [anon_sym_log_stderror] = ACTIONS(128),
    [anon_sym_log_facility] = ACTIONS(128),
    [anon_sym_log_color] = ACTIONS(128),
    [anon_sym_log_prefix] = ACTIONS(130),
    [anon_sym_log_prefix_mode] = ACTIONS(128),
    [anon_sym_log_engine_type] = ACTIONS(128),
    [anon_sym_log_engine_data] = ACTIONS(128),
    [anon_sym_fork] = ACTIONS(130),
    [anon_sym_fork_delay] = ACTIONS(128),
    [anon_sym_modinit_delay] = ACTIONS(128),
    [anon_sym_xavp_via_params] = ACTIONS(128),
    [anon_sym_xavp_via_fields] = ACTIONS(128),
    [anon_sym_xavp_via_reply_params] = ACTIONS(128),
    [anon_sym_listen] = ACTIONS(128),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(128),
    [anon_sym_virtual] = ACTIONS(128),
    [anon_sym_name_PIPENAME] = ACTIONS(128),
    [anon_sym_alias] = ACTIONS(128),
    [anon_sym_domain] = ACTIONS(128),
    [anon_sym_auto_aliases] = ACTIONS(128),
    [anon_sym_auto_domains] = ACTIONS(128),
    [anon_sym_dns] = ACTIONS(130),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(128),
    [anon_sym_dns_try_ipv6] = ACTIONS(128),
    [anon_sym_dns_try_naptr] = ACTIONS(128),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(128),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(128),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(128),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(128),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(128),
    [anon_sym_dns_retr_time] = ACTIONS(128),
    [anon_sym_dns_slow_query_ms] = ACTIONS(128),
    [anon_sym_dns_retr_no] = ACTIONS(128),
    [anon_sym_dns_servers_no] = ACTIONS(128),
    [anon_sym_dns_use_search_list] = ACTIONS(128),
    [anon_sym_dns_search_full_match] = ACTIONS(128),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(128),
    [anon_sym_dns_cache_init] = ACTIONS(128),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(128),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(128),
    [anon_sym_dns_cache_flags] = ACTIONS(128),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(128),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(128),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(128),
    [anon_sym_dns_cache_mem] = ACTIONS(128),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(128),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(128),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(128),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(128),
    [anon_sym_auto_bind_ipv6] = ACTIONS(128),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(128),
    [anon_sym_ipv6_hex_style] = ACTIONS(128),
    [anon_sym_modparam] = ACTIONS(130),
    [anon_sym_modparamx] = ACTIONS(128),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_POUND_BANG] = ACTIONS(132),
    [sym__COM_LINE] = ACTIONS(132),
    [sym__COM_LINE_DEPR] = ACTIONS(134),
    [anon_sym_SLASH_STAR] = ACTIONS(132),
    [anon_sym_include_file] = ACTIONS(132),
    [anon_sym_import_file] = ACTIONS(132),
    [anon_sym_loadmodule] = ACTIONS(134),
    [anon_sym_loadmodulex] = ACTIONS(132),
    [anon_sym_request_route] = ACTIONS(132),
    [anon_sym_reply_route] = ACTIONS(132),
    [anon_sym_branch_route] = ACTIONS(132),
    [anon_sym_failure_route] = ACTIONS(132),
    [anon_sym_onreply_route] = ACTIONS(132),
    [anon_sym_event_route] = ACTIONS(132),
    [anon_sym_onsend_route] = ACTIONS(132),
    [anon_sym_route] = ACTIONS(132),
    [anon_sym_cfgengine] = ACTIONS(132),
    [anon_sym_debug] = ACTIONS(132),
    [anon_sym_log_name] = ACTIONS(132),
    [anon_sym_log_stderror] = ACTIONS(132),
    [anon_sym_log_facility] = ACTIONS(132),
    [anon_sym_log_color] = ACTIONS(132),
    [anon_sym_log_prefix] = ACTIONS(134),
    [anon_sym_log_prefix_mode] = ACTIONS(132),
    [anon_sym_log_engine_type] = ACTIONS(132),
    [anon_sym_log_engine_data] = ACTIONS(132),
    [anon_sym_fork] = ACTIONS(134),
    [anon_sym_fork_delay] = ACTIONS(132),
    [anon_sym_modinit_delay] = ACTIONS(132),
    [anon_sym_xavp_via_params] = ACTIONS(132),
    [anon_sym_xavp_via_fields] = ACTIONS(132),
    [anon_sym_xavp_via_reply_params] = ACTIONS(132),
    [anon_sym_listen] = ACTIONS(132),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(132),
    [anon_sym_virtual] = ACTIONS(132),
    [anon_sym_name_PIPENAME] = ACTIONS(132),
    [anon_sym_alias] = ACTIONS(132),
    [anon_sym_domain] = ACTIONS(132),
    [anon_sym_auto_aliases] = ACTIONS(132),
    [anon_sym_auto_domains] = ACTIONS(132),
    [anon_sym_dns] = ACTIONS(134),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(132),
    [anon_sym_dns_try_ipv6] = ACTIONS(132),
    [anon_sym_dns_try_naptr] = ACTIONS(132),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(132),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(132),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(132),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(132),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(132),
    [anon_sym_dns_retr_time] = ACTIONS(132),
    [anon_sym_dns_slow_query_ms] = ACTIONS(132),
    [anon_sym_dns_retr_no] = ACTIONS(132),
    [anon_sym_dns_servers_no] = ACTIONS(132),
    [anon_sym_dns_use_search_list] = ACTIONS(132),
    [anon_sym_dns_search_full_match] = ACTIONS(132),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(132),
    [anon_sym_dns_cache_init] = ACTIONS(132),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(132),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(132),
    [anon_sym_dns_cache_flags] = ACTIONS(132),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(132),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(132),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(132),
    [anon_sym_dns_cache_mem] = ACTIONS(132),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(132),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(132),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(132),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(132),
    [anon_sym_auto_bind_ipv6] = ACTIONS(132),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(132),
    [anon_sym_ipv6_hex_style] = ACTIONS(132),
    [anon_sym_modparam] = ACTIONS(134),
    [anon_sym_modparamx] = ACTIONS(132),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_POUND_BANG] = ACTIONS(136),
    [sym__COM_LINE] = ACTIONS(136),
    [sym__COM_LINE_DEPR] = ACTIONS(138),
    [anon_sym_SLASH_STAR] = ACTIONS(136),
    [anon_sym_include_file] = ACTIONS(136),
    [anon_sym_import_file] = ACTIONS(136),
    [anon_sym_loadmodule] = ACTIONS(138),
    [anon_sym_loadmodulex] = ACTIONS(136),
    [anon_sym_request_route] = ACTIONS(136),
    [anon_sym_reply_route] = ACTIONS(136),
    [anon_sym_branch_route] = ACTIONS(136),
    [anon_sym_failure_route] = ACTIONS(136),
    [anon_sym_onreply_route] = ACTIONS(136),
    [anon_sym_event_route] = ACTIONS(136),
    [anon_sym_onsend_route] = ACTIONS(136),
    [anon_sym_route] = ACTIONS(136),
    [anon_sym_cfgengine] = ACTIONS(136),
    [anon_sym_debug] = ACTIONS(136),
    [anon_sym_log_name] = ACTIONS(136),
    [anon_sym_log_stderror] = ACTIONS(136),
    [anon_sym_log_facility] = ACTIONS(136),
    [anon_sym_log_color] = ACTIONS(136),
    [anon_sym_log_prefix] = ACTIONS(138),
    [anon_sym_log_prefix_mode] = ACTIONS(136),
    [anon_sym_log_engine_type] = ACTIONS(136),
    [anon_sym_log_engine_data] = ACTIONS(136),
    [anon_sym_fork] = ACTIONS(138),
    [anon_sym_fork_delay] = ACTIONS(136),
    [anon_sym_modinit_delay] = ACTIONS(136),
    [anon_sym_xavp_via_params] = ACTIONS(136),
    [anon_sym_xavp_via_fields] = ACTIONS(136),
    [anon_sym_xavp_via_reply_params] = ACTIONS(136),
    [anon_sym_listen] = ACTIONS(136),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(136),
    [anon_sym_virtual] = ACTIONS(136),
    [anon_sym_name_PIPENAME] = ACTIONS(136),
    [anon_sym_alias] = ACTIONS(136),
    [anon_sym_domain] = ACTIONS(136),
    [anon_sym_auto_aliases] = ACTIONS(136),
    [anon_sym_auto_domains] = ACTIONS(136),
    [anon_sym_dns] = ACTIONS(138),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(136),
    [anon_sym_dns_try_ipv6] = ACTIONS(136),
    [anon_sym_dns_try_naptr] = ACTIONS(136),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(136),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(136),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(136),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(136),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(136),
    [anon_sym_dns_retr_time] = ACTIONS(136),
    [anon_sym_dns_slow_query_ms] = ACTIONS(136),
    [anon_sym_dns_retr_no] = ACTIONS(136),
    [anon_sym_dns_servers_no] = ACTIONS(136),
    [anon_sym_dns_use_search_list] = ACTIONS(136),
    [anon_sym_dns_search_full_match] = ACTIONS(136),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(136),
    [anon_sym_dns_cache_init] = ACTIONS(136),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(136),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(136),
    [anon_sym_dns_cache_flags] = ACTIONS(136),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(136),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(136),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(136),
    [anon_sym_dns_cache_mem] = ACTIONS(136),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(136),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(136),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(136),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(136),
    [anon_sym_auto_bind_ipv6] = ACTIONS(136),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(136),
    [anon_sym_ipv6_hex_style] = ACTIONS(136),
    [anon_sym_modparam] = ACTIONS(138),
    [anon_sym_modparamx] = ACTIONS(136),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_POUND_BANG] = ACTIONS(140),
    [sym__COM_LINE] = ACTIONS(140),
    [sym__COM_LINE_DEPR] = ACTIONS(142),
    [anon_sym_SLASH_STAR] = ACTIONS(140),
    [anon_sym_include_file] = ACTIONS(140),
    [anon_sym_import_file] = ACTIONS(140),
    [anon_sym_loadmodule] = ACTIONS(142),
    [anon_sym_loadmodulex] = ACTIONS(140),
    [anon_sym_request_route] = ACTIONS(140),
    [anon_sym_reply_route] = ACTIONS(140),
    [anon_sym_branch_route] = ACTIONS(140),
    [anon_sym_failure_route] = ACTIONS(140),
    [anon_sym_onreply_route] = ACTIONS(140),
    [anon_sym_event_route] = ACTIONS(140),
    [anon_sym_onsend_route] = ACTIONS(140),
    [anon_sym_route] = ACTIONS(140),
    [anon_sym_cfgengine] = ACTIONS(140),
    [anon_sym_debug] = ACTIONS(140),
    [anon_sym_log_name] = ACTIONS(140),
    [anon_sym_log_stderror] = ACTIONS(140),
    [anon_sym_log_facility] = ACTIONS(140),
    [anon_sym_log_color] = ACTIONS(140),
    [anon_sym_log_prefix] = ACTIONS(142),
    [anon_sym_log_prefix_mode] = ACTIONS(140),
    [anon_sym_log_engine_type] = ACTIONS(140),
    [anon_sym_log_engine_data] = ACTIONS(140),
    [anon_sym_fork] = ACTIONS(142),
    [anon_sym_fork_delay] = ACTIONS(140),
    [anon_sym_modinit_delay] = ACTIONS(140),
    [anon_sym_xavp_via_params] = ACTIONS(140),
    [anon_sym_xavp_via_fields] = ACTIONS(140),
    [anon_sym_xavp_via_reply_params] = ACTIONS(140),
    [anon_sym_listen] = ACTIONS(140),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(140),
    [anon_sym_virtual] = ACTIONS(140),
    [anon_sym_name_PIPENAME] = ACTIONS(140),
    [anon_sym_alias] = ACTIONS(140),
    [anon_sym_domain] = ACTIONS(140),
    [anon_sym_auto_aliases] = ACTIONS(140),
    [anon_sym_auto_domains] = ACTIONS(140),
    [anon_sym_dns] = ACTIONS(142),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(140),
    [anon_sym_dns_try_ipv6] = ACTIONS(140),
    [anon_sym_dns_try_naptr] = ACTIONS(140),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(140),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(140),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(140),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(140),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(140),
    [anon_sym_dns_retr_time] = ACTIONS(140),
    [anon_sym_dns_slow_query_ms] = ACTIONS(140),
    [anon_sym_dns_retr_no] = ACTIONS(140),
    [anon_sym_dns_servers_no] = ACTIONS(140),
    [anon_sym_dns_use_search_list] = ACTIONS(140),
    [anon_sym_dns_search_full_match] = ACTIONS(140),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(140),
    [anon_sym_dns_cache_init] = ACTIONS(140),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(140),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(140),
    [anon_sym_dns_cache_flags] = ACTIONS(140),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(140),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(140),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(140),
    [anon_sym_dns_cache_mem] = ACTIONS(140),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(140),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(140),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(140),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(140),
    [anon_sym_auto_bind_ipv6] = ACTIONS(140),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(140),
    [anon_sym_ipv6_hex_style] = ACTIONS(140),
    [anon_sym_modparam] = ACTIONS(142),
    [anon_sym_modparamx] = ACTIONS(140),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_POUND_BANG] = ACTIONS(144),
    [sym__COM_LINE] = ACTIONS(144),
    [sym__COM_LINE_DEPR] = ACTIONS(146),
    [anon_sym_SLASH_STAR] = ACTIONS(144),
    [anon_sym_include_file] = ACTIONS(144),
    [anon_sym_import_file] = ACTIONS(144),
    [anon_sym_loadmodule] = ACTIONS(146),
    [anon_sym_loadmodulex] = ACTIONS(144),
    [anon_sym_request_route] = ACTIONS(144),
    [anon_sym_reply_route] = ACTIONS(144),
    [anon_sym_branch_route] = ACTIONS(144),
    [anon_sym_failure_route] = ACTIONS(144),
    [anon_sym_onreply_route] = ACTIONS(144),
    [anon_sym_event_route] = ACTIONS(144),
    [anon_sym_onsend_route] = ACTIONS(144),
    [anon_sym_route] = ACTIONS(144),
    [anon_sym_cfgengine] = ACTIONS(144),
    [anon_sym_debug] = ACTIONS(144),
    [anon_sym_log_name] = ACTIONS(144),
    [anon_sym_log_stderror] = ACTIONS(144),
    [anon_sym_log_facility] = ACTIONS(144),
    [anon_sym_log_color] = ACTIONS(144),
    [anon_sym_log_prefix] = ACTIONS(146),
    [anon_sym_log_prefix_mode] = ACTIONS(144),
    [anon_sym_log_engine_type] = ACTIONS(144),
    [anon_sym_log_engine_data] = ACTIONS(144),
    [anon_sym_fork] = ACTIONS(146),
    [anon_sym_fork_delay] = ACTIONS(144),
    [anon_sym_modinit_delay] = ACTIONS(144),
    [anon_sym_xavp_via_params] = ACTIONS(144),
    [anon_sym_xavp_via_fields] = ACTIONS(144),
    [anon_sym_xavp_via_reply_params] = ACTIONS(144),
    [anon_sym_listen] = ACTIONS(144),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(144),
    [anon_sym_virtual] = ACTIONS(144),
    [anon_sym_name_PIPENAME] = ACTIONS(144),
    [anon_sym_alias] = ACTIONS(144),
    [anon_sym_domain] = ACTIONS(144),
    [anon_sym_auto_aliases] = ACTIONS(144),
    [anon_sym_auto_domains] = ACTIONS(144),
    [anon_sym_dns] = ACTIONS(146),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(144),
    [anon_sym_dns_try_ipv6] = ACTIONS(144),
    [anon_sym_dns_try_naptr] = ACTIONS(144),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(144),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(144),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(144),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(144),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(144),
    [anon_sym_dns_retr_time] = ACTIONS(144),
    [anon_sym_dns_slow_query_ms] = ACTIONS(144),
    [anon_sym_dns_retr_no] = ACTIONS(144),
    [anon_sym_dns_servers_no] = ACTIONS(144),
    [anon_sym_dns_use_search_list] = ACTIONS(144),
    [anon_sym_dns_search_full_match] = ACTIONS(144),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(144),
    [anon_sym_dns_cache_init] = ACTIONS(144),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(144),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(144),
    [anon_sym_dns_cache_flags] = ACTIONS(144),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(144),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(144),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(144),
    [anon_sym_dns_cache_mem] = ACTIONS(144),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(144),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(144),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(144),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(144),
    [anon_sym_auto_bind_ipv6] = ACTIONS(144),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(144),
    [anon_sym_ipv6_hex_style] = ACTIONS(144),
    [anon_sym_modparam] = ACTIONS(146),
    [anon_sym_modparamx] = ACTIONS(144),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_POUND_BANG] = ACTIONS(148),
    [sym__COM_LINE] = ACTIONS(148),
    [sym__COM_LINE_DEPR] = ACTIONS(150),
    [anon_sym_SLASH_STAR] = ACTIONS(148),
    [anon_sym_include_file] = ACTIONS(148),
    [anon_sym_import_file] = ACTIONS(148),
    [anon_sym_loadmodule] = ACTIONS(150),
    [anon_sym_loadmodulex] = ACTIONS(148),
    [anon_sym_request_route] = ACTIONS(148),
    [anon_sym_reply_route] = ACTIONS(148),
    [anon_sym_branch_route] = ACTIONS(148),
    [anon_sym_failure_route] = ACTIONS(148),
    [anon_sym_onreply_route] = ACTIONS(148),
    [anon_sym_event_route] = ACTIONS(148),
    [anon_sym_onsend_route] = ACTIONS(148),
    [anon_sym_route] = ACTIONS(148),
    [anon_sym_cfgengine] = ACTIONS(148),
    [anon_sym_debug] = ACTIONS(148),
    [anon_sym_log_name] = ACTIONS(148),
    [anon_sym_log_stderror] = ACTIONS(148),
    [anon_sym_log_facility] = ACTIONS(148),
    [anon_sym_log_color] = ACTIONS(148),
    [anon_sym_log_prefix] = ACTIONS(150),
    [anon_sym_log_prefix_mode] = ACTIONS(148),
    [anon_sym_log_engine_type] = ACTIONS(148),
    [anon_sym_log_engine_data] = ACTIONS(148),
    [anon_sym_fork] = ACTIONS(150),
    [anon_sym_fork_delay] = ACTIONS(148),
    [anon_sym_modinit_delay] = ACTIONS(148),
    [anon_sym_xavp_via_params] = ACTIONS(148),
    [anon_sym_xavp_via_fields] = ACTIONS(148),
    [anon_sym_xavp_via_reply_params] = ACTIONS(148),
    [anon_sym_listen] = ACTIONS(148),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(148),
    [anon_sym_virtual] = ACTIONS(148),
    [anon_sym_name_PIPENAME] = ACTIONS(148),
    [anon_sym_alias] = ACTIONS(148),
    [anon_sym_domain] = ACTIONS(148),
    [anon_sym_auto_aliases] = ACTIONS(148),
    [anon_sym_auto_domains] = ACTIONS(148),
    [anon_sym_dns] = ACTIONS(150),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(148),
    [anon_sym_dns_try_ipv6] = ACTIONS(148),
    [anon_sym_dns_try_naptr] = ACTIONS(148),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(148),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(148),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(148),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(148),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(148),
    [anon_sym_dns_retr_time] = ACTIONS(148),
    [anon_sym_dns_slow_query_ms] = ACTIONS(148),
    [anon_sym_dns_retr_no] = ACTIONS(148),
    [anon_sym_dns_servers_no] = ACTIONS(148),
    [anon_sym_dns_use_search_list] = ACTIONS(148),
    [anon_sym_dns_search_full_match] = ACTIONS(148),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(148),
    [anon_sym_dns_cache_init] = ACTIONS(148),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(148),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(148),
    [anon_sym_dns_cache_flags] = ACTIONS(148),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(148),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(148),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(148),
    [anon_sym_dns_cache_mem] = ACTIONS(148),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(148),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(148),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(148),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(148),
    [anon_sym_auto_bind_ipv6] = ACTIONS(148),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(148),
    [anon_sym_ipv6_hex_style] = ACTIONS(148),
    [anon_sym_modparam] = ACTIONS(150),
    [anon_sym_modparamx] = ACTIONS(148),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_POUND_BANG] = ACTIONS(88),
    [sym__COM_LINE] = ACTIONS(88),
    [sym__COM_LINE_DEPR] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(88),
    [anon_sym_include_file] = ACTIONS(88),
    [anon_sym_import_file] = ACTIONS(88),
    [anon_sym_loadmodule] = ACTIONS(94),
    [anon_sym_loadmodulex] = ACTIONS(88),
    [anon_sym_request_route] = ACTIONS(88),
    [anon_sym_reply_route] = ACTIONS(88),
    [anon_sym_branch_route] = ACTIONS(88),
    [anon_sym_failure_route] = ACTIONS(88),
    [anon_sym_onreply_route] = ACTIONS(88),
    [anon_sym_event_route] = ACTIONS(88),
    [anon_sym_onsend_route] = ACTIONS(88),
    [anon_sym_route] = ACTIONS(88),
    [anon_sym_cfgengine] = ACTIONS(88),
    [anon_sym_debug] = ACTIONS(88),
    [anon_sym_log_name] = ACTIONS(88),
    [anon_sym_log_stderror] = ACTIONS(88),
    [anon_sym_log_facility] = ACTIONS(88),
    [anon_sym_log_color] = ACTIONS(88),
    [anon_sym_log_prefix] = ACTIONS(94),
    [anon_sym_log_prefix_mode] = ACTIONS(88),
    [anon_sym_log_engine_type] = ACTIONS(88),
    [anon_sym_log_engine_data] = ACTIONS(88),
    [anon_sym_fork] = ACTIONS(94),
    [anon_sym_fork_delay] = ACTIONS(88),
    [anon_sym_modinit_delay] = ACTIONS(88),
    [anon_sym_xavp_via_params] = ACTIONS(88),
    [anon_sym_xavp_via_fields] = ACTIONS(88),
    [anon_sym_xavp_via_reply_params] = ACTIONS(88),
    [anon_sym_listen] = ACTIONS(88),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(88),
    [anon_sym_virtual] = ACTIONS(88),
    [anon_sym_name_PIPENAME] = ACTIONS(88),
    [anon_sym_alias] = ACTIONS(88),
    [anon_sym_domain] = ACTIONS(88),
    [anon_sym_auto_aliases] = ACTIONS(88),
    [anon_sym_auto_domains] = ACTIONS(88),
    [anon_sym_dns] = ACTIONS(94),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(88),
    [anon_sym_dns_try_ipv6] = ACTIONS(88),
    [anon_sym_dns_try_naptr] = ACTIONS(88),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(88),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(88),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(88),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(88),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(88),
    [anon_sym_dns_retr_time] = ACTIONS(88),
    [anon_sym_dns_slow_query_ms] = ACTIONS(88),
    [anon_sym_dns_retr_no] = ACTIONS(88),
    [anon_sym_dns_servers_no] = ACTIONS(88),
    [anon_sym_dns_use_search_list] = ACTIONS(88),
    [anon_sym_dns_search_full_match] = ACTIONS(88),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(88),
    [anon_sym_dns_cache_init] = ACTIONS(88),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(88),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(88),
    [anon_sym_dns_cache_flags] = ACTIONS(88),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(88),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(88),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(88),
    [anon_sym_dns_cache_mem] = ACTIONS(88),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(88),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(88),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(88),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(88),
    [anon_sym_auto_bind_ipv6] = ACTIONS(88),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(88),
    [anon_sym_ipv6_hex_style] = ACTIONS(88),
    [anon_sym_modparam] = ACTIONS(94),
    [anon_sym_modparamx] = ACTIONS(88),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_POUND_BANG] = ACTIONS(152),
    [sym__COM_LINE] = ACTIONS(152),
    [sym__COM_LINE_DEPR] = ACTIONS(154),
    [anon_sym_SLASH_STAR] = ACTIONS(152),
    [anon_sym_include_file] = ACTIONS(152),
    [anon_sym_import_file] = ACTIONS(152),
    [anon_sym_loadmodule] = ACTIONS(154),
    [anon_sym_loadmodulex] = ACTIONS(152),
    [anon_sym_request_route] = ACTIONS(152),
    [anon_sym_reply_route] = ACTIONS(152),
    [anon_sym_branch_route] = ACTIONS(152),
    [anon_sym_failure_route] = ACTIONS(152),
    [anon_sym_onreply_route] = ACTIONS(152),
    [anon_sym_event_route] = ACTIONS(152),
    [anon_sym_onsend_route] = ACTIONS(152),
    [anon_sym_route] = ACTIONS(152),
    [anon_sym_cfgengine] = ACTIONS(152),
    [anon_sym_debug] = ACTIONS(152),
    [anon_sym_log_name] = ACTIONS(152),
    [anon_sym_log_stderror] = ACTIONS(152),
    [anon_sym_log_facility] = ACTIONS(152),
    [anon_sym_log_color] = ACTIONS(152),
    [anon_sym_log_prefix] = ACTIONS(154),
    [anon_sym_log_prefix_mode] = ACTIONS(152),
    [anon_sym_log_engine_type] = ACTIONS(152),
    [anon_sym_log_engine_data] = ACTIONS(152),
    [anon_sym_fork] = ACTIONS(154),
    [anon_sym_fork_delay] = ACTIONS(152),
    [anon_sym_modinit_delay] = ACTIONS(152),
    [anon_sym_xavp_via_params] = ACTIONS(152),
    [anon_sym_xavp_via_fields] = ACTIONS(152),
    [anon_sym_xavp_via_reply_params] = ACTIONS(152),
    [anon_sym_listen] = ACTIONS(152),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(152),
    [anon_sym_virtual] = ACTIONS(152),
    [anon_sym_name_PIPENAME] = ACTIONS(152),
    [anon_sym_alias] = ACTIONS(152),
    [anon_sym_domain] = ACTIONS(152),
    [anon_sym_auto_aliases] = ACTIONS(152),
    [anon_sym_auto_domains] = ACTIONS(152),
    [anon_sym_dns] = ACTIONS(154),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(152),
    [anon_sym_dns_try_ipv6] = ACTIONS(152),
    [anon_sym_dns_try_naptr] = ACTIONS(152),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(152),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(152),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(152),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(152),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(152),
    [anon_sym_dns_retr_time] = ACTIONS(152),
    [anon_sym_dns_slow_query_ms] = ACTIONS(152),
    [anon_sym_dns_retr_no] = ACTIONS(152),
    [anon_sym_dns_servers_no] = ACTIONS(152),
    [anon_sym_dns_use_search_list] = ACTIONS(152),
    [anon_sym_dns_search_full_match] = ACTIONS(152),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(152),
    [anon_sym_dns_cache_init] = ACTIONS(152),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(152),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(152),
    [anon_sym_dns_cache_flags] = ACTIONS(152),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(152),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(152),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(152),
    [anon_sym_dns_cache_mem] = ACTIONS(152),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(152),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(152),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(152),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(152),
    [anon_sym_auto_bind_ipv6] = ACTIONS(152),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(152),
    [anon_sym_ipv6_hex_style] = ACTIONS(152),
    [anon_sym_modparam] = ACTIONS(154),
    [anon_sym_modparamx] = ACTIONS(152),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_POUND_BANG] = ACTIONS(156),
    [sym__COM_LINE] = ACTIONS(156),
    [sym__COM_LINE_DEPR] = ACTIONS(158),
    [anon_sym_SLASH_STAR] = ACTIONS(156),
    [anon_sym_include_file] = ACTIONS(156),
    [anon_sym_import_file] = ACTIONS(156),
    [anon_sym_loadmodule] = ACTIONS(158),
    [anon_sym_loadmodulex] = ACTIONS(156),
    [anon_sym_request_route] = ACTIONS(156),
    [anon_sym_reply_route] = ACTIONS(156),
    [anon_sym_branch_route] = ACTIONS(156),
    [anon_sym_failure_route] = ACTIONS(156),
    [anon_sym_onreply_route] = ACTIONS(156),
    [anon_sym_event_route] = ACTIONS(156),
    [anon_sym_onsend_route] = ACTIONS(156),
    [anon_sym_route] = ACTIONS(156),
    [anon_sym_cfgengine] = ACTIONS(156),
    [anon_sym_debug] = ACTIONS(156),
    [anon_sym_log_name] = ACTIONS(156),
    [anon_sym_log_stderror] = ACTIONS(156),
    [anon_sym_log_facility] = ACTIONS(156),
    [anon_sym_log_color] = ACTIONS(156),
    [anon_sym_log_prefix] = ACTIONS(158),
    [anon_sym_log_prefix_mode] = ACTIONS(156),
    [anon_sym_log_engine_type] = ACTIONS(156),
    [anon_sym_log_engine_data] = ACTIONS(156),
    [anon_sym_fork] = ACTIONS(158),
    [anon_sym_fork_delay] = ACTIONS(156),
    [anon_sym_modinit_delay] = ACTIONS(156),
    [anon_sym_xavp_via_params] = ACTIONS(156),
    [anon_sym_xavp_via_fields] = ACTIONS(156),
    [anon_sym_xavp_via_reply_params] = ACTIONS(156),
    [anon_sym_listen] = ACTIONS(156),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(156),
    [anon_sym_virtual] = ACTIONS(156),
    [anon_sym_name_PIPENAME] = ACTIONS(156),
    [anon_sym_alias] = ACTIONS(156),
    [anon_sym_domain] = ACTIONS(156),
    [anon_sym_auto_aliases] = ACTIONS(156),
    [anon_sym_auto_domains] = ACTIONS(156),
    [anon_sym_dns] = ACTIONS(158),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(156),
    [anon_sym_dns_try_ipv6] = ACTIONS(156),
    [anon_sym_dns_try_naptr] = ACTIONS(156),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(156),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(156),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(156),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(156),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(156),
    [anon_sym_dns_retr_time] = ACTIONS(156),
    [anon_sym_dns_slow_query_ms] = ACTIONS(156),
    [anon_sym_dns_retr_no] = ACTIONS(156),
    [anon_sym_dns_servers_no] = ACTIONS(156),
    [anon_sym_dns_use_search_list] = ACTIONS(156),
    [anon_sym_dns_search_full_match] = ACTIONS(156),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(156),
    [anon_sym_dns_cache_init] = ACTIONS(156),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(156),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(156),
    [anon_sym_dns_cache_flags] = ACTIONS(156),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(156),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(156),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(156),
    [anon_sym_dns_cache_mem] = ACTIONS(156),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(156),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(156),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(156),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(156),
    [anon_sym_auto_bind_ipv6] = ACTIONS(156),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(156),
    [anon_sym_ipv6_hex_style] = ACTIONS(156),
    [anon_sym_modparam] = ACTIONS(158),
    [anon_sym_modparamx] = ACTIONS(156),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_POUND_BANG] = ACTIONS(160),
    [sym__COM_LINE] = ACTIONS(160),
    [sym__COM_LINE_DEPR] = ACTIONS(162),
    [anon_sym_SLASH_STAR] = ACTIONS(160),
    [anon_sym_include_file] = ACTIONS(160),
    [anon_sym_import_file] = ACTIONS(160),
    [anon_sym_loadmodule] = ACTIONS(162),
    [anon_sym_loadmodulex] = ACTIONS(160),
    [anon_sym_request_route] = ACTIONS(160),
    [anon_sym_reply_route] = ACTIONS(160),
    [anon_sym_branch_route] = ACTIONS(160),
    [anon_sym_failure_route] = ACTIONS(160),
    [anon_sym_onreply_route] = ACTIONS(160),
    [anon_sym_event_route] = ACTIONS(160),
    [anon_sym_onsend_route] = ACTIONS(160),
    [anon_sym_route] = ACTIONS(160),
    [anon_sym_cfgengine] = ACTIONS(160),
    [anon_sym_debug] = ACTIONS(160),
    [anon_sym_log_name] = ACTIONS(160),
    [anon_sym_log_stderror] = ACTIONS(160),
    [anon_sym_log_facility] = ACTIONS(160),
    [anon_sym_log_color] = ACTIONS(160),
    [anon_sym_log_prefix] = ACTIONS(162),
    [anon_sym_log_prefix_mode] = ACTIONS(160),
    [anon_sym_log_engine_type] = ACTIONS(160),
    [anon_sym_log_engine_data] = ACTIONS(160),
    [anon_sym_fork] = ACTIONS(162),
    [anon_sym_fork_delay] = ACTIONS(160),
    [anon_sym_modinit_delay] = ACTIONS(160),
    [anon_sym_xavp_via_params] = ACTIONS(160),
    [anon_sym_xavp_via_fields] = ACTIONS(160),
    [anon_sym_xavp_via_reply_params] = ACTIONS(160),
    [anon_sym_listen] = ACTIONS(160),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(160),
    [anon_sym_virtual] = ACTIONS(160),
    [anon_sym_name_PIPENAME] = ACTIONS(160),
    [anon_sym_alias] = ACTIONS(160),
    [anon_sym_domain] = ACTIONS(160),
    [anon_sym_auto_aliases] = ACTIONS(160),
    [anon_sym_auto_domains] = ACTIONS(160),
    [anon_sym_dns] = ACTIONS(162),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(160),
    [anon_sym_dns_try_ipv6] = ACTIONS(160),
    [anon_sym_dns_try_naptr] = ACTIONS(160),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(160),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(160),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(160),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(160),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(160),
    [anon_sym_dns_retr_time] = ACTIONS(160),
    [anon_sym_dns_slow_query_ms] = ACTIONS(160),
    [anon_sym_dns_retr_no] = ACTIONS(160),
    [anon_sym_dns_servers_no] = ACTIONS(160),
    [anon_sym_dns_use_search_list] = ACTIONS(160),
    [anon_sym_dns_search_full_match] = ACTIONS(160),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(160),
    [anon_sym_dns_cache_init] = ACTIONS(160),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(160),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(160),
    [anon_sym_dns_cache_flags] = ACTIONS(160),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(160),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(160),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(160),
    [anon_sym_dns_cache_mem] = ACTIONS(160),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(160),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(160),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(160),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(160),
    [anon_sym_auto_bind_ipv6] = ACTIONS(160),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(160),
    [anon_sym_ipv6_hex_style] = ACTIONS(160),
    [anon_sym_modparam] = ACTIONS(162),
    [anon_sym_modparamx] = ACTIONS(160),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_POUND_BANG] = ACTIONS(164),
    [sym__COM_LINE] = ACTIONS(164),
    [sym__COM_LINE_DEPR] = ACTIONS(166),
    [anon_sym_SLASH_STAR] = ACTIONS(164),
    [anon_sym_include_file] = ACTIONS(164),
    [anon_sym_import_file] = ACTIONS(164),
    [anon_sym_loadmodule] = ACTIONS(166),
    [anon_sym_loadmodulex] = ACTIONS(164),
    [anon_sym_request_route] = ACTIONS(164),
    [anon_sym_reply_route] = ACTIONS(164),
    [anon_sym_branch_route] = ACTIONS(164),
    [anon_sym_failure_route] = ACTIONS(164),
    [anon_sym_onreply_route] = ACTIONS(164),
    [anon_sym_event_route] = ACTIONS(164),
    [anon_sym_onsend_route] = ACTIONS(164),
    [anon_sym_route] = ACTIONS(164),
    [anon_sym_cfgengine] = ACTIONS(164),
    [anon_sym_debug] = ACTIONS(164),
    [anon_sym_log_name] = ACTIONS(164),
    [anon_sym_log_stderror] = ACTIONS(164),
    [anon_sym_log_facility] = ACTIONS(164),
    [anon_sym_log_color] = ACTIONS(164),
    [anon_sym_log_prefix] = ACTIONS(166),
    [anon_sym_log_prefix_mode] = ACTIONS(164),
    [anon_sym_log_engine_type] = ACTIONS(164),
    [anon_sym_log_engine_data] = ACTIONS(164),
    [anon_sym_fork] = ACTIONS(166),
    [anon_sym_fork_delay] = ACTIONS(164),
    [anon_sym_modinit_delay] = ACTIONS(164),
    [anon_sym_xavp_via_params] = ACTIONS(164),
    [anon_sym_xavp_via_fields] = ACTIONS(164),
    [anon_sym_xavp_via_reply_params] = ACTIONS(164),
    [anon_sym_listen] = ACTIONS(164),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(164),
    [anon_sym_virtual] = ACTIONS(164),
    [anon_sym_name_PIPENAME] = ACTIONS(164),
    [anon_sym_alias] = ACTIONS(164),
    [anon_sym_domain] = ACTIONS(164),
    [anon_sym_auto_aliases] = ACTIONS(164),
    [anon_sym_auto_domains] = ACTIONS(164),
    [anon_sym_dns] = ACTIONS(166),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(164),
    [anon_sym_dns_try_ipv6] = ACTIONS(164),
    [anon_sym_dns_try_naptr] = ACTIONS(164),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(164),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(164),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(164),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(164),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(164),
    [anon_sym_dns_retr_time] = ACTIONS(164),
    [anon_sym_dns_slow_query_ms] = ACTIONS(164),
    [anon_sym_dns_retr_no] = ACTIONS(164),
    [anon_sym_dns_servers_no] = ACTIONS(164),
    [anon_sym_dns_use_search_list] = ACTIONS(164),
    [anon_sym_dns_search_full_match] = ACTIONS(164),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(164),
    [anon_sym_dns_cache_init] = ACTIONS(164),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(164),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(164),
    [anon_sym_dns_cache_flags] = ACTIONS(164),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(164),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(164),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(164),
    [anon_sym_dns_cache_mem] = ACTIONS(164),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(164),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(164),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(164),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(164),
    [anon_sym_auto_bind_ipv6] = ACTIONS(164),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(164),
    [anon_sym_ipv6_hex_style] = ACTIONS(164),
    [anon_sym_modparam] = ACTIONS(166),
    [anon_sym_modparamx] = ACTIONS(164),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_POUND_BANG] = ACTIONS(168),
    [sym__COM_LINE] = ACTIONS(168),
    [sym__COM_LINE_DEPR] = ACTIONS(170),
    [anon_sym_SLASH_STAR] = ACTIONS(168),
    [anon_sym_include_file] = ACTIONS(168),
    [anon_sym_import_file] = ACTIONS(168),
    [anon_sym_loadmodule] = ACTIONS(170),
    [anon_sym_loadmodulex] = ACTIONS(168),
    [anon_sym_request_route] = ACTIONS(168),
    [anon_sym_reply_route] = ACTIONS(168),
    [anon_sym_branch_route] = ACTIONS(168),
    [anon_sym_failure_route] = ACTIONS(168),
    [anon_sym_onreply_route] = ACTIONS(168),
    [anon_sym_event_route] = ACTIONS(168),
    [anon_sym_onsend_route] = ACTIONS(168),
    [anon_sym_route] = ACTIONS(168),
    [anon_sym_cfgengine] = ACTIONS(168),
    [anon_sym_debug] = ACTIONS(168),
    [anon_sym_log_name] = ACTIONS(168),
    [anon_sym_log_stderror] = ACTIONS(168),
    [anon_sym_log_facility] = ACTIONS(168),
    [anon_sym_log_color] = ACTIONS(168),
    [anon_sym_log_prefix] = ACTIONS(170),
    [anon_sym_log_prefix_mode] = ACTIONS(168),
    [anon_sym_log_engine_type] = ACTIONS(168),
    [anon_sym_log_engine_data] = ACTIONS(168),
    [anon_sym_fork] = ACTIONS(170),
    [anon_sym_fork_delay] = ACTIONS(168),
    [anon_sym_modinit_delay] = ACTIONS(168),
    [anon_sym_xavp_via_params] = ACTIONS(168),
    [anon_sym_xavp_via_fields] = ACTIONS(168),
    [anon_sym_xavp_via_reply_params] = ACTIONS(168),
    [anon_sym_listen] = ACTIONS(168),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(168),
    [anon_sym_virtual] = ACTIONS(168),
    [anon_sym_name_PIPENAME] = ACTIONS(168),
    [anon_sym_alias] = ACTIONS(168),
    [anon_sym_domain] = ACTIONS(168),
    [anon_sym_auto_aliases] = ACTIONS(168),
    [anon_sym_auto_domains] = ACTIONS(168),
    [anon_sym_dns] = ACTIONS(170),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(168),
    [anon_sym_dns_try_ipv6] = ACTIONS(168),
    [anon_sym_dns_try_naptr] = ACTIONS(168),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(168),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(168),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(168),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(168),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(168),
    [anon_sym_dns_retr_time] = ACTIONS(168),
    [anon_sym_dns_slow_query_ms] = ACTIONS(168),
    [anon_sym_dns_retr_no] = ACTIONS(168),
    [anon_sym_dns_servers_no] = ACTIONS(168),
    [anon_sym_dns_use_search_list] = ACTIONS(168),
    [anon_sym_dns_search_full_match] = ACTIONS(168),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(168),
    [anon_sym_dns_cache_init] = ACTIONS(168),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(168),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(168),
    [anon_sym_dns_cache_flags] = ACTIONS(168),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(168),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(168),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(168),
    [anon_sym_dns_cache_mem] = ACTIONS(168),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(168),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(168),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(168),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(168),
    [anon_sym_auto_bind_ipv6] = ACTIONS(168),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(168),
    [anon_sym_ipv6_hex_style] = ACTIONS(168),
    [anon_sym_modparam] = ACTIONS(170),
    [anon_sym_modparamx] = ACTIONS(168),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_POUND_BANG] = ACTIONS(172),
    [sym__COM_LINE] = ACTIONS(172),
    [sym__COM_LINE_DEPR] = ACTIONS(174),
    [anon_sym_SLASH_STAR] = ACTIONS(172),
    [anon_sym_include_file] = ACTIONS(172),
    [anon_sym_import_file] = ACTIONS(172),
    [anon_sym_loadmodule] = ACTIONS(174),
    [anon_sym_loadmodulex] = ACTIONS(172),
    [anon_sym_request_route] = ACTIONS(172),
    [anon_sym_reply_route] = ACTIONS(172),
    [anon_sym_branch_route] = ACTIONS(172),
    [anon_sym_failure_route] = ACTIONS(172),
    [anon_sym_onreply_route] = ACTIONS(172),
    [anon_sym_event_route] = ACTIONS(172),
    [anon_sym_onsend_route] = ACTIONS(172),
    [anon_sym_route] = ACTIONS(172),
    [anon_sym_cfgengine] = ACTIONS(172),
    [anon_sym_debug] = ACTIONS(172),
    [anon_sym_log_name] = ACTIONS(172),
    [anon_sym_log_stderror] = ACTIONS(172),
    [anon_sym_log_facility] = ACTIONS(172),
    [anon_sym_log_color] = ACTIONS(172),
    [anon_sym_log_prefix] = ACTIONS(174),
    [anon_sym_log_prefix_mode] = ACTIONS(172),
    [anon_sym_log_engine_type] = ACTIONS(172),
    [anon_sym_log_engine_data] = ACTIONS(172),
    [anon_sym_fork] = ACTIONS(174),
    [anon_sym_fork_delay] = ACTIONS(172),
    [anon_sym_modinit_delay] = ACTIONS(172),
    [anon_sym_xavp_via_params] = ACTIONS(172),
    [anon_sym_xavp_via_fields] = ACTIONS(172),
    [anon_sym_xavp_via_reply_params] = ACTIONS(172),
    [anon_sym_listen] = ACTIONS(172),
    [anon_sym_advertise_PIPEADVERTISE] = ACTIONS(172),
    [anon_sym_virtual] = ACTIONS(172),
    [anon_sym_name_PIPENAME] = ACTIONS(172),
    [anon_sym_alias] = ACTIONS(172),
    [anon_sym_domain] = ACTIONS(172),
    [anon_sym_auto_aliases] = ACTIONS(172),
    [anon_sym_auto_domains] = ACTIONS(172),
    [anon_sym_dns] = ACTIONS(174),
    [anon_sym_rev_dns_PIPEdns_rev_via] = ACTIONS(172),
    [anon_sym_dns_try_ipv6] = ACTIONS(172),
    [anon_sym_dns_try_naptr] = ACTIONS(172),
    [anon_sym_dns_srv_lb_PIPEdns_srv_loadbalancing] = ACTIONS(172),
    [anon_sym_dns_udp_pref_PIPEdns_udp_preference] = ACTIONS(172),
    [anon_sym_dns_tcp_pref_PIPEdns_tcp_preference] = ACTIONS(172),
    [anon_sym_dns_tls_pref_PIPEdns_tls_preference] = ACTIONS(172),
    [anon_sym_dns_sctp_pref_PIPEdns_sctp_preference] = ACTIONS(172),
    [anon_sym_dns_retr_time] = ACTIONS(172),
    [anon_sym_dns_slow_query_ms] = ACTIONS(172),
    [anon_sym_dns_retr_no] = ACTIONS(172),
    [anon_sym_dns_servers_no] = ACTIONS(172),
    [anon_sym_dns_use_search_list] = ACTIONS(172),
    [anon_sym_dns_search_full_match] = ACTIONS(172),
    [anon_sym_dns_naptr_ignore_rfc] = ACTIONS(172),
    [anon_sym_dns_cache_init] = ACTIONS(172),
    [anon_sym_use_dns_cache_PIPEdns_use_cache] = ACTIONS(172),
    [anon_sym_use_dns_failover_PIPEdns_use_failover] = ACTIONS(172),
    [anon_sym_dns_cache_flags] = ACTIONS(172),
    [anon_sym_dns_cache_negative_ttl] = ACTIONS(172),
    [anon_sym_dns_cache_min_ttl] = ACTIONS(172),
    [anon_sym_dns_cache_max_ttl] = ACTIONS(172),
    [anon_sym_dns_cache_mem] = ACTIONS(172),
    [anon_sym_dns_cache_gc_interval] = ACTIONS(172),
    [anon_sym_dns_cache_del_nonexp_PIPEdns_cache_delete_nonexpired] = ACTIONS(172),
    [anon_sym_dns_cache_rec_pref] = ACTIONS(172),
    [anon_sym_ipv6autobind_STAR_SLASH] = ACTIONS(172),
    [anon_sym_auto_bind_ipv6] = ACTIONS(172),
    [anon_sym_bind_ipv6_link_local] = ACTIONS(172),
    [anon_sym_ipv6_hex_style] = ACTIONS(172),
    [anon_sym_modparam] = ACTIONS(174),
    [anon_sym_modparamx] = ACTIONS(172),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(184), 1,
      anon_sym_if,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(35), 1,
      sym__LBRACE,
    STATE(65), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(178), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(59), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      sym__block,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(178), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [56] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    STATE(37), 1,
      sym__LBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(71), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      sym__block,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [112] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym__RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(40), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [168] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym__RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(39), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [224] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(184), 1,
      anon_sym_if,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(35), 1,
      sym__LBRACE,
    STATE(65), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(178), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(58), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      sym__block,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(178), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [280] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym__RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(32), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [336] = 14,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(184), 1,
      anon_sym_if,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(35), 1,
      sym__LBRACE,
    STATE(65), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(178), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(62), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      sym__block,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(178), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [392] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym__RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(38), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [448] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(78), 1,
      sym__RBRACE,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(40), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [504] = 14,
    ACTIONS(182), 1,
      anon_sym_route,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_if,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym__RBRACE,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(194), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(186), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(40), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [560] = 13,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_route,
    ACTIONS(223), 1,
      anon_sym_if,
    ACTIONS(229), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(73), 1,
      sym__multiline_comment,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(214), 2,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
    ACTIONS(226), 4,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
    STATE(40), 4,
      sym_comment,
      sym__statement,
      sym_if_statement,
      aux_sym__block_repeat1,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(173), 4,
      sym_control,
      sym_variable,
      sym_function_call,
      sym_route_call,
  [613] = 14,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym_boolean_constant,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(170), 5,
      sym_string,
      sym_number,
      sym_variable,
      sym_variable_content,
      sym_function_call,
  [665] = 14,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      sym_boolean_constant,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(153), 1,
      sym_local_id,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(157), 4,
      sym_local_variable,
      sym_pseudo_variable,
      sym_avp_variable,
      sym_xavp_variable,
    STATE(156), 5,
      sym_string,
      sym_number,
      sym_variable,
      sym_variable_content,
      sym_function_call,
  [717] = 6,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_var,
    ACTIONS(261), 1,
      anon_sym_avp,
    ACTIONS(263), 1,
      anon_sym_xavp,
    STATE(124), 1,
      sym_pvar_type,
    ACTIONS(257), 15,
      anon_sym_route,
      anon_sym_hdr,
      anon_sym_ru,
      anon_sym_tu,
      anon_sym_ci,
      anon_sym_du,
      anon_sym_fu,
      anon_sym_rU,
      anon_sym_null,
      anon_sym_branch,
      anon_sym_rr,
      anon_sym_addr,
      anon_sym_body,
      anon_sym_ct,
      anon_sym_diversion,
  [750] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
    STATE(93), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
  [792] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_var,
    STATE(124), 1,
      sym_pvar_type,
    ACTIONS(257), 16,
      anon_sym_route,
      anon_sym_avp,
      anon_sym_hdr,
      anon_sym_ru,
      anon_sym_tu,
      anon_sym_ci,
      anon_sym_du,
      anon_sym_fu,
      anon_sym_rU,
      anon_sym_null,
      anon_sym_branch,
      anon_sym_rr,
      anon_sym_addr,
      anon_sym_body,
      anon_sym_ct,
      anon_sym_diversion,
  [820] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
    STATE(89), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
  [862] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(85), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
  [904] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
    STATE(92), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
  [946] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
    STATE(91), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
  [988] = 11,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    STATE(147), 1,
      sym_local_id,
    STATE(146), 3,
      sym_local_variable,
      sym_variable_content,
      sym_pseudo_variable,
    STATE(88), 4,
      sym__logical_or_expression,
      sym__logical_and_expression,
      sym__equality_expression,
      sym__relational_expression,
    STATE(90), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_function_call,
  [1030] = 12,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_boolean_constant,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(106), 5,
      sym_string,
      sym_number,
      sym_variable_content,
      sym_pseudo_variable,
      sym_function_call,
  [1073] = 12,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    ACTIONS(277), 1,
      sym_boolean_constant,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(144), 5,
      sym_string,
      sym_number,
      sym_variable_content,
      sym_pseudo_variable,
      sym_function_call,
  [1116] = 12,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_boolean_constant,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(106), 5,
      sym_string,
      sym_number,
      sym_variable_content,
      sym_pseudo_variable,
      sym_function_call,
  [1159] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_pvar_type,
    ACTIONS(257), 16,
      anon_sym_route,
      anon_sym_avp,
      anon_sym_hdr,
      anon_sym_ru,
      anon_sym_tu,
      anon_sym_ci,
      anon_sym_du,
      anon_sym_fu,
      anon_sym_rU,
      anon_sym_null,
      anon_sym_branch,
      anon_sym_rr,
      anon_sym_addr,
      anon_sym_body,
      anon_sym_ct,
      anon_sym_diversion,
  [1184] = 12,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      sym_boolean_constant,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(94), 1,
      sym_index,
    STATE(95), 1,
      sym_transformation,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(143), 5,
      sym_string,
      sym_number,
      sym_variable_content,
      sym_pseudo_variable,
      sym_function_call,
  [1227] = 2,
    STATE(166), 1,
      sym_pvar_type,
    ACTIONS(257), 16,
      anon_sym_route,
      anon_sym_avp,
      anon_sym_hdr,
      anon_sym_ru,
      anon_sym_tu,
      anon_sym_ci,
      anon_sym_du,
      anon_sym_fu,
      anon_sym_rU,
      anon_sym_null,
      anon_sym_branch,
      anon_sym_rr,
      anon_sym_addr,
      anon_sym_body,
      anon_sym_ct,
      anon_sym_diversion,
  [1249] = 2,
    ACTIONS(287), 2,
      anon_sym_s,
      anon_sym_uri,
    ACTIONS(289), 12,
      anon_sym_param,
      anon_sym_nameaddr,
      anon_sym_tobody,
      anon_sym_re,
      anon_sym_line,
      anon_sym_sql,
      anon_sym_msrpuri,
      anon_sym_json,
      anon_sym_url,
      anon_sym_sock,
      anon_sym_urialias,
      anon_sym_val,
  [1268] = 4,
    ACTIONS(295), 1,
      anon_sym_else,
    STATE(60), 1,
      sym_else_block,
    ACTIONS(291), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(293), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1291] = 4,
    ACTIONS(297), 1,
      anon_sym_else,
    STATE(70), 1,
      sym_else_block,
    ACTIONS(291), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(293), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1314] = 2,
    ACTIONS(299), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(301), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1332] = 2,
    ACTIONS(136), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(138), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1350] = 2,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(305), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1368] = 2,
    ACTIONS(116), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(118), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1386] = 2,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(309), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1404] = 2,
    ACTIONS(144), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(146), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1422] = 2,
    ACTIONS(156), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(158), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1440] = 2,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(106), 8,
      anon_sym_route,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1458] = 2,
    ACTIONS(104), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(106), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1475] = 2,
    ACTIONS(116), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(118), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1492] = 2,
    ACTIONS(299), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(301), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1509] = 2,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(305), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1526] = 2,
    ACTIONS(156), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(158), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1543] = 2,
    ACTIONS(144), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(146), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1560] = 8,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      sym__QUOTE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__RPAREN,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    ACTIONS(315), 2,
      sym_identifier,
      sym_sip_keywords,
    STATE(96), 2,
      sym_string,
      sym_number,
  [1589] = 8,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      sym__QUOTE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__RPAREN,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    ACTIONS(317), 2,
      sym_identifier,
      sym_sip_keywords,
    STATE(99), 2,
      sym_string,
      sym_number,
  [1618] = 2,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(309), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1635] = 2,
    ACTIONS(319), 5,
      anon_sym_LBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(321), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1652] = 2,
    ACTIONS(136), 5,
      anon_sym_RBRACE,
      sym__COM_LINE,
      sym__COM_LINE_DEPR,
      anon_sym_SLASH_STAR,
      anon_sym_DOLLAR,
    ACTIONS(138), 7,
      anon_sym_route,
      anon_sym_if,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_break,
      anon_sym_drop,
      sym_identifier,
  [1669] = 2,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 9,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1685] = 2,
    ACTIONS(329), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 9,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1701] = 2,
    ACTIONS(333), 4,
      sym_boolean_constant,
      sym_identifier,
      sym_oct_number,
      sym_dec_number,
    ACTIONS(331), 7,
      sym__QUOTE,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      sym_hex_number,
      sym_bin_number,
  [1717] = 2,
    ACTIONS(337), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 9,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1733] = 6,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      sym__QUOTE,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    ACTIONS(339), 2,
      sym_identifier,
      sym_sip_keywords,
    STATE(145), 2,
      sym_string,
      sym_number,
  [1756] = 6,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(155), 3,
      sym__route_name,
      sym_string,
      sym_number,
  [1779] = 6,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      anon_sym_EQ_EQ,
    STATE(77), 1,
      sym__RPAREN,
    ACTIONS(345), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1801] = 6,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_config_value,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(24), 2,
      sym_string,
      sym_number,
  [1823] = 6,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(247), 2,
      sym_hex_number,
      sym_bin_number,
    ACTIONS(249), 2,
      sym_oct_number,
      sym_dec_number,
    STATE(142), 2,
      sym_string,
      sym_number,
  [1845] = 2,
    ACTIONS(357), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 6,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1858] = 2,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 6,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1871] = 2,
    ACTIONS(365), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 6,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1884] = 3,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(367), 4,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_EQ_EQ,
  [1899] = 4,
    ACTIONS(347), 1,
      anon_sym_EQ_EQ,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(369), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [1916] = 5,
    ACTIONS(347), 1,
      anon_sym_EQ_EQ,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1935] = 3,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_transformation,
    ACTIONS(373), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [1948] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_index,
    ACTIONS(373), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [1961] = 5,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym__RPAREN,
    STATE(83), 1,
      sym__COMMA,
    STATE(103), 1,
      aux_sym_function_call_repeat1,
  [1977] = 5,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym__block,
    STATE(33), 1,
      sym__LBRACE,
    STATE(84), 1,
      sym__LBRACK,
  [1993] = 1,
    ACTIONS(383), 5,
      anon_sym_SER,
      anon_sym_KAMAILIO,
      anon_sym_OPENSER,
      anon_sym_MAXCOMPAT,
      anon_sym_ALL,
  [2001] = 5,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym__RPAREN,
    STATE(83), 1,
      sym__COMMA,
    STATE(102), 1,
      aux_sym_function_call_repeat1,
  [2017] = 1,
    ACTIONS(385), 5,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2025] = 1,
    ACTIONS(387), 5,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2033] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__RPAREN,
    STATE(83), 1,
      sym__COMMA,
    STATE(123), 1,
      aux_sym_function_call_repeat1,
  [2049] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym__RPAREN,
    STATE(83), 1,
      sym__COMMA,
    STATE(123), 1,
      aux_sym_function_call_repeat1,
  [2065] = 1,
    ACTIONS(391), 5,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2073] = 3,
    ACTIONS(393), 1,
      sym__QUOTE,
    STATE(125), 1,
      aux_sym_string_repeat1,
    ACTIONS(395), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2084] = 1,
    ACTIONS(397), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2091] = 3,
    ACTIONS(399), 1,
      sym__QUOTE,
    STATE(118), 1,
      aux_sym_string_repeat1,
    ACTIONS(401), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2102] = 1,
    ACTIONS(403), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2109] = 3,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_string_repeat2,
    ACTIONS(405), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [2120] = 3,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__LPAREN,
    ACTIONS(407), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2131] = 3,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat2,
    ACTIONS(413), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [2142] = 3,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__LPAREN,
    ACTIONS(416), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2153] = 3,
    ACTIONS(418), 1,
      sym__QUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(420), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2164] = 1,
    ACTIONS(423), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2171] = 3,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat2,
    ACTIONS(427), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [2182] = 3,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(115), 1,
      aux_sym_string_repeat2,
    ACTIONS(429), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [2193] = 4,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(18), 1,
      sym_string,
  [2206] = 3,
    ACTIONS(433), 1,
      sym__QUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(435), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2217] = 4,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym__RPAREN,
    STATE(75), 1,
      sym__LPAREN,
  [2230] = 3,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym__LPAREN,
    ACTIONS(397), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2241] = 3,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__LPAREN,
    ACTIONS(397), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2252] = 3,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat2,
    ACTIONS(427), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [2263] = 4,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym__COMMA,
    STATE(123), 1,
      aux_sym_function_call_repeat1,
  [2276] = 1,
    ACTIONS(446), 4,
      sym__SEMICOLON,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2283] = 3,
    ACTIONS(425), 1,
      sym__QUOTE,
    STATE(113), 1,
      aux_sym_string_repeat1,
    ACTIONS(435), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2294] = 3,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parentized_expression,
    STATE(47), 1,
      sym__LPAREN,
  [2304] = 3,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym__block,
    STATE(33), 1,
      sym__LBRACE,
  [2314] = 2,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2322] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_string,
  [2332] = 3,
    ACTIONS(452), 1,
      aux_sym_preprocessor_directive_token1,
    ACTIONS(454), 1,
      aux_sym_preprocessor_directive_token3,
    ACTIONS(456), 1,
      aux_sym_preprocessor_directive_token4,
  [2342] = 3,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym__LPAREN,
  [2352] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string,
  [2362] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_string,
  [2372] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_string,
  [2382] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_string,
  [2392] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_string,
  [2402] = 3,
    ACTIONS(235), 1,
      sym__QUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym_string,
  [2412] = 1,
    ACTIONS(80), 3,
      sym__QUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2418] = 1,
    ACTIONS(76), 3,
      sym__QUOTE,
      anon_sym_SQUOTE,
      sym_identifier,
  [2424] = 3,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parentized_expression,
    STATE(47), 1,
      sym__LPAREN,
  [2434] = 2,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__LPAREN,
  [2441] = 2,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym__RPAREN,
  [2448] = 1,
    ACTIONS(416), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2453] = 1,
    ACTIONS(407), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2458] = 1,
    ACTIONS(464), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2463] = 1,
    ACTIONS(466), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [2468] = 2,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(51), 1,
      sym_assignment,
  [2475] = 1,
    ACTIONS(470), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2480] = 2,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym__LPAREN,
  [2487] = 2,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym__LPAREN,
  [2494] = 2,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym__COMMA,
  [2501] = 2,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__LPAREN,
  [2508] = 2,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(53), 1,
      sym_assignment,
  [2515] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym__COMMA,
  [2522] = 2,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym__RBRACK,
  [2529] = 2,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym__RPAREN,
  [2536] = 1,
    ACTIONS(480), 2,
      sym__SEMICOLON,
      anon_sym_RPAREN,
  [2541] = 1,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
  [2545] = 1,
    ACTIONS(484), 1,
      sym__SEMICOLON,
  [2549] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [2553] = 1,
    ACTIONS(488), 1,
      sym_identifier,
  [2557] = 1,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [2561] = 1,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [2565] = 1,
    ACTIONS(494), 1,
      anon_sym_EQ,
  [2569] = 1,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [2573] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [2577] = 1,
    ACTIONS(500), 1,
      aux_sym_index_token1,
  [2581] = 1,
    ACTIONS(502), 1,
      anon_sym_COMMA,
  [2585] = 1,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
  [2589] = 1,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [2593] = 1,
    ACTIONS(506), 1,
      aux_sym_comment_token1,
  [2597] = 1,
    ACTIONS(508), 1,
      anon_sym_SLASH,
  [2601] = 1,
    ACTIONS(510), 1,
      sym__SEMICOLON,
  [2605] = 1,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [2609] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [2613] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [2617] = 1,
    ACTIONS(518), 1,
      anon_sym_COMMA,
  [2621] = 1,
    ACTIONS(520), 1,
      sym__SEMICOLON,
  [2625] = 1,
    ACTIONS(522), 1,
      anon_sym_SLASH,
  [2629] = 1,
    ACTIONS(524), 1,
      anon_sym_EQ,
  [2633] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [2637] = 1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
  [2641] = 1,
    ACTIONS(530), 1,
      aux_sym_comment_token1,
  [2645] = 1,
    ACTIONS(532), 1,
      anon_sym_SLASH,
  [2649] = 1,
    ACTIONS(534), 1,
      anon_sym_EQ,
  [2653] = 1,
    ACTIONS(536), 1,
      aux_sym__multiline_comment_token1,
  [2657] = 1,
    ACTIONS(538), 1,
      sym__SEMICOLON,
  [2661] = 1,
    ACTIONS(540), 1,
      sym_identifier,
  [2665] = 1,
    ACTIONS(542), 1,
      aux_sym__multiline_comment_token1,
  [2669] = 1,
    ACTIONS(544), 1,
      aux_sym__multiline_comment_token1,
  [2673] = 1,
    ACTIONS(546), 1,
      aux_sym_comment_token1,
  [2677] = 1,
    ACTIONS(548), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 56,
  [SMALL_STATE(32)] = 112,
  [SMALL_STATE(33)] = 168,
  [SMALL_STATE(34)] = 224,
  [SMALL_STATE(35)] = 280,
  [SMALL_STATE(36)] = 336,
  [SMALL_STATE(37)] = 392,
  [SMALL_STATE(38)] = 448,
  [SMALL_STATE(39)] = 504,
  [SMALL_STATE(40)] = 560,
  [SMALL_STATE(41)] = 613,
  [SMALL_STATE(42)] = 665,
  [SMALL_STATE(43)] = 717,
  [SMALL_STATE(44)] = 750,
  [SMALL_STATE(45)] = 792,
  [SMALL_STATE(46)] = 820,
  [SMALL_STATE(47)] = 862,
  [SMALL_STATE(48)] = 904,
  [SMALL_STATE(49)] = 946,
  [SMALL_STATE(50)] = 988,
  [SMALL_STATE(51)] = 1030,
  [SMALL_STATE(52)] = 1073,
  [SMALL_STATE(53)] = 1116,
  [SMALL_STATE(54)] = 1159,
  [SMALL_STATE(55)] = 1184,
  [SMALL_STATE(56)] = 1227,
  [SMALL_STATE(57)] = 1249,
  [SMALL_STATE(58)] = 1268,
  [SMALL_STATE(59)] = 1291,
  [SMALL_STATE(60)] = 1314,
  [SMALL_STATE(61)] = 1332,
  [SMALL_STATE(62)] = 1350,
  [SMALL_STATE(63)] = 1368,
  [SMALL_STATE(64)] = 1386,
  [SMALL_STATE(65)] = 1404,
  [SMALL_STATE(66)] = 1422,
  [SMALL_STATE(67)] = 1440,
  [SMALL_STATE(68)] = 1458,
  [SMALL_STATE(69)] = 1475,
  [SMALL_STATE(70)] = 1492,
  [SMALL_STATE(71)] = 1509,
  [SMALL_STATE(72)] = 1526,
  [SMALL_STATE(73)] = 1543,
  [SMALL_STATE(74)] = 1560,
  [SMALL_STATE(75)] = 1589,
  [SMALL_STATE(76)] = 1618,
  [SMALL_STATE(77)] = 1635,
  [SMALL_STATE(78)] = 1652,
  [SMALL_STATE(79)] = 1669,
  [SMALL_STATE(80)] = 1685,
  [SMALL_STATE(81)] = 1701,
  [SMALL_STATE(82)] = 1717,
  [SMALL_STATE(83)] = 1733,
  [SMALL_STATE(84)] = 1756,
  [SMALL_STATE(85)] = 1779,
  [SMALL_STATE(86)] = 1801,
  [SMALL_STATE(87)] = 1823,
  [SMALL_STATE(88)] = 1845,
  [SMALL_STATE(89)] = 1858,
  [SMALL_STATE(90)] = 1871,
  [SMALL_STATE(91)] = 1884,
  [SMALL_STATE(92)] = 1899,
  [SMALL_STATE(93)] = 1916,
  [SMALL_STATE(94)] = 1935,
  [SMALL_STATE(95)] = 1948,
  [SMALL_STATE(96)] = 1961,
  [SMALL_STATE(97)] = 1977,
  [SMALL_STATE(98)] = 1993,
  [SMALL_STATE(99)] = 2001,
  [SMALL_STATE(100)] = 2017,
  [SMALL_STATE(101)] = 2025,
  [SMALL_STATE(102)] = 2033,
  [SMALL_STATE(103)] = 2049,
  [SMALL_STATE(104)] = 2065,
  [SMALL_STATE(105)] = 2073,
  [SMALL_STATE(106)] = 2084,
  [SMALL_STATE(107)] = 2091,
  [SMALL_STATE(108)] = 2102,
  [SMALL_STATE(109)] = 2109,
  [SMALL_STATE(110)] = 2120,
  [SMALL_STATE(111)] = 2131,
  [SMALL_STATE(112)] = 2142,
  [SMALL_STATE(113)] = 2153,
  [SMALL_STATE(114)] = 2164,
  [SMALL_STATE(115)] = 2171,
  [SMALL_STATE(116)] = 2182,
  [SMALL_STATE(117)] = 2193,
  [SMALL_STATE(118)] = 2206,
  [SMALL_STATE(119)] = 2217,
  [SMALL_STATE(120)] = 2230,
  [SMALL_STATE(121)] = 2241,
  [SMALL_STATE(122)] = 2252,
  [SMALL_STATE(123)] = 2263,
  [SMALL_STATE(124)] = 2276,
  [SMALL_STATE(125)] = 2283,
  [SMALL_STATE(126)] = 2294,
  [SMALL_STATE(127)] = 2304,
  [SMALL_STATE(128)] = 2314,
  [SMALL_STATE(129)] = 2322,
  [SMALL_STATE(130)] = 2332,
  [SMALL_STATE(131)] = 2342,
  [SMALL_STATE(132)] = 2352,
  [SMALL_STATE(133)] = 2362,
  [SMALL_STATE(134)] = 2372,
  [SMALL_STATE(135)] = 2382,
  [SMALL_STATE(136)] = 2392,
  [SMALL_STATE(137)] = 2402,
  [SMALL_STATE(138)] = 2412,
  [SMALL_STATE(139)] = 2418,
  [SMALL_STATE(140)] = 2424,
  [SMALL_STATE(141)] = 2434,
  [SMALL_STATE(142)] = 2441,
  [SMALL_STATE(143)] = 2448,
  [SMALL_STATE(144)] = 2453,
  [SMALL_STATE(145)] = 2458,
  [SMALL_STATE(146)] = 2463,
  [SMALL_STATE(147)] = 2468,
  [SMALL_STATE(148)] = 2475,
  [SMALL_STATE(149)] = 2480,
  [SMALL_STATE(150)] = 2487,
  [SMALL_STATE(151)] = 2494,
  [SMALL_STATE(152)] = 2501,
  [SMALL_STATE(153)] = 2508,
  [SMALL_STATE(154)] = 2515,
  [SMALL_STATE(155)] = 2522,
  [SMALL_STATE(156)] = 2529,
  [SMALL_STATE(157)] = 2536,
  [SMALL_STATE(158)] = 2541,
  [SMALL_STATE(159)] = 2545,
  [SMALL_STATE(160)] = 2549,
  [SMALL_STATE(161)] = 2553,
  [SMALL_STATE(162)] = 2557,
  [SMALL_STATE(163)] = 2561,
  [SMALL_STATE(164)] = 2565,
  [SMALL_STATE(165)] = 2569,
  [SMALL_STATE(166)] = 2573,
  [SMALL_STATE(167)] = 2577,
  [SMALL_STATE(168)] = 2581,
  [SMALL_STATE(169)] = 2585,
  [SMALL_STATE(170)] = 2589,
  [SMALL_STATE(171)] = 2593,
  [SMALL_STATE(172)] = 2597,
  [SMALL_STATE(173)] = 2601,
  [SMALL_STATE(174)] = 2605,
  [SMALL_STATE(175)] = 2609,
  [SMALL_STATE(176)] = 2613,
  [SMALL_STATE(177)] = 2617,
  [SMALL_STATE(178)] = 2621,
  [SMALL_STATE(179)] = 2625,
  [SMALL_STATE(180)] = 2629,
  [SMALL_STATE(181)] = 2633,
  [SMALL_STATE(182)] = 2637,
  [SMALL_STATE(183)] = 2641,
  [SMALL_STATE(184)] = 2645,
  [SMALL_STATE(185)] = 2649,
  [SMALL_STATE(186)] = 2653,
  [SMALL_STATE(187)] = 2657,
  [SMALL_STATE(188)] = 2661,
  [SMALL_STATE(189)] = 2665,
  [SMALL_STATE(190)] = 2669,
  [SMALL_STATE(191)] = 2673,
  [SMALL_STATE(192)] = 2677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor_directive, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_route, 5, 0, 12),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_route, 5, 0, 12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modparamx, 8, 0, 20),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modparamx, 8, 0, 20),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_starter, 2, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_starter, 2, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor_directive, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modparam, 8, 0, 20),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modparam, 8, 0, 20),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 4, 0, 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor_directive, 4, 0, 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routing_block, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routing_block, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_route, 2, 0, 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unnamed_route, 2, 0, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_value, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_value, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loadmodulex, 2, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loadmodulex, 2, 0, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loadmodule, 2, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loadmodule, 2, 0, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_variable, 3, 0, 6),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_config_variable, 3, 0, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_inclusion, 2, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_inclusion, 2, 0, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 9),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 9),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 9),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 9),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_block, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentized_expression, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentized_expression, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 18),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 18),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 10),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 10),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 15),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 15),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transformation, 3, 0, 16),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pvar_type, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 3, 0, 11),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_content, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xavp_variable, 7, 0, 21),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(111),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_avp_variable, 7, 0, 21),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_variable, 4, 0, 14),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 19),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 19), SHIFT_REPEAT(83),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_variable, 2, 0, 8),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 17),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_routes, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_id, 5, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [496] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_key, 1, 0, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_call, 4, 0, 13),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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

TS_PUBLIC const TSLanguage *tree_sitter_kamailio(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
