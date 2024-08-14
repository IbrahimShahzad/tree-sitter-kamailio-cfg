const KAMAILIO_CFG = {
  SER: "SER",
  KAMAILIO: "KAMAILIO",
  OPENSER: "OPENSER",
  MAXCOMPAT: "MAXCOMPAT",
  ALL: "ALL"
};

/* include files */
const INCLUDEFILE = {
  INCLUDE_FILE: "include_file",
  IMPORT_FILE: "import_file"
};


/* start of pre-processing directives */
const PREP_START = {
  HASH_BANG: "#!",
  BANG_BANG: "!!"
};

const PUNC = {
  QUOTE: '"',
  TICK: "'",
  SLASH: '/',
  SEMICOLON: ';',
  RPAREN: ')',
  LPAREN: '(',
  LBRACE: '{',
  RBRACE: '}',
  LBRACK: '[',
  RBRACK: ']',
  COMMA: ',',
  COLON: ':',
  STAR: '*',
  DOT: '.',
  CR: '\n',
  COM_LINE: '//',
  COM_LINE_DEPR: '#',
  COM_START: '/*',
  COM_END: '/',
}

/*action keywords*/
const ACTION_KEYWORDS = {
  FORWARD: "forward",
  FORWARD_TCP: "forward_tcp",
  FORWARD_UDP: "forward_udp",
  FORWARD_TLS: "forward_tls",
  FORWARD_SCTP: "forward_sctp",
  DROP: "drop", // done
  EXIT: "exit", // done
  RETURN: "return", // done
  RETURN_MODE: "return_mode",
  BREAK: "break", // done
  LOG: "log",
  ERROR: "error",
  ROUTE: "route", // done
  ROUTE_REQUEST: "request_route", // done
  ROUTE_FAILURE: "failure_route", // done
  ROUTE_REPLY: "reply_route", // done
  ROUTE_ONREPLY: "onreply_route", // done
  ROUTE_BRANCH: "branch_route", // done
  ROUTE_SEND: "onsend_route", // done
  ROUTE_EVENT: "event_route", // done
  EXEC: "exec",
  FORCE_RPORT: {
    FORCE_RPORT: "force_rport",
    ADD_RPORT: "add_rport"
  },
  LOCAL_RPORT: "local_rport",
  ADD_LOCAL_RPORT: "add_local_rport",
  FORCE_TCP_ALIAS: {
    FORCE_TCP_ALIAS: "force_tcp_alias",
    ADD_TCP_ALIAS: "add_tcp_alias"
  },
  UDP_MTU: "udp_mtu",
  UDP_MTU_TRY_PROTO: "udp_mtu_try_proto",
  UDP_RECEIVER_MODE: "udp_receiver_mode",
  UDP4_RAW: "udp4_raw",
  UDP4_RAW_MTU: "udp4_raw_mtu",
  UDP4_RAW_TTL: "udp4_raw_ttl",
  SETFLAG: "setflag",
  RESETFLAG: "resetflag",
  ISFLAGSET: "isflagset",
  FLAGS_DECL: {
    FLAG: "flags",
    BOOL: "bool",
  },
  SETAVPFLAG: "setavpflag",
  RESETAVPFLAG: "resetavpflag",
  ISAVPFLAGSET: "isavpflagset",
  AVPFLAGS_DECL: "avpflags",
  SET_HOST: {
    REWRITEHOST: "rewritehost",
    SETHOST: "sethost",
    SETH: "seth"
  },
  SET_HOSTPORT: {
    REWRITEHOSTPORT: "rewritehostport",
    SETHOSTPORT: "sethostport",
    SETHP: "sethp"
  },
  SET_HOSTPORTTRANS: {
    REWRITEHOSTPORTTRANS: "rewritehostporttrans",
    SETHOSTPORTTRANS: "sethostporttrans",
    SETHPT: "sethpt",
  },
  SET_USER: {
    REWRITEUSER: "rewriteuser",
    SETUSER: "setuser",
    SETU: "setu"
  },
  SET_USERPASS: {
    REWRITEUSERPASS: "rewriteuserpass",
    SETUSERPASS: "setuserpass",
    SETUP: "setup"
  },
  SET_PORT: {
    REWRITEPORT: "rewriteport",
    SETPORT: "setport",
    SETP: "setp",
  },
  SET_URI: {
    REWRITEURI: "rewriteuri",
    SETURI: "seturi"
  },
  REVERT_URI: "revert_uri",
  PREFIX: "prefix",
  STRIP: "strip",
  STRIP_TAIL: "strip_tail",
  SET_USERPHONE: "userphone",
  REMOVE_BRANCH: "remove_branch",
  CLEAR_BRANCHES: "clear_branches",
  IF: "if", // done
  ELSE: "else", // done
  SET_ADV_ADDRESS: "set_advertised_address",
  SET_ADV_PORT: "set_advertised_port",
  FORCE_SEND_SOCKET: "force_send_socket",
  SET_FWD_NO_CONNECT: "set_forward_no_connect",
  SET_RPL_NO_CONNECT: "set_reply_no_connect",
  SET_FWD_CLOSE: "set_forward_close",
  SET_RPL_CLOSE: "set_reply_close",
  SWITCH: "switch", //done
  CASE: "case", // done
  DEFAULT: "default", // done
  WHILE: "while", // done
  CFG_SELECT: "cfg_select",
  CFG_RESET: "cfg_reset"
};

/*ACTION LVALUES*/
const ACTION_LVALUES = {
  URIHOST: "uri:host",
  URIPORT: "uri:port",
  MAX_LEN: "max_len",
};

