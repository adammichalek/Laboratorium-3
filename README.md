// Place your key bindings in this file to override the defaultsauto[]
[
    {
        "key": "ctrl+k",
        "command": "terminal.focus"
    },
    {
        "key": "ctrl+k",
        "command": "workbench.action.terminal.focus"
    },
    {
        "key": "ctrl+j",
        "command": "workbench.action.focusActiveEditorGroup"
    },
    {
        "key": "ctrl+shift+space",
        "command": "python.execInTerminal-icon"
    },
    {
        "key": "alt+;",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "wrappedLineEnd",
          "by": "wrappedLine",
          "select": false
        }
    },
    {
        "key": "alt+l",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "right",
          "by": "character",
          "select": false
        }
    },
    {
        "key": "alt+k",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "left",
          "by": "character",
          "select": false
        }
    },
    {
        "key": "alt+j",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "wrappedLineStart",
          "by": "wrappedLine",
          "select": false
        }
    },
    {
        "key": "alt+o",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "down",
          "by": "line",
          "value": 1, // Move up by 1 line
          "select": false
        }
    },
    {
        "key": "alt+i",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "up",
          "by": "line",
          "value": 1, // Move up by 1 line
          "select": false
        }
    },
    {
        "key": "alt+f",
        "command": "workbench.action.terminal.focus",
        "when": "!terminalFocus"
      },
      {
        "key": "alt+f",
        "command": "workbench.action.focusActiveEditorGroup",
        "when": "terminalFocus"
      },
      {
        "key": "alt+shift+l",
        "command": "cursorRightSelect",
        "when": "editorTextFocus"
      },
      {
        "key": "alt+shift+k",
        "command": "cursorLeftSelect",
        "when": "editorTextFocus"
      },
      {
        "key": "alt+c",
        "command": "deleteLeft",
        "when": "editorTextFocus && !editorReadonly"
      },
      {
        "key": "alt+shift+i",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "up",
          "by": "line",
          "select": true
        }
      },
      {
        "key": "alt+shift+o",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "down",
          "by": "line",
          "select": true
        }
      },
      {
        "key": "alt+shift+;",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "wrappedLineEnd",
          "by": "wrappedLine",
          "select": true
        }
      },
      {
        "key": "alt+shift+j",
        "command": "cursorMove",
        "when": "editorTextFocus",
        "args": {
          "to": "wrappedLineStart",
          "by": "wrappedLine",
          "select": true
        }
      },
      {
        "key": "alt+oem_2",
        "command": "editor.action.commentLine",
        "when": "editorTextFocus && !editorReadonly"
      },
      {
        "key": "ctrl+oem_2",
        "command": "-editor.action.commentLine",
        "when": "editorTextFocus && !editorReadonly"
      }
]
