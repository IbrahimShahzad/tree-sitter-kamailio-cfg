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
  //FORWARD: "forward",
  //FORWARD_TCP: "forward_tcp",
  //FORWARD_UDP: "forward_udp",
  //FORWARD_TLS: "forward_tls",
  //FORWARD_SCTP: "forward_sctp",
  DROP: "drop", // done
  EXIT: "exit", // done
  RETURN: "return", // done
  RETURN_MODE: "return_mode",
  BREAK: "break", // done
  //LOG: "log",
  //ERROR: "error",
  ROUTE: "route", // done
  ROUTE_REQUEST: "request_route", // done
  ROUTE_FAILURE: "failure_route", // done
  ROUTE_REPLY: "reply_route", // done
  ROUTE_ONREPLY: "onreply_route", // done
  ROUTE_BRANCH: "branch_route", // done
  ROUTE_SEND: "onsend_route", // done
  ROUTE_EVENT: "event_route", // done
  //EXEC: "exec",
  //FORCE_RPORT: {
  //  FORCE_RPORT: "force_rport",
  //  ADD_RPORT: "add_rport"
  //},
  //LOCAL_RPORT: "local_rport",
  //ADD_LOCAL_RPORT: "add_local_rport",
  //FORCE_TCP_ALIAS: {
  //  FORCE_TCP_ALIAS: "force_tcp_alias",
  //  ADD_TCP_ALIAS: "add_tcp_alias"
  //},
  //UDP_MTU: "udp_mtu",
  //UDP_MTU_TRY_PROTO: "udp_mtu_try_proto",
  //UDP_RECEIVER_MODE: "udp_receiver_mode",
  //UDP4_RAW: "udp4_raw",
  //UDP4_RAW_MTU: "udp4_raw_mtu",
  //UDP4_RAW_TTL: "udp4_raw_ttl",
  //SETFLAG: "setflag",
  //RESETFLAG: "resetflag",
  //ISFLAGSET: "isflagset",
  //FLAGS_DECL: {
  //  FLAG: "flags",
  //  BOOL: "bool",
  //},
  //SETAVPFLAG: "setavpflag",
  //RESETAVPFLAG: "resetavpflag",
  //ISAVPFLAGSET: "isavpflagset",
  //AVPFLAGS_DECL: "avpflags",
  //SET_HOST: {
  //  REWRITEHOST: "rewritehost",
  //  SETHOST: "sethost",
  //  SETH: "seth"
  //},
  //SET_HOSTPORT: {
  //  REWRITEHOSTPORT: "rewritehostport",
  //  SETHOSTPORT: "sethostport",
  //  SETHP: "sethp"
  //},
  //SET_HOSTPORTTRANS: {
  //  REWRITEHOSTPORTTRANS: "rewritehostporttrans",
  //  SETHOSTPORTTRANS: "sethostporttrans",
  //  SETHPT: "sethpt",
  //},
  //SET_USER: {
  //  REWRITEUSER: "rewriteuser",
  //  SETUSER: "setuser",
  //  SETU: "setu"
  //},
  //SET_USERPASS: {
  //  REWRITEUSERPASS: "rewriteuserpass",
  //  SETUSERPASS: "setuserpass",
  //  SETUP: "setup"
  //},
  //SET_PORT: {
  //  REWRITEPORT: "rewriteport",
  //  SETPORT: "setport",
  //  SETP: "setp",
  //},
  //SET_URI: {
  //  REWRITEURI: "rewriteuri",
  //  SETURI: "seturi"
  //},
  //REVERT_URI: "revert_uri",
  //PREFIX: "prefix",
  //STRIP: "strip",
  //STRIP_TAIL: "strip_tail",
  //SET_USERPHONE: "userphone",
  //REMOVE_BRANCH: "remove_branch",
  //CLEAR_BRANCHES: "clear_branches",
  IF: "if", // done
  ELSE: "else", // done
  //SET_ADV_ADDRESS: "set_advertised_address",
  //SET_ADV_PORT: "set_advertised_port",
  //FORCE_SEND_SOCKET: "force_send_socket",
  //SET_FWD_NO_CONNECT: "set_forward_no_connect",
  //SET_RPL_NO_CONNECT: "set_reply_no_connect",
  //SET_FWD_CLOSE: "set_forward_close",
  //SET_RPL_CLOSE: "set_reply_close",
  SWITCH: "switch", //done
  CASE: "case", // done
  DEFAULT: "default", // done
  WHILE: "while", // done
  //CFG_SELECT: "cfg_select",
  //CFG_RESET: "cfg_reset"
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
  //
  //UDP: {
  //  UDP_LOWER: "udp",
  //  UDP_UPPER: "UDP"
  //},
  //TCP: {
  //  TCP_LOWER: "tcp",
  //  TCP_UPPER: "TCP"
  //},
  //TLS: {
  //  TLS_LOWER: "tls",
  //  TLS_UPPER: "TLS"
  //},
  //SCTP: {
  //  SCTP_LOWER: "sctp",
  //  SCTP_UPPER: "SCTP"
  //},
  //WS: {
  //  WS_LOWER: "ws",
  //  WS_UPPER: "WS"
  //},
  //WSS: {
  //  WSS_LOWER: "wss",
  //  WSS_UPPER: "WSS"
  //},
  //INET: {
  //  INET_LOWER: "inet",
  //  INET_UPPER: "INET",
  //  IPV4_LOWER: "ipv4",
  //  IPV4_Cammel: "IPv4",
  //  IPV4_UPPER: "IPV4"
  //},
  //INET6: {
  //  INET6_LOWER: "inet6",
  //  INET6_UPPER: "INET6",
  //  IPV6_LOWER: "ipv6",
  //  IPV6_Cammel: "IPv6",
  //  IPV6_UPPER: "IPV6"
  //},
  //SSLv23: {
  //  SSLv23_LOWER: "sslv23",
  //  SSLv23_Cammel: "SSLv23",
  //  SSLV23_UPPER: "SSLV23"
  //},
  //SSLv2: {
  //  SSLv2_LOWER: "sslv2",
  //  SSLv2_Cammel: "SSLv2",
  //  SSLV2_UPPER: "SSLV2"
  //},
  //SSLv3: {
  //  SSLv3_LOWER: "sslv3",
  //  SSLv3_Cammel: "SSLv3",
  //  SSLV3_UPPER: "SSLV3"
  //},
  //TLSv1: {
  //  TLSv1_LOWER: "tlsv1",
  //  TLSv1_Cammel: "TLSv1",
  //  TLSV1_UPPER: "TLSV1"
  //},
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
  MULTIPLY: "*",
  DIVIDE: "/",
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

const PARAMETER_LIST_TRANSFORMATION = {
  VALUE: "param.value",
  IN: "param.in",
  VALUEAT: "param.valueat",
  NAME: "param.name",
  COUNT: "param.count"
};

const REGEX_TRANSFORMATION = {
  SUBST: "re.subst",
};

const VALUE_TRANSFORMATION = {
  JSON: "val.json",
  N0: "val.n0",
  NE: "val.ne",
  JSONQE: "val.jsonqe",
};

const URIALIAS_TRANSFORMATION = {
  ENCODE: 'urialias.encode',
  DECODE: 'urialias.decode'
};

const SOCKADDR_TRANSFORMATION = {
  HOST: "sock.host",
  PORT: "sock.port",
  PROTO: "sock.proto",
  TOURI: "sock.touri"
};

const JSON_TRANSFORMATION = {
  PARSE: "json.parse"
};

const URL_TRANSFORMATION = {
  PATH: "url.path",
  QUERYSTRING: "url.querystring"
};

const SQL_TRANSFORMATION = {
  VAL: "sql.val",
  INT: "sql.val.int",
  STR: "sql.val.str",
};

const MSRP_TRANSFORMATION = {
  USER: "msrpuri.user",
  HOST: "msrpuri.host",
  PORT: "msrpuri.port",
  SESSION: "msrpuri.session",
  PROTO: "msrpuri.proto",
  PARAMS: "msrpuri.params",
  USERINFO: "msrpuri.userinfo",
};
const LINE_TRANSFORMATION = {
  COUNT: "line.count",
  AT: "line.at",
  SW: "line.sw",
};

const TOBODY_TRANSFORMATION = {
  URI: "tobody.uri",
  DISPLAY: "tobody.display",
  TAG: "tobody.tag",
  USER: "tobody.user",
  HOST: "tobody.host",
  params: "tobody.params"
};

const NAMEADDR_TRANSFORMATION = {
  NAME: "nameaddr.name",
  URI: "nameaddr.uri",
  LEN: "nameaddr.len",
};

const URI_TRANSFORMATION = {
  USER: "uri.user",
  HOST: "uri.host",
  PASSWD: "uri.passwd",
  PORT: "uri.port",
  PARAMS: "uri.params",
  PARAM: "uri.param", //,name", //n
  HEADERS: "uri.headers",
  TRANSPORT: "uri.transport",
  TTL: "uri.ttl",
  UPARAM: "uri.uparam",
  MADDR: "uri.maddr",
  METHOD: "uri.method",
  LR: "uri.lr",
  R2: "uri.r2",
  SCHEME: "uri.scheme",
  TOSOCKET: "uri.tosocket",
  DURI: "uri.duri",
  SAOR: "uri.saor",
  SURI: "uri.suri",
};

