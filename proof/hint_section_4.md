## Overall Insight

Once ρ_r(H) = m^{1-1/r} is established, strict monotonicity is trivial calculus.

### Subproblem 4: Exact formula and strict monotonicity

**Statement**: Prove ρ_r(H) = m^{1-1/r} for r ≥ 2, and that this is strictly increasing in r.

**Approach**:
(a) ρ_r(H) ≤ ‖H‖_{r→r} ≤ m^{1-1/r} (Section 2) and ρ_r(H) ≥ m^{1-1/r} (Section 3).
(b) f(r) = m^{1-1/r} = exp((1-1/r) ln m). Since m ≥ 2, ln m > 0. And 1-1/r is strictly increasing in r (derivative 1/r² > 0). So f is strictly increasing. More explicitly: for p > 2, 1-1/p < 1-1/(p+1), so m^{1-1/p} < m^{1-1/(p+1)}.

**Difficulty**: trivial

## Integration Sketch

This gives ρ_p(H) < ρ_{p+1}(H) for all p ≥ 2 and m ≥ 2.
