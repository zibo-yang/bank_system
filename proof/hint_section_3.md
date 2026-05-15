## Overall Insight

Test vectors from the rows of H give a matching lower bound on every diagonally-scaled norm.

### Subproblem 3: Lower bound on ρ_r(H)

**Statement**: For r ≥ 2 and any positive diagonal D, prove ‖DHD⁻¹‖_{r→r} ≥ m^{1-1/r}.

**Approach**: Let i* = argmax d_j. Test on y = Dh_{i*}:
- DHD⁻¹ · y = DHD⁻¹ · Dh_{i*} = D · Hh_{i*} = D · me_{i*} = md_{i*}e_{i*}
- So ‖DHD⁻¹ y‖_r = md_{i*}
- ‖y‖_r = ‖Dh_{i*}‖_r = (Σ_j d_j^r)^{1/r} since |h_{i*j}| = 1
- Since d_j ≤ d_{i*} for all j: Σ d_j^r ≤ m · d_{i*}^r, so ‖y‖_r ≤ m^{1/r} d_{i*}
- Ratio ≥ md_{i*}/(m^{1/r} d_{i*}) = m^{1-1/r}

**Difficulty**: easy

## Integration Sketch

Combined with the upper bound ρ_r(H) ≤ ‖H‖_r ≤ m^{1-1/r}, this gives ρ_r(H) = m^{1-1/r}.
