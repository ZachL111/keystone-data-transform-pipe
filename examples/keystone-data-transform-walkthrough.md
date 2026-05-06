# Keystone Data Transform Pipe Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 181 | ship |
| stress | lineage depth | 159 | ship |
| edge | partition skew | 149 | ship |
| recovery | quality gap | 111 | watch |
| stale | schema drift | 219 | ship |

Start with `stale` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `recovery` becomes less cautious without a clear reason, I would inspect the drag input first.
