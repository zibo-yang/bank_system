## Overall Insight

Use the full m×m Sylvester-Hadamard matrix H (not the core). The key identity H^TH = mI makes the Riesz-Thorin interpolation give the EXACT operator norm ‖H‖_r = m^{1-1/r} for r ≥ 2. Combined with a test-vector lower bound on ρ_r(H), this pins down ρ_r(H) = m^{1-1/r}, which is strictly increasing in r.

### Subproblem 1: Hadamard matrix properties

Prove: H = H^T, entries are ±1, H² = mI, ‖H‖_2 = √m, ‖H‖_1 = ‖H‖_∞ = m, and Hh_i = me_i.

**Approach**: Use the recursive definition H_{2n} = [[H_n, H_n], [H_n, -H_n]] and induction on k. For H² = mI: H² = [[H_n, H_n],[H_n, -H_n]]·[[H_n, H_n],[H_n, -H_n]] = [[2H_n², 0],[0, 2H_n²]] = [[2·(m/2)I, 0],[0, 2·(m/2)I]] = mI (by induction). For norms: ‖H‖_2 = √(spectral radius of H²) = √m. ‖H‖_∞ = max row sum of |H| = m (each row has m entries of ±1). ‖H‖_1 = m by the same argument for columns. For Hh_i = me_i: since H² = mI, the columns of H are m times the rows of H⁻¹ = H/m, so Hh_i = H·(H^Te_i) = H²e_i/... actually, h_i = H^Te_i = He_i (since H = H^T). So Hh_i = H(He_i) = H²e_i = me_i.

**Difficulty**: easy

## Integration Sketch

These properties are the foundation for all subsequent sections.
