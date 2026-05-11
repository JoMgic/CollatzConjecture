using CSV
using DataFrames
using Plots

data = CSV.read("collatz.csv", DataFrame)

plot(
	data.origin,
	data.moves,

	title = "Collatz Conjecture",
	xlabel = "Starting Number",
	ylabel = "Moves",

	linewidth = 1,
	legend = false
)
display(plot!)
savefig("collatz-julia.png")

