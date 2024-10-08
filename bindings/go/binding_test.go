package tree_sitter_kamailio_cfg_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-kamailio_cfg"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kamailio_cfg.Language())
	if language == nil {
		t.Errorf("Error loading KamailioCfg grammar")
	}
}
