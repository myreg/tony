# MASTERMIND model for COBRA

from itertools import permutations, combinations

N = 4  # number of pegs
C = ['A', 'B', 'C', 'D', 'E', 'F'] # peg colors

# x1_A tells whether the color of the first peg is A
@variables(["x%i-%s"%(n,c) for n in range(N) for c in C])
@alphabet(C)

for n in range(N):
  @restriction("Exactly-1(%s)" % (",".join("x%i_%s"%(n,c) for c in C)))
  @mapping("F%i"%n, ["x%i_%s"%(n,c) for c in C])

@experiment("guess")
for num_total in range(N + 1): # total number of pegs
  for num_blacks in range(num_total + 1): # number of black pegs
    num_whites = num_total - num_blacks
    formula = []
    for blacks in combinations(range(N), num_blacks):
      remaining = set(range(N)) - set(blacks)
      for whites in combinations(remaining, num_whites):
        for whitesfor_c in combinations(remaining, num_whites):
          for whitesfor in permutations(whitesfor_c):
            if any(whites[i] == whitesfor[i] for i in range(num_whites)):
              continue
            formula.append(set())
            for b in blacks:
              formula[-1].add("X%i($%i)"%(b, b))
            for i in range(num_whites):
              formula[-1].add("X%i($%i)"%(whitesfor[i], whites[i]))
            for p in remaining - set(whites):
              for q in remaining - set(whitesfor):
                formula[-1].add("!X%i($%i)"%(q, p))

    @outcome("%i + %i\n"%(num_blacks, num_whites),
             " | ".join(" & ".join(clause) for clause in formula)
