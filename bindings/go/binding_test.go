package tree_sitter_web_idl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-web_idl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_web_idl.Language())
	if language == nil {
		t.Errorf("Error loading WebIdl grammar")
	}
}