/* CFG variables */
const CFG_VARS = {
  DEBUG: "debug",
  FORK: "fork",
  FORK_DELAY: "fork_delay",
  MODINIT_DELAY: "modinit_delay",
  LOGSTDERROR: "log_stderror",
  LOGFACILITY: "log_facility",
  LOGNAME: "log_name",
  LOGCOLOR: "log_color",
  LOGPREFIX: "log_prefix",
  LOGPREFIXMODE: "log_prefix_mode",
  LOGENGINETYPE: "log_engine_type",
  LOGENGINEDATA: "log_engine_data",
  XAVPVIAPARAMS: "xavp_via_params",
  XAVPVIAFIELDS: "xavp_via_fields",
  XAVPVIAREPLYPARAMS: "xavp_via_reply_params",
  LISTEN: "listen",
  ADVERTISE: {
    LOWER_CASE: "advertise",
    UPPER_CASE: "ADVERTISE"
  },
  VIRTUAL: "virtual",
  STRNAME: {
    LOWER_CASE: "name",
    UPPER_CASE: "NAME"
  },
  ALIAS: "alias",
  DOMAIN: "domain",
  SR_AUTO_ALIASES: "auto_aliases",
  SR_AUTO_DOMAINS: "auto_domains",
  DNS: "dns",
  REV_DNS: {
    REV_DNS: "rev_dns",
    DNS_REV_VIA: "dns_rev_via"
  },
  DNS_TRY_IPV6: "dns_try_ipv6",
  DNS_TRY_NAPTR: "dns_try_naptr",
  DNS_SRV_LB: {
    DNS_SRV_LB: "dns_srv_lb",
    DNS_SRV_LOADBALANCING: "dns_srv_loadbalancing"
  },
  DNS_UDP_PREF: {
    DNS_UDP_PREF: "dns_udp_pref",
    DNS_UDP_PREFERENCE: "dns_udp_preference"
  },
  DNS_TCP_PREF: {
    DNS_TCP_PREF: "dns_tcp_pref",
    DNS_TCP_PREFERENCE: "dns_tcp_preference"
  },
  DNS_TLS_PREF: {
    DNS_TLS_PREF: "dns_tls_pref",
    DNS_TLS_PREFERENCE: "dns_tls_preference"
  },
  DNS_SCTP_PREF: {
    DNS_SCTP_PREF: "dns_sctp_pref",
    DNS_SCTP_PREFERENCE: "dns_sctp_preference"
  },
  DNS_RETR_TIME: "dns_retr_time",
  DNS_SLOW_QUERY_MS: "dns_slow_query_ms",
  DNS_RETR_NO: "dns_retr_no",
  DNS_SERVERS_NO: "dns_servers_no",
  DNS_USE_SEARCH: "dns_use_search_list",
  DNS_SEARCH_FMATCH: "dns_search_full_match",
  DNS_NAPTR_IGNORE_RFC: "dns_naptr_ignore_rfc",
  /*:"dns cache */
  DNS_CACHE_INIT: "dns_cache_init",
  DNS_USE_CACHE: {
    USE_DNS_CACHE: "use_dns_cache",
    DNS_USE_CACHE: "dns_use_cache"
  },
  DNS_USE_FAILOVER: {
    USE_DNS_FAILOVER: "use_dns_failover",
    DNS_USE_FAILOVER: "dns_use_failover"
  },
  DNS_CACHE_FLAGS: "dns_cache_flags",
  DNS_CACHE_NEG_TTL: "dns_cache_negative_ttl",
  DNS_CACHE_MIN_TTL: "dns_cache_min_ttl",
  DNS_CACHE_MAX_TTL: "dns_cache_max_ttl",
  DNS_CACHE_MEM: "dns_cache_mem",
  DNS_CACHE_GC_INT: "dns_cache_gc_interval",
  DNS_CACHE_DEL_NONEXP: {
    DNS_CACHE_DEL_NONEXP: "dns_cache_del_nonexp",
    DNS_CACHE_DELETE_NONEXPIRED: "dns_cache_delete_nonexpired"
  },
  DNS_CACHE_REC_PREF: "dns_cache_rec_pref",
  /*:"ipv6 auto bind */
  AUTO_BIND_IPV6: "auto_bind_ipv6",
  BIND_IPV6_LINK_LOCAL: "bind_ipv6_link_local",
  IPV6_HEX_STYLE: "ipv6_hex_style",
  /* blocklist */
  DST_BLST_INIT: "dst_blocklist_init",
  USE_DST_BLST: "use_dst_blocklist",
  DST_BLST_MEM: "dst_blocklist_mem",
  DST_BLST_TTL: {
    DST_BLOCKLIST_EXPIRE: "dst_blocklist_expire",
    DST_BLOCKLIST_TTL: "dst_blocklist_ttl"
  },
  DST_BLST_GC_INT: "dst_blocklist_gc_interval",
  DST_BLST_UDP_IMASK: "dst_blocklist_udp_imask",
  DST_BLST_TCP_IMASK: "dst_blocklist_tcp_imask",
  DST_BLST_TLS_IMASK: "dst_blocklist_tls_imask",
  DST_BLST_SCTP_IMASK: "dst_blocklist_sctp_imask",

  IP_FREE_BIND: {
    IP_FREE_BIND: "ip_free_bind",
    IPFREEBIND: "ipfreebind",
    IP_NONLOCAL_BIND: "ip_nonlocal_bind"
  },
  PORT: "port",
  STAT: "statistics",
  STATS_NAMESEP: "stats_name_separator",
  MAXBUFFER: "maxbuffer",
  MAXSNDBUFFER: "maxsndbuffer",
  SQL_BUFFER_SIZE: "sql_buffer_size",
  MSG_RECV_MAX_SIZE: "msg_recv_max_size",
  TCP_MSG_READ_TIMEOUT: "tcp_msg_read_timeout",
  TCP_MSG_DATA_TIMEOUT: "tcp_msg_data_timeout",
  TCP_ACCEPT_IPLIMIT: "tcp_accept_iplimit",
  TCP_CHECK_TIMER: "tcp_check_timer",
  CHILDREN: "children",
  SOCKET: "socket",
  BIND: "bind",
  WORKERS: "workers",
  SOCKET_WORKERS: "socket_workers",
  ASYNC_WORKERS: "async_workers",
  ASYNC_USLEEP: "async_usleep",
  ASYNC_NONBLOCK: "async_nonblock",
  ASYNC_WORKERS_GROUP: "async_workers_group",
  CHECK_VIA: "check_via",
  PHONE2TEL: "phone2tel",
  MEMLOG: {
    MEMLOG: "memlog",
    MEM_LOG: "mem_log"
  },
  MEMDBG: {
    MEMDBG: "memdbg",
    MEM_DBG: "mem_dbg"
  },
  MEMSUM: "mem_summary",
  MEMSAFETY: "mem_safety",
  MEMADDSIZE: "mem_add_size",
  MEMJOIN: "mem_join",
  MEMSTATUSMODE: "mem_status_mode",
  CORELOG: {
    CORELOG: "corelog",
    CORE_LOG: "core_log"
  },
  SIP_PARSER_LOG_ONELINE: "sip_parser_log_oneline",
  SIP_PARSER_LOG: "sip_parser_log",
  SIP_PARSER_MODE: "sip_parser_mode",
  SIP_WARNING: "sip_warning",
  SERVER_SIGNATURE: "server_signature",
  SERVER_HEADER: "server_header",
  USER_AGENT_HEADER: "user_agent_header",
  REPLY_TO_VIA: "reply_to_via",
  USER: {
    USER: "user",
    UID: "uid"
  },
  GROUP: {
    GROUP: "group",
    GID: "gid"
  },
  CHROOT: "chroot",
  WDIR: {
    WORKDIR: "workdir",
    WDIR: "wdir"
  },
  RUNDIR: {
    RUNDIR: "rundir",
    RUN_DIR: "run_dir"
  },
  MHOMED: "mhomed",
  DISABLE_TCP: "disable_tcp",
  TCP_CHILDREN: "tcp_children",
  TCP_ACCEPT_ALIASES: "tcp_accept_aliases",
  TCP_ACCEPT_UNIQUE: "tcp_accept_unique",
  TCP_SEND_TIMEOUT: "tcp_send_timeout",
  TCP_CONNECT_TIMEOUT: "tcp_connect_timeout",
  TCP_CON_LIFETIME: "tcp_connection_lifetime",
  TCP_CONNECTION_MATCH: "tcp_connection_match",
  TCP_POLL_METHOD: "tcp_poll_method",
  TCP_MAX_CONNECTIONS: "tcp_max_connections",
  TLS_MAX_CONNECTIONS: "tls_max_connections",
  TCP_NO_CONNECT: "tcp_no_connect",
  TCP_SOURCE_IPV4: "tcp_source_ipv4",
  TCP_SOURCE_IPV6: "tcp_source_ipv6",
  TCP_OPT_FD_CACHE: "tcp_fd_cache",
  TCP_OPT_BUF_WRITE: {
    TCP_BUF_WRITE: "tcp_buf_write",
    TCP_ASYNC: "tcp_async"
  },
  TCP_OPT_CONN_WQ_MAX: "tcp_conn_wq_max",
  TCP_OPT_WQ_MAX: "tcp_wq_max",
  TCP_OPT_RD_BUF: "tcp_rd_buf_size",
  TCP_OPT_WQ_BLK: "tcp_wq_blk_size",
  TCP_OPT_DEFER_ACCEPT: "tcp_defer_accept",
  TCP_OPT_DELAYED_ACK: "tcp_delayed_ack",
  TCP_OPT_SYNCNT: "tcp_syncnt",
  TCP_OPT_LINGER2: "tcp_linger2",
  TCP_OPT_KEEPALIVE: "tcp_keepalive",
  TCP_OPT_KEEPIDLE: "tcp_keepidle",
  TCP_OPT_KEEPINTVL: "tcp_keepintvl",
  TCP_OPT_KEEPCNT: "tcp_keepcnt",
  TCP_OPT_CRLF_PING: "tcp_crlf_ping",
  TCP_OPT_ACCEPT_NO_CL: "tcp_accept_no_cl",
  TCP_OPT_ACCEPT_HEP3: "tcp_accept_hep3",
  TCP_OPT_ACCEPT_HAPROXY: "tcp_accept_haproxy",
  TCP_OPT_CLOSE_RST: "tcp_close_rst",
  TCP_CLONE_RCVBUF: "tcp_clone_rcvbuf",
  TCP_REUSE_PORT: "tcp_reuse_port",
  TCP_WAIT_DATA: "tcp_wait_data",
  TCP_SCRIPT_MODE: "tcp_script_mode",
  DISABLE_TLS: {
    DISABLE_TLS: "disable_tls",
    TLS_DISABLE: "tls_disable"
  },
  ENABLE_TLS: {
    ENABLE_TLS: "enable_tls",
    TLS_ENABLE: "tls_enable"
  },
  TLS_THREADS_MODE: "tls_threads_mode",
  TLSLOG: {
    TLSLOG: "tlslog",
    TLS_LOG: "tls_log"
  },
  TLS_PORT_NO: "tls_port_no",
  TLS_METHOD: "tls_method",
  TLS_VERIFY: "tls_verify",
  TLS_REQUIRE_CERTIFICATE: "tls_require_certificate",
  TLS_CERTIFICATE: "tls_certificate",
  TLS_PRIVATE_KEY: "tls_private_key",
  TLS_CA_LIST: "tls_ca_list",
  TLS_HANDSHAKE_TIMEOUT: "tls_handshake_timeout",
  TLS_SEND_TIMEOUT: "tls_send_timeout",
  DISABLE_SCTP: "disable_sctp",
  ENABLE_SCTP: "enable_sctp",
  SCTP_CHILDREN: "sctp_children",
  ADVERTISED_ADDRESS: "advertised_address",
  ADVERTISED_PORT: "advertised_port",
  DISABLE_CORE: "disable_core_dump",
  OPEN_FD_LIMIT: "open_files_limit",
  SHM_MEM_SZ: {
    SHM: "shm",
    SHM_MEM: "shm_mem",
    SHM_MEM_SIZE: "shm_mem_size"
  },
  SHM_FORCE_ALLOC: "shm_force_alloc",
  MLOCK_PAGES: "mlock_pages",
  REAL_TIME: "real_time",
  RT_PRIO: "rt_prio",
  RT_POLICY: "rt_policy",
  RT_TIMER1_PRIO: {
    RT_TIMER1_PRIO: "rt_timer1_prio",
    RT_FAST_TIMER_PRIO: "rt_fast_timer_prio",
    RT_FTIMER_PRIO: "rt_ftimer_prio",
  },
  RT_TIMER1_POLICY: {
    RT_TIMER1_POLICY: "rt_timer1_policy",
    RT_FTIMER_POLICY: "rt_ftimer_policy"
  },
  RT_TIMER2_PRIO: {
    RT_TIMER2_PRIO: "rt_timer2_prio",
    RT_STIMER_PRIO: "rt_stimer_prio"
  },
  RT_TIMER2_POLICY: {
    RT_TIMER2_POLICY: "rt_timer2_policy",
    RT_STIMER_POLICY: "rt_stimer_policy"
  },
  MCAST_LOOPBACK: "mcast_loopback",
  MCAST_TTL: "mcast_ttl",
  MCAST: "mcast",
  TOS: "tos",
  PMTU_DISCOVERY: "pmtu_discovery",
  KILL_TIMEOUT: {
    EXIT_TIMEOUT: "exit_timeout",
    SER_KILL_TIMEOUT: "ser_kill_timeout"
  },
  MAX_WLOOPS: "max_while_loops",
  PVBUFSIZE: "pv_buffer_size",
  PVBUFSLOTS: "pv_buffer_slots",
  PVCACHELIMIT: "pv_cache_limit",
  PVCACHEACTION: "pv_cache_action",
  HTTP_REPLY_PARSE: {
    HTTP_REPLY_HACK: "http_reply_hack",
    HTTP_REPLY_PARSE: "http_reply_parse"
  },
  VERSION_TABLE_CFG: "version_table",
  VERBOSE_STARTUP: "verbose_startup",
  SERVER_ID: "server_id",
  ROUTE_LOCKS_SIZE: "route_locks_size",
  WAIT_WORKER1_MODE: "wait_worker1_mode",
  WAIT_WORKER1_TIME: "wait_worker1_time",
  WAIT_WORKER1_USLEEP: "wait_worker1_usleep",
  KEMI: "kemi",
  REQUEST_ROUTE_CALLBACK: "request_route_callback",
  ONSEND_ROUTE_CALLBACK: "onsend_route_callback",
  REPLY_ROUTE_CALLBACK: "reply_route_callback",
  EVENT_ROUTE_CALLBACK: "event_route_callback",
  RECEIVED_ROUTE_CALLBACK: "received_route_callback",
  RECEIVED_ROUTE_MODE: "received_route_mode",
  PRE_ROUTING_CALLBACK: "pre_routing_callback",
  MAX_RECURSIVE_LEVEL: "max_recursive_level",
  MAX_BRANCHES_PARAM: "max_branches",
  LATENCY_CFG_LOG: "latency_cfg_log",
  LATENCY_LOG: "latency_log",
  LATENCY_LIMIT_DB: "latency_limit_db",
  LATENCY_LIMIT_ACTION: "latency_limit_action",
  LATENCY_LIMIT_CFG: "latency_limit_cfg",
  RPC_EXEC_DELTA_CFG: "rpc_exec_delta",
  URI_HOST_EXTRA_CHARS: "uri_host_extra_chars",
  HDR_NAME_EXTRA_CHARS: "hdr_name_extra_chars",
  MSG_TIME: "msg_time",
  ONSEND_RT_REPLY: "onsend_route_reply",
  CFG_DESCRIPTION: {
    DESCRIPTION: "description",
    DESCR: "descr",
    DESC: "desc"
  },
  LOADMODULE: "loadmodule", /* done */
  LOADMODULEX: "loadmodulex", /* done */
  LOADPATH: {
    LOADPATH: "loadpath",
    MPATH: "mpath"
  },
  MODPARAM: "modparam", /* done */
  MODPARAMX: "modparamx", /* done */
  CFGENGINE: "cfgengine",
};
const VALUES = {
  YES: {
    YES: "yes",
    TRUE: "true",
    ON: "on",
    ENABLE: "enable"
  },
  NO: {
    NO: "no",
    FALSE: "false",
    OFF: "off",
    DISABLE: "disable"
  },
  UDP: {
    UDP_LOWER: "udp",
    UDP_UPPER: "UDP"
  },
  TCP: {
    TCP_LOWER: "tcp",
    TCP_UPPER: "TCP"
  },
  TLS: {
    TLS_LOWER: "tls",
    TLS_UPPER: "TLS"
  },
  SCTP: {
    SCTP_LOWER: "sctp",
    SCTP_UPPER: "SCTP"
  },
  WS: {
    WS_LOWER: "ws",
    WS_UPPER: "WS"
  },
  WSS: {
    WSS_LOWER: "wss",
    WSS_UPPER: "WSS"
  },
  INET: {
    INET_LOWER: "inet",
    INET_UPPER: "INET",
    IPV4_LOWER: "ipv4",
    IPV4_Cammel: "IPv4",
    IPV4_UPPER: "IPV4"
  },
  INET6: {
    INET6_LOWER: "inet6",
    INET6_UPPER: "INET6",
    IPV6_LOWER: "ipv6",
    IPV6_Cammel: "IPv6",
    IPV6_UPPER: "IPV6"
  },
  SSLv23: {
    SSLv23_LOWER: "sslv23",
    SSLv23_Cammel: "SSLv23",
    SSLV23_UPPER: "SSLV23"
  },
  SSLv2: {
    SSLv2_LOWER: "sslv2",
    SSLv2_Cammel: "SSLv2",
    SSLV2_UPPER: "SSLV2"
  },
  SSLv3: {
    SSLv3_LOWER: "sslv3",
    SSLv3_Cammel: "SSLv3",
    SSLV3_UPPER: "SSLV3"
  },
  TLSv1: {
    TLSv1_LOWER: "tlsv1",
    TLSv1_Cammel: "TLSv1",
    TLSV1_UPPER: "TLSV1"
  },
};

