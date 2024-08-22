
# Tree-Sitter-Kamailio-cfg

This is a tree-sitter grammar for Kamailio configuration files.

Some c like grammar is taken from the [tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c) grammar.

## Pre-requisites

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)

## Usage

1. Add the following to your nvim init.lua

```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.kamailio_cfg = {
  install_info = {
    url = 'https://github.com/IbrahimShahzad/tree-sitter-kamailio-cfg',
    files = { 'src/parser.c' },
  },
  branch = 'v1.0.0',
  filetype = 'cfg',
}
```

2. Run `:TSInstall kamailio_cfg` in nvim.

3. Set the filetype to `kamailio_cfg` when opening in neovim.
