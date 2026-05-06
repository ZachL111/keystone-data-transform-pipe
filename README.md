# keystone-data-transform-pipe

`keystone-data-transform-pipe` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies transform behavior through negative fixtures, with human-readable error snapshots and synthetic fixtures only.

## Why This Exists

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Keystone Data Transform Pipe Review Notes

The first comparison I would make is `schema drift` against `quality gap` because it shows where the rule is most opinionated.

## Capabilities

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/keystone-data-transform-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `quality gap`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ code keeps the review rule close to the tests.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