const BOOL = {
  TRUE: "true",
  FALSE: "false"
};

const OPERATORS = {
  EQUAL: "=", // Assignment operator
  EQUAL_T: "==",
  GT: ">",
  LT: "<",
  GTE: ">=",
  LTE: "<=",
  DIFF: "!=",
  MATCH: "=~",
  ADDEQ: "+=",
  NOT: {
    OP: "!",
    WORD: "not"
  },
  LOG_AND: {
    WORD: "and",
    OP: "&&"
  },
  BIN_AND: "&",
  LOG_OR: {
    WORD: "or",
    OP: "||"
  },
  BIN_OR: "|",
  BIN_NOT: "~",
  BIN_XOR: "^",
  BIN_LSHIFT: "<<",
  BIN_RSHIFT: ">>",
  PLUS: "+",
  MINUS: "-",
  MODULO: "mod",
  STRLEN: "strlen",
  STREMPTY: "strempty",
  DEFINED: "defined",
  SELVAL: "selval",
  STREQ: "eq",
  INTEQ: "ieq",
  STRDIFF: "ne",
  INTDIFF: "ine",
  INTCAST: "\(int\)",
  STRCAST: "\(str\)"
};

/* Attribute specification */
const ATTRIBUTES = {
  ATTR_MARK: "%",
  VAR_MARK: "$",
  SELECT_MARK: "@",
  ATTR_FROM: "f",
  ATTR_TO: "t",
  ATTR_FROMURI: "fr",
  ATTR_TOURI: "tr",
  ATTR_FROMUSER: "fu",
  ATTR_TOUSER: "tu",
  ATTR_FROMDOMAIN: "fd",
  ATTR_TODOMAIN: "td",
  ATTR_GLOBAL: "g",
};

