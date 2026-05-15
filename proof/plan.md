## Strategy 🎯
Prove Conjecture 3 by constructing an explicit matrix M = H ⊕ 0_{n-2} where H is the 2×2 Hadamard matrix, showing ρ_r(H) = 2^{1-1/r}, and using the strict monotonicity of this function in r.

## Plan
- ✅ **Section 1: Hadamard norm computation** — *direct computation of ‖H‖_r = 2^{1-1/r} via norm comparison + test vector (1,1)*
- ✅ **Section 2: Diagonal scaling invariance** — *lower bound via coordinate domination on test vectors for all t > 0*
- ✅ **Section 3: Zero-padding preserves ρ_r** — *block diagonal norm = max of block norms*
- ✅ **Final assembly** — *Conjecture 3 proved via strict monotonicity of 2^{1-1/p} in p*
