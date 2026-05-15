## Overall Insight

The Riesz-Thorin interpolation between ‖H‖_2 = √m and ‖H‖_∞ = m gives the EXACT upper bound ‖H‖_r ≤ m^{1-1/r} for r ≥ 2 (the lower bound from test vectors matches, so the bound is tight).

### Subproblem 2: Upper bound via Riesz-Thorin

**Statement**: For r ≥ 2, prove ‖H‖_{r→r} ≤ m^{1-1/r}.

**Approach**: State the Riesz-Thorin interpolation theorem. Apply it with p₀ = 2 (M₀ = √m) and p₁ = ∞ (M₁ = m). For r ≥ 2: 1/r = (1-θ)/2, so θ = 1-2/r. Then ‖H‖_r ≤ (√m)^{1-θ} · m^θ = (√m)^{2/r} · m^{1-2/r} = m^{1/r} · m^{1-2/r} = m^{1-1/r}.

**Difficulty**: easy (just applying a standard theorem)

## Integration Sketch

This upper bound, combined with the lower bound from Section 3, gives ρ_r(H) = m^{1-1/r}.
