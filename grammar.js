const KAMAILIO_CFG = {
  SER: "SER", // done
  KAMAILIO: "KAMAILIO", // done
  OPENSER:  "OPENSER", // done
  MAXCOMPAT: "MAXCOMPAT", // done
  ALL: "ALL" // done
};

/* include files */
const INCLUDEFILE = {
  INCLUDE_FILE: "include_file", // done
  IMPORT_FILE: "import_file" // done
};


/* start of pre-processing directives */
const PREP_START = {
  HASH_BANG: "#!", // done
  BANG_BANG: "!!" // done
};

/*action keywords*/
const ACTION_KEYWORDS= {
  FORWARD: "forward",
  FORWARD_TCP: "forward_tcp",
  FORWARD_UDP: "forward_udp",
  FORWARD_TLS: "forward_tls",
  FORWARD_SCTP: "forward_sctp",
  DROP: "drop",
  EXIT: "exit",
  RETURN: "return",
  RETURN_MODE: "return_mode",
  BREAK: "break",
  LOG: "log",
  ERROR: "error",
  ROUTE: "route",
  ROUTE_REQUEST: "request_route",
  ROUTE_FAILURE: "failure_route",
  ROUTE_REPLY: "reply_route",
  ROUTE_ONREPLY: "onreply_route",
  ROUTE_BRANCH: "branch_route",
  ROUTE_SEND: "onsend_route",
  ROUTE_EVENT: "event_route",
  EXEC: "exec",
  FORCE_RPORT: {
    FORCE_RPORT: "force_rport",
    ADD_RPORT: "add_rport"
  },
  LOCAL_RPORT: "local_rport",
  ADD_LOCAL_RPORT: "add_local_rport",
  FORCE_TCP_ALIAS:{
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
  SET_HOSTPORT:{
    REWRITEHOSTPORT: "rewritehostport",
    SETHOSTPORT: "sethostport",
    SETHP: "sethp"
  },
  SET_HOSTPORTTRANS:{
    REWRITEHOSTPORTTRANS: "rewritehostporttrans",
    SETHOSTPORTTRANS: "sethostporttrans",
    SETHPT: "sethpt",
  },
  SET_USER:{
    REWRITEUSER: "rewriteuser",
    SETUSER: "setuser",
    SETU: "setu"
  },
  SET_USERPASS:{
    REWRITEUSERPASS : "rewriteuserpass",
    SETUSERPASS: "setuserpass",
    SETUP: "setup"
  },
  SET_PORT:{
    REWRITEPORT: "rewriteport",
    SETPORT : "setport",
    SETP: "setp",
  },
  SET_URI:{
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
  IF: "if",
  ELSE: "else",
  SET_ADV_ADDRESS: "set_advertised_address",
  SET_ADV_PORT: "set_advertised_port",
  FORCE_SEND_SOCKET: "force_send_socket",
  SET_FWD_NO_CONNECT: "set_forward_no_connect",
  SET_RPL_NO_CONNECT: "set_reply_no_connect",
  SET_FWD_CLOSE: "set_forward_close",
  SET_RPL_CLOSE: "set_reply_close",
  SWITCH: "switch",
  CASE: "case",
  DEFAULT: "default",
  WHILE: "while",
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
  DEBUG:"debug",
  FORK:"fork",
  FORK_DELAY:"fork_delay",
  MODINIT_DELAY:"modinit_delay",
  LOGSTDERROR:"log_stderror",
  LOGFACILITY:"log_facility",
  LOGNAME	:"log_name",
  LOGCOLOR:"log_color",
  LOGPREFIX:"log_prefix",
  LOGPREFIXMODE:"log_prefix_mode",
  LOGENGINETYPE:"log_engine_type",
  LOGENGINEDATA:"log_engine_data",
  XAVPVIAPARAMS:"xavp_via_params",
  XAVPVIAFIELDS:"xavp_via_fields",
  XAVPVIAREPLYPARAMS:"xavp_via_reply_params",
  LISTEN	:"listen",
  ADVERTISE:{
    LOWER_CASE: "advertise",
    UPPER_CASE: "ADVERTISE"
  },
  VIRTUAL	:"virtual",
  STRNAME	:{
    LOWER_CASE: "name",
    UPPER_CASE: "NAME"
  },
  ALIAS	:"alias",
  DOMAIN	:"domain",
  SR_AUTO_ALIASES:"auto_aliases",
  SR_AUTO_DOMAINS:"auto_domains",
  DNS		:"dns",
  REV_DNS	: {
    REV_DNS: "rev_dns",
    DNS_REV_VIA: "dns_rev_via"
  },
  DNS_TRY_IPV6:"dns_try_ipv6",
  DNS_TRY_NAPTR:"dns_try_naptr",
  DNS_SRV_LB	: {
    DNS_SRV_LB: "dns_srv_lb",
    DNS_SRV_LOADBALANCING: "dns_srv_loadbalancing"
  },
  DNS_UDP_PREF:{
    DNS_UDP_PREF: "dns_udp_pref",
    DNS_UDP_PREFERENCE: "dns_udp_preference"
  },
  DNS_TCP_PREF:{
    DNS_TCP_PREF:"dns_tcp_pref",
    DNS_TCP_PREFERENCE: "dns_tcp_preference"
  },
  DNS_TLS_PREF: {
    DNS_TLS_PREF: "dns_tls_pref",
    DNS_TLS_PREFERENCE: "dns_tls_preference"
  },
  DNS_SCTP_PREF:{
    DNS_SCTP_PREF: "dns_sctp_pref",
    DNS_SCTP_PREFERENCE: "dns_sctp_preference"
  },
  DNS_RETR_TIME:"dns_retr_time",
  DNS_SLOW_QUERY_MS:"dns_slow_query_ms",
  DNS_RETR_NO	:"dns_retr_no",
  DNS_SERVERS_NO:"dns_servers_no",
  DNS_USE_SEARCH:"dns_use_search_list",
  DNS_SEARCH_FMATCH:"dns_search_full_match",
  DNS_NAPTR_IGNORE_RFC:"dns_naptr_ignore_rfc",
  /*:"dns cache */
  DNS_CACHE_INIT:"dns_cache_init",
  DNS_USE_CACHE: {
    USE_DNS_CACHE: "use_dns_cache",
    DNS_USE_CACHE: "dns_use_cache"
  },
  DNS_USE_FAILOVER:{
    USE_DNS_FAILOVER: "use_dns_failover",
    DNS_USE_FAILOVER: "dns_use_failover"
  },
  DNS_CACHE_FLAGS: "dns_cache_flags",
  DNS_CACHE_NEG_TTL: "dns_cache_negative_ttl",
  DNS_CACHE_MIN_TTL: "dns_cache_min_ttl",
  DNS_CACHE_MAX_TTL: "dns_cache_max_ttl",
  DNS_CACHE_MEM:"dns_cache_mem",
  DNS_CACHE_GC_INT:"dns_cache_gc_interval",
  DNS_CACHE_DEL_NONEXP:{
    DNS_CACHE_DEL_NONEXP: "dns_cache_del_nonexp",
    DNS_CACHE_DELETE_NONEXPIRED:"dns_cache_delete_nonexpired"
  },
  DNS_CACHE_REC_PREF:"dns_cache_rec_pref",
  /*:"ipv6 auto bind */
  AUTO_BIND_IPV6:"auto_bind_ipv6",
  BIND_IPV6_LINK_LOCAL:"bind_ipv6_link_local",
  IPV6_HEX_STYLE:"ipv6_hex_style",
  /* blocklist */
  DST_BLST_INIT:"dst_blocklist_init",
  USE_DST_BLST:"use_dst_blocklist",
  DST_BLST_MEM:"dst_blocklist_mem",
  DST_BLST_TTL: {
    DST_BLOCKLIST_EXPIRE: "dst_blocklist_expire",
    DST_BLOCKLIST_TTL: "dst_blocklist_ttl"
  },
  DST_BLST_GC_INT:"dst_blocklist_gc_interval",
  DST_BLST_UDP_IMASK:"dst_blocklist_udp_imask",
  DST_BLST_TCP_IMASK:"dst_blocklist_tcp_imask",
  DST_BLST_TLS_IMASK:"dst_blocklist_tls_imask",
  DST_BLST_SCTP_IMASK:"dst_blocklist_sctp_imask",

  IP_FREE_BIND: {
    IP_FREE_BIND: "ip_free_bind",
    IPFREEBIND: "ipfreebind",
    IP_NONLOCAL_BIND: "ip_nonlocal_bind"
  },
  PORT:"port",
  STAT:"statistics",
  STATS_NAMESEP:"stats_name_separator",
  MAXBUFFER:"maxbuffer",
  MAXSNDBUFFER:"maxsndbuffer",
  SQL_BUFFER_SIZE:"sql_buffer_size",
  MSG_RECV_MAX_SIZE:"msg_recv_max_size",
  TCP_MSG_READ_TIMEOUT:"tcp_msg_read_timeout",
  TCP_MSG_DATA_TIMEOUT:"tcp_msg_data_timeout",
  TCP_ACCEPT_IPLIMIT:"tcp_accept_iplimit",
  TCP_CHECK_TIMER:"tcp_check_timer",
  CHILDREN:"children",
  SOCKET:"socket",
  BIND:"bind",
  WORKERS:"workers",
  SOCKET_WORKERS:"socket_workers",
  ASYNC_WORKERS:"async_workers",
  ASYNC_USLEEP:"async_usleep",
  ASYNC_NONBLOCK:"async_nonblock",
  ASYNC_WORKERS_GROUP:"async_workers_group",
  CHECK_VIA:"check_via",
  PHONE2TEL:"phone2tel",
  MEMLOG:{
    MEMLOG: "memlog",
    MEM_LOG: "mem_log"
  },
  MEMDBG: {
    MEMDBG: "memdbg",
    MEM_DBG: "mem_dbg"
  },
  MEMSUM:"mem_summary",
  MEMSAFETY:"mem_safety",
  MEMADDSIZE:"mem_add_size",
  MEMJOIN: "mem_join",
  MEMSTATUSMODE	:"mem_status_mode",
  CORELOG: {
    CORELOG: "corelog",
    CORE_LOG: "core_log"
  },
  SIP_PARSER_LOG_ONELINE:"sip_parser_log_oneline",
  SIP_PARSER_LOG:"sip_parser_log",
  SIP_PARSER_MODE:"sip_parser_mode",
  SIP_WARNING:"sip_warning",
  SERVER_SIGNATURE:"server_signature",
  SERVER_HEADER:"server_header",
  USER_AGENT_HEADER:"user_agent_header",
  REPLY_TO_VIA:"reply_to_via",
  USER: {
    USER: "user",
    UID: "uid"
  },
  GROUP:{
    GROUP: "group",
    GID: "gid"
  },
  CHROOT:"chroot",
  WDIR: {
    WORKDIR: "workdir",
    WDIR: "wdir"
  },
  RUNDIR: {
    RUNDIR: "rundir",
    RUN_DIR: "run_dir"
  },
  MHOMED:"mhomed",
  DISABLE_TCP:"disable_tcp",
  TCP_CHILDREN:"tcp_children",
  TCP_ACCEPT_ALIASES:"tcp_accept_aliases",
  TCP_ACCEPT_UNIQUE:"tcp_accept_unique",
  TCP_SEND_TIMEOUT:"tcp_send_timeout",
  TCP_CONNECT_TIMEOUT:"tcp_connect_timeout",
  TCP_CON_LIFETIME:"tcp_connection_lifetime",
  TCP_CONNECTION_MATCH:"tcp_connection_match",
  TCP_POLL_METHOD	:"tcp_poll_method",
  TCP_MAX_CONNECTIONS:"tcp_max_connections",
  TLS_MAX_CONNECTIONS:"tls_max_connections",
  TCP_NO_CONNECT	:"tcp_no_connect",
  TCP_SOURCE_IPV4	:"tcp_source_ipv4",
  TCP_SOURCE_IPV6	:"tcp_source_ipv6",
  TCP_OPT_FD_CACHE:"tcp_fd_cache",
  TCP_OPT_BUF_WRITE:{
    TCP_BUF_WRITE: "tcp_buf_write",
    TCP_ASYNC: "tcp_async"
  },
  TCP_OPT_CONN_WQ_MAX:"tcp_conn_wq_max",
  TCP_OPT_WQ_MAX	:"tcp_wq_max",
  TCP_OPT_RD_BUF	:"tcp_rd_buf_size",
  TCP_OPT_WQ_BLK	:"tcp_wq_blk_size",
  TCP_OPT_DEFER_ACCEPT:"tcp_defer_accept",
  TCP_OPT_DELAYED_ACK:"tcp_delayed_ack",
  TCP_OPT_SYNCNT	:"tcp_syncnt",
  TCP_OPT_LINGER2	:"tcp_linger2",
  TCP_OPT_KEEPALIVE:"tcp_keepalive",
  TCP_OPT_KEEPIDLE:"tcp_keepidle",
  TCP_OPT_KEEPINTVL:"tcp_keepintvl",
  TCP_OPT_KEEPCNT	:"tcp_keepcnt",
  TCP_OPT_CRLF_PING:"tcp_crlf_ping",
  TCP_OPT_ACCEPT_NO_CL:"tcp_accept_no_cl",
  TCP_OPT_ACCEPT_HEP3:"tcp_accept_hep3",
  TCP_OPT_ACCEPT_HAPROXY:"tcp_accept_haproxy",
  TCP_OPT_CLOSE_RST:"tcp_close_rst",
  TCP_CLONE_RCVBUF:"tcp_clone_rcvbuf",
  TCP_REUSE_PORT	:"tcp_reuse_port",
  TCP_WAIT_DATA:"tcp_wait_data",
  TCP_SCRIPT_MODE:"tcp_script_mode",
  DISABLE_TLS: {
    DISABLE_TLS: "disable_tls",
    TLS_DISABLE: "tls_disable"
  },
  ENABLE_TLS: {
    ENABLE_TLS: "enable_tls",
    TLS_ENABLE: "tls_enable"
  },
  TLS_THREADS_MODE:"tls_threads_mode",
  TLSLOG: {
    TLSLOG: "tlslog",
    TLS_LOG: "tls_log"
  },
  TLS_PORT_NO	:"tls_port_no",
  TLS_METHOD	:"tls_method",
  TLS_VERIFY	:"tls_verify",
  TLS_REQUIRE_CERTIFICATE:"tls_require_certificate",
  TLS_CERTIFICATE:"tls_certificate",
  TLS_PRIVATE_KEY:"tls_private_key",
  TLS_CA_LIST	:"tls_ca_list",
  TLS_HANDSHAKE_TIMEOUT:"tls_handshake_timeout",
  TLS_SEND_TIMEOUT:"tls_send_timeout",
  DISABLE_SCTP:"disable_sctp",
  ENABLE_SCTP:"enable_sctp",
  SCTP_CHILDREN:"sctp_children",
  ADVERTISED_ADDRESS:"advertised_address",
  ADVERTISED_PORT	:"advertised_port",
  DISABLE_CORE	:"disable_core_dump",
  OPEN_FD_LIMIT	:"open_files_limit",
  SHM_MEM_SZ	: {
    SHM: "shm",
    SHM_MEM: "shm_mem",
    SHM_MEM_SIZE: "shm_mem_size"
  },
  SHM_FORCE_ALLOC	:"shm_force_alloc",
  MLOCK_PAGES		:"mlock_pages",
  REAL_TIME		:"real_time",
  RT_PRIO			:"rt_prio",
  RT_POLICY		:"rt_policy",
  RT_TIMER1_PRIO: {
    RT_TIMER1_PRIO: "rt_timer1_prio",
    RT_FAST_TIMER_PRIO: "rt_fast_timer_prio",
    RT_FTIMER_PRIO: "rt_ftimer_prio",
  },
  RT_TIMER1_POLICY: {
    RT_TIMER1_POLICY: "rt_timer1_policy",
    RT_FTIMER_POLICY: "rt_ftimer_policy"
  },
  RT_TIMER2_PRIO	:{
    RT_TIMER2_PRIO: "rt_timer2_prio",
    RT_STIMER_PRIO: "rt_stimer_prio"
  },
  RT_TIMER2_POLICY: {
    RT_TIMER2_POLICY: "rt_timer2_policy",
    RT_STIMER_POLICY: "rt_stimer_policy"
  },
  MCAST_LOOPBACK	:"mcast_loopback",
  MCAST_TTL	:"mcast_ttl",
  MCAST	:"mcast",
  TOS		:"tos",
  PMTU_DISCOVERY:"pmtu_discovery",
  KILL_TIMEOUT:{
    EXIT_TIMEOUT: "exit_timeout",
    SER_KILL_TIMEOUT: "ser_kill_timeout"
  },
  MAX_WLOOPS	:"max_while_loops",
  PVBUFSIZE	:"pv_buffer_size",
  PVBUFSLOTS	:"pv_buffer_slots",
  PVCACHELIMIT:"pv_cache_limit",
  PVCACHEACTION:"pv_cache_action",
  HTTP_REPLY_PARSE:{
    HTTP_REPLY_HACK: "http_reply_hack",
    HTTP_REPLY_PARSE: "http_reply_parse"
  },
  VERSION_TABLE_CFG:"version_table",
  VERBOSE_STARTUP	:"verbose_startup",
  SERVER_ID    :"server_id",
  ROUTE_LOCKS_SIZE    :"route_locks_size",
  WAIT_WORKER1_MODE    :"wait_worker1_mode",
  WAIT_WORKER1_TIME    :"wait_worker1_time",
  WAIT_WORKER1_USLEEP  :"wait_worker1_usleep",
  KEMI: "kemi",
  REQUEST_ROUTE_CALLBACK:"request_route_callback",
  ONSEND_ROUTE_CALLBACK:"onsend_route_callback",
  REPLY_ROUTE_CALLBACK:"reply_route_callback",
  EVENT_ROUTE_CALLBACK:"event_route_callback",
  RECEIVED_ROUTE_CALLBACK:"received_route_callback",
  RECEIVED_ROUTE_MODE	:"received_route_mode",
  PRE_ROUTING_CALLBACK:"pre_routing_callback",
  MAX_RECURSIVE_LEVEL	:"max_recursive_level",
  MAX_BRANCHES_PARAM	:"max_branches",
  LATENCY_CFG_LOG		:"latency_cfg_log",
  LATENCY_LOG			:"latency_log",
  LATENCY_LIMIT_DB	:"latency_limit_db",
  LATENCY_LIMIT_ACTION:"latency_limit_action",
  LATENCY_LIMIT_CFG	:"latency_limit_cfg",
  RPC_EXEC_DELTA_CFG	:"rpc_exec_delta",
  URI_HOST_EXTRA_CHARS:"uri_host_extra_chars",
  HDR_NAME_EXTRA_CHARS:"hdr_name_extra_chars",
  MSG_TIME:"msg_time",
  ONSEND_RT_REPLY	:"onsend_route_reply",
  CFG_DESCRIPTION	:{
    DESCRIPTION: "description",
    DESCR: "descr",
    DESC: "desc"
  },
  LOADMODULE:"loadmodule", /* done */
  LOADMODULEX:"loadmodulex", /* done */
  LOADPATH:{
    LOADPATH: "loadpath",
    MPATH: "mpath"
  },
  MODPARAM       :"modparam", /* done */
  MODPARAMX       :"modparamx", /* done */
  CFGENGINE:"cfgengine",
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
  name: 'kamailio',

  rules: {
    source_file: $ => seq(
      $.file_starter,
      repeat($._top_level_statement)
    ),

    // file starter
    file_starter: $ => seq(
      choice(
        token(PREP_START.HASH_BANG),
        token(PREP_START.BANG_BANG)
      ),
      field('cfg_type',
        choice(
          token(KAMAILIO_CFG.SER),
          token(KAMAILIO_CFG.KAMAILIO),
          token(KAMAILIO_CFG.OPENSER),
          token(KAMAILIO_CFG.MAXCOMPAT),
          token(KAMAILIO_CFG.ALL)
        ))),

    // Top level statements
    _top_level_statement: $ => choice(
      $.file_inclusion,
      $.routing_block,
      $.config_variable,
      $.preprocessor_directive,
      $.keyword,
      $.loadmodule,
      $.loadmodulex,
      $.comment,
      $.modparam,
      $.modparamx,
    ),

    _QUOTE: $ => '"',
    _TICK: $ => "'",
    _SLASH: $ => '/',
    _SEMICOLON: $ => ';',
    _RPAREN: $ => ')',
    _LPAREN: $ => '(',
    _LBRACE: $ => '{',
    _RBRACE: $ => '}',
    _LBRACK: $ => '[',
    _RBRACK: $ => ']',
    _COMMA: $ => ',',
    _COLON: $ => ':',
    _STAR: $ => '*',
    _DOT: $ => '.',
    _CR: $ => '\n',
    _COM_LINE: $ => '//',
    _COM_LINE_DEPR: $ => '#',
    _COM_START: $ => '/*',
    _COM_END: $ => '*/',

    // Example: import_file "file_name.cfg"
    // Example: include_file "file_name.cfg"
    file_inclusion: $ => seq(
      choice(
        token(INCLUDEFILE.INCLUDE_FILE),
        token(INCLUDEFILE.IMPORT_FILE)
      ),
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


    // operator: $ => choice(
    //   OPERATORS.EQUAL,
    //   OPERATORS.EQUAL_T,
    //   OPERATORS.GT,
    //   OPERATORS.LT,
    //   OPERATORS.GTE,
    //   OPERATORS.LTE,
    //   OPERATORS.DIFF,
    //   OPERATORS.MATCH,
    //   OPERATORS.ADDEQ,
    //   OPERATORS.NOT,
    //   OPERATORS.LOG_AND,
    //   OPERATORS.LOG_OR,
    //   OPERATORS.BIN_AND,
    //   OPERATORS.BIN_OR,
    //   OPERATORS.BIN_NOT,
    //   OPERATORS.BIN_XOR,
    //   OPERATORS.BIN_LSHIFT,
    //   OPERATORS.BIN_RSHIFT,
    //   OPERATORS.PLUS,
    //   OPERATORS.MINUS,
    //   OPERATORS.MODULO,
    //   OPERATORS.STRLEN,
    //   OPERATORS.STREMPTY,
    //   OPERATORS.DEFINED,
    //   OPERATORS.SELVAL,
    //   OPERATORS.STREQ,
    //   OPERATORS.INTEQ,
    //   OPERATORS.STRDIFF,
    //   OPERATORS.INTDIFF,
    //   OPERATORS.INTCAST,
    //   OPERATORS.STRCAST
    // ),
    predefined_routes: $ => choice(
      ACTION_KEYWORDS.ROUTE_REQUEST,
      ACTION_KEYWORDS.ROUTE_REPLY,
      ACTION_KEYWORDS.ROUTE_BRANCH,
      ACTION_KEYWORDS.ROUTE_FAILURE,
      ACTION_KEYWORDS.ROUTE_ONREPLY,
      ACTION_KEYWORDS.ROUTE_EVENT,
      ACTION_KEYWORDS.ROUTE_SEND,
      ACTION_KEYWORDS.ROUTE
    ),

    _route_name: $ => choice(
      $.string,
      $.identifier,
      $.number,
    ),

    named_route: $ => seq(
      field('route', $.predefined_routes),
      $._LBRACK,
      field('route_name', $._route_name),
      $._RBRACK,
      $._block
    ),

    unnamed_route: $ => seq(
        field('route' , $.predefined_routes),
        $._block
    ),

    routing_block: $ => choice(
       $.unnamed_route,
       $.named_route
    ),

    _multiline_comment: $ => seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    comment: $ => choice(
      seq($._COM_LINE, /[^\n]*/),
      seq($._COM_LINE_DEPR, /[^\n]*/),
      // The following is a comment block is not working
      $._multiline_comment
    ),

    _statement: $ => choice(
        $.comment,
        seq($.function_call, $._SEMICOLON),
        seq($.variable, $._SEMICOLON),
        seq($.route_call,   $._SEMICOLON),
        // $.conditional_block,
        $.if_statement,
        seq($.control, $._SEMICOLON),
        // $.sip_keywords,
        // $.action_keyword,
      ),

    keyword: $ => choice(
      token(prec(1, 'cfgengine')),
    ),


    // parse debug=3; as debug_variable
    debug: $ => prec.left(3, choice(
      field('key',token(CFG_VARS.DEBUG)),
      $.assignment,
      field('value', $.number)
    )),

    assignment: $ => OPERATORS.EQUAL,

    _log_variable: $ => prec.left(2, choice(
      field('var',
        choice(
          token(CFG_VARS.LOGNAME),
          token(CFG_VARS.LOGSTDERROR),
          token(CFG_VARS.LOGFACILITY),
          token(CFG_VARS.LOGCOLOR),
          token(CFG_VARS.LOGPREFIX),
          token(CFG_VARS.LOGPREFIXMODE),
          token(CFG_VARS.LOGENGINETYPE),
          token(CFG_VARS.LOGENGINEDATA))),
      token('='), // assignment operator
      field('value', $.string)
    )),

    config_key: $ => field('key', choice(
      token('debug'),
      token(CFG_VARS.LOGNAME),
      token(CFG_VARS.LOGSTDERROR),
      token(CFG_VARS.LOGFACILITY),
      token(CFG_VARS.LOGCOLOR),
      token(CFG_VARS.LOGPREFIX),
      token(CFG_VARS.LOGPREFIXMODE),
      token(CFG_VARS.LOGENGINETYPE),
      token(CFG_VARS.LOGENGINEDATA),
      token('fork'),
      token('fork_delay'),
      token('modinit_delay'),
      token('xavp_via_params'),
      token('xavp_via_fields'),
      token('xavp_via_reply_params'),
      token('listen'),
      token('advertise|ADVERTISE'),
      token('virtual'),
      token('name|NAME'),
      token('alias'),
      token('domain'),
      token('auto_aliases'),
      token('auto_domains'),
      token('dns'),
      token('rev_dns|dns_rev_via'),
      token('dns_try_ipv6'),
      token('dns_try_naptr'),
      token('dns_srv_lb|dns_srv_loadbalancing'),
      token('dns_udp_pref|dns_udp_preference'),
      token('dns_tcp_pref|dns_tcp_preference'),
      token('dns_tls_pref|dns_tls_preference'),
      token('dns_sctp_pref|dns_sctp_preference'),
      token('dns_retr_time'),
      token('dns_slow_query_ms'),
      token('dns_retr_no'),
      token('dns_servers_no'),
      token('dns_use_search_list'),
      token('dns_search_full_match'),
      token('dns_naptr_ignore_rfc'),
      /* dns cache */
      token('dns_cache_init'),
      token('use_dns_cache|dns_use_cache'),
      token('use_dns_failover|dns_use_failover'),
      token('dns_cache_flags'),
      token('dns_cache_negative_ttl'),
      token('dns_cache_min_ttl'),
      token('dns_cache_max_ttl'),
      token('dns_cache_mem'),
      token('dns_cache_gc_interval'),
      token('dns_cache_del_nonexp|dns_cache_delete_nonexpired'),
      token('dns_cache_rec_pref'),
      token('ipv6 auto bind */'),
      token('auto_bind_ipv6'),
      token('bind_ipv6_link_local'),
      token('ipv6_hex_style'),
    )),

    config_value: $ => choice($.string, $.number),

    config_variable: $ => seq(
      field('key', $.config_key),
      OPERATORS.EQUAL,
      field('value',$.config_value)
    ),

    action_keyword: $ => choice(
      token(ACTION_KEYWORDS.IF),
      token(ACTION_KEYWORDS.ELSE),
    ),

    control: $ => choice(
      token(ACTION_KEYWORDS.RETURN),
      token(ACTION_KEYWORDS.EXIT),
      token(ACTION_KEYWORDS.BREAK),
      token(ACTION_KEYWORDS.DROP)
    ),

    if_statement: $ => prec.right(seq(
      token(ACTION_KEYWORDS.IF),
      field('condition', $.parentized_expression),
      field('action', choice($._block, $._statement)),
      optional($.else_block)
    )),


    parentized_expression: $ => seq(
      $._LPAREN,
      $._expression,
      $._RPAREN
    ),

    else_block: $ => seq(
      token(ACTION_KEYWORDS.ELSE),
      choice($._block, $._statement)
    ),


    // conditional_block: $ => prec.left(PREC.CONDITIONAL,
    //   seq($.if_block, optional($.else_block))),

    string: $ => choice(
      seq($._QUOTE, repeat(choice($.escape_sequence, /[^\\"]+/)), $._QUOTE),
      seq($._TICK, repeat(choice($.escape_sequence, /[^\\']+/)), $._TICK)
    ),

    escape_sequence: $ => token.immediate(seq('\\', /./)),

    // preprocessor_directive: $ => choice(
    //   seq(
    //     PREP_START.HASH_BANG ,
    //     /(define|ifdef|ifndef|ifexp|trydefine|trydef|redefine|redef|defenv|defenvs|trydefenv|trydefenvs|defexp|defexps)/,
    //     optional(/\s*\w*/)),
    //   seq(PREP_START.HASH_BANG, /(else|endif|subst|substdef|substdefs)/)
    // ),
    preprocessor_directive: $ => choice(
      seq(
        PREP_START.HASH_BANG ,
        /(define|ifdef|ifndef|ifexp|trydefine|trydef|redefine|redef|defenv|defenvs|trydefenv|trydefenvs|defexp|defexps)/,
        optional(/\s*\w*/)),
      seq(
        PREP_START.HASH_BANG,
        /(else|endif)/),
      seq(
        PREP_START.HASH_BANG,
        /(subst|substdef|substdefs)/,
        optional(seq(field('from', choice($.string, $.identifier)),field('to', choice($.string, $.identifier))))
      )
    ),

    // add conflict rule for preprocessor_directive and quoted string


    number: $ => choice(
      $.hex_number,
      $.oct_number,
      $.dec_number,
      $.bin_number,
    ),

    variable: $ => choice(
      $.local_variable,
      $.avp_variable,
      $.xavp_variable,
      $.pseudo_variable,
    ),

    local_id: $ => seq('$', 'var', '(', $.identifier, ')'),

    local_variable: $ => seq(
      field('local_var', $.local_id),
      $.assignment,
      field('value', choice(
        $.string,
        $.number,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.pseudo_variable,
        $.variable_content
      ))),


    variable_content: $ => choice(
      seq($.index, optional($.transformation)),
      seq($.transformation, optional($.index))
    ),

    index: $ => seq('[', /[^\]]+/, ']'),

    transformation: $ => seq(
      $._LBRACE,
      field('transformation_type', choice(
        's', 'uri', 'param', 'nameaddr', 'tobody', 're', 'line', 'sql', 'msrpuri', 'json', 'url', 'sock', 'urialias', 'val'
      )),
      $._RBRACE
    ),

    boolean_constant: $ => token(choice(
      BOOL.TRUE,
      BOOL.FALSE
    )),

    // operator: $ => choice(
    //   $.unary_operator,
    //   $.binary_operator
    // ),

    _expression: $ => choice(
      // $.identifier,
      $.function_call,
      $.unary_expression,
      $.binary_expression,
      // $.ternary_expression,
      // $.parenthesized_expression,
    ),

    unary_expression: $ => choice(
      prec(PREC.UNARY, seq('!', $._expression)),
    ),

    _logical_or_expression: $ => prec.left(
      PREC.LOGICAL_OR,
      seq(
        choice($.local_variable, $.pseudo_variable, $.variable_content),
        choice(
          token(OPERATORS.LOG_OR.OP),
          token(OPERATORS.LOG_OR.WORD)
        ),
        $._expression)
    ),

    _logical_and_expression: $ => prec.left(
      PREC.LOGICAL_AND,
      seq(
        $._expression,
        choice(
          OPERATORS.LOG_AND.OP,
          OPERATORS.LOG_AND.WORD
        ),
        $._expression)
    ),

    _equality_expression: $ => prec.left(
      PREC.EQUAL,
      seq(
        $._expression,
        OPERATORS.EQUAL_T,
        $._expression)
    ),

    _relational_expression: $ => prec.left(
      PREC.RELATIONAL,
      seq(
        $._expression,
        choice(
          OPERATORS.GT,
          OPERATORS.LT,
          OPERATORS.GTE,
          OPERATORS.LTE
        ),
        $._expression)
    ),


    binary_expression: $ => choice(
      $._logical_or_expression,
      $._logical_and_expression,
      $._equality_expression,
      $._relational_expression,
      // add more
    ),

    // letter: $ => /[a-zA-Z]/,
    // digit: $ => /[0-9]/,
    // letter_: $ => choice($.letter, '_'),
    // alphanum: $ => choice($.letter_, $.digit),
    // id: $ => seq($.letter_, repeat($.alphanum)),
    // num_id: $ => repeat1($.alphanum),
    // hex: $ => /[0-9a-fA-F]/,
    // hexnumber: $ => seq('0x', repeat1($.hex)),
    // octnumber: $ => seq('0', repeat1(/[0-7]/)),
    // decnumber: $ => choice('0', seq(/[1-9]/, repeat($.digit))),
    // binnumber: $ => seq(repeat1(/[0-1]/), 'b'),
    // hex4: $ => seq(repeat1($.hex), '{1,4}'),
    // ipv6addr: $ => choice(
    //   seq(repeat(seq($.hex4, ':')), repeat(seq($.hex4, ':')), repeat(seq(':', $.hex4)),
    //   seq(repeat(seq($.hex4, ':')), repeat(seq(':', $.hex4)),
    //   seq(':', repeat(seq($.hex4, ':'))),
    //   '::'
    // ))),
    //
    // identifier: $ => choice(
    //   $.id,
    // ),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    hex_number: $ => /0x[0-9a-fA-F]+/,
    oct_number: $ => /0[0-7]+/,
    dec_number: $ => /[0-9]+/,
    bin_number: $ => /[0-1]+b/,


    pseudo_variable: $ => seq(
      ATTRIBUTES.VAR_MARK,
      choice(
        seq($._LBRACE, field('pvar', $.pvar_type), $._RBRACE),
        seq(field('pvar', $.pvar_type))
      )
    ),

    pvar_type: $ => choice(
      'avp', 'hdr', 'ru', 'tu', 'ci', 'du', 'fu', 'ru', 'route', 'rU', 'null',
      'branch', 'rr', 'addr', 'body', 'ct', 'diversion',
      // Add any other pseudo-variable types as needed
    ),

    avp_variable: $ => seq(
      ATTRIBUTES.VAR_MARK,
      token('avp'),
      $._LPAREN,
      field('variable_name', $.identifier),
      $._RPAREN,
      $.assignment,
      field('value', choice(
        $.string,
        $.number,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.pseudo_variable,
        $.variable_content
      ))
    ),

    xavp_variable: $ => seq(
      ATTRIBUTES.VAR_MARK,
      token('xavp'),
      $._LPAREN,
      field('variable_name', $.identifier),
      $._RPAREN,
      $.assignment,
      field('value', choice(
        $.string,
        $.number,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.pseudo_variable,
        $.variable_content
      ))
    ),

    modparam: $ => seq(
      token(CFG_VARS.MODPARAM),
      $._LPAREN,
      field('module_name', $.string),
      $._COMMA,
      field('parameter_name', $.string),
      $._COMMA,
      field('value', choice(
        $.string,
        $.number,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.variable,
        $.variable_content
      )),
      $._RPAREN
    ),

  modparamx: $ => seq(
      token(CFG_VARS.MODPARAMX),
      $._LPAREN,
      field('module_name', $.string),
      $._COMMA,
      field('parameter_name', $.string),
      $._COMMA,
      field('value', choice(
        $.string,
        $.number,
        $.boolean_constant,
        $.identifier,
        $.function_call,
        $.variable,
        $.variable_content
      )),
      $._RPAREN
    ),


    // if string arguments are passed and they are sip keywords, they should be tokenized as sip_keywords
    function_call: $ => seq(
      // need to highlight the function name separetel from identifier
      field('function_name', $.identifier),
      $._LPAREN,
      optional(seq(
        choice(
          field('argument', $.identifier),
          field('argument', $.sip_keywords),
          field('argument', $.string),
          field('argument', $.number)
        ),
        repeat(seq($._COMMA, choice(
          field('argument', $.identifier),
          field('argument', $.sip_keywords),
          field('argument', $.string),
          field('argument', $.number)
        ))),
      )),
      $._RPAREN
    ),

    _block: $ => seq(
      $._LBRACE,
      repeat($._statement),
      $._RBRACE
    ),

    // example: (expression)
    parenthesized_expression: $ => seq(
      $._LPAREN,
      field('expression', $.identifier),
      $._RPAREN
    ),

    // Example route call syntax route(route_name);
    route_call: $ => seq(
      token(ACTION_KEYWORDS.ROUTE),
      $._LPAREN,
      field('route_name', choice($.identifier, $.string, $.number)),
      $._RPAREN,
    ),

    sip_keywords: $ => token(choice(
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
