# Truthy value:

- true
- {}
- 1
- "0"
- "false"
- [] (empty array)
- some non-empty string

# Falsey value:

- null
- undefined
- false
- 0
- NaN
- "" (empty string)

# Logical AND (&&) Operator:

- If the first operand is truthy, return the second operand.
- If the first operand is falsey, return the first operand.
  Example:
  const result1 = true && "Hello"; // "Hello"
  const result2 = false && "Hello"; // false

Logical OR
