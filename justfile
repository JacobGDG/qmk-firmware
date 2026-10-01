default:
    @just --list

build:
    #!/usr/bin/env bash
    set -euo pipefail
    stamp=.just-build-stamp
    if [ -e "$stamp" ] && [ -z "$(find flake.nix flake.lock keyboards -type f -newer "$stamp")" ]; then
        echo "up to date, skipping build"
    else
        nix build .#firmware --show-trace
        touch "$stamp"
    fi

flash: build
    test -f result/firmware/default.uf2 || just build
    qmk --config-file /dev/null flash result/firmware/default.uf2

format:
    qmkfmt keyboards/crkbd/keymap.c