const STRING_TRANSFORMATIONS = {
  LEN: "s.len",
  INT: "s.int",
  MD5: "s.md5",
  SHA256: "s.sha256",
  SHA384: "s.sha384",
  SHA512: "s.sha512",
  SUBSTR: "s.substr", //, offset, length
  SELECT: "s.select", // index, separator
  ENCODE_7BIT: "s.encode.7bit",
  DECODE_7BIT: "s.decode.7bit",
  ENCODE_HEXA: "s.encode.hexa",
  DECODE_HEXA: "s.decode.hexa",
  ENCODE_BASE58: "s.encode.base58",
  ENCODE_BASE64: "s.encode.base64",
  DECODE_BASE64: "s.decode.base64",
  ENCODE_BASE64T: "s.encode.base64t",
  DECODE_BASE64T: "s.decode.base64t",
  ENCODE_BASE64URL: "s.encode.base64url",
  DECODE_BASE64URL: "s.decode.base64url",
  ENCODE_BASE64URLT: "s.encode.base64urlt",
  DECODE_BASE64URLT: "s.decode.base64urlt",
  ESCAPE_COMMON: "s.escape.common",
  UNESCAPE_COMMON: "s.unescape.common",
  ESCAPE_USER: "s.escape.user",
  UNESCAPE_USER: "s.unescape.user",
  ESCAPE_PARAM: "s.escape.param",
  UNESCAPE_PARAM: "s.unescape.param",
  ESCAPE_CSV: "s.escape_csv",
  NUMERIC: "s.numeric",
  TOLOWER: "s.tolower",
  TOUPPER: "s.toupper",
  STRIP: "s.strip", // len
  STRIPTAIL: "s.striptail", //len
  PREFIXES: "s.prefixes",
  PREFIXES_QUOUTED: "s.prefixes.quoted",
  REPLACE: "s.replace", //match, repl
  FTIME: "s.ftime", //format
  TRIM: "s.trim",
  RTRIM: "s.rtrim",
  LTRIM: "s.ltrim",
  RM: "s.rm", //, match
  RMHDWS: "s.rmhdws",
  RMHLWS: "s.rmhlws",
  RMWS: "s.rmws",
  COREHASH: "s.corehash", //n
  UNQUOTE: "s.unquote",
  UNBRACKET: "s.unbracket",
  COUNT: "s.count", // c
  AFTER: "s.after", //x
  RAFTER: "s.rafter", //x
  BEFORE: "s.before",//, x
  RBEFORE: "s.rbefore",// x
  FMTLINES: "s.fmtlines", //, n, m
  FMTLINET: "s.fmtlinet", // , n, m
  URLENCODE_PARAM: "s.urlencode.param",
  URLDECODE_PARAM: "s.urldecode.param"
};

const PSEUDO_VARS = {
  FORMAT: "_s",//$_s(format)
  URI_IN_P_ASSERTED_IDENTITY_HEADER: "ai",
  AUTH_DIGEST_URI: "adu",
  AUTH_ALGORITHM: "aa",
  AUTH_REALM: "ar",
  AUTH_USERNAME_USER: "au",
  AUTH_USERNAME_DOMAIN: "ad",
  AUTH_WHOLE_USERNAME: "aU",
  ACC_USERNAME_AND_REALM_DOMAIN: "Au",
  ACC_USERNAME: "AU",
  BRANCH_ATTRIBUTES: "branch",//_(NAME)
  REQUESTS_FIRST_BRANCH: "br",
  REQUESTS_ALL_BRANCHES: "bR",
  BRANCH_FLAGS: "bf",
  BRANCH_FLAGS: "bF",
  BODY_SIZE: "bs",
  CALL_ID: "ci",
  CONTENT_LENGTH: "cl",
  COUNT_NUMBER_OF_PVS: "cnt",//(PV)
  TCP_CONNECTION_ID: "conid",
  CSEQ_NUMBER: "cs",
  CSEQ_HEADER_BODY: "csb",
  CONTACT_HEADER: "ct",
  CONTACT_HEADER_STAR_STATUS: "cts",
  CONTACT_HEADER_URI: "ctu",
  CONTENT_TYPE: "cT",
  DOMAIN_OF_DESTINATION_URI: "dd",
  DEFINED_VALUE_: "def",//_(NAME)
  DEFINED_VALUE_AS_NUMBER: "defn",//(NAME)
  DIVERSION_HEADER_URI: "di",
  DIVERSION_PRIVACY_PARAMETER: "dip",
  DIVERSION_REASON_PARAMETER: "dir",
  DIVERSION_COUNTER_PARAMETER: "dic",
  PORT_OF_DESTINATION_URI: "dp",
  TRANSPORT_PROTOCOL_OF_DESTINATION_URI: "dP",
  DESTINATION_SET: "ds",
  DESTINATION_URI: "du",
  BACK_SLASH: "Eb",
  LF: "En",
  CR: "En",
  TAB: "Et",
  SPACE: "Es",
  COMMA: "Ec",
  DOUBLE_QUOTE: "Eq",
  SINGLE_QUOTE: "Ek",
  COLON: "Ei",
  SEMICOLON: "Ej",
  BACK_TICK: "Ev",
  FROM_URI_DOMAIN: "fd",
  FROM_DISPLAY_NAME: "fn",
  FORCED_SEND_SOCKET: "fs",
  FORCED_SEND_SOCKET_NAME: "fsn",
  FROM_TAG: "ft",
  INITIAL_FROM_TAG: "fti",
  FROM_URI: "fu",
  FROM_URI_USERNAME: "fU",
  FROM_URI_USERNAME_LENGTH: "fUl",
  SIP_MESSAGE_BUFFER: "mb",
  UPDATED_SIP_MESSAGE_BUFFER: "mbu",
  FLAGS: "mf",
  FLAGS_IN_HEX: "mF",
  SIP_MESSAGE_ID: "mi",
  SIP_MESSAGE_TYPE: "mt",
  DOMAIN_ORIGINAL_R_URI: "od",
  PORT_IN_ORIGINAL_R_URI: "op",
  PROTOCOL_OF_ORIGINAL_R_URI: "oP",
  ORIGINAL_R_URI: "ou",
  USERNAME_IN_ORIGINAL_R_URI: "oU",
  ORIGINAL_R_URI_USERNAME_LENGTH: "oUl",
  DOMAIN_IN_P_PREFERRED_IDENTITY_HEADER_URI: "pd",
  DISPLAY_NAME_IN_P_PREFERRED_IDENTITY_HEADER: "pn",
  PROCESS_ID: "pp",
  PROTOCOL_OF_RECEIVED_MESSAGE: "pr",
  PROTOCOL_OF_RECEIVED_MESSAGE_1: "proto",
  PROTOCOL_ID: "prid",
  USER_IN_P_PREFERRED_IDENTITY_HEADER_URI: "pU",
  URI_IN_P_PREFERRED_IDENTITY_HEADER: "pu",
  BODY_OF_REQUEST_REPLY: "rb",
  RETURNED_CODE: "rc",
  RETURNED_CODE_FULL: "retcode",
  DOMAIN_IN_R_URI: "rd",
  REQUEST_DIRECTION: "rdir",//_(KEY)
  REMOTE_PARTY_ID_HEADER_URI: "re",
  SIP_METHOD: "rm",
  SIP_METHOD_ID: "rmid",
  URI_IN_FIRST_ROUTE_HEADER: "route_uri",
  PORT_IN_R_URI: "rp",
  PROTOCOL_OF_R_URI: "rP",
  SIP_REPLY_REASON_PHRASE: "rr",
  SIP_REPLY_CODE: "rs",
  REFER_TO_URI: "rt",
  REQUEST_URI: "ru",
  USERNAME_IN_R_URI: "rU",
  R_URI_USERNAME_LENGTH: "rUl",
  SIP_MESSAGE_VERSION: "rv",
  RECORD_INTERNAL_UNIQUE_ID: "ruid",
  URI_SCHEME_OF_R_URI: "rz",
  RECEIVED_ADVERTISED_IP_ADDRESS: "RAi",
  RECEIVED_ADVERTISED_PORT: "RAp",
  RECEIVED_IP_ADDRESS: "Ri",
  RECEIVED_PORT: "Rp",
  RECEIVED_SOCKET_NAME: "Rn",
  ADVERTISED_SOCKET_URI: "RAu",
  ADVERTISED_SOCKET_URI_T: "RAut",
  RECEIVED_SOCKET_URI: "Ru",
  RECEIVED_SOCKET_URI_T: "Rut",
  SOURCE_ADDRESS_IN_SOCKET_FORMAT: "sas",
  STATIC_BRANCH: "sbranch",//_(ATTR)
  SCRIPT_FLAGS: "sf",
  SCRIPT_FLAGS: "sF",
  SOURCE_IP_ADDRESS: "si",
  SERVER_ID: "sid",
  SOURCE_IP_ADDRESS_REF: "siz",
  SOURCE_PORT: "sp",
  STATISTICS: "stat",//_(NAME)
  SOURCE_ADDRESS_AS_URI: "su",
  SOURCE_ADDRESS_AS_FULL_URI: "sut",
  TO_URI_DOMAIN: "td",
  TO_DISPLAY_NAME: "tn",
  TO_TAG: "tt",
  INITIAL_TO_TAG: "tti",
  TO_URI: "tu",
  TO_URI_USERNAME: "tU",
  TO_URI_USERNAME_LENGTH: "tUl",
  STARTUP_TIMESTAMP: "Tb",
  STRING_FORMATTED_TIME_CACHED: "Tf",
  STRING_FORMATTED_TIME_CURRENT: "TF",
  UNIX_TIME_STAMP_CACHED: "Ts",
  UNIX_TIME_STAMP_CURRENT: "TS",
  USER_AGENT_HEADER: "ua",
  VERSION: "version",//_()_
  ENVIRONMENT_VARIABLES: "env",//_(NAME)
  EXPIRES: "expires",//_(NAME)
};

