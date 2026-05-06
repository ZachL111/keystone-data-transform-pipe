# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 181, lane `ship`
- `stress`: `lineage depth`, score 159, lane `ship`
- `edge`: `partition skew`, score 149, lane `ship`
- `recovery`: `quality gap`, score 111, lane `watch`
- `stale`: `schema drift`, score 219, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
