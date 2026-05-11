using CSV
using DataFrames
using Plots

data = CSV.read("collatz.csv", DataFrame)

plot(
	data.origin,
	data.moves,

	xscale = :log10,

	title = "Collatz Conjecture",
	xlabel = "Starting Number",
	ylabel = "Moves",

	linewidth = 1,
	legend = false
)
savefig("collatz-julia-logarithmic.png")
display(plot!)