// this is avp prefix (([ft][rud]?)|g)\.
// FIXME: This is wrong
const AVP_PREFIX = {
  FROM: "f.",
  TO: "t.",
  FROMURI: "fr.",
  TOURI: "tr.",
  FROMUSER: "fu.",
  TOUSER: "tu.",
  FROMDOMAIN: "fd.",
  TODOMAIN: "td.",
  GLOBAL: "g."
};
const PREC = {
  COMMENT: -11,
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -2,
  CONDITIONAL: -1,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  OFFSETOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  SIZEOF: 13,
  UNARY: 14,
  CALL: 15,
  FIELD: 16,
  SUBSCRIPT: 17,
};

module.exports = grammar({
  name: 'kamailio_cfg',

  extras: _ => [
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.block_item, $._expression_not_binary],
    [$.top_level_item, $._expression_not_binary],
  ],

  rules: {
    source_file: $ => seq(
      repeat($.top_level_item)
    ),

    // Top level statements
    // The valid blocks would be request routes
    top_level_item: $ => choice(
      $.file_starter,
      $.include_file,
      $.import_file,
      $.call_expression,
      $.routing_block,
      $.top_level_assignment_expression,
      $.keyword,
      $.loadmodule,
      $.loadmodulex,
      $.modparam,
      $.modparamx,
      $.preproc_def,
      $.preproc_trydef,
      $.preproc_ifdef,
      $.preproc_redef,
      $.preproc_subst,
      $.preproc_substdefs,
      $.preproc_substdef,
      $.top_level_statement,
      $.comment,
    ),

    block_item: $ => choice(
      $.statement,
      $.assignment_expression,
      $.preproc_def,
      $.preproc_trydef,
      $.preproc_ifdef,
      $.preproc_redef,
      $.preproc_subst,
      $.preproc_substdefs,
      $.preproc_substdef,
      $.loadmodule,
      $.loadmodulex,
      $.modparam,
      $.modparamx,

      $.route_call,
      $.routing_block,
      $.call_expression,
      $.comment,
    ),

    top_level_statement: $ => choice(
      $.case_statement,
      $.compound_statement,
      alias($.top_level_expression_statement, $.expression_statement),
      $.if_statement,
      $.switch_statement,
      $.while_statement,
      $.return_statement,
      $.break_statement,
      $.continue_statement,
    ),


    // file starter
    file_starter: _ => seq(
      choice(
        token(PREP_START.HASH_BANG),
        token(PREP_START.BANG_BANG)
      ),
      field('cfg_type',
        token(choice(
          KAMAILIO_CFG.SER,
          KAMAILIO_CFG.KAMAILIO,
          KAMAILIO_CFG.OPENSER,
          KAMAILIO_CFG.MAXCOMPAT,
          KAMAILIO_CFG.ALL
        )))),



    top_level_expression_statement: $ => prec(10, seq(
      $._expression_not_binary,
      optional(PUNC.SEMICOLON),
    )),
    statement: $ => choice(
      $.case_statement,
      $._non_case_statement,
    ),

    expression_statement: $ => seq(
      optional(choice(
        $.expression,
        $.comma_expression,
      )),
      PUNC.SEMICOLON,
    ),


    comma_expression: $ => seq(
      field('left', $.expression),
      PUNC.COMMA,
      field('right', choice($.expression, $.comma_expression)),
    ),

    while_statement: $ => seq(
      token(ACTION_KEYWORDS.WHILE),
      field('condition', $.parenthesized_expression),
      field('body', $.statement),
    ),

    return_statement: $ => seq(
      token(ACTION_KEYWORDS.RETURN),
      optional(choice($.expression, $.comma_expression)),
      PUNC.SEMICOLON,
    ),

    break_statement: _ => seq(
      token(ACTION_KEYWORDS.BREAK),
      PUNC.SEMICOLON,
    ),

    continue_statement: _ => seq(
      token('continue'),
      PUNC.SEMICOLON,
    ),

    _non_case_statement: $ => choice(
      $.core_function_statement,
      $.compound_statement,
      $.expression_statement,
      $.if_statement,
      $.switch_statement,
      $.while_statement,
      $.return_statement,
      $.break_statement,
      $.continue_statement,
    ),

    core_function_statement: $ => seq(
      $.core_function,
      PUNC.SEMICOLON
    ),

    core_function: $ => seq(
      choice(
        token(ACTION_KEYWORDS.EXIT),
        token(ACTION_KEYWORDS.DROP)),
      optional(seq(PUNC.LPAREN, optional(choice($.identifier, $.string, $.number_literal)), PUNC.RPAREN)),
    ),



    include_file: $ => seq(
      optional($.preprocessor_start),
      token(INCLUDEFILE.INCLUDE_FILE),
      field('file_name', $.string)
    ),


    // Example: loadmodule "module_name"
    loadmodule: $ => seq(
      token(CFG_VARS.LOADMODULE),
      field('module_name', $.string)
    ),

    // Example: loadmodulex "module_name"
    loadmodulex: $ => seq(
      token(CFG_VARS.LOADMODULEX),
      field('module_name', $.string)
    ),


    predef_route: _ => choice(
      token(ACTION_KEYWORDS.ROUTE_REQUEST),
      token(ACTION_KEYWORDS.ROUTE_REPLY),
      token(ACTION_KEYWORDS.ROUTE_BRANCH),
      token(ACTION_KEYWORDS.ROUTE_FAILURE),
      token(ACTION_KEYWORDS.ROUTE_ONREPLY),
      token(ACTION_KEYWORDS.ROUTE_EVENT),
      token(ACTION_KEYWORDS.ROUTE_SEND),
      token(ACTION_KEYWORDS.ROUTE)
    ),

    route_name: $ => choice(
      $.string,
      $.identifier,
      $.number_literal,
      $.special_name
    ),

    special_name: _ => /[a-zA-Z_:-][a-zA-Z0-9_:-]*/,

    routing_block: $ => seq(
      field('route', $.predef_route),
      optional(seq(PUNC.LBRACK, field('route_name', $.route_name), PUNC.RBRACK)),
      field('body', $.compound_statement)
    ),

    comment_line: _ => token(seq(PUNC.COM_LINE, /(\\+(.|\r?\n)|[^\\\n])*/)),
    deprecated_comment: _ => token(seq(PUNC.COM_LINE_DEPR, /[^!]/, /[^\n]*/)),
    multiline_comment: _ => token(seq(PUNC.COM_START, /[^*]*\*+([^/*][^*]*\*+)*/, PUNC.COM_END)),

    comment: $ => (choice(
      $.comment_line,
      $.deprecated_comment,
      $.multiline_comment
    )),

    // TODO: keywords separately?
    keyword: _ => choice(
      token(prec(1, 'cfgengine')),
    ),


    if_statement: $ => prec.right(seq(
      token(ACTION_KEYWORDS.IF),
      field('condition', $.parenthesized_expression),
      field('consequence', $.statement),
      optional(field('alternative', $.else_block))
    )),

    else_block: $ => seq(
      token(ACTION_KEYWORDS.ELSE),
      $.statement
    ),

    switch_statement: $ => seq(
      ACTION_KEYWORDS.SWITCH,
      field('condition', $.parenthesized_expression),
      field('body', $.compound_statement),
    ),

    case_statement: $ => prec.right(seq(
      choice(
        seq(ACTION_KEYWORDS.CASE, field('value', $.expression)),
        ACTION_KEYWORDS.DEFAULT,
      ),
      PUNC.COLON,
      repeat(choice(
        $._non_case_statement,
      )),
    )),

    compound_statement: $ => seq(
      PUNC.LBRACE,
      repeat($.block_item),
      PUNC.RBRACE,
    ),

    string: $ => choice(
      seq(PUNC.QUOTE, repeat(choice($.escape_sequence, /[^\\"]+/)), PUNC.QUOTE),
      seq(PUNC.TICK, repeat(choice($.escape_sequence, /[^\\']+/)), PUNC.TICK)
    ),

    escape_sequence: _ => token.immediate(seq('\\', /./)),

    preprocessor_start: _ => choice(
      PREP_START.HASH_BANG,
      PREP_START.HASH_BANG
    ),


    import_file: $ => prec.left(seq(
      optional($.preprocessor_start),
      token(INCLUDEFILE.IMPORT_FILE),
      field('file_name', $.string)
    )),

    // Available directives:
    //
    // #!define NAME - define a keyword
    // #!define NAME VALUE - define a keyword with value
    // #!ifdef NAME - check if a keyword is defined
    // #!ifndef - check if a keyword is not defined
    // #!else - switch to false branch of ifdef/ifndef region
    // #!endif - end ifdef/ifndef region
    // #!trydef - add a define if not already defined
    // #!redefine - force redefinition even if already defined
    preprocessor_define: $ => prec.right(seq(
      PREP_START.HASH_BANG,
      token.immediate('define'),
      seq(field('name', $.identifier), optional(field('value', choice($.number_literal, $.string, $.identifier))))
    )),

    preproc_def: $ => prec.right(seq(
      preprocessor('define'),
      field('name', $.identifier),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    )),
    preproc_trydef: $ => seq(
      preprocessor('trydef'),
      field('name', $.identifier),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),
    preproc_redef: $ => seq(
      preprocessor('redefine'),
      field('name', $.identifier),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),
    preproc_subst: $ => seq(
      preprocessor('subst'),
      field('value', $.preproc_arg),
      token.immediate(/\r?\n/),
    ),
    preproc_substdefs: $ => prec.right(seq(
      preprocessor('substdefs'),
      field('value', $.preproc_arg),
      token.immediate(/\r?\n/),
    )),
    preproc_substdef: $ => prec.right(seq(
      preprocessor('substdef'),
      field('value', $.preproc_arg),
      token.immediate(/\r?\n/),
    )),


    preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
    preproc_directive: _ => /#![ \t]*[a-zA-Z0-9]\w*/,


    ...preprocIf('', $ => $.block_item),

    _preproc_expression: $ => choice(
      $.identifier,
      alias($.preproc_call_expression, $.call_expression),
      $.number_literal,
      $.char_literal,
      $.preproc_defined,
      alias($.preproc_unary_expression, $.unary_expression),
      alias($.preproc_binary_expression, $.binary_expression),
      alias($.preproc_parenthesized_expression, $.parenthesized_expression),
    ),
    preproc_call_expression: $ => prec(PREC.CALL, seq(
      field('function', $.identifier),
      field('arguments', alias($.preproc_argument_list, $.argument_list)),
    )),
    preproc_unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice('!', '~', '-', '+')),
      field('argument', $._preproc_expression),
    )),
    preproc_binary_expression: $ => {
      const table = [
        [OPERATORS.PLUS, PREC.ADD],
        [OPERATORS.MINUS, PREC.ADD],
        //['*', PREC.MULTIPLY], // TODO: remove?
        //['/', PREC.MULTIPLY], // TODO: remove?
        //['%', PREC.MULTIPLY], // TODO: remove?
        [OPERATORS.LOG_OR.OP, PREC.LOGICAL_OR],
        [OPERATORS.LOG_OR.WORD, PREC.LOGICAL_OR],
        [OPERATORS.LOG_AND.OP, PREC.LOGICAL_AND],
        [OPERATORS.LOG_AND.WORD, PREC.LOGICAL_AND],
        [OPERATORS.BIN_OR, PREC.INCLUSIVE_OR],
        [OPERATORS.BIN_XOR, PREC.EXCLUSIVE_OR],
        [OPERATORS.BIN_AND, PREC.BITWISE_AND],
        [OPERATORS.EQUAL_T, PREC.EQUAL],
        [OPERATORS.MATCH, PREC.EQUAL],
        [OPERATORS.DIFF, PREC.EQUAL],
        [OPERATORS.ADDEQ, PREC.EQUAL],
        [OPERATORS.GT, PREC.RELATIONAL],
        [OPERATORS.GTE, PREC.RELATIONAL],
        [OPERATORS.LTE, PREC.RELATIONAL],
        [OPERATORS.LT, PREC.RELATIONAL],
        [OPERATORS.BIN_LSHIFT, PREC.SHIFT],
        [OPERATORS.BIN_RSHIFT, PREC.SHIFT],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._preproc_expression),
          // @ts-ignore
          field('operator', operator),
          field('right', $._preproc_expression),
        ));
      }));
    },

    preproc_parenthesized_expression: $ => seq(PUNC.LPAREN, $._preproc_expression, PUNC.RPAREN),

    char_literal: $ => seq(
      choice('L\'', 'u\'', 'U\'', 'u8\'', '\''),
      repeat1(choice(
        $.escape_sequence,
        alias(token.immediate(/[^\n']/), $.character),
      )),
      '\'',
    ),
    preproc_defined: $ => choice(
      prec(PREC.CALL, seq(OPERATORS.DEFINED, PUNC.LPAREN, $.identifier, PUNC.RPAREN)),
      seq(OPERATORS.DEFINED, $.identifier),

    ),
    preproc_argument_list: $ => seq(
      PUNC.LPAREN,
      commaSep($._preproc_expression),
      PUNC.RPAREN,
    ),

    variable_content: $ => choice(
      seq($.index, optional($.transformation)),
      seq($.transformation, optional($.index))
    ),

    index: _ => seq(PUNC.LBRACK, /[^\]]+/, PUNC.RBRACK),

    // TODO: revisit
    transformation: _ => seq(
      PUNC.LBRACE,
      field('transformation_type', choice(
        's', 'uri', 'param', 'nameaddr', 'tobody', 're', 'line', 'sql', 'msrpuri', 'json', 'url', 'sock', 'urialias', 'val'
      )),
      PUNC.RBRACE
    ),

    // TODO: revisit
    boolean_constant: _ => token(choice(
      BOOL.TRUE,
      BOOL.FALSE
    )),

    expression: $ => choice(
      $._expression_not_binary,
      $.binary_expression,
    ),

    _expression_not_binary: $ => choice(
      $.assignment_expression,
      $.unary_expression,
      $.update_expression,
      $.cast_expression,
      $.subscript_expression,
      $.call_expression,
      $.field_expression,
      $.identifier,
      $.number_literal,
      $.string,
      $.true,
      $.false,
      $.null,
      $.pseudo_variable,
      $.pvar_expression,
      $.parenthesized_expression,
    ),

    top_level_assignment_expression: $ => prec.right(PREC.DEFAULT, seq(
      field('key', $._assignment_left_expression),
      field('operator', choice(
        OPERATORS.EQUAL,
        OPERATORS.ADDEQ,
      )),
      field('value', $.expression),
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._assignment_left_expression),
      field('operator', choice(
        OPERATORS.EQUAL,
        OPERATORS.ADDEQ,
      )),
      field('right', $.expression),
    )),

    _assignment_left_expression: $ => choice(
      $.pseudo_variable,
      $.pvar_expression,
      $.identifier,
      $.field_expression,
      $.subscript_expression,
      $.parenthesized_expression,
    ),

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice(OPERATORS.NOT.OP, token(OPERATORS.NOT.WORD))), // is word applicable here
      field('argument', $.expression),
    )),

    binary_expression: $ => {
      const table = [
        [OPERATORS.PLUS, PREC.ADD],
        [OPERATORS.MINUS, PREC.ADD],
        [OPERATORS.LOG_OR.OP, PREC.LOGICAL_OR],
        [OPERATORS.LOG_OR.WORD, PREC.LOGICAL_OR],
        [OPERATORS.LOG_AND.OP, PREC.LOGICAL_AND],
        [OPERATORS.LOG_AND.WORD, PREC.LOGICAL_AND],
        [OPERATORS.BIN_OR, PREC.INCLUSIVE_OR],
        [OPERATORS.BIN_XOR, PREC.EXCLUSIVE_OR],
        [OPERATORS.BIN_AND, PREC.BITWISE_AND],
        [OPERATORS.EQUAL_T, PREC.EQUAL],
        [OPERATORS.MATCH, PREC.EQUAL],
        [OPERATORS.DIFF, PREC.EQUAL],
        [OPERATORS.GT, PREC.RELATIONAL],
        [OPERATORS.GTE, PREC.RELATIONAL],
        [OPERATORS.LTE, PREC.RELATIONAL],
        [OPERATORS.LT, PREC.RELATIONAL],
        [OPERATORS.BIN_LSHIFT, PREC.SHIFT],
        [OPERATORS.BIN_RSHIFT, PREC.SHIFT],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $.expression),
          // @ts-ignore
          field('operator', operator),
          field('right', $.expression),
        ));
      }));
    },

    //TODO: do we need this
    update_expression: $ => {
      const argument = field('argument', $.expression);
      const operator = field('operator', choice('--', '++'));
      return prec.right(PREC.UNARY, choice(
        seq(operator, argument),
        seq(argument, operator),
      ));
    },

    cast_expression: $ => prec(PREC.CAST, seq(
      choice(OPERATORS.STRCAST, OPERATORS.INTCAST),
      field('value', $.expression),
    )),

    subscript_expression: $ => prec(PREC.SUBSCRIPT, seq(
      field('argument', $.expression),
      PUNC.RBRACK,
      field('index', $.expression),
      PUNC.LBRACK
    )),

    call_expression: $ => prec(PREC.CALL, seq(
      field('function', $.expression),
      field('arguments', $.argument_list),
    )),

    argument_list: $ => seq(PUNC.LPAREN, commaSep(choice($.expression, $.compound_statement)), PUNC.RPAREN),

    field_expression: $ => seq(
      prec(PREC.FIELD, seq(
        field('argument', $.expression),
        field('operator', choice(PUNC.DOT, '->', '=>')),
      )),
      field('field', $._field_identifier),
    ),

    parenthesized_expression: $ => seq(
      PUNC.LPAREN,
      choice($.expression, $.comma_expression),
      PUNC.RPAREN
    ),


    true: _ => token(choice(
      VALUES.YES.YES,
      VALUES.YES.TRUE,
      VALUES.YES.ON,
      VALUES.YES.ENABLE)),

    false: _ => token(choice(
      VALUES.NO.NO,
      VALUES.NO.FALSE,
      VALUES.NO.OFF,
      VALUES.NO.DISABLE)),

    null: _ => choice('$NULL', '$null'),

    _type_identifier: $ => alias(
      $.identifier,
      $.type_identifier,
    ),

    number_literal: _ => {
      const separator = '\'';
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
      return token(seq(
        optional(/[-\+]/),
        optional(choice(/0[xX]/, /0[bB]/)),
        choice(
          seq(
            choice(
              decimalDigits,
              seq(/0[bB]/, decimalDigits),
              seq(/0[xX]/, hexDigits),
            ),
            optional(seq(PUNC.DOT, optional(hexDigits))),
          ),
          seq(PUNC.DOT, decimalDigits),
        ),
        optional(seq(
          /[eEpP]/,
          optional(seq(
            optional(/[-\+]/),
            hexDigits,
          )),
        )),
        /[uUlLwWfFbBdD]*/,
      ));
    },


    _field_identifier: $ => alias($.identifier, $.field_identifier),
    _statement_identifier: $ => alias($.identifier, $.statement_identifier),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    pvar_type: $ => seq(
      ATTRIBUTES.VAR_MARK,
      $.identifier
    ),

    pvar_expression: _ => seq(ATTRIBUTES.VAR_MARK, PUNC.LPAREN, /[\S]*/, PUNC.RPAREN),

    pseudo_variable: $ => prec.right(seq(
      field('pvar', $.pvar_type),
      optional(seq(PUNC.LPAREN, field('argument', choice($.number_literal, $.string, $.identifier, $.field_expression)), PUNC.RPAREN, PUNC.SEMICOLON))
    )),

    modparam: $ => seq(
      token(CFG_VARS.MODPARAM),
      PUNC.LPAREN,
      field('module_name', $.string),
      PUNC.COMMA,
      field('parameter_name', $.string),
      PUNC.COMMA,
      field('value', choice(
        $.string,
        $.number_literal,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.pseudo_variable,
        $.variable_content
      )),
      PUNC.RPAREN
    ),

    modparamx: $ => seq(
      token(CFG_VARS.MODPARAMX),
      PUNC.LPAREN,
      field('module_name', $.string),
      PUNC.COMMA,
      field('parameter_name', $.string),
      PUNC.COMMA,
      field('value', choice(
        $.string,
        $.number_literal,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.pseudo_variable,
        $.variable_content
      )),
      PUNC.RPAREN
    ),

    // if string arguments are passed and they are sip keywords, they should be tokenized as sip_keywords
    function_call: $ => seq(
      // need to highlight the function name separeted from identifier
      field('function_name', $.identifier),
      PUNC.LPAREN,
      optional(seq(
        choice(
          field('argument', $.identifier),
          field('argument', $.sip_keywords),
          field('argument', $.string),
          field('argument', $.number_literal)
        ),
        repeat(seq(PUNC.COMMA, choice(
          field('argument', $.identifier),
          field('argument', $.sip_keywords),
          field('argument', $.string),
          field('argument', $.number_literal)
        ))),
      )),
      PUNC.RPAREN
    ),

    route_call: $ => seq(
      token(ACTION_KEYWORDS.ROUTE),
      PUNC.LPAREN,
      field('route_name', choice($.identifier, $.string, $.number_literal)),
      PUNC.RPAREN,
    ),

    // TODO: may be
    sip_keywords: _ => token(choice(
      '"INVITE"',
      '"ACK"',
      '"BYE"',
      '"CANCEL"',
      '"PRACK"',
      '"UPDATE"',
      '"REGISTER"',
      '"MESSAGE"',
      '"INFO"',
      '"OPTIONS"',
      '"SUBSCRIBE"',
      '"NOTIFY"',
      '"PUBLISH"',
      '"REFER"',
      '"KDMQ"',
      '"GET"',
      '"POST"',
      '"PUT"',
      '"DELETE"',
      '"SIP"',
      '"From"',
      '"To"',
      '"Call-ID"',
      '"CSeq"',
      '"Route"',
      '"Record-Route"',
      '"Authorization"',
      '"Proxy-Authorization"',
      '"Contact"',
      '"Expires"',
      '"Content-Type"',
      '"Content-Length"',
      '"Via"',
      '"User-Agent"',
      '"P-Asserted-Identity"'
    ))
  }
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(PUNC.COMMA, rule)));
}

/**
  * Creates a preprocessor regex rule
  *
  * @param {RegExp|Rule|String} command
  *
  * @return {AliasRule}
  */
function preprocessor(command) {
  return alias(new RegExp(PREP_START.HASH_BANG + command), PREP_START.HASH_BANG + command);
}

/**
 *
 * @param {string} suffix
 *
 * @param {RuleBuilder<string>} content
 *
 * @param {number} precedence
 *
 * @return {RuleBuilders<string, string>}
 */
function preprocIf(suffix, content, precedence = 0) {
  /**
    *
    * @param {GrammarSymbols<string>} $
    *
    * @return {ChoiceRule}
    *
    */
  function alternativeBlock($) {
    return choice(suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else)
  }
  return {
    ['preproc_ifdef' + suffix]: $ => prec(precedence, seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      field('name', $.identifier),
      repeat(content($)),
      field('alternative', optional(alternativeBlock($))),
      preprocessor('endif'),
    )),

    ['preproc_else' + suffix]: $ => prec(precedence, seq(
      preprocessor('else'),
      repeat(content($)),
    )),
  };
}
