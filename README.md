
# Tree-Sitter-Kamailio-cfg

This is a tree-sitter grammar for Kamailio configuration files.

Some c like grammar is taken from the [tree-sitter-c](https://github.com/tree-sitter/tree-sitter-c) grammar.

## Pre-requisites

- [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)

## Usage

1. Add the following to your nvim `init.lua`

```lua
---@class parser_config
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.kamailio_cfg = {
  install_info = {
    -- url = 'https://github.com/IbrahimShahzad/tree-sitter-kamailio-cfg', -- local path or git repo
    url = '~/personal/tree-sitter-kamailio-cfg', -- local path or git repo
    files = { 'src/parser.c', 'queries/highlights.scm' }, -- note that some parsers also require src/scanner.c or src/scanner.cc
    branch = 'v0.1.2', -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = 'kamailio', -- if filetype does not match the parser name
}
vim.treesitter.language.register('kamailio_cfg', 'cfg')
```

2. Run `:TSInstall kamailio_cfg` in nvim.

3. Copy the `queries/highlights.scm` to `~/.config/nvim/queries/kamailio_cfg/highlights.scm` or add it to runtime path queries folder. see `:h rtp`

4. Set the filetype to `kamailio_cfg` when opening in neovim.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