module.exports = grammar({
  name: 'kamailio_cfg',

  extras: _ => [
    /\s|\\\r?\n/,
  ],

  conflicts: $ => [
    [$.expression_not_binary, $.block_item],
    [$.top_level_item, $.expression_not_binary],
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
      $.loadpath,
      $.modparam,
      $.modparamx,
      $.preproc_def,
      $.preproc_trydef,
      $.preproc_ifdef,
      $.preproc_ifndef,
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
      $.preproc_ifndef,
      $.preproc_redef,
      $.preproc_subst,
      $.preproc_substdefs,
      $.preproc_substdef,
      $.loadmodule,
      $.loadmodulex,
      $.loadpath,
      $.modparam,
      $.modparamx,
      $.import_file,
      $.include_file,
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
      $.expression_not_binary,
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


    // TODO: go back Example: loadmodule "module_name"
    loadmodule: $ => seq(
      token(CFG_VARS.LOADMODULE),
      choice(
        field('module_name', $.string),
        seq(PUNC.LPAREN, field('module_name', $.string), PUNC.RPAREN),
        seq(PUNC.LPAREN, field('module_name', $.string), PUNC.COMMA, $.string, PUNC.RPAREN)),
    ),

    // TODO: go back Example: loadmodulex "module_name"
    loadmodulex: $ => seq(
      token(CFG_VARS.LOADMODULEX),
      choice(
        field('module_name', $.string),
        seq(PUNC.LPAREN, field('module_name', $.string), PUNC.RPAREN),
        seq(PUNC.LPAREN, field('module_name', $.string), PUNC.COMMA, $.string, PUNC.RPAREN)),
    ),

    loadpath: $ => seq(
      token(CFG_VARS.LOADPATH.LOADPATH),
      field('path', $.string),
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

    ...preprocIf('', $ => $.block_item),
    ...preprocIfn('', $ => $.block_item),

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

    index: _ => seq(PUNC.LBRACK, /[^\]]+/, PUNC.RBRACK),

    boolean_constant: _ => token(choice(
      BOOL.TRUE,
      BOOL.FALSE
    )),

    expression: $ => choice(
      $.expression_not_binary,
      $.binary_expression,
    ),

    expression_not_binary: $ => choice(
      $.assignment_expression,
      $.pseudo_variable,
      $.pvar_expression,
      $.unary_expression,
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

    assignment_expression: $ => prec.left(PREC.ASSIGNMENT, seq(
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
        [OPERATORS.MULTIPLY, PREC.MULTIPLY],
        [OPERATORS.DIVIDE, PREC.MULTIPLY],
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
        field('operator', choice(PUNC.DOT, token('=>'))),
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

    identifier: _ => /[a-zA-Z_\-][a-zA-Z0-9_\-]*/,
    pvar_type: $ => seq(
      ATTRIBUTES.VAR_MARK,
      $.identifier
    ),

    pvar_expression: $ => prec(PREC.SUBSCRIPT, seq(
      ATTRIBUTES.VAR_MARK,
      PUNC.LPAREN,
      field('var', $.pseudo_content),
      optional(field('transformations', seq(repeat($.transformation)))),
      PUNC.RPAREN
    )),

    transformation: $ => seq(
      PUNC.LBRACE,
      field('transformation', choice(
        $.string_transformation,
        $.uri_transformation,
        $.parameter_list_transformation,
        $.nameaddr_transformation,
        $.tobody_transformation,
        $.line_transformation,
        $.msrpuri_transformation,
        $.regex_transformation,
        $.sql_transformation,
        $.url_transformation,
        $.json_transformation,
        $.sock_addr_transformation,
        $.uri_alias_transformation,
        $.value_transformation,
        $.general_transformation
      )),
      PUNC.RBRACE,
    ),

    parameter_list_transformation: $ => choice(
      seq(token(PARAMETER_LIST_TRANSFORMATION.NAME), PUNC.COMMA, $.identifier, optional(seq(PUNC.COMMA, $.char_literal))),
      seq(token(PARAMETER_LIST_TRANSFORMATION.VALUE), PUNC.COMMA, $.identifier, optional(seq(PUNC.COMMA, $.char_literal))),
      seq(token(PARAMETER_LIST_TRANSFORMATION.IN), PUNC.COMMA, $.identifier, optional(seq(PUNC.COMMA, $.char_literal))),
      seq(token(PARAMETER_LIST_TRANSFORMATION.VALUEAT), PUNC.COMMA, $.number_literal, optional(seq(PUNC.COMMA, $.char_literal))),
      seq(token(PARAMETER_LIST_TRANSFORMATION.NAME), PUNC.COMMA, $.number_literal, optional(seq(PUNC.COMMA, $.char_literal))),
      seq(token(PARAMETER_LIST_TRANSFORMATION.COUNT), optional(seq(PUNC.COMMA, $.char_literal))),
    ),

    regex_pattern: _ => token.immediate(/[^\/\n]+/),
    regex_replacement: _ => token.immediate(/[^\/\n]*/),
    regex_flags: _ => token.immediate(/[a-zA-Z]*/),

    regex_transformation: $ => seq(
      token(REGEX_TRANSFORMATION.SUBST),
      PUNC.COMMA,
      PUNC.SLASH,
      $.regex_pattern,
      PUNC.SLASH,
      $.regex_replacement, // can be empty
      PUNC.SLASH,
      optional($.regex_flags)
    ),

    value_transformation: _ => choice(
      token(VALUE_TRANSFORMATION.JSON),
      token(VALUE_TRANSFORMATION.N0),
      token(VALUE_TRANSFORMATION.NE),
      token(VALUE_TRANSFORMATION.JSONQE),
    ),

    uri_alias_transformation: _ => choice(
      token(URIALIAS_TRANSFORMATION.ENCODE),
      token(URIALIAS_TRANSFORMATION.DECODE),
    ),

    sock_addr_transformation: _ => choice(
      token(SOCKADDR_TRANSFORMATION.PROTO),
      token(SOCKADDR_TRANSFORMATION.PORT),
      token(SOCKADDR_TRANSFORMATION.HOST),
      token(SOCKADDR_TRANSFORMATION.TOURI)
    ),

    json_transformation: _ => token(JSON_TRANSFORMATION.PARSE),

    url_transformation: _ => choice(
      token(URL_TRANSFORMATION.PATH),
      token(URL_TRANSFORMATION.QUERYSTRING),
    ),

    sql_transformation: _ => choice(
      token(SQL_TRANSFORMATION.VAL),
      token(SQL_TRANSFORMATION.INT),
      token(SQL_TRANSFORMATION.STR),
    ),

    msrpuri_transformation: _ => choice(
      token(MSRP_TRANSFORMATION.USER),
      token(MSRP_TRANSFORMATION.HOST),
      token(MSRP_TRANSFORMATION.PORT),
      token(MSRP_TRANSFORMATION.SESSION),
      token(MSRP_TRANSFORMATION.PROTO),
      token(MSRP_TRANSFORMATION.PARAMS),
      token(MSRP_TRANSFORMATION.USERINFO),
    ),

    // A general catch-all
    // TODO: may be think of this more on how to restrict
    general_transformation: _ => /[\s\S]/,

    line_transformation: $ => choice(
      token(LINE_TRANSFORMATION.COUNT),
      seq(token(LINE_TRANSFORMATION.AT), $.number_literal),
      seq(token(LINE_TRANSFORMATION.SW), $.identifier),
    ),

    tobody_transformation: _ => choice(
      token(TOBODY_TRANSFORMATION.URI),
      token(TOBODY_TRANSFORMATION.DISPLAY),
      token(TOBODY_TRANSFORMATION.TAG),
      token(TOBODY_TRANSFORMATION.USER),
      token(TOBODY_TRANSFORMATION.HOST),
      token(TOBODY_TRANSFORMATION.params),
    ),

    nameaddr_transformation: _ => choice(
      token(NAMEADDR_TRANSFORMATION.URI),
      token(NAMEADDR_TRANSFORMATION.NAME),
      token(NAMEADDR_TRANSFORMATION.LEN),
    ),

    uri_transformation: $ => choice(
      token(URI_TRANSFORMATION.USER),
      token(URI_TRANSFORMATION.HOST),
      token(URI_TRANSFORMATION.PASSWD),
      token(URI_TRANSFORMATION.PORT),
      token(URI_TRANSFORMATION.PARAMS),
      seq(token(URI_TRANSFORMATION.PARAM), PUNC.COMMA, choice($.identifier, $.string)),
      token(URI_TRANSFORMATION.HEADERS),
      token(URI_TRANSFORMATION.TRANSPORT),
      token(URI_TRANSFORMATION.TTL),
      token(URI_TRANSFORMATION.UPARAM),
      token(URI_TRANSFORMATION.MADDR),
      token(URI_TRANSFORMATION.METHOD),
      token(URI_TRANSFORMATION.LR),
      token(URI_TRANSFORMATION.R2),
      token(URI_TRANSFORMATION.SCHEME),
      token(URI_TRANSFORMATION.TOSOCKET),
      token(URI_TRANSFORMATION.DURI),
      token(URI_TRANSFORMATION.DURI),
      token(URI_TRANSFORMATION.SAOR),
      token(URI_TRANSFORMATION.SURI),
    ),

    string_transformation: $ => choice(
      token(STRING_TRANSFORMATIONS.LEN),
      token(STRING_TRANSFORMATIONS.INT),
      token(STRING_TRANSFORMATIONS.MD5),
      token(STRING_TRANSFORMATIONS.SHA256),
      token(STRING_TRANSFORMATIONS.SHA384),
      token(STRING_TRANSFORMATIONS.SHA512),
      seq(token(STRING_TRANSFORMATIONS.SUBSTR), PUNC.COMMA, $.number_literal, PUNC.COMMA, $.number_literal),
      seq(token(STRING_TRANSFORMATIONS.SELECT), PUNC.COMMA, $.number_literal, PUNC.COMMA, /./),
      token(STRING_TRANSFORMATIONS.ENCODE_7BIT),
      token(STRING_TRANSFORMATIONS.DECODE_7BIT),
      token(STRING_TRANSFORMATIONS.ENCODE_HEXA),
      token(STRING_TRANSFORMATIONS.DECODE_HEXA),
      token(STRING_TRANSFORMATIONS.ENCODE_BASE58),
      token(STRING_TRANSFORMATIONS.ENCODE_BASE64),
      token(STRING_TRANSFORMATIONS.DECODE_BASE64),
      token(STRING_TRANSFORMATIONS.ENCODE_BASE64T),
      token(STRING_TRANSFORMATIONS.DECODE_BASE64T),
      token(STRING_TRANSFORMATIONS.ENCODE_BASE64URL),
      token(STRING_TRANSFORMATIONS.DECODE_BASE64URL),
      token(STRING_TRANSFORMATIONS.ENCODE_BASE64URLT),
      token(STRING_TRANSFORMATIONS.DECODE_BASE64URLT),
      token(STRING_TRANSFORMATIONS.ESCAPE_COMMON),
      token(STRING_TRANSFORMATIONS.UNESCAPE_COMMON),
      token(STRING_TRANSFORMATIONS.ESCAPE_USER),
      token(STRING_TRANSFORMATIONS.UNESCAPE_USER),
      token(STRING_TRANSFORMATIONS.ESCAPE_PARAM),
      token(STRING_TRANSFORMATIONS.UNESCAPE_PARAM),
      token(STRING_TRANSFORMATIONS.ESCAPE_CSV),
      token(STRING_TRANSFORMATIONS.NUMERIC),
      token(STRING_TRANSFORMATIONS.TOLOWER),
      token(STRING_TRANSFORMATIONS.TOUPPER),
      seq(token(STRING_TRANSFORMATIONS.STRIP), PUNC.COMMA, $.number_literal),
      seq(token(STRING_TRANSFORMATIONS.STRIPTAIL), PUNC.COMMA, $.number_literal),
      seq(token(STRING_TRANSFORMATIONS.PREFIXES), optional(seq(PUNC.COMMA, $.number_literal))),
      seq(token(STRING_TRANSFORMATIONS.PREFIXES_QUOUTED), optional(seq(PUNC.COMMA, $.number_literal))),
      seq(token(STRING_TRANSFORMATIONS.REPLACE), PUNC.COMMA, /./, PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.FTIME), PUNC.COMMA, /[/s/S]/),
      token(STRING_TRANSFORMATIONS.TRIM),
      token(STRING_TRANSFORMATIONS.RTRIM),
      token(STRING_TRANSFORMATIONS.LTRIM),
      seq(token(STRING_TRANSFORMATIONS.RM), PUNC.COMMA, /[/s/S]/),
      token(STRING_TRANSFORMATIONS.RMHDWS),
      token(STRING_TRANSFORMATIONS.RMHLWS),
      token(STRING_TRANSFORMATIONS.RMWS),
      token(STRING_TRANSFORMATIONS.COREHASH),
      token(STRING_TRANSFORMATIONS.UNQUOTE),
      token(STRING_TRANSFORMATIONS.UNBRACKET),
      seq(token(STRING_TRANSFORMATIONS.COUNT), PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.AFTER), PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.RAFTER), PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.BEFORE), PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.RBEFORE), PUNC.COMMA, /./),
      seq(token(STRING_TRANSFORMATIONS.FMTLINES), PUNC.COMMA, $.number_literal, PUNC.COMMA, $.number_literal),
      seq(token(STRING_TRANSFORMATIONS.FMTLINET), PUNC.COMMA, $.number_literal, PUNC.COMMA, $.number_literal),
      token(STRING_TRANSFORMATIONS.URLENCODE_PARAM),
      token(STRING_TRANSFORMATIONS.URLDECODE_PARAM),
    ),

    index_expression: $ => seq(
      PUNC.LBRACK,
      field('index', choice($.number_literal, token(PUNC.STAR))),
      PUNC.RBRACK
    ),

    catch_all_pseudo_variable: $ => prec.right(seq(
      $.pvar_type,
      optional(
        seq(
          PUNC.LPAREN,
          field('name', $.pvar_argument),
          PUNC.RPAREN,
          optional(PUNC.SEMICOLON)
        ))
    )),


    pvar: $ => prec.right(choice(
      seq(token(PSEUDO_VARS.FORMAT), PUNC.LPAREN, field('format', $.identifier), PUNC.RPAREN),
      token(PSEUDO_VARS.URI_IN_P_ASSERTED_IDENTITY_HEADER),
      token(PSEUDO_VARS.AUTH_DIGEST_URI),
      token(PSEUDO_VARS.AUTH_ALGORITHM),
      token(PSEUDO_VARS.AUTH_REALM),
      token(PSEUDO_VARS.AUTH_USERNAME_USER),
      token(PSEUDO_VARS.AUTH_USERNAME_DOMAIN),
      token(PSEUDO_VARS.AUTH_WHOLE_USERNAME),
      token(PSEUDO_VARS.ACC_USERNAME_AND_REALM_DOMAIN),
      token(PSEUDO_VARS.ACC_USERNAME),
      seq(token(PSEUDO_VARS.BRANCH_ATTRIBUTES), PUNC.LPAREN, field('name', choice($.identifier, $.string)), PUNC.RPAREN, optional($.index_expression)),
      token(PSEUDO_VARS.REQUESTS_FIRST_BRANCH),
      token(PSEUDO_VARS.BRANCH_FLAGS),
      token(PSEUDO_VARS.BODY_SIZE),
      token(PSEUDO_VARS.CALL_ID),
      token(PSEUDO_VARS.CONTENT_LENGTH),
      seq(token(PSEUDO_VARS.COUNT_NUMBER_OF_PVS), PUNC.LPAREN, choice($.pvar_expression, $.pseudo_variable), PUNC.RPAREN), // TODO: verify this, should only be for avp or xavp
      token(PSEUDO_VARS.TCP_CONNECTION_ID),
      token(PSEUDO_VARS.CSEQ_NUMBER),
      token(PSEUDO_VARS.CSEQ_HEADER_BODY),
      token(PSEUDO_VARS.CONTACT_HEADER),
      token(PSEUDO_VARS.CONTACT_HEADER_STAR_STATUS),
      token(PSEUDO_VARS.CONTENT_TYPE),
      token(PSEUDO_VARS.DOMAIN_OF_DESTINATION_URI),
      seq(token(PSEUDO_VARS.DEFINED_VALUE_), PUNC.LPAREN, field('name', choice($.identifier, $.string), PUNC.RPAREN)),
      seq(token(PSEUDO_VARS.DEFINED_VALUE_AS_NUMBER), PUNC.LPAREN, field('name', choice($.identifier, $.string), PUNC.RPAREN)),
      token(PSEUDO_VARS.DIVERSION_HEADER_URI),
      token(PSEUDO_VARS.DIVERSION_PRIVACY_PARAMETER),
      token(PSEUDO_VARS.DIVERSION_REASON_PARAMETER),
      token(PSEUDO_VARS.DIVERSION_COUNTER_PARAMETER),
      token(PSEUDO_VARS.PORT_OF_DESTINATION_URI),
      token(PSEUDO_VARS.DESTINATION_SET),
      token(PSEUDO_VARS.DESTINATION_URI),
      token(PSEUDO_VARS.BACK_SLASH),
      token(PSEUDO_VARS.LF),
      token(PSEUDO_VARS.CR),
      token(PSEUDO_VARS.TAB),
      token(PSEUDO_VARS.SPACE),
      token(PSEUDO_VARS.COMMA),
      token(PSEUDO_VARS.DOUBLE_QUOTE),
      token(PSEUDO_VARS.SINGLE_QUOTE),
      token(PSEUDO_VARS.COLON),
      token(PSEUDO_VARS.SEMICOLON),
      token(PSEUDO_VARS.BACK_TICK),
      token(PSEUDO_VARS.FROM_URI_DOMAIN),
      token(PSEUDO_VARS.FROM_DISPLAY_NAME),
      token(PSEUDO_VARS.FORCED_SEND_SOCKET),
      token(PSEUDO_VARS.FORCED_SEND_SOCKET_NAME),
      token(PSEUDO_VARS.FROM_TAG),
      token(PSEUDO_VARS.INITIAL_FROM_TAG),
      token(PSEUDO_VARS.FROM_URI),
      token(PSEUDO_VARS.FROM_URI_USERNAME),
      token(PSEUDO_VARS.FROM_URI_USERNAME_LENGTH),
      token(PSEUDO_VARS.SIP_MESSAGE_BUFFER),
      token(PSEUDO_VARS.UPDATED_SIP_MESSAGE_BUFFER),
      token(PSEUDO_VARS.FLAGS),
      token(PSEUDO_VARS.FLAGS_IN_HEX),
      token(PSEUDO_VARS.SIP_MESSAGE_ID),
      token(PSEUDO_VARS.SIP_MESSAGE_TYPE),
      token(PSEUDO_VARS.DOMAIN_ORIGINAL_R_URI),
      token(PSEUDO_VARS.PORT_OF_DESTINATION_URI),
      token(PSEUDO_VARS.PROTOCOL_OF_ORIGINAL_R_URI),
      token(PSEUDO_VARS.ORIGINAL_R_URI),
      token(PSEUDO_VARS.USERNAME_IN_ORIGINAL_R_URI),
      token(PSEUDO_VARS.ORIGINAL_R_URI_USERNAME_LENGTH),
      token(PSEUDO_VARS.DOMAIN_IN_P_PREFERRED_IDENTITY_HEADER_URI),
      token(PSEUDO_VARS.DISPLAY_NAME_IN_P_PREFERRED_IDENTITY_HEADER),
      token(PSEUDO_VARS.PROCESS_ID),
      token(PSEUDO_VARS.PROTOCOL_OF_RECEIVED_MESSAGE),
      token(PSEUDO_VARS.PROTOCOL_OF_RECEIVED_MESSAGE_1),
      token(PSEUDO_VARS.PROTOCOL_ID),
      token(PSEUDO_VARS.USER_IN_P_PREFERRED_IDENTITY_HEADER_URI),
      token(PSEUDO_VARS.URI_IN_P_PREFERRED_IDENTITY_HEADER),
      token(PSEUDO_VARS.BODY_OF_REQUEST_REPLY),
      token(PSEUDO_VARS.RETURNED_CODE),
      token(PSEUDO_VARS.RETURNED_CODE_FULL),
      token(PSEUDO_VARS.DOMAIN_IN_R_URI),
      seq(PSEUDO_VARS.REQUEST_DIRECTION, PUNC.LPAREN, choice($.identifier, $.string), PUNC.RPAREN),
      token(PSEUDO_VARS.REMOTE_PARTY_ID_HEADER_URI),
      token(PSEUDO_VARS.SIP_METHOD),
      token(PSEUDO_VARS.SIP_METHOD_ID),
      token(PSEUDO_VARS.URI_IN_FIRST_ROUTE_HEADER),
      token(PSEUDO_VARS.PORT_IN_R_URI),
      token(PSEUDO_VARS.PROTOCOL_OF_R_URI),
      token(PSEUDO_VARS.SIP_REPLY_REASON_PHRASE),
      token(PSEUDO_VARS.SIP_REPLY_CODE),
      token(PSEUDO_VARS.REFER_TO_URI),
      token(PSEUDO_VARS.REQUEST_URI),
      token(PSEUDO_VARS.USERNAME_IN_R_URI),
      token(PSEUDO_VARS.R_URI_USERNAME_LENGTH),
      token(PSEUDO_VARS.SIP_MESSAGE_VERSION),
      token(PSEUDO_VARS.RECORD_INTERNAL_UNIQUE_ID),
      token(PSEUDO_VARS.URI_SCHEME_OF_R_URI),
      token(PSEUDO_VARS.RECEIVED_ADVERTISED_PORT),
      token(PSEUDO_VARS.RECEIVED_IP_ADDRESS),
      token(PSEUDO_VARS.RECEIVED_PORT),
      token(PSEUDO_VARS.RECEIVED_SOCKET_NAME),
      token(PSEUDO_VARS.ADVERTISED_SOCKET_URI),
      token(PSEUDO_VARS.ADVERTISED_SOCKET_URI_T),
      token(PSEUDO_VARS.RECEIVED_SOCKET_URI),
      token(PSEUDO_VARS.RECEIVED_SOCKET_URI_T),
      token(PSEUDO_VARS.SOURCE_ADDRESS_IN_SOCKET_FORMAT),
      seq(token(PSEUDO_VARS.STATIC_BRANCH), PUNC.LPAREN, field('attr', choice($.identifier, $.string)), PUNC.RPAREN),
      token(PSEUDO_VARS.SCRIPT_FLAGS),
      token(PSEUDO_VARS.SOURCE_IP_ADDRESS),
      token(PSEUDO_VARS.SERVER_ID),
      token(PSEUDO_VARS.SOURCE_IP_ADDRESS_REF),
      token(PSEUDO_VARS.SOURCE_PORT),
      token(PSEUDO_VARS.SOURCE_ADDRESS_AS_URI),
      seq(token(PSEUDO_VARS.STATISTICS), PUNC.LPAREN, field('name', choice($.identifier, $.string)), PUNC.RPAREN),
      token(PSEUDO_VARS.SOURCE_ADDRESS_AS_FULL_URI),
      token(PSEUDO_VARS.TO_URI_DOMAIN),
      token(PSEUDO_VARS.TO_DISPLAY_NAME),
      token(PSEUDO_VARS.TO_TAG),
      token(PSEUDO_VARS.INITIAL_TO_TAG),
      token(PSEUDO_VARS.TO_URI),
      token(PSEUDO_VARS.TO_URI_USERNAME),
      token(PSEUDO_VARS.TO_URI_USERNAME_LENGTH),
      token(PSEUDO_VARS.STARTUP_TIMESTAMP),
      token(PSEUDO_VARS.STRING_FORMATTED_TIME_CACHED),
      token(PSEUDO_VARS.STRING_FORMATTED_TIME_CURRENT),
      token(PSEUDO_VARS.UNIX_TIME_STAMP_CACHED),
      token(PSEUDO_VARS.UNIX_TIME_STAMP_CURRENT),
      token(PSEUDO_VARS.USER_AGENT_HEADER),
      seq(token(PSEUDO_VARS.VERSION), PUNC.LPAREN, PUNC.RPAREN),
      seq(token(PSEUDO_VARS.ENVIRONMENT_VARIABLES), PUNC.LPAREN, field('name', $.identifier), PUNC.RPAREN),
      seq(token(PSEUDO_VARS.EXPIRES), PUNC.LPAREN, field('key', choice(token('min'), token('max'))), PUNC.RPAREN),
    )),

    pseudo_content: $ => choice(
      $.pvar,
      $.avp_var,
      $.xavp_var,
      $.xavu_var,
      $.hdr,
      $.hdrc,
      $.shv_var,
      $.dsv_var,
      $.dsg_var,
      $.time_var,
      $.timef_var,
      // TODO: config custom parameters $ccp(key)
      // select vars
      $.rcv,
      $.rpl,
      $.msg_buf_index,
      $.hfitname,
      $.hfitbody,
      $.blitval,
      $.snd,
      $.sipdump,
      $.siptrace,
      $.bm_diff_time,
      $.dlg_attr,
      $.dlg_ctx,
      $.dlg_var,
      $.erlang,
      $.evapi,
      $.htable,
      $.htable_exp,
      $.htiterator,
      $.mct,
      $.mcinc_mcdec,
      $.http_req_id,
      $.http_req,
      $.read_only,
      $.xml,
      $.tmx,
      $.uac,
      $.nathelper,
      $.mqueue,
      $.timeval,
      $.nhaddr,
      $.redis,
      $.redisd,
      $.gip2,
      $.tlskey,
      $.msgattr,
      $.popops,
      $.xhttp,
      $.msrp,
      $.sipt,
      $.cfg_attr,
      $.dns_q,
      $.host_name,
      $.random,
      // TODO: lsock
      $.evr,
      $.subscription,
      $.registrar,
      $.hep,
      $.phn,
      $.secsipid,
      $.sdpops,
      $.sruid,
      $.via_attr,
      $.tcpops,
      $.var_,
      $.pv_header,
      // TODO: C(XY)
      $.k_var,
      $.catch_all_pseudo_variable
    ),

    k_var: _ => seq(
      token("K"),
      PUNC.LPAREN,
      choice(
        token("IPv4"),
        token("IPv6"),
        token("UDP"),
        token("TCP"),
        token("TLS"),
        token("SCTP"),
        token("WS"),
        token("WSS"),
      ),
      PUNC.RPAREN,
    ),

    pv_header: $ => choice(
      seq(token("x_hdr"), PUNC.LPAREN, $.identifier, PUNC.RPAREN),
      token("x_fu"),
      token("x_fU"),
      token("x_fd"),
      token("x_fn"),
      token("x_ft"),
      token("x_tu"),
      token("x_tU"),
      token("x_td"),
      token("x_tn"),
      token("x_tt"),
      token("x_rs"),
      token("x_rr"),
    ),

    tcpops: _ => seq(
      token("tcpops"),
      PUNC.LPAREN,
      field('key', choice(
        token("c_si"),
        token("c_sp"),
        token("conid"),
        token("ac_si"),
        token("ac_sp"),
        token("aconid"),
      )),
      PUNC.RPAREN,
    ),

    via_attr: _ => seq(
      choice(
        token("via0"),
        token("via1"),
        token("viaZ"),
      ),
      PUNC.LPAREN,
      choice(
        token("host"),
        token("port"),
        token("proto"),
        token("protoid"),
        token("branch"),
        token("rport"),
        token("received"),
        token("i"),
        token("params"),
        token("oc"),
        token("ocval"),
        token("ocalgo"),
        token("ocvalidity"),
        token("ocseq"),
      ),
      PUNC.RPAREN,
    ),

    sruid: _ => token("sruid"),

    sdpops: _ => seq(
      token("sdp"),
      PUNC.LPAREN,
      choice(
        token("body"),
        token("raw"),
        token("sess_version"),
        token("sess-version"),
        token("c:ip"),
        token("c:af"),
        token("o:ip"),
        token("m0:raw"),
        token("m0:rtp:port"),
        token("m0:rtcp:port"),
        token("m0:b:AS"),
        token("m0:b:RR"),
        token("m0:b:RS"),
      ),
      PUNC.RPAREN,
    ),

    secsipid: _ => seq(
      token("secsipid"),
      choice(token("val"), token("ret"))
    ),

    phn: $ => seq(
      token("phn"),
      PUNC.LPAREN,
      field('rid', $.identifier),
      token("=>"),
      field('key', choice(
        token("number"),
        token("valid"),
        token("normalized"),
        token("cctel"),
        token("ltype"),
        token("ndesc"),
        token("error"),
      )),
      PUNC.RPAREN,
    ),
    hep: _ => seq(
      token("hep"),
      PUNC.LPAREN,
      field('key', choice(
        token("version"),
        token("src_ip"),
        token("dst_ip"),
        token("0x000"),
        token("0x999"),
      )),
      PUNC.RPAREN,
    ),

    registrar: $ => seq(
      token("ulc"),
      PUNC.LPAREN,
      field('profile', choice($.identifier, $.string)),
      token("=>"),
      field('attr', choice($.identifier, $.string)),
      PUNC.RPAREN,
    ),

    subscription: _ => token("subs(uri)"),

    evr: _ => seq(
      token("evr"),
      PUNC.LPAREN,
      field('key', choice(
        token("data"),
        token("srcip"),
        token("srcport"),
        token("srcportno"),
      )),
      PUNC.LPAREN
    ),
    evapi: _ => seq(
      token("evapi(srcaddr)"),
      token("evapi(srcport)"),
      token("evapi(msg)"),
      token("evapi(conidx)"),
    ),

    erlang: $ => seq(
      choice(
        token("erl_atom"),
        token("erl_list"),
        token("erl_tuple"),
        token("erl_pid"),
        token("erl_ref"),
        token("erl_xbuff")
      ),
      PUNC.LPAREN,
      field('name', $.identifier),
      token("=>"),
      field('attribute', choice(
        token("type"),
        token("length"),
        token("format"),
      )),
      PUNC.RPAREN,
    ),

    jsonrpc_var: _ => seq(
      token("jsonrpl"),
      PUNC.LPAREN,
      choice(
        token("code"),
        token("text"),
        token("body"),
      ),
      PUNC.RPAREN,
    ),

    random: _ => token("RANDOM"),

    host_name: _ => seq(
      token("HN"),
      PUNC.LPAREN,
      field('key', choice(
        token('n'),
        token('f'),
        token('d'),
        token('i'),
      )),
      PUNC.RPAREN,
    ),

    dns_q: $ => seq(
      token("dns"),
      PUNC.LPAREN,
      field('pvid', $.identifier),
      token("=>"),
      field('key', choice($.identifier, $.pseudo_variable)),
      PUNC.RPAREN,
    ),
    cfg_attr: _ => seq(
      token("cfg"),
      PUNC.LPAREN,
      field('key', choice(
        token("line"),
        token("name"),
        token("file"),
        token("route"),
      )),
      PUNC.RPAREN,
    ),

    sipt: _ => choice(
      token("sipt_presentation"),
      token("sipt_screening"),
      token("sipt_hop_counter"),
      token("sipt_cpc"),
      token("sipt_calling_party_nai"),
      token("sipt_called_party_nai"),
      token("sipt_redirection_info"),
      token("sipt_redirection_number"),
      token("sipt_redirection_number_nai"),
      seq(
        token("sipt"),
        PUNC.LPAREN,
        choice(
          token("calling_party_number.presentation"),
          token("calling_party_number.screening"),
          token("calling_party_category"),
          token("cpc"),
          token("calling_party_number.nature_of_address"),
          token("calling_party_number.nai"),
          token("called_party_number.nature_of_address"),
          token("called_party_number.nai"),
          token("event_info"),
          token("backward_call_indicator.charge_indicator"),
          token("redirection_info"),
          token("redirection_number"),
          token("redirection_number.nai"),
          token("calling_party_number"),
          token("called_party_number"),
          token("sipt_redirection_information_reason"),
          token("sipt_redirection_information_original_reason"),
          token("redirecting_number.nai"),
          token("redirecting_number"),
          token("original_called_number.nai"),
          token("original_called_number"),
          token("generic_number.nai"),
          token("generic_number"),
        ),
        PUNC.RPAREN
      )
    ),

    msrp: $ => seq(
      token("msrp"),
      PUNC.LPAREN,
      field('arg', choice($.identifier, $.string)),
      PUNC.RPAREN,
    ),
    xhttp: _ => token("hu"),

    popops: $ => seq(
      token("pop"),
      PUNC.LPAREN,
      field('key', choice(
        token("ret"),
        token("idx"),
        token("len"),
        $.number_literal,
      )),
      PUNC.RPAREN,
    ),

    msgattr: _ => seq(
      token("msg"),
      PUNC.LPAREN,
      field("attr", choice(
        token("len"),
        token("buf"),
        token("body"),
        token("body_len"),
        token("hdrs"),
        token("fline"),
        token("fpart"),
        token("lpart"),
      )),
      PUNC.RPAREN,
    ),

    tlskey: _ => choice(
      token("tls_version"),
      token("tls_description"),
      token("tls_cipher_info"),
      token("tls_cipher_bits"),
      token("tls_peer_version"),
      token("tls_my_version"),
      token("tls_peer_serial"),
      token("tls_my_serial"),
      token("tls_peer_subject"),
      token("tls_peer_issuer"),
      token("tls_my_subject"),
      token("tls_my_issuer"),
      token("tls_peer_subject_cn"),
      token("tls_peer_issuer_cn"),
      token("tls_my_subject_cn"),
      token("tls_my_issuer_cn"),
      token("tls_peer_subject_locality"),
      token("tls_peer_issuer_locality"),
      token("tls_my_subject_locality"),
      token("tls_my_issuer_locality"),
      token("tls_peer_subject_country"),
      token("tls_peer_issuer_country"),
      token("tls_my_subject_country"),
      token("tls_my_issuer_country"),
      token("tls_peer_subject_state"),
      token("tls_peer_issuer_state"),
      token("tls_my_subject_state"),
      token("tls_my_issuer_state"),
      token("tls_peer_subject_organization"),
      token("tls_peer_issuer_organization"),
      token("tls_my_subject_organization"),
      token("tls_my_issuer_organization"),
      token("tls_peer_subject_unit"),
      token("tls_peer_subject_uid"),
      token("tls_peer_issuer_unit"),
      token("tls_my_subject_unit"),
      token("tls_my_subject_uid"),
      token("tls_my_issuer_unit"),
      token("tls_peer_san_email"),
      token("tls_my_san_email"),
      token("tls_peer_san_hostname"),
      token("tls_my_san_hostname"),
      token("tls_peer_san_uri"),
      token("tls_my_san_uri"),
      token("tls_peer_san_ip"),
      token("tls_my_san_ip"),
      token("tls_peer_verified"),
      token("tls_peer_revoked"),
      token("tls_peer_expired"),
      token("tls_peer_selfsigned"),
      token("tls_peer_notBefore"),
      token("tls_peer_notAfter"),
      token("tls_peer_server_name"),
      token("tls_peer_raw_cert"),
      token("tls_my_raw_cert"),
      token("tls_peer_urlencoded_cert"),
      token("tls_my_urlencoded_cert"),
      seq(
        token("tls"),
        PUNC.LPAREN,
        field('key', choice(
          token("m_issuer_line"),
          token("p_issuer_line"),
          token("m_subject_line"),
          token("p_subject_line"),
        )),
        PUNC.RPAREN,
      )),
    gip2: $ => seq(
      token("gip2"),
      PUNC.LPAREN,
      field('pvc', $.identifier),
      token("=>"),
      field('key', choice(
        token("cc"),
        token("tz"),
        token("zip"),
        token("lat"),
        token("lon"),
        token("dma"),
        token("ips"),
        token("ipe"),
        token("city"),
        token("area"),
        token("regc"),
        token("regn"),
        token("metro"),
        token("contc"),
      )),
      PUNC.RPAREN,
    ),

    redisd: _ => seq(
      token("redisd"),
      PUNC.LPAREN,
      field('key', choice(
        token("rpl_str"),
        token("rpl_arr"),
        token("rpl_int"),
        token("rpl_nil"),
        token("rpl_sts"),
        token("rpl_err"),
      )),
      PUNC.RPAREN,
    ),

    redis: $ => seq(
      token("redis"),
      PUNC.LPAREN,
      field('key', choice(
        seq(token("type"), optional(seq(PUNC.RBRACK, $.number_literal, PUNC.RBRACK))),
        seq(token("value"), optional(seq(PUNC.RBRACK, $.number_literal, PUNC.RBRACK))),
        token("info"),
        token("size"),
      )),
      PUNC.RPAREN,
    ),

    nhaddr: _ => seq(
      token("nh"),
      PUNC.LPAREN,
      field('key', choice(
        token("u"),
        token("U"),
        token("d"),
        token("p"),
        token("P"),
      )),
      PUNC.RPAREN,

    ),

    timeval: _ => seq(
      token("TV"),
      PUNC.LPAREN,
      choice(
        token("s"),
        token("u"),
        token("sn"),
        token("un"),
        token("Sn"),
        token("Sm"),
      ),
      PUNC.RPAREN,
    ),

    mqueue: $ => seq(
      choice(token("mqk"), token("mqv")),
      PUNC.LPAREN,
      $.string,
      PUNC.RPAREN,

    ),

    nathelper: _ => choice(
      token("rr_count"),
      token("rr_top_count"),
    ),

    uac: _ => seq(
      token("uac_req"),
      PUNC.LPAREN,
      field('key', choice(
        token("method"),
        token("ruri"),
        token("furi"),
        token("turi"),
        token("ouri"),
        token("hdrs"),
        token("body"),
        token("flags"),
        token("1"),
        token("auser"),
        token("apasswd"),
        token("sock"),
        token("callid"),
        token("all"),
        token("evroute"),
        token("evcode"),
        token("evtype"),
        token("evparam")
      )),
      PUNC.RPAREN,
    ),

    tmx: $ => choice(
      token("T_branch_idx"),
      token("T_reply_ruid"),
      seq(token("T_req"), PUNC.LPAREN, $.pseudo_variable, PUNC.RPAREN),
      seq(token("T_rpl"), PUNC.LPAREN, $.pseudo_variable, PUNC.RPAREN),
      seq(token("T_inv"), PUNC.LPAREN, $.pseudo_variable, PUNC.RPAREN),
      seq(token("T_inv"), PUNC.LPAREN, choice(
        token("id_index"),
        token("id_label"),
        token("id_index_n"),
        token("id_label_n"),
        token("reply_code"),
        token("reply_reason"),
        token("reply_last"),
        token("branch_index"),
        token("ruid"),
        token("reply_type"),
      ), PUNC.RPAREN),
      seq(token("T_branch"), PUNC.LPAREN, choice($.pseudo_variable, $.identifier, $.string), PUNC.RPAREN),
    ),

    _path: _ => /[a-zA-Z\/()]/,

    xml: $ => seq(
      token("xml"),
      PUNC.LPAREN,
      field('name', $.identifier),
      token("=>"),
      field('spec', $.identifier),
      optional(seq(PUNC.COLON, $._path)),
      PUNC.RPAREN,
    ),

    read_only: $ => choice(
      token("http_ok"),
      token("http_err"),
      token("http_rs"),
      token("http_rr"),
      seq(token("http_hdr"), PUNC.LPAREN, $.identifier, PUNC.RPAREN),
      token("http_mb"),
      token("http_ml"),
      token("http_rb"),
      token("http_bs"),
    ),

    http_req: _ => seq(
      token("http_req"),
      PUNC.LPAREN,
      choice(
        token("all"),
        token("hdr"),
        token("body"),
        token("method"),
        token("timeout"),
        token("tls_client_cert"),
        token("tls_client_key"),
        token("tls_ca_path"),
        token("authmethod"),
        token("1"),
        token("2"),
        token("3"),
        token("4"),
        token("8"),
        token("16"),
        token("username"),
        token("password"),
        token("suspend"),
        token("tcp_keepalive"),
        token("tcp_ka_idle"),
        token("tcp_ka_interval"),
      ),
      PUNC.RPAREN,
    ),

    http_req_id: _ => token("http_req_id"),

    mcinc_mcdec: $ => seq(
      choice(token("mcinc"), token("mcdec")),
      PUNC.LPAREN,
      choice($.identifier, $.string),
      PUNC.RPAREN,
    ),

    mct: $ => seq(
      PUNC.LPAREN,
      choice($.identifier, $.string, seq($.identifier, token("=>"), $.number_literal)),
      PUNC.RPAREN,
    ),

    htiterator: $ => seq(
      choice(token("shtitkey"), token("shtitval"), token("shtrecord")),
      PUNC.LPAREN,
      $.identifier,
      PUNC.RPAREN,
    ),

    htable_exp: $ => seq(
      choice(token("shtcn"), token("shtcv")),
      PUNC.LPAREN,
      field("htable", $.identifier),
      token("=>"),
      field("key", choice(
        $.regex_replacement,
        seq(token("\~\~"), $.regex_replacement),
        seq(token("\~%"), $.identifier),
        seq(token("%\~"), $.identifier),
        seq(token("=="), choice($.identifier, $.string)),
        seq(token("eqvalue"), $.number_literal),
        token("**"),
      )),
      PUNC.RPAREN,
    ),

    htable: $ => seq(
      choice(token("sht"), token("shtex"), token("shtinc"), token("shtdec")),
      PUNC.LPAREN,
      field("htable", $.identifier),
      token("=>"),
      field("key", seq(choice($.pseudo_variable, $.identifier), optional(seq(token("::"), $.identifier)))),
      PUNC.RPAREN,
    ),

    dlg_var: $ => seq(
      choice(token("dlg"), token("dlg_var")),
      PUNC.LPAREN,
      $.identifier,
      PUNC.RPAREN,
    ),

    dlg_ctx: _ => seq(
      token("dlg_ctx"),
      PUNC.LPAREN,
      choice(
        token("set"),
        token("flags"),
        token("timeout_route"),
        token("timeout_route_id"),
        token("timeout_bye"),
        token("timeout"),
        token("on"),
        token("dir")
      ),
      PUNC.RPAREN,
    ),

    dlg_attr: _ => seq(
      token("dlg"),
      PUNC.LPAREN,
      choice(
        token("h_id"),
        token("h_entry"),
        token("ref"),
        token("state"),
        token("to_rs"),
        token("from_rs"),
        token("dflags"),
        token("sflags"),
        token("callid"),
        token("to_uri"),
        token("to_tag"),
        token("from_uri"),
        token("from_tag"),
        token("toroute"),
        token("lifetime"),
        token("start_ts"),
        token("to_cseq"),
        token("from_cseq"),
        token("to_contact"),
        token("from_contact"),
        token("to_bindaddr"),
        token("from_bindaddr"),
      ),
      PUNC.RPAREN,
    ),

    bm_diff_time: _ => token("BM_time_diff"),

    siptrace: _ => seq(
      token("blitval"),
      PUNC.LPAREN,
      choice(
        token("src_addr"),
        token("dst_addr"),
        token("src_host"),
        token("dst_host"),
        token("src_hostip"),
        token("dst_hostip"),
        token("src_port"),
        token("dst_port"),
        token("src_proto"),
        token("dst_proto"),
      ),
      PUNC.RPAREN,
    ),

    sipdump: _ => seq(
      token("blitval"),
      PUNC.LPAREN,
      choice(
        token("tag"),
        token("buf"),
        token("len"),
        token("af"),
        token("src_ip"),
        token("dst_ip"),
        token("src_port"),
        token("dst_port"),
        token("proto")
      ),
      PUNC.LPAREN,
    ),
    snd: $ => seq(
      choice(
        token("sndfrom"),
        token("snd"),
        token("sndto"),
      ),
      PUNC.LPAREN,
      $.identifier,
      PUNC.LPAREN,
    ),

    blitval: $ => seq(
      token("blitval"),
      PUNC.LPAREN,
      choice($.identifier, $.string),
      PUNC.LPAREN,
    ),

    hfitbody: $ => seq(
      token("hfitbody"),
      PUNC.LPAREN,
      choice($.identifier, $.string),
      PUNC.LPAREN,
    ),

    hfitname: $ => seq(
      token("hfitname"),
      PUNC.LPAREN,
      choice($.identifier, $.string),
      PUNC.LPAREN,
    ),

    msg_buf_index: $ => seq(
      token("msgbuf"),
      PUNC.LPAREN,
      $.number_literal,
      PUNC.RPAREN,
    ),

    rpl: _ => seq(
      token("rpl"),
      PUNC.LPAREN,
      choice(
        token("duri"),
        token("dhost"),
        token("dport"),
        token("dproto"),
        token("dprotoid"),
        token("cntvia"),
      ),
      PUNC.RPAREN,
    ),

    rcv: _ => seq(
      token("rcv"),
      PUNC.LPAREN,
      choice(
        token("buf"),
        token("len"),
        token("srcip"),
        token("rcvip"),
        token("scrport"),
        token("rcvport"),
        token("proto"),
        token("sproto"),
        token("af")
      ),
      PUNC.RPAREN,
    ),

    pseudo_variable: $ => seq(
      ATTRIBUTES.VAR_MARK,
      field('var', $.pseudo_content),
    ),

    hdrc: $ => seq(
      choice(token("hdrc"), token("hlfc")),
      PUNC.LPAREN,
      field('name', $.identifier),
      PUNC.RPAREN,
    ),

    avp_var: $ => prec.right(seq(
      token("avp"),
      PUNC.LPAREN,
      field('name', $.pvar_argument),
      PUNC.RPAREN,
      optional(
        seq(PUNC.LBRACK, choice(
          PUNC.STAR,
          $.number_literal,
          prec(PREC.CONDITIONAL, seq(token("i:"), $.number_literal)),
          prec(PREC.CONDITIONAL, seq(token("s:"), ($.identifier, $.string))),
        ), PUNC.RBRACK))
    )),

    hdr: $ => prec.right(seq(
      choice(token("hdr"), token("hfl")),
      PUNC.LPAREN,
      field('name', $.pvar_argument),
      PUNC.RPAREN,
      optional(
        seq(PUNC.LBRACK, choice(
          PUNC.STAR,
          $.number_literal,
        ), PUNC.RBRACK))
    )),

    xavp_values: $ => seq(
      field('name', $.identifier), // single value
      optional(field('index', seq(PUNC.LBRACK, choice($.identifier, $.number_literal, $.pseudo_variable), PUNC.RBRACK))),
      optional(field('field', seq(token('=>'), $.identifier))),
    ),

    xavp_var: $ => seq(
      token("xavp"),
      PUNC.LPAREN,
      field('name', $.xavp_values),
      PUNC.RPAREN
    ),

    // case sensitive xavps
    xavi_var: $ => seq(
      token("xavi"),
      PUNC.LPAREN,
      field('name', $.xavp_values),
      PUNC.RPAREN
    ),

    xavu_values: $ => seq(
      field('name', $.identifier), // single value
      optional(field('field', seq(token('=>'), $.identifier))),
    ),

    xavu_var: $ => seq(
      token("xavu"),
      PUNC.LPAREN,
      field('name', $.xavu_values),
      PUNC.RPAREN
    ),

    var_: $ => prec.left(seq(
      choice(token("var"), token("vz"), token("vn")),
      PUNC.LPAREN,
      field('name', choice($.identifier, $.pvar_argument)),
      PUNC.RPAREN
    )),

    shv_var: $ => seq(
      token("shv"),
      PUNC.LPAREN,
      field('name', $.pvar_argument),
      PUNC.RPAREN
    ),

    // TODO: $dsv(key)
    // key can be code, reason flags
    dsv_var: $ => seq(
      token("dsv"),
      PUNC.LPAREN,
      field('name', $.pvar_argument),
      PUNC.RPAREN
    ),

    dsg_var: _ => seq(
      token("dsg"),
      PUNC.LPAREN,
      field('name', choice(
        token('count'),
        token('active'),
        token('pactive'),
        token('inactive'),
        token('pinactive'),
      )),
      PUNC.RPAREN
    ),

    time_var: _ => seq(
      choice(token("time"), token("utime")),
      PUNC.LPAREN,
      field('name', choice(
        token('sec'),
        token('min'),
        token('hour'),
        token('mday'),
        token('mon'),
        token('year'),
        token('wday'),
        token('yday'),
        token('isdst'),
      )),
      PUNC.RPAREN
    ),

    timef_var: _ => seq(
      choice(token("time"), token("utimef")),
      PUNC.LPAREN,
      field('name', /[a-zA-Z%/]/),
      PUNC.RPAREN
    ),

    pvar_argument: $ => prec.right(choice(
      $.number_literal,
      $.string,
      $.identifier,
      seq(token('i:'), $.number_literal),
      seq(token('s:'), $.identifier),
      $.field_expression,
      $.subelement
    )),

    subelement: $ => prec(PREC.FIELD, seq(
      $.identifier,
      '=>',
      optional(ATTRIBUTES.VAR_MARK),
      $.identifier,
      optional(seq(PUNC.COLON, PUNC.COLON, $.identifier))
    )),

    modparam: $ => prec.right(seq(
      token(CFG_VARS.MODPARAM),
      PUNC.LPAREN,
      field('module_name', $.string),
      PUNC.COMMA,
      field('parameter_name', $.string),
      PUNC.COMMA,
      field('value', choice(
        $.string,
        $.number_literal,
        $.identifier,
      )),
      PUNC.RPAREN,
      optional(PUNC.SEMICOLON),
    )),

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
        $.identifier,
        $.pseudo_variable,
      )),
      PUNC.RPAREN
    ),

    function_call: $ => seq(
      field('function_name', $.identifier),
      PUNC.LPAREN,
      optional(seq(
        choice(
          field('argument', $.identifier),
          //field('argument', $.sip_keywords),
          field('argument', $.string),
          field('argument', $.number_literal)
        ),
        repeat(seq(PUNC.COMMA, choice(
          field('argument', $.identifier),
          //field('argument', $.sip_keywords),
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

    //// TODO: may be
    //sip_keywords: _ => token(choice(
    //  '"INVITE"',
    //  '"ACK"',
    //  '"BYE"',
    //  '"CANCEL"',
    //  '"PRACK"',
    //  '"UPDATE"',
    //  '"REGISTER"',
    //  '"MESSAGE"',
    //  '"INFO"',
    //  '"OPTIONS"',
    //  '"SUBSCRIBE"',
    //  '"NOTIFY"',
    //  '"PUBLISH"',
    //  '"REFER"',
    //  '"KDMQ"',
    //  '"GET"',
    //  '"POST"',
    //  '"PUT"',
    //  '"DELETE"',
    //  '"SIP"',
    //  '"From"',
    //  '"To"',
    //  '"Call-ID"',
    //  '"CSeq"',
    //  '"Route"',
    //  '"Record-Route"',
    //  '"Authorization"',
    //  '"Proxy-Authorization"',
    //  '"Contact"',
    //  '"Expires"',
    //  '"Content-Type"',
    //  '"Content-Length"',
    //  '"Via"',
    //  '"User-Agent"',
    //  '"P-Asserted-Identity"'
    //))
  }
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(PUNC.COMMA, rule)));
}

function preprocessor(command) {
  return alias(new RegExp(PREP_START.HASH_BANG + command), PREP_START.HASH_BANG + command);
}

function preprocIf(suffix, content, precedence = 0) {
  function alternativeBlock($) {
    return choice(suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else)
  }
  return {
    ['preproc_ifdef' + suffix]: $ => prec(precedence, seq(
      preprocessor('ifdef'),
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

function preprocIfn(suffix, content, precedence = 0) {
  function alternativeBlock($) {
    return choice(suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else)
  }
  return {
    ['preproc_ifndef' + suffix]: $ => prec(precedence, seq(
      preprocessor('ifndef'),
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
