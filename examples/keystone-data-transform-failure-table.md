# Keystone Data Transform Pipe Failure Table

| Case | Focus | Expected Lane |
| --- | --- | --- |
| g001 | schema drift | watch |
| g002 | lineage depth | hold |
| g003 | partition skew | ship |
| g004 | quality gap | ship |
| g005 | schema drift | watch |
| g006 | lineage depth | hold |
| g007 | partition skew | hold |
| g008 | quality gap | ship |
| g009 | schema drift | watch |
| g010 | lineage depth | watch |
| g011 | partition skew | watch |
| g012 | quality gap | ship |

Use this table when a verifier failure is hard to read from the raw CSV.
